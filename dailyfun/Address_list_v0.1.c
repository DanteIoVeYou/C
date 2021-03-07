#define PEOPLE_MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDRESS_MAX 30

#include<stdio.h>
#include<string.h>


//Create a structure of people's infomation
struct PeopleInfo {
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char telephone[TELE_MAX];
	char address[ADDRESS_MAX];
};
//Create a structure of contact to include PeopleInfo and the size of contact used.
struct Contact{
	struct PeopleInfo data[PEOPLE_MAX];
	int size;
}con;
//Set aliases of functions
enum FUNCTIONS
{
	EXIT,
	ADD,
	DELETE,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


void InitContact(struct Contact* pcon);
void AddContact(struct Contact* pcon);
void DeleteContact(struct Contact* pcon);
void SearchContact(const struct Contact* pcon);
void ModifyContact(struct Contact* pcon);
void ShowContact(const struct Contact* pcon);
void SortContact(struct Contact* pcon);


void meau()
{
	printf("======================================================\n");
	printf("==============1.Add================\n");
	printf("==============2.Delete=============\n");
	printf("==============3.Search=============\n");
	printf("==============4.Modify=============\n");
	printf("==============5.Show==============\n");
	printf("==============6.Sort===============\n");
	printf("==============0.Exit===============\n");
}


void meau_line()
{
	printf("======================================================\n");
}


int main()
{
	int input = 0;
	//Create the address list
	struct Contact con;//con is our address list containing a 1000-element-array and size
	//Initilize the address list
	InitConatct(&con);
	meau();
	do {
		meau_line();
		printf("Please choose:>");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			AddContact(&con);
			break;
		case DELETE:
			DeleteContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("Exit!\n");
			break;
		default:
			printf("Wrong input!Please input again!\n");
	}
}while (input);

	return 0;
}


static int FindMyName(struct Contact* pcon,char* name)
{
	int i = 0;
	for (i = 0; i < pcon->size - 1; i++)
	{
		if (1 == strcmp(pcon->data[i].name, name))
			return i;
		else
			i++;
	}
}


void InitConatct(struct Contact* pcon)
{
	memset(pcon->data, 0, sizeof(pcon->data));
	pcon->size = 0;
}


void AddContact(struct Contact* pcon)
{
	if (pcon->size == 1000)
		printf("Sorry,address list is full!\n");
	else
	{
		printf("Please enter name:>");
		scanf("%s", pcon->data[pcon->size].name);
		printf("Please enter sex:>");
		scanf("%s", pcon->data[pcon->size].sex);
		printf("Please enter age:>");
		scanf("%d", &pcon->data[pcon->size].age);
		printf("Please enter address:>");
		scanf("%s", pcon->data[pcon->size].address);
		printf("Please enter telephone number:>");
		scanf("%s", pcon->data[pcon->size].telephone);
		printf("Done!\n");
		pcon->size++;
	}
}


void ShowContact(const struct Contact* pcon)
{
	if (pcon->size == 0)
		printf("Sorry, your address list is empty!\n");
	else
	{
		int i = 0;
		printf("%-20s\t%-5s\t%-4s\t%-30s\t%-12s\n", "Name", "Sex", "Age", "Address", "TelephoneNumber");//Print title
		for (i = 0; i < pcon->size; i++)
		{	
			printf("%-20s\t%-5s\t%-4d\t%-30s\t%-12s\n",//Print data
				pcon->data[i].name,
				pcon->data[i].sex,
				pcon->data[i].age,
				pcon->data[i].address,
				pcon->data[i].telephone);
		}
	}
}


void DeleteContact(struct Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	printf("Please input the name you'd like to delete:>");
	scanf("%s", &name);
	int position = FindMyName(pcon, name);
	if (position == -1)
		printf("The name doesn't exsist!\n");
	else
	{
		int i = 0;
		for (i = position; i <pcon->size-1 ; i++)
		{
			pcon->data[position] = pcon->data[position + 1];
		}
		pcon->size--;
		printf("Delete Successfully!\n");
	}
}


void SearchContact(struct Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	printf("Please input the name you'd like to search:>");
	scanf("%s", &name);
	int position = FindMyName(pcon, name);
	if (position == -1)
		printf("The name doesn't exsist!\n");
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-30s\t%-12s\n", "Name", "Sex", "Age", "Address", "TelephoneNumber");//Print title
		printf("%-20s\t%-5s\t%-4d\t%-30s\t%-12s\n",//Print data
			pcon->data[position].name,
			pcon->data[position].sex,
			pcon->data[position].age,
			pcon->data[position].address,
			pcon->data[position].telephone);
		printf("Search Successfully!\n");
	}
}


void ModifyContact(struct Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	printf("Please input the name you'd like to modify:>");
	scanf("%s", &name);
	int position = FindMyName(pcon, name);
	if (position == -1)
		printf("The name doesn't exsist!\n");
	else
	{
		printf("Please enter name:>");
		scanf("%s", pcon->data[position].name);
		printf("Please enter sex:>");
		scanf("%s", pcon->data[position].sex);
		printf("Please enter age:>");
		scanf("%d", &pcon->data[position].age);
		printf("Please enter address:>");
		scanf("%s", pcon->data[position].address);
		printf("Please enter telephone number:>");
		scanf("%s", pcon->data[position].telephone);
		printf("Modify Successfully!\n");
	}
}


void SortContact(struct Contact* pcon)
{
	int i = 0;
	for (i = 0; i < pcon->size - 1; i++)
	{
		int j = 0;
		for (int j = 0; j < pcon->size - 1 - i ; j++)
		{
			if (strcmp(pcon->data[j].name, pcon->data[j + 1].name) > 0)
			{
				char tmp[NAME_MAX] = { 0 };
				strcpy(tmp, pcon->data[j].name);
				strcpy(pcon->data[j].name, pcon->data[j+1].name);
				strcpy(pcon->data[j+1].name, tmp);
			}
		}
	}
	printf("Sort Successfully!\n");
}


enum State {
	ILLEGAL,
	LEGAL
};

int state = ILLEGAL;

int my_atoi(const char* str)
{
	long long ret = 0;
	int flag = 1;
	if (str == NULL || *str == "")
	{
		return 0;
	}
	while ((*str < '0'|| *str > '0' + 9) && *str)
	{
		if (*str == '+')
			flag = 1;
		else if(*str == '-')
			flag = -1;
		str++;
	}
	if (!*str)
	{
		return 0;
	}
	while (*str >= '0' && *str <= '0' + 9)
	{
		ret = ret * 10 + (*str - '0') * flag;
		str++;
	}
	if (ret > INT_MAX || ret < INT_MIN)
	{
		return 0;
	}
	state = LEGAL;
	return ret;
}

// ���ֳ���.cpp : ����Ӧ�ó������ڵ㡣
//

#include "framework.h"
#include "���ֳ���.h"
#include<stdio.h>
#define MAX_LOADSTRING 100

// ȫ�ֱ���:
HINSTANCE hInst;                                // ��ǰʵ��
WCHAR szTitle[MAX_LOADSTRING];                  // �������ı�
WCHAR szWindowClass[MAX_LOADSTRING];            // ����������

// �˴���ģ���а����ĺ�����ǰ������:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int left = 100, top = 20, right = left + 250, bottom = top + 400;
char c1, c2;
int x = -1, y = -1;
int iScoring = 0, iFail = 0;
int gameover = 0;

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: �ڴ˴����ô��롣

    // ��ʼ��ȫ���ַ���
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_MY, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // ִ��Ӧ�ó����ʼ��:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_MY));

    MSG msg;

    // ����Ϣѭ��:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ����: MyRegisterClass()
//
//  Ŀ��: ע�ᴰ���ࡣ
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_MY));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_MY);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ����: InitInstance(HINSTANCE, int)
//
//   Ŀ��: ����ʵ�����������������
//
//   ע��:
//
//        �ڴ˺����У�������ȫ�ֱ����б���ʵ�������
//        ��������ʾ�����򴰿ڡ�
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // ��ʵ������洢��ȫ�ֱ�����

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  ����: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  Ŀ��: ���������ڵ���Ϣ��
//
//  WM_COMMAND  - ����Ӧ�ó���˵�
//  WM_PAINT    - ����������
//  WM_DESTROY  - �����˳���Ϣ������
//
//



void DrawBk(HDC hdc, int x1, int y1, int x2, int y2)
{
    Rectangle(hdc, x1, y1, x2, y2);//����һ�����α�ʶ����ĸ���䷶Χ
    char s[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    TextOut(hdc, x1 + 5, y2 - 25, s, lstrlen(s));
}

void ShowScoring(HDC hdc, int x, int y, int iScoring, int iFail)
{
    char szTemp[32];
    TextOut(hdc, x, y, "��ǰ�÷֣�", lstrlen(szTemp));
    y = y + 20;
    sprintf_s(szTemp, "%d", iScoring);
    TextOut(hdc, x, y, szTemp, lstrlen(szTemp));
    y = y + 20;
    TextOut(hdc, x, y, "��ǰʧ��",lstrlen("��ǰʧ��"));
    y = y + 20;
    sprintf_s(szTemp, "%d", iFail);
    TextOut(hdc, x, y, szTemp, lstrlen(szTemp));
}

void GameOver(HDC hdc, int x, int y)
{
    COLORREF OldColor, NewColor = RGB(rand() % 255, rand() % 255, rand() % 255);
    OldColor = SetTextColor(hdc, NewColor);//�����ı���ɫλΪ��ɫ
    ::TextOut(hdc, x, y, "GAME OVER !", lstrlen("GAME OVER !"));
    SetTextColor(hdc, OldColor);
}

void Fire(HDC hdc, int x, int y1, int y2)
{

    HPEN hOldPen, hNewPen = CreatePen(PS_DASHDOTDOT, 1, RGB(255, 0, 0));//�����»���
    hOldPen = (HPEN)SelectObject(hdc, hNewPen);
    MoveToEx(hdc, x, y1, NULL);
    LineTo(hdc, x, y2);

    Sleep(100);

    HPEN hNewPen2 = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));//�����»���
    SelectObject(hdc, hNewPen2);
    MoveToEx(hdc, x, y1, NULL);
    LineTo(hdc, x, y2);

    SelectObject(hdc, hOldPen);//�ָ��ɻ���
    DeleteObject(hNewPen);//ɾ������
    DeleteObject(hNewPen2);//ɾ������
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // �����˵�ѡ��:
            switch (wmId)
            {
            case ID_START://����½��˵�ID
                if (gameover = 1)
                    KillTimer(hWnd, 2);
                gameover = 0;
                iScoring = 0;
                iFail = 0;
                c1 = rand() % 26 + 'A';
                x = left + 5 + (c1 - 'A') * 9;
                y = top;
                SetTimer(hWnd, 1, 10, NULL);//�����²˵�������
                break;


            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: �ڴ˴����ʹ�� hdc ���κλ�ͼ����...
            RECT rt;
            GetClientRect(hWnd, &rt);
            DrawBk(hdc, left, top, right, bottom);
            ShowScoring(hdc, right + 20, top + 50, iScoring, iFail);
            if (gameover)
                GameOver(hdc, left + 80, top + 130);
            else
            {
                char szTemp[8];
                sprintf_s(szTemp,"%c",c1);
                ::TextOut(hdc, x, y, szTemp, lstrlen(szTemp));
            }
            EndPaint(hWnd, &ps);
        }
        break;
    case WM_CHAR://��Ӽ���������Ϣ����
    {
        c2 = (wParam >= 'a' && wParam <= 'z') ? wParam + 'A' - 'a' : wParam;;
        HDC hdc = GetDC(hWnd);
        Fire(hdc, left + 5 + (c2 - 'A') * 9 + 4, top, bottom);
        ReleaseDC(hWnd, hdc);
        if (c2 == c1)
        {
            c1 = rand() % 26 + 'A';
            x = left + 5 + (c1 - 'A') * 9;
            y = top;
            iScoring = iScoring + 1;
        }
        else
            iFail = iFail + 1;
    }
    break;//��������������
    case WM_TIMER:
        switch (wParam)
        {
        case 1:
            y = y + iScoring / 10 + 1;
            if (y > bottom - 40)
            {
                gameover = 1;
                KillTimer(hWnd, 1);
                SetTimer(hWnd, 2, 300, NULL);
            }
            InvalidateRect(hWnd, 0, 0);
            break;
        case 2:
            InvalidateRect(hWnd, 0, 0);
            break;
        }
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// �����ڡ������Ϣ�������
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}


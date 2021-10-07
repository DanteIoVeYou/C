#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
//strlen 3个版本，库函数是size_t的返回值

//1.计数器
size_t my_strlen_count(const char* str);

//2.递归
size_t my_strlen_re(const char* str);
//3.指针-指针
size_t my_strlen_p(const char* str);

//strcpy
char* my_strcpy(char* dest, const char* src);
//strcat 追加字符
char* my_strcat(char* dest, const char* src);

//strncat

//strcmp


//strncat
//strncmp
//strncpy
//不够放'/0	'

//strstr
bool my_strstr(const char* dest, const char* src);

//KMP

//strtok

//strerror
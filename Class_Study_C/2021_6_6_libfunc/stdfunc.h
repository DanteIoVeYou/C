#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
//strlen 3���汾���⺯����size_t�ķ���ֵ

//1.������
size_t my_strlen_count(const char* str);

//2.�ݹ�
size_t my_strlen_re(const char* str);
//3.ָ��-ָ��
size_t my_strlen_p(const char* str);

//strcpy
char* my_strcpy(char* dest, const char* src);
//strcat ׷���ַ�
char* my_strcat(char* dest, const char* src);

//strncat

//strcmp


//strncat
//strncmp
//strncpy
//������'/0	'

//strstr
bool my_strstr(const char* dest, const char* src);

//KMP

//strtok

//strerror
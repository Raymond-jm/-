#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//chap.12 ���ڿ� ���ڿ�
// ����: character
// ���ڿ� :string <== array of character
//
#if 0
int main() {
	//����
	char c;
	c = 'A';
	printf("%c\n", c);

	//���ڿ� ------ ������ NULL���� ���� NULL�� \0���� ǥ��.
	char d[6] = "hello";
	//d[4] = 'T';
	//d[3] = '\0';
	printf("%s\n", d);
	return 0;
}
#endif

#if 0
#include<stdio.h>
int main() {
	'A'; // ���� -- 1byte
	"A"; // ���ڿ� -- 2byte : NULL ������

	//���� case , ���ڿ��� �ʱ�ȭ p.518
	char str[4] = { 'a', 'b','c','\0' };
	char str2[4] = "abc";
	char str3[] = "abc";
	//������ case
	char a[4] = "abcabaccd"
		char b[100] = "a";
	char c[100] = ""; // empty string , ���ڿ� -- 2byte
}
#endif

#if 0
#include<stdio.h>
int main() {
	// ���ڿ� ����� ������, p.521
	
	
	//char* p = "helloworld"; // --- read�� ������ write�� �ȵ� ���ڿ�!!
	//*(p + 1) = 'k';
	//printf("%s\n", p); // ���� �Ȱɸ����� ���� �̸��� .c�� �ٲ����
	
	/*
	char p[11] = "helloworld";
	p[1] = 'K';
	printf("%s\n", p);
	*/

	//p.524 �����Է� ���̺귯��
	//getchar() : buffering , echo
	//getche() :
	//getch() : ex) ���� ���� ��
	//int ch;
	//ch = getchar();
	// ch = getche();
	//ch = getch();
	//printf("�Է��� ����: %c\n", ch);

	//p.527 ���ڿ� �Է� ���̺귯��
    // scanf
    // gets : get string
	
	//char str[100];
	//gets(str, 99); 
	//printf("�Է��ѹ��ڿ� ==>%s", str);
	
	//scanf("%s", str); -- ���� �ϸ� �ڿ��� �Է� x
	//printf("�Է��ѹ��ڿ� ==>%s", str);
}

#endif

//�� �Լ� ctype.h
#if 0
#include<stdio.h>
#include<ctype.h>

int main() {

	// p.529
	// ����ó�� ���̺귯�� ==> ������ ���� 5���� �� �߿� digit ������
	// isalpha
	// isupper
	printf("%d\n", isalpha('7'));
	printf("%d\n", isupper('7'));
	printf("%d\n", islower('7'));
	printf("%d\n", isdigit('7'));
	printf("%d\n", isalnum('7')); // alphabet , number
	printf("%d\n", isxdigit('7')); // hexa , 16������ �´��� 0~9. A~F , a~f
	printf("%d\n", isspace("")); // space, tab
	printf("%d\n", ispunct(',')); // punctuation
	printf("%d\n", isprintf('7')); //printable
	printf("%d\n", iscntrl('7')); // page up, page down
	printf("%d\n", isascill('7')); // �ƽ�Ű �ڵ�����

	printf("%c %c %c \n", toupper('a'), toupper('A'), toupper('8'));
	printf("%c %c %c \n", tolower('a'), tolower('A'), tolower('8'));
}
#endif
#if 1
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {

	//p.532
	//���ڿ� ó�� ���̺귯��
	//strlen : string length (NULL character ����!!!!!)
	//strcpy : string copy <===== b= str XX �ȵ� �׷��� �������
	//strcat : ���ڿ� ����� , concatenate -- ���� ����.
	//strcmp : string compare -- ���� �� 0�� ��� 1��
    //strchr : string find character location Ư�� ĳ���Ͱ� �����ϴ� ���� ã�� -- ���� ã��.
	//strstr :

	//char str[1000] = "this is me...inu ... festival";
	//char* loc = strchr(str, 'm');
	//printf("%s\n", loc);
	//printf("%c\n", *loc);

	//char str[1000] = "this is me...inu ... festival";
	//char* loc = strstr(str, "me");
	//*loc = 'k';
	//*(loc + 1) = 'k'; // �� �ΰ��� strcpy(loc , "k")�� ����
	//printf("%s\n", loc);
	//printf("%c\n", *loc);


	//printf("%d\n", strcmp("apple", "banana")); // -1
	//printf("%d\n", strcmp("banana", "apple")); // +1
	
	
	//char str[10] = "hello";
	//char b[11];
	//strcpy(str, b);
	//printf("%s\n", b);


	//char str[] = "hello";
	//char b[20] = "world";
	//strcat(str, b);
	//printf("%s\n", str1);

	

}
#endif
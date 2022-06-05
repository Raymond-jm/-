#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//chap.12 문자와 문자열
// 문자: character
// 문자열 :string <== array of character
//
#if 0
int main() {
	//문자
	char c;
	c = 'A';
	printf("%c\n", c);

	//문자열 ------ 무조건 NULL에서 끊김 NULL은 \0으로 표기.
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
	'A'; // 문자 -- 1byte
	"A"; // 문자열 -- 2byte : NULL 때문에

	//정상 case , 문자열의 초기화 p.518
	char str[4] = { 'a', 'b','c','\0' };
	char str2[4] = "abc";
	char str3[] = "abc";
	//비정상 case
	char a[4] = "abcabaccd"
		char b[100] = "a";
	char c[100] = ""; // empty string , 빈문자열 -- 2byte
}
#endif

#if 0
#include<stdio.h>
int main() {
	// 문자열 상수와 포인터, p.521
	
	
	//char* p = "helloworld"; // --- read는 되지만 write는 안됨 문자열!!
	//*(p + 1) = 'k';
	//printf("%s\n", p); // 오류 안걸릴려면 파일 이름을 .c로 바꿔야함
	
	/*
	char p[11] = "helloworld";
	p[1] = 'K';
	printf("%s\n", p);
	*/

	//p.524 문자입력 라이브러리
	//getchar() : buffering , echo
	//getche() :
	//getch() : ex) 게임 만들 때
	//int ch;
	//ch = getchar();
	// ch = getche();
	//ch = getch();
	//printf("입력한 문자: %c\n", ch);

	//p.527 문자열 입력 라이브러리
    // scanf
    // gets : get string
	
	//char str[100];
	//gets(str, 99); 
	//printf("입력한문자열 ==>%s", str);
	
	//scanf("%s", str); -- 띄어쓰기 하면 뒤에꺼 입력 x
	//printf("입력한문자열 ==>%s", str);
}

#endif

//새 함수 ctype.h
#if 0
#include<stdio.h>
#include<ctype.h>

int main() {

	// p.529
	// 문자처리 라이브러리 ==> 아이템 위에 5개가 젤 중요 digit 전까지
	// isalpha
	// isupper
	printf("%d\n", isalpha('7'));
	printf("%d\n", isupper('7'));
	printf("%d\n", islower('7'));
	printf("%d\n", isdigit('7'));
	printf("%d\n", isalnum('7')); // alphabet , number
	printf("%d\n", isxdigit('7')); // hexa , 16진수가 맞는지 0~9. A~F , a~f
	printf("%d\n", isspace("")); // space, tab
	printf("%d\n", ispunct(',')); // punctuation
	printf("%d\n", isprintf('7')); //printable
	printf("%d\n", iscntrl('7')); // page up, page down
	printf("%d\n", isascill('7')); // 아스키 코드인지

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
	//문자열 처리 라이브러리
	//strlen : string length (NULL character 제외!!!!!)
	//strcpy : string copy <===== b= str XX 안됨 그래서 만들어짐
	//strcat : 문자열 고양이 , concatenate -- 갖다 붙힘.
	//strcmp : string compare -- 같을 때 0을 출력 1은
    //strchr : string find character location 특정 캐릭터가 시작하는 곳을 찾음 -- 글자 찾기.
	//strstr :

	//char str[1000] = "this is me...inu ... festival";
	//char* loc = strchr(str, 'm');
	//printf("%s\n", loc);
	//printf("%c\n", *loc);

	//char str[1000] = "this is me...inu ... festival";
	//char* loc = strstr(str, "me");
	//*loc = 'k';
	//*(loc + 1) = 'k'; // 저 두개랑 strcpy(loc , "k")랑 같음
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
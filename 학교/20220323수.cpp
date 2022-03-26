/* 
expression
operator
operand(피연산자)

int x, y;
y = x + 3;

*/

//174 표 5-1
/* +,-,*,%(modulo) ----- %2 를이용해 짝수를 알아볼 때 많이 사용함.
정수 / : 정수 나누기는 버림이다
소숫점 불가
int x
x= 10/3

/* 177. 부호연산자
* 177, 증감연산자
* increment, decrement operator*/

/*
int x = 10;
[1]
x = x + 1 //이거보다는 x++이 유리함
[2]
x++; //변수에 있는 값을 1만큼 증가
++x;

--x;
x--;

[3]
x += 1; //x = x + 1
x += 10;
x -= 20;
*/

int y;
int x = 10;
y = ++x; // x = 11, y = 11
x++;
y = x

y = x++ // x = 11, y = 10
y - x;
x++;
//중요 중요 중요 중요 중요 중요--------

//5.2 대입연산자
x = 10 + y;

// 관계 연산자 - relational operator
//[1] binary operator
//[2] 결과는 0 (거짓), 0이아닌 모든수 (참)
3 == 3
4 >= 3 (슨서 중요)
4 < +3
	4 != 5 (unequal)
	4 > 3
	3 < 4
	참이면 0이 아닌수가 나온다
	참참참

	// 188. 논리 연산자. logical op.
	// AND, OR, XOR, XOT
	//&&, ||, !
	(10 > 3) &&

	//p. 199 단축계산
	//short circuit ecaluation

	int x = 4;
(3 > 2) || (++x < 5) //(3 > 2가 이미 참이라서 뒤에는 계산 할 필요 없음)

	(y > 2) || (x < 5) //  ++x 쓸거면 식에 쓰지말고 차라리 먼저 쓰셈,..

	//193. 조건연산자
int x = 3;
int y;

y = (x > 3) ? 10 : 20;
//5.6 콤마연산자
x = 3;
y = 4;
z = 10;

//5.7 비트연산자 195 ~ 200
//논리연산자는 두 개, 비트연산자는 한 개 쓰기 **매우 중요**
/*
& : AND
| : OR
~ : NOT
<< : left shift
>> : right shift
^ : xor (exclusive OR, 두개가 다르면 참)
*/

8 & 12

0000_1000
0000_1100

8 ^ 12

0000_1000
0000_1100
0000_0100

x = 0000_1000 //8
x = x << 1
x = 0001_0000 //16 (left shift = 2배)

y = 35 * x;
y = (32 + 2 + 1) * x;
y = 32 * x + 2 * x + x;
y = (x << 5) + (x << 1) + x;

x = 1000_1000
x >> ;
------ - x = 1100 1000
//203. 형변환
// type conversion
double f
f = 10;
int i;
i = 3.1415;
// 암묵적 형변환, implicit type conversion
// 명시적 형변환, explicit type conversion

double x, y;
int d;
d = (int)(x + y); //type casting 타입 바꾸기 double => int
//5.9 연산자 우선순위와 결합규칙 209p

int x, y, z;
z = x + 3 * y: //곱하기 더하기 = 순위로

//219, 10번 문제

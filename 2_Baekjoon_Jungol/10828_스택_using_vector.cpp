#include <stdio.h>
#include <vector>
#include <string.h>

using namespace std;

/*
10828_스택 ; using vector

정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 다섯 가지이다.

push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.


입력 : 첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다.
주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.

출력 : 출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
*/

void push(int input);
int pop();
int size();
int empty();
int top();

vector<int> v;

int main()
{

	int num;
	scanf("%d", &num);


	for (int i = 0; i < num; i++)
	{
		char menu[10];
		int input;
		scanf("%s", menu);

		if (strcmp(menu, "push") == 0)
		{
			scanf("%d", &input);
			push(input);
		}
		else if (strcmp(menu, "pop") == 0)
		{
			printf("%d\n", pop());
		}
		else if (strcmp(menu, "size") == 0)
			printf("%d\n", size());
		else if (strcmp(menu, "empty") == 0)
			printf("%d\n", empty());
		else if (strcmp(menu, "top") == 0)
			printf("%d\n", top());
	}
	return 0;
}

void push(int num)
{
	v.push_back(num);
}

int pop()
{
	if (v.empty() == 1)
		return -1;
	else{
		int poped = v.back();
		v.pop_back();
		return poped;
	}
}

int size()
{
	if (v.empty() == 1)
		return 0;
	else
		return v.size();
}

int empty()
{
	if (v.empty()==1)
		return 1;
	else
		return 0;
}

int top()
{
	if (v.empty() == 1)
		return -1;
	else
		return v.back();
}
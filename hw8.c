#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void)
{
	int ch;
	while (1)
	{
		char str[7];
		printf("문자 입력: ");
		fgets(str, sizeof(str), stdin);

		ch = convCase(ch);
		if (ch == -1)
		{
			puts("범위를 벗어난 입력입니다.");
			return -1;
		}
		putchar(ch);
		return 0;

	}
	
}
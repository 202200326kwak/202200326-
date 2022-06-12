/*202200326 컴퓨터공학부 곽현철
국가별 현황 , 지역별 현황을 나타내는 코딩을 만들었습니다. 
printf ,scanf를 이용하여 두개 선택지를  준뒤 고르도록 했습니다.
그리고 if와 else를 통해 두가지 경우로 나누었습니다. 
국가별 현황은 구조를 이용했고 지역별 구조는 배열 포인터를 사용했습니다.
헤더 파일과 다중 소스파일은 이용해 국가별 현황 제목을 나오게 했습니다.
나라별 현황은 printf 로 나오게 했습니다.
파일 입출력을 통해 메모자에 써놓은 글자를 맨 앞에 나타나게 했습니다. 
*/
#include <stdio.h>
#include <stdlib.h>

struct country {
	int korea;
	int usa;
	int china;
	int japan;
	int france;
};
int main(void)
{
	
	FILE* fp;
	int c;

	fp = fopen("example.txt", "rt");

	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);
	
	
	int 선택;
	printf("\n1.국가별 현황\n2.지역별 현황\n");
	printf("선택: ");
	scanf_s("%d", &선택);

	if (선택 == 1)
	{
		
		start();
		struct country c = { 0 };
		c.korea = 18218078;
		c.usa = 84125526;
		c.china = 224580;
		c.japan = 8990929;
		c.france = 28813116;

		printf("korea:%d\n", c.korea);
		printf("usa:%d\n", c.usa);
		printf("china:%d\n", c.china);
		printf("japan:%d\n", c.japan);
		printf("france:%d\n", c.france);
	}
	else
	{
		printf("------------------------------\n");
		printf("        지역별 현황        \n");
		printf("------------------------------\n");
		
		const char* arr[5] = {0};
		int i=0;

		arr[0] = "3637088";
		arr[1] = "1098165";
		arr[2] = "765295";
		arr[3] = "236840";
		arr[4] = "519731";
		printf("seoul: %s\n", arr[0]);
		printf("busan: %s\n", arr[1]);
		printf("daegu: %s\n", arr[2]);
		printf("jeju: %s\n", arr[3]);
		printf("gangwon: %s\n", arr[4]);
	}
	return 0;

}
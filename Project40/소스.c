/*202200326 ��ǻ�Ͱ��к� ����ö
������ ��Ȳ , ������ ��Ȳ�� ��Ÿ���� �ڵ��� ��������ϴ�. 
printf ,scanf�� �̿��Ͽ� �ΰ� ��������  �ص� ������ �߽��ϴ�.
�׸��� if�� else�� ���� �ΰ��� ���� ���������ϴ�. 
������ ��Ȳ�� ������ �̿��߰� ������ ������ �迭 �����͸� ����߽��ϴ�.
��� ���ϰ� ���� �ҽ������� �̿��� ������ ��Ȳ ������ ������ �߽��ϴ�.
���� ��Ȳ�� printf �� ������ �߽��ϴ�.
���� ������� ���� �޸��ڿ� ����� ���ڸ� �� �տ� ��Ÿ���� �߽��ϴ�. 
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
	
	
	int ����;
	printf("\n1.������ ��Ȳ\n2.������ ��Ȳ\n");
	printf("����: ");
	scanf_s("%d", &����);

	if (���� == 1)
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
		printf("        ������ ��Ȳ        \n");
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
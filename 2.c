#include <stdio.h>

typedef struct{
	unsigned char playState:4,downState:4;
	char playfilename[128];	//当前播放的文件名
}Player;
int main(void)
{
	int size = sizeof(Player);
	printf("size = %d\n",size);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N; //�H�� 
	int *score;
	int i;
    int sum=0; 
    int avg=0;
    int highest=0;
    int highestpos=0;
    
	//printf("��J�H��:\n");
	scanf("%d\n",&N);	//��J�H��

	score=(int*)malloc(sizeof(int)*N); //�ʺA�O����t�m 
	//printf("��J���Z:\n");
	for(i=0;i<N;i++){  //�L�X�T�Ӧ��Z  
		scanf("%d %d %d\n",&score[i],&score[i+1],&score[i+2]); //��J�T�Ӧ��Z
		sum+=score[i]; //���Z�[�` 
    }
	avg=sum/N;   //�������Z 
    printf("avg = %d.2f",(double)avg); //�L�X�������Z 
	
	if(score[i]<60){	//��X���ή檺�s�����Z 
		printf("fail:\n%d: %d\n",i,score[i]);
	} 
	if(score[i+1]>score[i]){  //��X�̰����s�����Z 
		highest=score[i+1];
		highestpos=i+1;
		printf("highest:\n%d: %d\n",highestpos+1,highest); //�L�X�̰��� 
	}
	free(score); //����O���� 
	score=NULL;
	return 0;
 } 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int N; //�H�� 
	int *score;
	int i;
    int sum=0; 
    double avg=0;
    int highest=0;
    int highestpos=0;
    
	
	//printf("��J�H��:\n");
	scanf("%d",&N);	//��J�H��
	score=(int *)malloc(sizeof(int)*N); //�ʺA�O����t�m 
	//printf("��J���Z:\n");
	for(i=0;i<N;i++){  //�L�X�T�Ӧ��Z  
		scanf("%d",&score[i]); //��J�T�Ӧ��Z
	
    }
    for(i=0;i<N;i++){
    	//sum+=score[i]; //���Z�[�` 
	    avg+=(double)score[i]/N;   //�������Z 
    }
    printf("avg = %.2f\n",avg); //�L�X�������Z 
	
	printf("fail:\n");
	for(i=0;i<N;i++){
	    if(score[i]<60){	//��X���ή檺�s�����Z 
		    printf("%d: %d\n",i+1,score[i]);
        }
	}
	printf("highest:\n");
	for(i=0;i<N;i++){
	    if(score[i]>highest){  //��X�̰����s�����Z 
		   highest=score[i];
		   highestpos=i;	
        }
	}	
	printf("%d: %d\n",highestpos+1,highest); //�L�X�̰��� 
	free(score); //����O���� 
	score=NULL;
	return 0;
 } 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int **score;
    int m,n; //h�Z w�H 
    int i,j;  //i for h, j for w 
    double taver;
    int sum;
    int tsum=0;
    double avg;
    sum=0;
    
    
    scanf("%d",&m);
    fflush;
	scanf("%d",&n); //��J�Z ,�H 
    score=(int**)malloc(sizeof(int*)*m);  //h�ʺA�O����t�m 
    for(i=0;i<m;i++){   //��h��w�t 
        score[i]=(int*)malloc(sizeof(int)*n); //��i�� w 
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        	//printf("input score");
        	scanf("%d",&score[i][j]);
        }   
    }
    for(i=0;i<m;i++){
    	printf("class %d\n",i+1);
        for(j=0;j<n;j++){
       	    printf(" %d:",j+1);
        	printf(" %d\n",score[i][j]);
        	sum+=score[i][j];   //�Z�`��
        	avg=(double)sum/n;  //�Z���� 
        	
        } 
        printf(" sum: %d\n",sum);      
	    printf(" avg: %.2lf\n",avg);
	    tsum+=sum; //���`��	
	    sum=0; 
	    avg=0;
	     
    }
    taver=(double)tsum/(m*n); //�ե���
    printf("total: %d, avg: %.2lf\n",tsum,taver);
    for(i=0;i<m;i++){
        free(score[i]);
    }
    free(score);
    score==NULL;
    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	char ans[5]; //���ץ|�ӼƦr�t�s 
	char keyin[5];  //��J�t�s�|�X 
	int a,b,i,j;
	
	gets(ans);
	while(i<500){ 
		a=b=0;
		gets(keyin);
		for(i=0;i<4;i++){
			if(ans[i]==keyin[i]){ 
				a++;
				}
			else{
				for(j=0;j<4;j++){
				    if(ans[i]==keyin[j]){
				        b++;}	
			    }
			}	
		}
		printf("%dA%dB\n",a,b);	
	    if(a==4){
	    	printf("You Win!\n");
	    	break;
		}
	}

return 0;
}


#include<stdio.h>

struct Employee
{  //�ŧi��Ƶ��c 
	char Name[20];
	char Phone[20];
	char mail[100];
};


int main()
{
	struct Employee p[50];
	int inp=0;
	char op;
	char filename[100];
	FILE *f1;
	int i;
    
    
	while(1){
		//puts("i ���J");
		//puts("l �C�X");
		//puts("s �s��");
		//puts("o Ū��");
		//puts("q ����");
		
		scanf("%c",&op);
		switch(op){
			case 'i':
		        scanf("%s",p[inp].Name);  
	            scanf("%s",p[inp].Phone);
	            scanf("%s",p[inp].mail);
	            inp++;   
				break;
			case 'l':
			    for(i=0;i<inp;i++){
				    printf("Name: %s\n",p[i].Name);
				    printf("Phone: %s\n",p[i].Phone);
				    printf("Email: %s\n",p[i].mail);
			    }	
			    break;
			case 's':
				scanf("%s",filename); //input file name
				f1=fopen(filename,"w");
				//if(f1==NULL){
				//    printf("�}�g�ɥ���!");
				//    return 1;
				//}
			    
			    //else{
				for(i=0;i<inp;i++){
				    fprintf(f1,"%s\n",p[i].Name);
				    fprintf(f1,"%s\n",p[i].Phone);
				    fprintf(f1,"%s\n",p[i].mail);
				        
			    }
				
				//}
				fclose(f1);
				break;
			case 'o':
				scanf("%s",filename);  //input file name
			    f1=fopen(filename,"r");
			    
			    //if (f1==NULL){
				//    printf("Ū�ɥ���!");
				//    return 1;
				//}
				
				//else{
				for(i=0;i<inp;i++){
		            fscanf(f1,"%s",p[i].Name); 
	                fscanf(f1,"%s",p[i].Phone);
	                fscanf(f1,"%s",p[i].mail);
	                    
	                }
				//}
	            fclose(f1);	
				break;		
			case'c':
			    system("cls");
				break;			
			case'q':
				return 0;
				
	    }
	    
    }
	return 0;
} 

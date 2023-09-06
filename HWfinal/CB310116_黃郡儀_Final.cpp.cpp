#include<iostream>
#include<stdio.h>
#include <string.h>
using namespace std;

class money
{
	
	
	private:
		char filename[100]; //�ϥΪ̱b�� 
		int val;  //�i�Ϊ��B 
		FILE *f1; //�s�J�ɮ�
	public:
		
		money()
		{			
			val=0;
		} 
		
		void login(char *name) //�n�J�A�p�L�s�b���h�Ф@�Ӧs�btxt�A�ĤG���n�J�Ыرb���A�p�w���b���h�����n�J�A�o�̼Ƥ�L�� 
		{    
		    char *ret;
			cout<<"eCash: �п�J�z���b��:";
		    cin>>filename;  //input file name
		    ret = strcpy(name, filename);
		    f1=fopen(filename,"r");
		    if (f1==NULL){
			    cout<<"eCash: �b�����s�b, �Ĥ@���ϥ�!";
			    return;
		    }	
		    else{
		    	fscanf(f1,"%d\n",&val);
		        
		    }	
			fclose(f1);	
		}
		
		logout()  //�n�X�s�� 
		{   
			f1=fopen(filename,"w");
			fprintf(f1,"%d\n",val);
			cout<<"eCash: �b���n�X, �w�s��!"<<endl;
			cout<<"���¡ABye Bye."<<endl;
			fclose(f1);
		} 
	    void store(int m)
		{
	    	cin>>m;
	    	if(m<=0){
	    		cout<<"eCash: Please enter a number > 0."<<endl;
	    		return;
			}
	    	else{
	    		val+=m;
	    		cout<<"eCash: You stored "<<m<<"."<<endl;	    		
			}
	    	
		}
	    void pay(int m)
		{
	    	cin>>m;
	    	if(m<=0){
	    		cout<<"eCash: Please enter a number > 0."<<endl;
	    		return;
	    	}
	    	if(m>val){
	    		cout<<"eCash: Insufficient balance."<<endl;
			}
	    	else{
	    		val-=m;
	    		cout<<"eCash: You spend "<<m<<"."<<endl;
			}
	    	
		}
	    void display()
		{
	    	cout<<"eCash: You remaining "<<val<<"."<<endl;	
		}
};

int main()
{
	money c;
	char key;  
	int val; 
	char name[100];
	
	c.login(name);      	
	
	while(1){
		
		cout<<name<<"�z�n�п�ܶ���"<<endl; 
		cout<<"��J��s��: �x��"<<endl;
		cout<<"��J��p��: ���O"<<endl;
		cout<<"��J��d��:�d�߾l�B"<<endl;
		cout<<"��J��q��: ���}"<<endl;
			
	    cin>>key;
	    switch(key){
		    case's':
			    c.store(val);
			    break;	
		    case'p':
			    c.pay(val);
			    break;		
		    case'd':
			    c.display();
			    break;	
		    case'q':
		    	c.logout();
		    	system("PAUSE");
			    return 0;
			    break;
	    }
	}
}





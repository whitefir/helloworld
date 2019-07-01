#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

struct code{
	char name[20];
	int type;//1ÎªÄ¿Â¼2ÎªÎÄ¼þ 
	struct code* bro;
	struct code* son;
};

struct code find(char* getname,struct code getroot);

main()
{
	int T,N;
	char move[20],name1[20],name2[20];
//	char finfile[21][20]={'NULL'};
//	char findir[21][20]={NULL};
	int i,j,m,n;
	
	struct code root;
	struct code* ans;
//	struct code* find();
	
//	findir[j][20]=root.name;
//	j++;
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
    {
    
	root.name="root";
	root.type=1;
	root.bro=NULL;
	root.son=NULL;
	
		scanf("%d",&N);
		for(j=0;j<N;j++)
        {
			scanf("%s",move);
			scanf("%s",name1);
			scanf("%s",name2);
			
			if(move=="CREATEFILE")
            {
				ans=find(name2,root);
				ans.son=(struct code*)malloc(sizeof(struct code));
				ans.son.name=name1;
				ans.son.type=2;
				ans.son.bro=NULL;
				ans.son.son=NULL;
				
			//	finfile[i][20]=name1[20];
			//	i++;
			}
			else if(move=="CREATEDIR")
            {
				ans=find(name2,root);
				ans->son=(struct code*)malloc(sizeof(struct code));
				ans->son.name=name1;
				ans->son.type=1;
				ans->son.bro=NULL;
				ans->son.son=NULL;
				
			//	findir[j][20]=name1[20];
			//	j++;
			}
		/*	else if(move[20]=="LISTFILE")
            {
				for(m=0;m<i;m++)
                {
					printf("%s",finfile[m][20]);//&%^&%^&%^
				}
			}
			
			else if(move[20]=="LISTDIR")
            {
				for(n=0;n<j;n++)
                {
					printf("%s",findir[n][20]);//$%^$%^$%
				}
			}*/
		}
	}
	
	
	system("pause");
	return 0;
}

struct code find(char* getname,struct code getroot)
{
	struct code po;
	struct code dest;
	po=getroot;
	if(po.name==getname)
    {dest=po;}
    
	else if(po.bro!=NULL)
    {dest=find(getname,po.bro);}
    
	else if(po.son!=NULL)
    {dest=find(getname,po.son);}
	else{return NULL;}
	
	system("pause");
	return dest;
}

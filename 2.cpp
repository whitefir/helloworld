#include<stdio.h> 
#include<stdlib.h>
int main(void) 
{ 
    int a[10]; 
    int b[10]; 
    int c[20]; 
    int n,m,count=0,i,j,k; 
    
    scanf("%d",&n); //n is a's number
    for(i=0;i<n;i++) 
    {scanf("%d",a+i);} 
    scanf("%d",&m); //m is b's number
    for(i=0;i<m;i++) 
    {scanf("%d",b+i);} 
    
    for(i=0;i<n;i++)
    {
	  for(j=0;j<m;j++) 
        { 
	     if(a[i]==b[j]) 
           {break;} 
        }
  	  if(j==m)
        {
	     for(k=0;k<count;k++)
	        {
		     if(c[k]==a[i])
		     {break;}
	        }
         if(k==count)
	        {
		 	 c[count]=a[i];
		     count++;
		    }
        } 
    } 
	for(i=0;i<m;i++)
    { 
        for(j=0;j<n;j++) 
          { 
           if(b[i]==a[j]) 
             {break;} 
          } 
        if(j==n)
        {
	     for(k=0;k<count;k++)
	        {
		     if(c[k]==b[i])
		     {break;}
	        }
         if(k==count)
		    {
		     c[count]=b[i];
			 count++;
		    }
        }  
    }

    for(i=0;i<count;i++) 
    {
    printf("%d ",c[i]); 
    } 
    
    system("pause");
    return 0;
}


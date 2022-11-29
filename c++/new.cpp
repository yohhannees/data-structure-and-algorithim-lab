#include<iostream>
using namespace std;

int main()
{
/*int num[]={1,2,3,4,5,6,7,8,9,10};
cout<<"enter the key";
int key;
cin>>key;
for(int i=0;i<8;i++)
{
if(num[i]==key)
{
cout<<"found at"<< num[i];;
}4
}




int num[]={1,3,2,4,7,6,5,8,10,9};
for(int i=0;i<10;i++) 
{
        for(int j=i+1;j<10;j++)
        {
                if(num[i]>num[j])
                {
                        int temp=num[i];
                        num[i]=num[j];
                        num[j]=temp;
                }
        }
}
for(int i=0;i<10;i++)
{
cout<<num[i]<<endl;
};
*/

int num[]={1,2,3,4,5,6,7,8,9,10};
int bottom=0;
int top=9;
int middle;
middle=(bottom+top)/2;
cout<<"enter the key";
int key;
cin>>key;
while(bottom<=top)
{
    
    if(num[middle]==key)
    { 
        cout<<"found at  "<<num[middle];
        return num[middle]; ;
    }
    else if(num[middle]<key)
    {
        bottom=middle+1;
        middle=(bottom+top)/2;
        
        
    }
        else if(num[middle]>key)
    {
        top=middle-1;
           middle=(bottom+top)/2;
  
    }
    
  
}
cout<<"not found";
 return 0;   
}

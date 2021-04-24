#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name1[30],name2[30],copy1[30],copy2[30],choice;
    int len1,len2,i,num1=0,num2=0;
    cout<<"ENTER  first name :";

    cin.getline(name1,30);

    cout<<"\nENTER second name :";

    cin.getline(name2,30);

    len1=strlen(name1);
    len2=strlen(name2);
    for(i=0;i<len1;i++)
    {
        copy1[i]=name1[i];
        if(name1[i]==' ')
            len1--;
    }
     for(i=0;i<len2;i++)
    {
        copy2[i]=name2[i];
        if(name2[i]==' ')
            len2--;
    }
    int tot=len1+len2;
    cout<<"\ntotal : "<<tot<<endl;
    for(i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            if(name1[i]==name2[j] && name1[i]!=' ' && name2[j]!=' ' && name1[i]!='\0' && name2[j]!='\0')
            {
                name1[i]='+';
                name2[j]='+';
            }
        }
    }
    cout<<"\nprint after finding common letters : \n";
     for(i=0;i<=len1;i++)
    {
        cout<<name1[i];
    }
    cout<<endl;
     for(i=0;i<=len1;i++)
    {
        cout<<name2[i];
    }
    cout<<endl;


    for(i=0;i<=len1;i++)
    {
        if(name1[i]=='+')
            num1++;
    }
    for(i=0;i<=len2;i++)
    {
        if(name2[i]=='+')
            num2++;
    }
    int req=tot-num1-num2;
    cout<<"input to flames : "<<req<<endl;
    int a[360];
    for(i=0;i<360;i++)
    {
     a[i]=i+1;
    }
     for(i=0;i<360;i++)
    {
        for(int n=1;n<=60;n++)
        {
          if(a[i]-6*n>0 && a[i]-6*n<=6)
            a[i]=a[i]-6*n;
        }
    }
    for(i=0;i<360;i++)
    {
     cout<<a[i];
    }
    cout<<endl;


    int rem=req%6,val;
    if(rem!=0)
    {
       val=a[rem-1];
    }
    else
    {
        rem=6;
        val=a[rem-1];
    }
    cout<<"remainder : "<<rem<<endl;
    int z[6],pos[6];
    z[0]=val;
    pos[0]=rem-1;
    cout<<"position : "<<pos[0]<<endl;


     rem=req%5;
     if(rem==0)
     {
         rem=6;

     }
     cout<<"remainder : "<<rem<<endl;

     for(i=pos[0]+1;i<=pos[0]+req;i++)
     {
         if(a[i]==z[0])
         {
             pos[0]=pos[0]+1;
         }
     }
     cout<<"position : "<<pos[0]+req<<endl;
     z[1]=a[pos[0]+req];
     pos[1]=pos[0]+req;


     rem=req%4;
     if(rem==0)
     {
         rem=6;

     }
     cout<<"remainder : "<<rem<<endl;

     for(i=pos[1]+1;i<=pos[1]+req;i++)
     {
         if(a[i]==z[0] || a[i]==z[1])
         {
             pos[1]=pos[1]+1;
         }
     }
     cout<<"position : "<<pos[1]+req<<endl;
     z[2]=a[pos[1]+req];
     pos[2]=pos[1]+req;


     rem=req%3;
     if(rem==0)
     {
         rem=6;

     }
     cout<<"remainder : "<<rem<<endl;

     for(i=pos[2]+1;i<=pos[2]+req;i++)
     {
         if(a[i]==z[0] || a[i]==z[1] || a[i]==z[2])
         {
             pos[2]=pos[2]+1;;
         }
     }
     cout<<"position : "<<pos[2]+req<<endl;
     z[3]=a[pos[2]+req];
     pos[3]=pos[2]+req;



     rem=req%2;
     if(rem==0)
     {
         rem=6;

     }
     cout<<"remainder : "<<rem<<endl;

     for(i=pos[3]+1;i<=pos[3]+req;i++)
     {
         if(a[i]==z[0] || a[i]==z[1] || a[i]==z[2] || a[i]==z[3])
         {
             pos[3]=pos[3]+1;
         }
     }
     cout<<"position : "<<pos[3]+req<<endl;
     z[4]=a[pos[3]+req];
     pos[4]=pos[3]+req;

     cout<<z[0]<<'\t'<<z[1]<<'\t'<<z[2]<<'\t'<<z[3]<<'\t'<<z[4]<<endl;

     int sum=0;
     for(i=0;i<=4;i++)
     {
         sum=sum+z[i];
     }
     int result=21-sum;
     switch(result)
     {
     case 1:
        cout<<endl;
        cout<<"**********************";
        cout<<"\nrelationship : friends\n";
        cout<<"**********************\n";
        break;
     case 2:
        cout<<endl;
        cout<<"**********************";
        cout<<"\nrelationship : love \n";
        cout<<"**********************\n";
        break;
     case 3:
        cout<<endl;
        cout<<"************************";
        cout<<"\nrelationship : affection \n";
        cout<<"************************\n";
        break;
     case 4:
        cout<<endl;
        cout<<"***********************";
        cout<<"\nrelationship : marriage\n";
        cout<<"***********************\n";
        break;
     case 5:
        cout<<endl;
        cout<<"***********************";
        cout<<"\nrelationship : enemies\n";
        cout<<"***********************\n";
        break;
     case 6:
        cout<<endl;
        cout<<"************************";
        cout<<"\nrelationship : siblings\n";
        cout<<"************************\n";
        break;
     }

    return 0;
}

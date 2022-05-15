#include <iostream>
#include <stdlib.h>
using namespace std;
int checkfn(char game[],int index,char type)
{
	if (game[0] == game[1] && game[1] == game[2])
        return 1;
        
    else if (game[3] == game[4] && game[4] == game[5])
        return 1;
        
    else if (game[6] == game[7] && game[7] == game[8])
        return 1;
        
    else if (game[0] == game[3] && game[3] == game[6])
        return 1;
        
    else if (game[1] == game[4] && game[4] == game[7])
        return 1;
        
    else if (game[2] == game[5] && game[5] == game[8])
        return 1;
        
    else if (game[0] == game[4] && game[4] == game[8])
        return 1;
        
    else if (game[2] == game[4] && game[4] == game[6])
        return 1;


	return 0;
}
void output(char a[])
{
	system("CLS");
	cout<<"replace letters with digits in ur mind respectively\nplayer 1 has x and player two has 0";
	cout<<endl;
	for (int i = 0; i < 9; ++i)
	{
		cout<<a[i]<<" ";
		if ((i+1)%3==0)
		{
			cout<<endl;
		}
	}

}
int main(int argc, char const *argv[])
{
	char arr[9];
	char m='A';
	for (int i = 0; i < 9; ++i)
	{
		arr[i]=m+i;
	}
	int n=0;
	char t;
	int f;
	while(n<5)
	{
		output(arr);
		cout<<"1st player(x) turn";
		cin>>f;
		arr[f-1]='x';
		output(arr);
	int x=checkfn(arr,f,'x');
		if (x==1)
		{
			cout<<"1 win";
			return 0;
		}
		if (n==4)
		break;
	cout<<"2nd player(0) turn";
		cin>>f;
     	arr[f-1]='0';
     	output(arr);
		x=checkfn(arr,f,'0');
		if (x==1)
		{
			cout<<"2 win";
			return 0;
		 }
		n++;
	}
	cout<<"tie";
	return 0;
}

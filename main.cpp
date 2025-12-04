#include<iostream>
using namespace std;
char  Number[3][3]={ {'1','2','3',}, {'4','5','6'},{'7','8','9'} };
char Tern='x';
int userchoice,row,colum;
void  boder()
{
    system("cls");
    cout<<endl;

    cout<<"\t"<<Number[0][0]<<"\t" <<"|"<<"\t"    <<Number[0][1]<<"\t"    <<"|"<<"\t"      <<Number[0][2]<<"\t"<<" "<<endl;
    cout<<"-------------------------------------------------------------------------------------------\n";
    cout<<"\t"<<Number[1][0]<<"\t" <<"|"<<"\t"     <<Number[1][1]<<"\t"   <<"|"<<"\t"      <<Number[1][2]<<"\t"<<" "<<endl;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t"<<Number[2][0] <<"\t"<<"|"<<"\t"     <<Number[2][1]<<"\t"   <<"|"<<"\t"      <<Number[2][2]<<"\t"<<" "<<endl;
    cout<<"---------------------------|--------------------------------------|-----------------------------"<<endl;

}
void Player_tern()
{
    if(Tern=='x')
    cout<<"Player1[x] Tern";
else if(Tern=='o')
cout<<"Player2[O] Tern";
    cout<<"Enter your choice\n";
cin>>userchoice;
    switch(userchoice)
    {
        case 1:row=0,colum=0;
        break;
        case 2:row=0,colum=1;
        break;
        case 3:row=0,colum=2;
        break;
        case 4:row=1,colum=0;
        break;
        case 5:row=1,colum=1;
        break;
        case 6:row=1,colum=2;
        break;
        case 7:row=2,colum=0;
        break;
        case 8:row=2,colum=1;
        break;
        case 9:row=2,colum=2;
        break;
        default:
        cout<<"Invalid choice ";
    }
    if(Tern=='x')
    {
        Number[row][colum]='x';
        Tern='o';
        }  
        else if (Tern=='o')
        {
            Number[row][colum]='o';
            Tern='x';
        }
        else 
        cout<<"Invalid Choice";
    }

int main()
{
cout<<"\tWelcome ALI TIC -TAC -TOE GAME \n";
while(true)
{


boder();
Player_tern();
boder();
return 0;
}

}

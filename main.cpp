#include<iostream>
using namespace std;
char  Number[3][3]={ {'1','2','3',}, {'4','5','6'},{'7','8','9'} };
char Tern='x';
int userchoice;
int boder()
{
    cout<<endl;
    cout<<"\t"<<Number[0][0]<<"\t" <<"|"<<"\t"    <<Number[0][1]<<"\t"    <<"|"<<"\t"      <<Number[0][2]<<"\t"<<" "<<endl;
    cout<<"-------------------------------------------------------------------------------------------\n";
    cout<<"\t"<<Number[1][0]<<"\t" <<"|"<<"\t"     <<Number[1][1]<<"\t"   <<"|"<<"\t"      <<Number[1][2]<<"\t"<<" "<<endl;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t"<<Number[2][0] <<"\t"<<"|"<<"\t"     <<Number[2][1]<<"\t"   <<"|"<<"\t"      <<Number[2][2]<<"\t"<<" "<<endl;
    cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    return 0;

}
int main()
{
cout<<"Welcome ALI TIC -TAC -TOE GAME ";
boder();
if(Tern=='x')
{
    cout<<"player1[x] Tern:"<<endl;
    cin>>userchoice;
    Tern='o';
    switch(userchoice)
    {
        case 1: Number[0][0] = 'x';
        break;  
       case 2: Number[0][1] = 'x';
        break; 
        case 3: Number[0][2] ='x';
        break;
        case 4: Number[1][0] ='x';
        break; 
        case 5: Number[1][1] = 'x';
        break; 
       case 6: Number[1][2] = 'x';
        break; 
       case 7: Number[2][0] = 'x';
        break; 
      case 8: Number[2][1] = 'x';
        break;
     
    case 9: Number[2][2] = 'x';
        break;
    default:
    cout<<"Invalid choice" ;}
}
else if(Tern=='0')
{
    cout<<"Player2[O] Tern:"<<endl;
    cin>>userchoice;
    Tern='x';
}
else 
cout<<"INvalid choice Try again!";
boder();
return 0;
}

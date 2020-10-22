#include<iostream>
#include<string>
using namespace std;
class tic_tac_toe
{
    string p1,p2,n;
    int m,j,c=0;
    char ar[3][3]={'.','.','.','.','.','.','.','.','.'},s;
public:
    tic_tac_toe()
    {
        cout<<"Enter the name for X player: "<<endl;
        cin>>p1;
        cout<<"Enter the name of O player: "<<endl;
        cin>>p2;
    }
    void first()
    {
        cout<<endl<<"Who will play first "<<p1<<" or "<<p2<<endl;
        cin>>n;
        cout<<endl;
        if (n==p1)
        {
            cout<<p1<<endl;
            play1();
            n=p2;
        }
        else if (n==p2)
        {
            cout<<p2<<endl;
            play2();
            n=p1;
        }
        else
        {
            cout<<"Invalid player: ";
            first();
        }

    }
    void ground()
    {
        c++;

        cout<<"   "<<ar[0][0]<<'\t'<<"|"<<"   "<<ar[0][1]<<'\t'<<"|"<<"   "<<ar[0][2]<<endl<<'\t'<<"|"<<'\t'<<"|"<<endl<<"  ------|-------|-------"<<endl;
        cout<<"   "<<ar[1][0]<<'\t'<<"|"<<"   "<<ar[1][1]<<'\t'<<"|"<<"   "<<ar[1][2]<<endl<<'\t'<<"|"<<'\t'<<"|"<<endl<<"  ------|-------|-------"<<endl;
        cout<<"   "<<ar[2][0]<<'\t'<<"|"<<"   "<<ar[2][1]<<'\t'<<"|"<<"   "<<ar[2][2]<<endl<<'\t'<<"|"<<'\t'<<"|"<<endl;
    }

    void play1()
    {   char player= 'X';
        cout<<p1<<" Enter the row: ";
        cin>>m;
        cout<<"Enter the coloumn: ";
        cin>>j;
        if(ar[m][j]=='.')
        {
            ar[m][j]=player;
        }
        else
        {
            cout<<"value already entered"<<endl;
            play1();
        }

    }
    void play2()
    {
         char player= 'O';
        cout<<p2<<" Enter the row: ";
        cin>>m;
        cout<<"Enter the coloumn: ";
        cin>>j;
        if(ar[m][j]=='.')
        {
            ar[m][j]=player;
        }
        else
        {
            cout<<"value already entered"<<endl;
            play2();
        }
    }
    void loop()
    {
        if (p1== n)
        {
            play1();
            n=p2;
        }
        else if(p2 == n)
        {
            play2();
            n=p1;
        }
    }
    int winner()
    {
        if (ar[0][0]==ar[1][1] && ar[1][1]==ar[2][2] && ar[0][0]!= '.')
            {
            if(ar[0][0]=='X')
            {
                cout<<p1<<"Wins!";
            }
            else
            {
                cout<<p2<<"Wins!";
            }
            return 1;
            }
        if (ar[0][2]==ar[1][1] && ar[1][1]==ar[2][0] && ar[0][2]!= '.')
            {

            if(ar[0][2]=='X')
            {
                cout<<p1<<"Wins!";
            }
            else
            {
                cout<<p2<<"Wins!";
            }
            return 1;
            }
        for (int i = 0; i < 3; i++) {
        if (ar[0][i] == ar[1][i] && ar[1][i] == ar[2][i] && ar[0][i] != '.')
            {

            if(ar[0][0]=='X')
            {
                cout<<p1<<"Wins!";
            }
            else
            {
                cout<<p2<<"Wins!";
            }
            return 1;
            }
    }
    for (int i = 0; i < 3; i++) {
        if (ar[i][0] == ar[i][1] && ar[i][1] == ar[i][2] && ar[i][0] != '.')
            {
                if(ar[i][0]=='X')
            {
                cout<<p1<<"Wins!";
            }
            else
            {
                cout<<p2<<"Wins!";
            }
            return 1;
            }
    }
    if(c == 9)
    {
        cout<<"Its tie";
        return 1;
    }

    return 0;

    }

};
int main()
{
    int z=0;
    tic_tac_toe t1;
    t1.first();
    t1.ground();
    t1.winner();
    while(t1.winner()== 0)
    {
    t1.loop();
    t1.ground();
    t1.winner();
    }
}


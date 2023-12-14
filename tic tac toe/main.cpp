//
//  main.cpp
//  tic tac toe
//
//  Created by syeda manahil fatima on 31/12/2022.
//

#include <iostream>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='x';
int row,column;
bool draw=false;


void display()
{
  //  system("cls");        //uncomment it if running on any compiler other than xcode
    
    cout<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  "<<endl;
    cout<<"\t\t_____|_____|_____"<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  "<<endl;
    cout<<"\t\t_____|_____|_____"<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  "<<endl;
    cout<<"\t\t     |     |     "<<endl;
    cout<<endl;
}

void player_turn()
{
    int choice;
    
    if(turn=='x')
    cout<<"player 1 turn:";
    else if(turn=='o')
        cout<<"player 2 turn:";
    
    cin>>choice;
    
    switch(choice){
        case 1:
            row=0;
            column=0;
            break;
        case 2:
            row=0;
            column=1;
            break;
        case 3:
            row=0;
            column=2;
            break;
        case 4:
            row=1;
            column=0;
            break;
        case 5:
            row=1;
            column=1;
            break;
        case 6:
            row=1;
            column=2;
            break;
        case 7:
            row=2;
            column=0;
            break;
        case 8:
            row=2;
            column=1;
            break;
        case 9:
            row=2;
            column=2;
            break;
            
        default:
            cout<<"invalid number"<<endl;
            break;
    }
    
    if(turn=='x' && board[row][column]!='x' && board[row][column]!='o')
    {
        board[row][column]='x';
        turn='o';
    }
    
    else if(turn=='o' && board[row][column]!='x' && board[row][column]!='o')
    {
        board[row][column]='o';
        turn='x';
    }
    
    else
    {
        cout<<"box already filled!"<<endl<<"please try again";
    }
}

bool gameover()
{
    for( int i=0; i<3; i++)
    {
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2])
        {
           // if(board[i]][1]==board[i][2])
           // {
            if(turn=='o')
            {
                cout<<"\t\tplayer 1 wins.yayyyyyy"<<endl;
                return false;
            }
            
            else if(turn=='x')
            {
                cout<<"\t\tplayer 2 wins.cogratulationssss"<<endl;
                return false;
            }
        }
    }
    
    for( int i=0; i<3; i++)
    {
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i])
        {
            if(turn=='o')
            {
                cout<<"\t\tplayer 1 wins.yayyyyyy"<<endl;
                return false;
            }
            else if(turn=='x')
            {
                cout<<"\t\tplayer 2 wins.cogratulationssss"<<endl;
                return false;
            }
        }
    }
    
    for( int i=0; i<3; i++)
    {
        if(board[0][0]==board[1][1] && board[0][0]==board[2][2])
        {
            if(turn=='o')
            {
                cout<<"\t\tplayer 1 wins.yayyyyyy"<<endl;
                return false;
            }
            else if(turn=='x')
            {
                cout<<"\t\tplayer 2 wins.cogratulationssss"<<endl;
                return false;
            }
        }
    }
    
    for( int i=0; i<3; i++)
    {
        if(board[0][2]==board[1][1] && board[0][2]==board[2][0])
        {
            if(turn=='o')
            {
                cout<<"\t\tplayer 1 wins.yayyyyyy"<<endl;
                return false;
            }
            else if(turn=='x')
            {
                cout<<"\t\tplayer 2 wins.cogratulationssss"<<endl;
                return false;
            }
        }
    }
    
    return true;
}

int main()
{
    cout<<"\t tic tac toe game"<<endl;
    cout<<endl;
    
    cout<<"\t player 1 [X]"<<endl;
    cout<<"\t player 2 [O]"<<endl;
    cout<<endl;
    
    display();
    cout<<endl;
    
    cout<<"hey there both of you best of luck. start entering your choices"<<endl;
    
//    while(gameover())
//    {
//    player_turn();
//    cout<<endl;
//    display();
//    gameover();
//    }
    for(int i=0; i<9; i++)
    {
        player_turn();
        cout<<endl;
        display();
        if(gameover()==false)
        {break;}
        else if(i==8)
        {
            cout<<endl;
            cout<<"sorry it is a draw"<<endl;
            cout<<endl;
            cout<<endl;
        }
    }
    return 0;
}

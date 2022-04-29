#include <iostream>
using namespace std;

bool gamerunning = true;
string board[] = {
    "_",
    "_",
    "_",
    "_",
    "_",
    "_",
    "_",
    "_",
    "_"};

string current_player;
int turn;
//_____________________________________________________________________________________________________
//_____________________________________________________________________________________________________
void ask_player()
{
    // Asks The Player For Input
    cout << "What do you want the first player to be (O or X) ? " << endl;
    cin >> current_player;

    if (current_player == "O" || current_player == "X")
    {
        cout << "The current player is " + current_player << endl;
    }
    else
    {
        cout << "\n\nInvalid Input\n\n";
        system("color C");
        exit(0);
    }
}
//_____________________________________________________________________________________________________
void print_board()
{
    // Prints The Board
    cout << "\t\t\n\n\n\n\n\t\t" + board[0] + " | " + board[1] + " | " + board[2] << endl;
    cout << "\t\t"
         << "__________" << endl;
    cout << "\t\t" + board[3] + " | " + board[4] + " | " + board[5] << endl;
    cout << "\t\t"
         << "__________" << endl;
    cout << "\t\t" + board[6] + " | " + board[7] + " | " + board[8] << endl;
}
//_____________________________________________________________________________________________________
void player_input()
{
    // Asks for Player Input
    cout << "\n\t\tInput Number To Replace : ";
    cin >> turn;

    if (turn >= 1 and turn <= 9)
    {
        board[turn - 1] = current_player;
    }
    else
    {
        cout << "\n\nInvalid Input\n\n";
        system("color C");
        exit(0);
    }
}
//_____________________________________________________________________________________________________
void change_player()
{
    // Changed the player from O to X and vice versa
    if (current_player == "O")
    {
        current_player = "X";
    }
    else if (current_player == "X")
    {
        current_player = "O";
    }
}
//_____________________________________________________________________________________________________
void check_horizontal()
{
    // checks for win if horizontals match
    if (board[0] == board[1] and board[0] == board[2] and board[0] != "_")
    {
        cout << current_player + " You Win!!" << endl;
        system("color 2");
        gamerunning = false;
    }
    else if (board[3] == board[4] and board[2] == board[5] and board[3] != "_")
    {
        cout << current_player + " You Win!!" << endl;
        system("color 2");
        gamerunning = false;
    }
    else if (board[6] == board[7] and board[6] == board[8] and board[6] != "_")
    {
        cout << current_player + " You Win!!" << endl;
        system("color 2");
        gamerunning = false;
    }
}
//______________________________________________________________________________________________________
void check_vertical()
{
    // checks for win if verticals match
    if (board[0] == board[3] and board[0] == board[6] and board[0] != "_")
    {
        cout << current_player + " You Win!!" << endl;
        system("color 2 ");
        gamerunning = false;
    }
    else if (board[1] == board[4] and board[1] == board[7] and board[1] != "_")
    {
        cout << current_player + " You Win!!" << endl;
        system("color 2 ");
        gamerunning = false;
    }
    else if (board[2] == board[5] and board[2] == board[8] and board[2] != "_")
    {
        cout << current_player + " You Win!!" << endl;
        system("color 2 ");
        gamerunning = false;
    }
}
//______________________________________________________________________________________________________
void check_diagonal()
{
    // checks for win if diagonals match
    if (board[0] == board[4] and board[0] == board[8] and board[2] != "_")
    {
        cout << current_player + " You Win!!" << endl;
        system("color 2 ");
        gamerunning = false;
    }
    else if (board[2] == board[4] and board[2] == board[6] and board[2] != "_")
    {
        cout << current_player + " You Win!!" << endl;
        system("color 2 ");
        gamerunning = false;
    }
}
//______________________________________________________________________________________________________
void check_draw()
{
    // checks for draws
    if ((board[0] != "_") && (board[1] != "_") && (board[2] != "_") && (board[3] != "_") && (board[4] != "_") && (board[5] != "_") && (board[6] != "_") && (board[7] != "_") && (board[8] != "_") && (gamerunning = true))
    {
        cout << "Draw !!" << endl;
        system("color 3 ");
        gamerunning = false;
        exit(0);
    }
}
//_______________________________________________________________________________________________________
int main()
{
    ask_player();

    while (gamerunning)
    {
        check_draw();
        check_diagonal;
        check_vertical();
        check_horizontal();
        print_board();
        player_input();
        change_player();
        system("cls");
    }
}

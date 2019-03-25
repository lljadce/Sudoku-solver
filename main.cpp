#include "globals.h"

#define ROW 9
#define COL 9

class grid
{	
public:
	grid();
	~grid();
	
	int readFile(int *board);
	
//  Algorithm to check tiles
	bool checkTile(int number);
	bool checkRow(int *board, int comparison);
	bool checkCol(int *board, int comparison);
};

int grid::readFile(int *board)
{
	int msg = 0;
	char readLine;
	std::ifstream inFile("sudoku.txt");
	if(!inFile)
	{
		std::cout << "File could not be found!\n";
		std::cout << "Try creating a sudoku.txt file first.\n";
		msg = -1;
	}
	else
	{
		while(std::getline(inFile, readLine)
		{
//			Print output to see if it is being read correctly first
			std::cout << readLine << "\n";
		}
	}
	
	return msg;
}

bool grid::checkTile(int number)
{
	bool isEmpty;
	
	if(number == 0)
		isEmpty = true;
	else
		isEmpty = false;
	
	return isEmpty;
}

bool grid::checkRow(int *board, int comparison, int y)
{
//  If flag equals false
//  then, the comparison 
//  cannot exist in same row
	bool flag;
	for(int x = 0; x < ROW; x++)
	{
		if(flag == false)
		{
			break;
		}
		else
		{		
			if(board[x][y] == comparison)
			{	
				flag = false;
			}
			else
			{
				flag = true;
			}
		}
	}
	
	return flag;
}

bool grid::checkCol(int *board, int comparison, int x)
{
//  If flag equals false
//  then, the comparison 
//  cannot exist in same row
	bool flag;
	for(int y = 0; y < COL; y++)
	{
		if(flag == false)
		{
			break;
		}
		else
		{		
			if(board[x][y] == comparison)
			{	
				flag = false;
			}
			else
			{
				flag = true;
			}
		}
	}
	
	return flag;
}

int main()
{
//  Initializes 9x9 grid to all zero
	grid Sudoku;
	int board[ROW][COL] = {0};
	
	Sudoku.readFile(board);
	
	return 0;
}
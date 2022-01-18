#include <iostream>
using namespace std;

int getUniquePaths(int** maze, int i, int j, int rows, int columns){
    
    if(i == rows || j == columns){
        return 0;
    }
    
    if(i == rows-1 && j == columns-1){
        return 1;
    }
    
    if(maze[i][j] != -1){
        return maze[i][j];
    }
    
    return maze[i][j] = getUniquePaths(maze, i+1, j, rows, columns) + getUniquePaths(maze, i, j+1, rows, columns);
}

int getUniquePathsInMaze(int** maze, int rows, int columns){
    return getUniquePaths(maze, 0, 0, rows, columns);
}

int main()
{
    int rows = 0;
    int columns = 0;
    
    cin >> rows;
    cin >> columns;
    
    int** maze = new int*[rows];
    for(int i=0; i<rows; i++){
        maze[i] = new int[columns];
    }
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            maze[i][j] = -1;
        }
    }
    
    cout << getUniquePathsInMaze(maze, rows, columns);

    return 0;
}

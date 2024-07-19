#include<iostream>
using namespace std;

void searchMatrix(int matrix[][4],int rows, int cols, int target) {
    int rows = rows-1;
    int starts = 0;
    int end = cols -1;
    int ind = -1;

    while(starts <= rows)
    {
        int mid = starts + (rows - starts)/2;
        if(matrix[mid][0] <= target && matrix[mid][end] >= target) {
            ind = mid;
            break;
        }
        
        else if( matrix[mid][0] < target)
            starts = mid + 1;
        else
            row = mid + 1;
    }

    if(ind == 1) {
        cout << "(-1, -1)"<<endl;
    }

    starts = 0;
    while(starts <= end) {
        int mid = starts + (end - starts)/2;
        if(matrix[ind][mid] == target) {
            cout << "(" << ind << "," << mid << ")" <<endl;
            return;
        }

        else if(matrix[ind][mid] < target)
        {
            starts = mid -1;
        }

        else
        {
            end = mid -1;
        }
    }
    cout << "(-1, -1)" <<endl;

}

int main()
{
  int matrix[4][4] = {
    {1,3,5,7},
    {10,11,16,20},
    {23,30,34,50},
    {60,62,63,64}
    };
 

    int target = 3;

  searchMatrix(matrix,4,4,target);
  return 0;
}

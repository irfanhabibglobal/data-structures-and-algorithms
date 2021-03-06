#include<iostream>
#include<climits>
using namespace std;

//Take row wise 2D array input
int inputArr(int a[][3], int row, int col){
    cout<<"Enter elements for the array: "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>a[row][col];
        }
    }
    
}

//Print 2D array
int printArr(int a[][3], int row, int col){
    cout<<"Printing the array: "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
}

//Find if an element exist in the array
bool isPresent(int arr[][3], int target, int row, int col){
    
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

//Sum of array row wise
void printRowSum(int a[][3], int row, int col){
    cout<<"Printing the sum: "<<endl;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum+=a[row][col];
        }
        cout<<sum<<" "<<endl;
    }
}

//Sum of array column wise
void printColSum(int a[][3], int row, int col){
    cout<<"Printing the sum: "<<endl;
    for(int col=0; col<3; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum+=a[row][col];
        }
        cout<<sum<<" "<<endl;
    }
}

int largestRowSum(int arr[][3], int row, int col){
    
    int maxi = INT_MIN;
    int rowIndex = -1;
    
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"The maximum sum is: "<<maxi<<endl;
    return rowIndex;
}

int main(){
    
    int arr[3][3];
    
    inputArr(arr, 3, 3);
    printArr(arr, 3, 3);
    
    //Find if an element exist in the array
    cout<<"Enter elements to search:"<<endl;
    int target;
    cin>>target;
    
    if(isPresent(arr, target, 3, 3)){
        cout<<"Element found."<<endl;
    }
    else{
        cout<<"Not Found."<<endl;
    }
    
    printRowSum(arr,3,3);
    printColSum(arr,3,3);
    
    int ansIndexRow = largestRowSum(arr,3,3);
    cout<<"Max row is at index: "<<ansIndexRow<<endl;
    int ansIndexCol = largestRowSum(arr,3,3);
    cout<<"Max col is at index: "<<ansIndexCol<<endl;
    
    return 0;
}

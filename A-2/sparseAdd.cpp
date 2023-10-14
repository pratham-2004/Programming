// #include<iostream>
// using namespace std;

// int l=0;

// void sparseAdd(int arr1[][3],int arr2[][3],int added[][3]){
//     for(int i=0;i<arr1[0][2];i++){
//         for(int j=0;j<arr1[0][2];j++){
//             if(arr1[i][0]==arr2[i][0] && arr1[i][1]==arr2[i][1]){
//                 added[i][0]=arr1[i][0];
//                 added[i][1]=arr1[i][1];
//                 added[i][2]=arr1[i][2]+arr2[i][2];
//                 l++;
//             }
//             else{
//                 added[i][0]=arr1[i][0];
//                 added[i][1]=arr1[i][1];
//                 added[i][2]=arr1[i][2];
//                 l++;
//                 added[i+1][0]=arr2[i][0];
//                 added[i+1][1]=arr2[i][1];
//                 added[i+1][2]=arr2[i+1][2];
//                 l++;
//             }
//         }
//     }
// }

// void display(int A[l][3]){
//     for(int i=0;i<6;i++){
//         for(int j=0;j<3;j++){
//             cout<<A[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
// }

// int main(){
//     int sparse1[6][3]={{6,6,4},{0,0,15},{0,3,22},{0,5,-15},{1,1,11},{1,2,3}};
//     int sparse2[6][3]={{6,6,4},{0,0,15},{1,4,91},{1,1,11},{2,1,3},{2,5,28}};
//     int Addedsparse[][3]={};
//     }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int sparse[10][10],i,j,row,col,temp,triplet[20][3];
// 	temp=1;
// 	cout<<"enter the number of rows and cols"<<endl;
// 	cin>>row>>col;
// 	cout<<"enter the elements of sparse matrix"<<endl;
// 	for(i=0;i<row;i++)
// 	{
// 		for(j=0;j<col;j++)
// 		{
// 			cin>>sparse[i][j];
// 		}
// 	}
// 	int nzero=0;
// 	for(i=0;i<row;i++)
// 	{
// 		for(j=0;j<col;j++)
// 		{
// 			if(sparse[i][j]!=0)
// 			{
// 				nzero++;
				
// 			}		
// 		}
// 	}
// 	triplet[0][0]=row;
// 	triplet[0][1]=col;
// 	triplet[0][2]=nzero;
// 	for(i=0;i<row;i++)
// 	{
// 		for(j=0;j<col;j++)
// 		{
// 			if(sparse[i][j]!=0)
// 			{
// 				triplet[temp][0]=i;
// 				triplet[temp][1]=j;	
// 				triplet[temp][2]=sparse[i][j];	
// 				temp++;
				
// 			}		
// 		}
// 	}
// for(i=0;i<nzero+1;i++)
// 	{
// 		for(j=0;j<3;j++)
// 		{
			
// 				cout<<triplet[i][j]<<"\t";		
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

#include<iostream>
using namespace std;

int main()
{
int arr[10][10];
int row,col,triplet[20][3];

cout<<"enter rows and columns of matrix"<<endl;
cin>>row;
cin>>col;
for(int i=0;i<row;i++)
{
	for(int j=0;j<col;j++)
	{
		cout<<"enter the element"<<i+1<<j+1<<" "<<endl;
		cin>>arr[i][j];
	}
}

cout<<"our matrix is"<<endl;
for(int i=0;i<row;i++)
{
	for(int j=0;j<col;j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}

int nonzero=0;
for(int i=0;i<row;i++)
{
	for(int j=0;j<col;j++)
	{
		if(arr[i][j]!=0)
		{
			nonzero++;
		}
	}
}

triplet[0][0]=row;
triplet[0][1]=col;
triplet[0][2]=nonzero;

int temp=1;
for(int i=0;i<row;i++)
{
	for(int j=0;j<col;j++)
	{
		if(arr[i][j]!=0)
		{
			triplet[temp][0]=i;
			triplet[temp][1]=j;
			triplet[temp][2]=arr[i][j];
			temp++;
		}
	}
}
cout<<endl;

for(int i=0;i<nonzero+1;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<triplet[i][j]<<" ";
	}
	cout<<endl;
}
cout<<"transposed matrix is"<<endl;
int transpose[10][3];
int k=1;

transpose[0][0]=row;
transpose[0][1]=col;
transpose[0][2]=nonzero;

for(int i=0;i<triplet[0][1];i++)
{
	for(int j=0;j<=triplet[0][2];j++)
	{
		if(triplet[j][1]==i)
		{
	
			transpose[k][0]=triplet[j][1];
			transpose[k][1]=triplet[j][0];
			transpose[k][2]=triplet[j][2];
			k++;
		}
	}
}

for(int i=0;i<nonzero+1;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<transpose[i][j]<<" ";
	}
	cout<<endl;
}

int addition[100][3];
int l1=triplet[0][2];
int l2=transpose[0][2];

addition[0][0]=triplet[0][0];
addition[0][1]=triplet[0][1]; 
addition[0][2]=nonzero;  
  
int i=1,j=1,z=1;  
  
while(i<=l1 && j<=l2)
{
	if(triplet[i][0]==transpose[j][0])
	{
		if(triplet[i][1]==transpose[j][1])	
		{
			addition[z][0]=triplet[i][0];
			addition[z][1]=triplet[i][1];
			addition[z][2]=triplet[i][2]+transpose[j][2];
			i++;
			j++;
			z++;
		}
		else
		{
			if(triplet[i][1]<transpose[j][1])
		{
			addition[z][0]=triplet[i][0];
			addition[z][1]=triplet[i][1];
			addition[z][2]=triplet[i][2];
			i++;
			z++;
		}
			else
			{
				if(triplet[i][1]>transpose[j][1])
		{
			addition[z][0]=triplet[j][0];
			addition[z][1]=triplet[j][1];
			addition[z][2]=triplet[j][2];
			j++;
			z++;
		}
			}
	}
}
else
		{
			if(triplet[i][0]>transpose[j][0])
		{
			addition[z][0]=triplet[j][0];
			addition[z][1]=triplet[j][1];
			addition[z][2]=triplet[j][2];
			i++;
			z++;
		}
			else
			{
				if(triplet[i][0]<transpose[j][0])
		{
			addition[z][0]=triplet[i][0];
			addition[z][1]=triplet[i][1];
			addition[z][2]=triplet[i][2];
			j++;
			z++;
		}
			}
	}
	
}  

cout<<"added matrix is"<<endl;
for(int i=0;i<nonzero+1;i++)
{
	for(int j=0;j<3;j++)
	{
		cout<<addition[i][j]<<" ";
	}
	cout<<endl;
}
  
}

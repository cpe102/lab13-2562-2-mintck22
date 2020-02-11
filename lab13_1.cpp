#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
	//int N = sizeof(d)/sizeof(d[0]);
	
	for(int x = 1;x < N;x++){
		
		int y = 0;
		int t = 0;
		for(int i = 0; i < N; i++){
			if(i == x){
				cout << "[" << d[i] << "]" << " ";
			}
			else cout << d[i] << "  ";
			
		}
		
		cout << "=> ";	

		for(int i = x; i > 0; i--){
				
			if(d[i] > d[i-1]){
				swap(d,i,i-1);
				y =1 ;
				t = t+1;
			}} 
				
			if(y == 1){
				for(int i = 0; i < N; i++){
					if(i == x-t){
						cout << "[" << d[i] << "]" << " ";
					}
					else cout << d[i] << " ";
				}
			}	
			else
			{
				for(int i = 0; i < N; i++){
					if(i == x){
						cout << "[" << d[i] << "]" << " ";
					}
					else cout << d[i] << " ";
					
				}
			}
		cout << "\n"; 	
		}	
			
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

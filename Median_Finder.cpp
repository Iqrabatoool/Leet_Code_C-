#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
  double findMedianSortedArrays (vector <int> & arr1 , vector <int> & arr2){
  	//Array Getting Values 
  	int temp;
    int size;
    cout<<"Enter size of arr1 ";
    cin>>size;
	cout<<"Enter For num1 \n";
	for(int i = 0;i<size ;i++){
		cout<<"Enter number : ";
		cin>>temp;
		arr1.push_back(temp);
	}
    cout<<"Enter size of arr1 ";
    cin>>size;
	cout<<"Enter For num2 \n";
	for(int i = 0; i<size;i++){
		cout<<"Enter number : ";
		cin>>temp;
		arr2.push_back(temp);
	}
  	int length_arr1 = arr1.size();
  	int length_arr2 = arr2.size();
  	int total_length = length_arr1 + length_arr2;
  	cout<<"Total length : "<<total_length<<endl;
  	
  	//Array Sorting Values
  	
  	//Array 1
  	sort(arr1.begin(), arr1.end());
    //Array 2
   sort(arr2.begin(), arr2.end());
    
    //Merging An Array 
    vector <int> arr3;
    for(int i = 0;i<length_arr1;i++){
    	temp = arr1[i];
    	arr3.push_back(temp);
	}
	 for(int i = 0;i<length_arr2;i++){
    	temp = arr2[i];
    	arr3.push_back(temp);
	}
	sort(arr3.begin(),arr3.end());
  	for(int i = 0; i<total_length;i++){
  		cout<<arr3[i]<<endl;
	  }
  
   //Median 
  if(total_length%2 != 0){
  	double index = total_length/2;
	cout<<"Median = "<<arr3[index]<<endl;   
    return arr3[index];
  }else if(total_length%2 == 0){
    int mid1 = total_length/2-1;
    int mid2 = total_length/2;
  	double median = (arr3[mid1] + arr3[mid2])/2.0;
  	cout<<"Median = "<<median<<endl;  
    return median;
}else{
    return 0;
}

}
};

int main() {
	Solution s1;
	vector <int> num1;
	vector <int> num2;
	cout<<s1.findMedianSortedArrays(num1 , num2);
    return 0;
}


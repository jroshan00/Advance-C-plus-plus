// Autobiographical number

// An Autobiographical number is a number N such that the first digit of N represents the
//count of how many zeroes are there in N, the second digit represents the count of how many ones are there in N and so on.
// Implement the given function,
// def FindAutoCount(n: Int) -> int:
// The function accepts string "n" which is a number and checks whether the number is an autobiographical number or not.
//If it is an autobiographical number it returns an integer, Le. the count of distinct numbers in "n". If it is not an autobiographical number it returns 0. Input Format
// Input is a string representing the number.
// Output Format Output can be 1 if the input is Autobiographical number or 0
// if the input is not an autobiograhical number it returns 0


#include<iostream>
using namespace std;
int FindAutoCount(char *n)
{
	int valueCount[10]={0};
    int freq[10]={0};
	int count=0;
	for(int i=0;n[i]!='\0';i++)
		valueCount[n[i]-'0']++;
	for(int i=0;i<10;i++)
		if(valueCount[i]>0)
			count++;
	for(int i=0;n[i]!='\0';i++)
		valueCount[i]=valueCount[i]-(n[i]-'0');
	for(int i=0;i<10;i++)
	{
		if(valueCount[i]!=0)
			return 0;
	}
	return count;
}
int main()
{
	char str[11];
	scanf("%s",str);
	cout<<FindAutoCount(str);
}
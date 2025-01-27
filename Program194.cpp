// Problems on N Numbers

#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int * Arr;
		int iSize;

		ArrayX(int i)
		{
			iSize = i;
			Arr = new int(iSize);
		}

		~ArrayX()
		{
			delete []Arr;
		}

		void Accept()
		{
			cout<<"Please enter the numbers:"<<"\n";
			int iCnt = 0;

			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}

		void Display()
		{
			cout<<"Element of array are:"<<"\n";
			int iCnt = 0;

			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";
			}
			cout<<"\n";
		}

		int SumEven()
		{
			int iSum = 0;
			int iCnt = 0;

			for(iCnt = 0 ; iCnt < iSize; iCnt++)
			{
				if((Arr[iCnt] % 2 ) == 0)
				{
					iSum = iSum + Arr[iCnt];
				}
			}
			return iSum;
		}
		int SumOdd()
		{
			int iSum = 0;
			int iCnt = 0;

			for(iCnt=0; iCnt<=iSize; iCnt++)
			{
				if((Arr[iCnt] % 2) !=0)
				{
					iSum = iSum + Arr[iCnt];
				}
			}
			return iSum;
		}									
};

int main()
{	
	int iLength = 0;
	int iRet = 0;

	cout<<"Enter the number of elements:"<<"\n";
	cin>>iLength;

	ArrayX obj(iLength);

	obj.Accept();
	obj.Display();

	iRet=obj.SumEven();
	cout<<"Addition of even element:"<<iRet<<"\n"; 

	iRet=obj.SumOdd();
	cout<<"Addition of Odd element:"<<iRet<<"\n"; 

	return 0;
}
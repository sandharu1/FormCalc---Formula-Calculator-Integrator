#include <iostream>
using namespace std;

template <class A>
class ordered
{
private:
	A *arr;
	int capacity;
	int top;
public:
	/*friend istream & operator >> (istream & input, A ch)
	{
		size++;
		A *temp = new A[size];
		for (int i = 0; i < size - 1; i++)
		{
			temp[i] = arr[i];
		}
		temp[size - 1] = ch;
		delete[] arr;
		arr = temp;
	}*/
	ordered(int size=10)
	{
		capacity = size;
		top=-1;
		arr = new A[size];

	}
	void push(A ch)
	{

		
		if (!isFull())
		{
			top++;
			arr[top] = ch;
		}
		else
		{
			A *temp = new A[capacity * 2];
			top++;
			for (int i = 0; i < capacity; i++)
			{
				temp[i] = arr[i];
			}
			temp[top] = ch;
			delete[]arr;
			arr = temp;
			capacity *= 2;
		}
	}

	A pop()
	{
		/*if (size != 0)
		{
			for (int i = 0; i < size; i++)
			{
				if (arr[i] == ch)
				{
					A *temp = new A[size - 1];
					for (int j = 0,k=0; j < size; j++)
					{
						if (j != i)
						{
							temp[k] = arr[j];
							k++;
						}
					}
					delete[]arr;
					arr = NULL;
					arr = temp;
					size--;
					break;
				}
			}
		}*/
		if (!isEmpty())
		{
			
			return arr[top--];
		}
		return -1;
	}
	bool moveTo(A ch, int low, int high)
	{
		if (ch == arr[(high + low) / 2])
		{
			return true;
		}
		else if (high - low == 1)
		{
			if (ch == arr[low])
				return true;
			else if (ch == arr[high])
				return true;
			return false;
		}
		else if (ch > arr[(high + low) / 2])
		{
			return moveTo(ch, ((high + low) / 2), high);
		}
		else if (ch < arr[(high + low) / 2])
			return moveTo(ch, low, ((high + low) / 2));
		else
			return false;
	}
	bool isFull()
	{
		if (top + 1 == capacity)
			return true;
		return false;
	}
	bool isEmpty()
	{
		if (top == -1)
			return true;
		return false;
	}
	bool find(A ch)
	{
		return moveTo(ch, 0, size-1);
		/*for (int i = 0; i < size; i++)
		{
			if (arr[i] == ch)
			{
				return true;
			}
		}
		return false;*/
	}
	void print()
	{
		for (int i = 0; i <= top; i++)
		{
			cout << arr[i] << endl;
		}
	}
	int getsize()
	{
		return top+1;
	}
};
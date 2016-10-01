#include <iostream>
#include <string>
#pragma once
using namespace std;

class operatorStack
{
private:
	string arr;
	int top;
	char **icp;
	char **isp;
	int icpvalue(char b)
	{
		for (int i = 0; i < 6; i++)
		{
			if (b == icp[i][0])
			{
				return icp[i][1] - 48;
			}
		}
	}
	int ispvalue(char b)
	{
		for (int i = 0; i < 6; i++)
		{
			if (b == isp[i][0])
			{
				return isp[i][1] - 48;
			}
		}
	}
public:
	operatorStack()
	{
		top = -1;
		icp = new char*[6];
		isp = new char*[6];
		for (int i = 0; i < 6; i++)
		{
			icp[i] = new char[2];
			isp[i] = new char[2];
		}
		icp[0][0] = '#';	icp[0][1] = '0';
		icp[1][0] = '-';	icp[1][1] = '2';
		icp[2][0] = '+';	icp[2][1] = '2';
		icp[3][0] = '*';	icp[3][1] = '3';
		icp[4][0] = '/';	icp[4][1] = '3';
		icp[5][0] = '(';	icp[5][1] = '4';


		isp[0][0] = '#';	isp[0][1] = '0';
		isp[1][0] = '-';	isp[1][1] = '2';
		isp[2][0] = '+';	isp[2][1] = '2';
		isp[3][0] = '*';	isp[3][1] = '3';
		isp[4][0] = '/';	isp[4][1] = '3';
		isp[5][0] = '(';	isp[5][1] = '1';
	}
	const char peek()
	{
		return arr.back();
	}
	string postfix(const string & expr)
	{
		string result="";
		bool minus = false;
		push('#');
		for (int i = 0; i != expr.size(); i++)
		{
			if (expr[i] == ' ')
				continue;
			/*if (minus && !(expr[i]-48<=9 && expr[i]-48>=0))
			{
				if (expr[i] != '-')
				{
					minus = false;
					if (result.back() != ' ')result += ' ';
					while (ispvalue(peek()) >= icpvalue('+') && peek() != '#')
						result += pop(); result += ' ';
					push('+');
				}
				else
				{
					if (result.back() != ' ')result += ' ';
					while (ispvalue(peek()) >= icpvalue('+') && peek()!='#')
						result += pop(); result += ' ';

					push('+');

				}*/
				//if (! (ispvalue(peek())<icpvalue('+')))
				//	//push('+');
				////else
				//{
				//	result.push_back(pop());
				//	result.push_back(' ');
				//	//push('+');
				//}
			//}
			if ((expr[i] - 48 <= 9 && expr[i] - 48 >= 0) || (expr[i] == '-' && (expr[i + 2] - 48 <= 9 && expr[i + 2] - 48 >= 0))	|| expr[i]=='.')
			{
				
				if (expr[i] == '-' )
				{
					if (i!=0)
					{
						if ((expr[i - 2] - 48 <= 9 && expr[i - 2] - 48 >= 0))
						{
							if (!result.empty())
							{
								if (result.back() != ' ')
									result.push_back(' ');
							}
							while (ispvalue(peek()) >= icpvalue('+') && peek() != '#')
							{
								result += pop();
								result += ' ';
							
							}

							push('+');

							minus = true;
						}
					}
				}
				
				result += expr[i];
			}
			else
			{
				if (!result.empty())
				if(result.back()!=' ')result += ' ';
				int j = 0;
				for (; j < 6; j++)
				{
					if (expr[i]==icp[j][0])
					{
						break;
					}
					else if (expr[i] == ')')
					{
						while (peek() != '(')
						{
							result += pop(); result += ' ';
						}
						pop();
						goto pos1;
					}
				}
				if (icpvalue(icp[j][0])>ispvalue(peek()))
				{
					push(expr[i]);
				}
				else
				{
					
					for (int k=0; k < 6; k++)
					{
						if ((ispvalue(peek()) >= icpvalue(expr[i])) && peek()!='#')
						{
							//if (isp[k][1]>=icp[j][1])
							//{
								result += pop(); result += ' ';
								k = -1;
								
							//}
							/*else
							{
								push(expr[i]);
								break;
							}*/
						}
						else if (peek() == '#')
						{
							push(expr[i]);
							break;
						}
						else
						{
							push(expr[i]);
							break;
						}
					}
				}
			}
		pos1:;
		}
		if(result.back()!=' ')result += ' ';
		while (peek() != '#')
		{
			result += pop(); result += ' ';
		}
		result.pop_back();
		return result;
	}
	void push(char b)
	{
		top++;
		arr.push_back(b);
	}
	char pop()
	{
		if (top < 0)
			return NULL;
		char b = arr.back();
		arr.pop_back();
		return b;
		
	}

};
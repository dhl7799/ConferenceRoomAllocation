#include<iostream>
using namespace std;

class conference
{
public:
	int t1, t2;
};
int main()
{
	int N = 0;;
	int s1, s2;
	int x1, y1;
	int Num = 1;
	
	cout << "Type in the number of conferences :";
	scanf("%d", &N);
	cout << endl;
	

	cout << "Type in the starting and ending time of conferences" << endl;
	conference* A = new conference[N];


	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &A[i].t1, &A[i].t2);
	
	}
	s1 = A[0].t1;
	s2 = A[0].t2;

	for (int i = 1; i < N; i++)
	{
		if (s2 <= A[i].t1) {
			Num++;
			s1 = A[i].t1;
			s2 = A[i].t2;
		}
		
	}

	printf("number of conferences available = %d", Num);
	return 0;

	
}
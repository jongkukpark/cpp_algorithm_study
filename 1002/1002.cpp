/*
	백준 알고리즘 1002번: 터렛
	통과한 코드
*/
#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
	using namespace std;

	int T;
	cin >> T;

	int *x1 = new int[T],
		*y1 = new int[T],
		*r1 = new int[T],
		*x2 = new int[T],
		*y2 = new int[T],
		*r2 = new int[T];

	for (int i = 0; i < T; i++)
	{
		cin >> 
			x1[i] >> y1[i] >> r1[i] >> 
			x2[i] >> y2[i] >> r2[i];
	}

	double d;
	int big, small;
	int result;

	for (int i = 0; i < T; i++)
	{
		d = sqrt(pow(x1[i] - x2[i], 2) + pow(y1[i] - y2[i], 2));
		big = max(r1[i], r2[i]);
		small = min(r1[i], r2[i]);

		if (d == 0.0) // 중심이 같다
		{
			if (big == small) 
				result = -1; // 동일한 원일때
			else
				result = 0; // 동일하지 않은 원일 때
		}
		else
		{
			if (((big - small) < d) && ((big + small) > d))
				result = 2;
			else if (big + small == d || big - small == d)
				result = 1;
			else
				result = 0;
		}
		cout << result << endl;
	}

	return 0;
}


/*
	실패함. 왜지.
	안되는 이유를 찾았다.
	왜냐하면 두 점 사이의 거리를 구할 때 double이 아닌 int로 했기 때문!
*/
//#include <iostream>
//#include <cmath>
//
///*
//  백준 알고리즘 1002번: 터렛
//*/
//
//int main()
//{
//	using namespace std;
//	int T = 0; //test case의 개수
//	cin >> T;
//	
//	int *x1 = new int[T], 
//		*y1 = new int[T], 
//		*r1 = new int[T], 
//		*x2 = new int[T], 
//		*y2 = new int[T], 
//		*r2 = new int[T];
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> x1[i] >> y1[i] >> r1[i] >> x2[i] >> y2[i] >> r2[i];
//	}
//
//	double distance_two_point;
//	int sum_r;
//	int sub_r;
//
//	for (int i = 0; i < T; i++)
//	{
//		distance_two_point = sqrt(pow(x1[i] - x2[i], 2) + pow(y1[i] - y2[i], 2));
//		sum_r = r1[i] + r2[i];
//		sub_r = (r1[i] > r2[i]) ? (r1[i] - r2[i]) : (r2[i] - r1[i]);
//
//		if (distance_two_point == 0.0)
//		{ // 중심이 일치 할 때
//			if (r1[i] == r2[i])
//			{ // 두 원이 똑같은 원 일때
//				cout << "-1" << endl;
//			}
//			else
//			{ // 한 원이 다른 원 안에서 중심이 같지만 교점이 없을 때
//				cout << "0" << endl;
//			}
//		}
//		else
//		{ // 중심이 일치 하지 않을 때
//			if (distance_two_point == sum_r)
//			{ // 두 원이 접할 때
//				cout << "1" << endl;
//			}
//			else if (distance_two_point > sum_r)
//			{ // 두 원이 멀어서 교점이 없음
//				cout << "0" << endl;
//			}
//			else
//			{ 
//				if (distance_two_point == sub_r)
//				{ // 한 원이 다른 원 안에 있고 교점이 하나
//					cout << "1" << endl;
//				}
//				else if (distance_two_point > sub_r)
//				{ // 두 원이 교점이 두개
//				  // 한 원이 다른 원 안에 있고 교점이 두개
//					cout << "2" << endl;
//				}
//				else
//				{ // 한 원이 다른 원 안에 있지만 교점이 없음
//					cout << "0" << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}
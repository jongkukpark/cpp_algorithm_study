/*
	���� �˰��� 1002��: �ͷ�
	����� �ڵ�
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

		if (d == 0.0) // �߽��� ����
		{
			if (big == small) 
				result = -1; // ������ ���϶�
			else
				result = 0; // �������� ���� ���� ��
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
	������. ����.
	�ȵǴ� ������ ã�Ҵ�.
	�ֳ��ϸ� �� �� ������ �Ÿ��� ���� �� double�� �ƴ� int�� �߱� ����!
*/
//#include <iostream>
//#include <cmath>
//
///*
//  ���� �˰��� 1002��: �ͷ�
//*/
//
//int main()
//{
//	using namespace std;
//	int T = 0; //test case�� ����
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
//		{ // �߽��� ��ġ �� ��
//			if (r1[i] == r2[i])
//			{ // �� ���� �Ȱ��� �� �϶�
//				cout << "-1" << endl;
//			}
//			else
//			{ // �� ���� �ٸ� �� �ȿ��� �߽��� ������ ������ ���� ��
//				cout << "0" << endl;
//			}
//		}
//		else
//		{ // �߽��� ��ġ ���� ���� ��
//			if (distance_two_point == sum_r)
//			{ // �� ���� ���� ��
//				cout << "1" << endl;
//			}
//			else if (distance_two_point > sum_r)
//			{ // �� ���� �־ ������ ����
//				cout << "0" << endl;
//			}
//			else
//			{ 
//				if (distance_two_point == sub_r)
//				{ // �� ���� �ٸ� �� �ȿ� �ְ� ������ �ϳ�
//					cout << "1" << endl;
//				}
//				else if (distance_two_point > sub_r)
//				{ // �� ���� ������ �ΰ�
//				  // �� ���� �ٸ� �� �ȿ� �ְ� ������ �ΰ�
//					cout << "2" << endl;
//				}
//				else
//				{ // �� ���� �ٸ� �� �ȿ� ������ ������ ����
//					cout << "0" << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}
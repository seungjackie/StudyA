#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand((unsigned int)time(0));

	int iBaseball[3] = {};
	//중복방지를 위한 array
	int iRandom[9] = {};
	// 1에서 9까지 숫자를 설정함
	for (int i = 0; i < 9; i++)
	{
		iRandom[i] = i + 1;
	}
	//설정된 숫자를 섞어준다.
	int iTemp, id1, id2;
	for (int i = 0; i < 100; i++)
	{
		id1 = rand() % 9;
		id2 = rand() % 9;

		iTemp = iRandom[id1];
		iRandom[id1] = iRandom[id2];
		iRandom[id2] = iTemp;
	}
	//랜덤한 3자리수 만들기
	for (int i = 0; i < 3; i++)
	{
		iBaseball[i] = iRandom[i];
	}

	//게임 시작

	int iCount = 0;

	while (true)
	{
		int player[3] = {};
		int i1 = 0, i2 = 0, i3 = 0;
		int strike = 0, ball = 0;
		cout << " *  *  *" << endl;
		cout << "숫자를 3개 입력하세요(1-9) *단, 0은 종료 : ";
		cin >> i1 >> i2 >> i3;

		player[0] = i1;
		player[1] = i2;
		player[2] = i3;

		if (i1 == 0 || i2 == 0 || i3 == 0)
		{
			cout << "종료합니다." << endl;
			break;
		}

		else if (player[0] < 0 || player[0] > 9 || player[1] < 0 || player[1] > 9 || player[2] < 0 || player[2] > 9)
		{
			cout << "숫자를 잘못 입력하였습니다." << endl;
			continue;
		}

		else if (player[0] == player[1] || player[1] == player[2] || player[2] == player[0])
		{
			cout << "중복된 숫자를 입력하였습니다." << endl;
			continue;
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; ++j)
			{
				//자리가 맞는지 확인
				if (i == j)
				{
					if (player[j] == iBaseball[i])
					{
						strike++;
					}
				}
				else if (i != j)
				{
					if (player[j] == iBaseball[i])
					{
						ball++;
					}
				}
			}
		}
		iCount++;
		cout << "Count : " << iCount << endl;
		if (strike + ball == 0)
		{
			cout << "OUT" << endl;
		}
		else if (strike == 3)
		{
			cout << "You Win!" << endl;
			break;
		}
		else
		{
			cout << strike << "strike " << ball << "ball " << endl;
		}
	}
	return 0;
}
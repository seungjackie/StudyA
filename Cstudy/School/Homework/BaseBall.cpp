#include <iostream>
//시간함수
//헤더에서 시간을 잘 다루기 위해서 만들어진 타입
#include <cstdlib>
// C언어<stdlib.h> 

// int srand(void)
// 랜덤한 숫자를 반환한다 (범위는 0~ radom_max)

using namespace std;

int main()
{
    //랜덤함수
    // (-) 마이너스 값 제거
    srand((unsigned int)time((0)));

    int iBaseball[3] = {};
    //배열 1~9 ,중복 을 방지한다
    int iRandom[9] = {};
    //{값}
    for(int i = 0; i < 9; i++)
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


    int iCount = 0;

    while(true)
    {

        // player에게서 숫자 3개를 입력받는다.
        // 그리고 이미 만들어져있는 숫자배열과 비교하기 편하게,
        // player배열을 또 만들어준다.
        int player[3] = {};
        int i1 = 0, i2 = 0, i3 = 0;
        int strike = 0, ball = 0;
        cout << " *  *  *" << endl;
        cout << "숫자를 3개 입력하세요 (1-9) *단, 0은 종료 : ";
        cin >> i1 >> i2 >> i3;

        player[0] = i1;
        player[1] = i2;
        player[2] = i3;
        
        if(i1 == 0 || i2 ==0 || i3 == 0)
        {
            cout << "종료합니다. " << endl;
            break; 
        }

        // 숫자오류 잡기
        else if (player[0] < 0 || player[0] > 9 || player[1] < 0 || player[1] > 9 || player[2] <0 || player[2] > 9)
        {
            cout << "숫자를 잘못 입력하셨습니다" << endl;
            continue;
        }

        // 중복 거르기
        else if(player[0] == player[1] || player[1] == player[2] || player[2] == player[0])
        {
            cout << "중복된 숫자를 입력하셨습니다 . " <<endl;
        }

        // 제공된 배열과 입력한 배열의 인덱스를 비교하면서 strike와 ball의 개수를 세준다.
        for (int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; ++j)
            {
                // 자리 확인
                if( i == j)
                {
                    if(player[j] == iBaseball[i])
                    {
                        strike++;
                    }
                }
                else if (i !=j)
                {
                    if(player[j] == iBaseball[i])
                    {
                        ball++;
                    }
                }
            }
        }
        //실행 횟수 
        iCount++;
        cout << "Count : " << iCount << endl;
        if(strike + ball == 0 )
        {
            cout << "OUT" << endl;
        }
        else if (strike ==3)
        {
            cout << "You WIN!" << endl;
            break;
        }
        else{
            cout << strike << " : strike \t" << ball << " : ball" <<endl;
        }
    }
    return 0;

}
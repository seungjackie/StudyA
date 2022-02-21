#include <iostream>
#include <fstream>

using namespace std;

// const char* fileName = "simplefile.txt";
const char* fileName = "workspace.jpeg";

int main()
{
    //정수
    long lFirst, lEnd;
    cout << "Hello World!! \n";

    ifstream iFile;
    iFile.open(fileName , ios::in | ios::binary); //읽는 방법
    lFirst = iFile.tellg(); // 포지션 확인 , 지금은  open 만 했음으로 제일 앞
    iFile.seekg(0, ios::end);
    lEnd = iFile.tellg(); // 현재 파일 을 가져오는 거다
    iFile.close();

    cout << "file : [" << fileName << "] size : " << (lEnd - lFirst) << endl;
    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 미리 파일 크기 확인 후 한번에 읽어서 복사
    ifstream in;
    in.open("workspace.jpg" , ios::in | ios::binary);

    // total file size
    in.seekg(0, ios::end); //어디서부터 어디 까지
    long fileLength = in.tellg(); //파일 불러오기
    cout << "Read file size : " << fileLength << " Byte " << endl;

    //loading total file size in memory
    in.seekg(0, ios::beg); //beg으로 이동해서
    char* buf = new char[fileLength];
    in.read(buf, fileLength); //length 만큼 버프에
    in.close();

    //buffer to file
    ofstream out; //output stream
    out.open("workspace_copy.jpg" , ios::out | ios::binary);
    out.write(buf,fileLength);
    out.close();

}
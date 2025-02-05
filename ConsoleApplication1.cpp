#include <iostream>
using namespace std;

int funcation_1(int sheshidu) {
	return sheshidu * 1.8 + 32;

}

int funcation_2(int huashidu) {
	return (huashidu - 32) / 1.8;

}

int main()
{
	cout << "选择输入类型为：1.摄氏度  2.华氏度" << endl;
	string type;
	int wendu;
	cin >> type;
	if (type == "摄氏度") {
		
		cout << "输入温度 :" << endl;
		cin >> wendu ;
		cout << "对应的华氏度为" << funcation_1(wendu);

	}
	if (type == "华氏度") {

		cout << "输入温度 :" << endl;
		cin >> wendu;
		cout <<"对应的摄氏度为" << funcation_2(wendu);

	}
	else 
		cout << "请输入正确的类型" << endl;

   
}


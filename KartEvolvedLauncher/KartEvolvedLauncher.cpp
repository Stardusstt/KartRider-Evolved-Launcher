// KartEvolvedLauncher.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main() {
	int choice , e , n , count , cts ;

	cout << endl << " v1.2	By Stardusstt" << endl << endl;
	system("pause");
	cout << endl;
	cout << " Start PPServer " << endl << endl;
	system("start PPServer.exe");
	Sleep(3000);
	cout << " Start KartRider Evolved " << endl << endl;
	system("start kartrider.exe");
	system("pause");
	system("cls");

	while (1) {

		start:
		cout << endl;
		cout << " 1 (Restart All)  2 (Restart Kartrider)  3 (Close)  4 (Items Editor)  5 (Exit) : ";
		cin >> choice;
		cout << endl;


		if (choice == 1) {
			cout << " Start PPServer " << endl << endl;
			system("start PPServer.exe");
			Sleep(3000);
			cout << " Start KartRider Evolved " << endl << endl;
			system("start kartrider.exe");
			system("pause");
			system("cls");
			continue;

		}

		if (choice == 2) {
			system("taskkill /f /im AdBalloonExt.exe");
			cout << endl << " Start KartRider Evolved " << endl << endl;
			system("start kartrider.exe");
			system("pause");
			system("cls");
			continue;

		}

		if (choice == 3) {
			cout << endl << " Close KartRider Evolved " << endl;
			system("taskkill /f /im kartrider.exe");
			Sleep(500);
			cout << endl << " Close PPServer " << endl;
			system("taskkill /f /im PPServer.exe");
			Sleep(500);
			cout << endl << " Close AdBalloonExt " << endl;
			system("taskkill /f /im AdBalloonExt.exe");
			cout << endl;
			system("pause");
			system("cls");
			continue;

		}

		if (choice == 4) {
			system("cls");
			cout << endl << " ****** Items Editor ****** " << endl;
			cout << endl;
			system("pause");
			system("cls");
			sw:
			cout << endl << " 1(角色) " << "\t" << " 2(寵物) " << "\t" << " 3(飛寵) " << "\t" << endl;
			cout << endl << " 4(噴漆) " << "\t" << " 5(車輛) " << "\t" << " 6(車牌) " << "\t" << endl;
			cout << endl << " 7(頭飾) " << "\t" << " 8(眼鏡) " << "\t" << " 9(手杖) " << "\t" << endl;
			cout << endl << " 10(氣球) " << "\t" << " 11(服飾) " << "\t" << " 12(炫光) " << "\t" << endl;
			cout << endl << " 13(胎痕) " << "\t" << " 14(名噴) " << "\t" << " 15(貼紙) " << "\t" << endl;
			cout << endl << " 16(Exit) " << endl;
			e = 0 , n = 0 , count = 0 , cts = 0 ;
			
		
			cout << endl << " Choose what you want to change : " ;
			cin >> e ;

			if ( e == 16 ) {
			system("cls");
			goto start;
			}

			if (e > 16) {
				cout << endl << " Error " << endl;
				system("pause");
				system("cls");
				goto sw;
			}
			

			cout << endl << " Number : " ;
			cin >> n ;
			cout << endl ;
				

				string its = "";

				switch (e){
					case 1:
					cts = 8;
					its = "role =";
					break;

					case 2:
					cts = 11;
					its = "pet=";
					break;

					case 3:
					cts = 14;
					its = "flypet=";
					break;

					case 4:
					cts = 17;
					its = "paint=";
					break;

					case 5:
					cts = 20;
					its = "car=";
					break;

					case 6:
					cts = 23;
					its = "plate=";
					break;

					case 7:
					cts = 26;
					its = "headdress=";
					break;

					case 8:
					cts = 29;
					its = "glass=";
					break;

					case 9:
					cts = 32;
					its = "cane=";
					break;

					case 10:
					cts = 35;
					its = "ballon=";
					break;

					case 11:
					cts = 38;
					its = "dress=";
					break;

					case 12:
					cts = 41;
					its = "glare=";
					break;

					case 13:
					cts = 44;
					its = "driftTrace=";
					break;

					case 14:
					cts = 47;
					its = "namePaint=";
					break;

					case 15:
					cts = 50;
					its = "decal=";
					break;


					default:
					cout << endl << " Error " << endl;
					system("pause");
					system("cls");
					goto sw ;

				}

				string pp;
				ifstream in("PPConfig.ini");
				ofstream out("PPConfig2.ini");

				while (!in.eof()) {
					getline(in , pp);
					if (count != cts ) {
						out << pp << endl;
					}
					else {
						out << its << n << endl;
					}


					count++;
				}
				out.close();
				in.close();
				system("del PPConfig.ini");


				pp = "";
				ifstream in1("PPConfig2.ini");
				ofstream out1("PPConfig.ini");
				while (!in1.eof()) {
					getline(in1, pp);
					out1 << pp << endl;
				}
				out1.close();
				in1.close();
				system("del PPConfig2.ini");
				
				system("pause");
				system("cls");
				goto sw;

				break;

		}

		if (choice == 5) {
			break;

		}

	}




}

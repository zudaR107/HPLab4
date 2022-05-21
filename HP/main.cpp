#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "menu.h"
#include "menu_manager.h"
#include "my_vector.h"
#include "Models\Parcel\Parcel.h"
#include "Models\Post\Worker.h"
#include "Models\Post\Client.h"

#pragma region Ôóíêöèè
int sqrt25() {
	std::cout << "Êâàäðàòíûé êîðåíü èç 25 ðàâåí " << pow(25, 0.5) << ".";
	return 0;
}

int hello() {
	char name[25]{};
	cout << "Ââåäèòå âàøå èìÿ: ";
	cin.ignore(1, '\n');
	cin.getline(name, 25);
	system("cls");
	cout << "Ïðèâåò, " << name << "!";
	return 0;
}

int printgraf() {
	cout << "                  ^7YPB##&&&&&&&&&##BGGGGGPPYYYPPPPPPGGGGGBBBB#BB###BGPY7^:.                    "   << endl;
	cout << "               ^75B##&&&&&#&&&&##BGBBBBBGP555555YJYY5Y5PPGBBB###########GY!^^:.                 "   << endl;
	cout << "            :!5B#&&&&&####&&#BGGGBBBBBBBGGBGGGGP55YYYY5PGBB#BBBBB######&&&BJ~:::.               "   << endl;
	cout << "          ^JG#&&&&&####&&&#BBBBBBB####BBBGGGGGGP5YYY5PPPGGGGBBBB#######&&&&&#57^::              "   << endl;
	cout << "        ~YB&&&&&&###&&&&#BB#######BBBGGGBBBBBGGP5YJJ55555PPGGGBB####B##&&&&&&&#P7^.             "   << endl;
	cout << "     .!5B##&&&&&#&&&&&#####&###BBBBBBB######BBBGGGGGP555555PGBBBB###B####&&&&##&#57^            "   << endl;
	cout << "    ^JPB&&&&&&&&&&&&&#&&&&####B####&&&&&&#####BBBBGPP55555PBBBGBBBBBBBB###&&&&&&&&#G?.          "   << endl;
	cout << "    :?B&&#&&&&&&&@&#&&&&####&&&&###########BBBBBBBBBGGGGPGGPPPGGGGPPPPGBB####&&&&&&&#P~         "   << endl;
	cout << "    7B&&&&&&&&&&@&&&&&&&&&&&&########BBBBGGGGBBBBBGGGGPP55PPP5PP5YYYYYJYPGB##&&&&&&&##BJ.       "   << endl;
	cout << "   ~#&##&&@&&&&@&&&&&&&&&&##BBBBBBGGGGGGBB#####BBBGGBGGPP555555YJJJ?J777J5GB##&##&&&&##BY:      "   << endl;
	cout << "   J&&&&&@&&&&&&&&&&&&&######B#BB#######&&###BB#BBBBGGGGPPPP5YJ????77!7!!7YPG##&&&&&&&#BGJ.     "   << endl;
	cout << "  ^B&&@&&&&#&&&&&########&&##############BB#BBBBGGBBBBBBGGPYJ?7?77777!!!!~!JGB##&&&&&&#BGP?     "   << endl;
	cout << "  J&@@@@@&&&&&&&&###&&&&&&&&############BBBGGGBB###BBBBGP5YJJ???777!!~~~~~~!JG##&&&&&&&BPPP^    "   << endl;
	cout << " !#@@@@@@@&&@@@&##&&##&&&&##########BBBGGGBB######BGGGPP55YJJ??7!~~~~~~~~~~~!5B#&&&&&&#G555?    "   << endl;
	cout << "^B@@@@@@@@@@@@&&&&&&############BBBBB#######BBBBBGPPP55YJJJ?!!~~~~~~~~~~~~~~~?G###&&&&BP555J:   "   << endl;
	cout << "G@@@@@@@@@@@@&&&&&&######################BGGGGPPP55YJ?77!!~~~~~~~~~~~~~~~~~~~7PB###&&#GPPGJ7^   "   << endl;
	cout << "@@@@@@&@@@@@@@@@&&&#################BBBGGGPP55YYJJ?77!!~~~~~~~~~~~~~~~~~~~~~~7PB###&##BG5BJ!^   "   << endl;
	cout << "@@@@@&@@@@@@@@@@&&########BBBBBBBBBBGGPPGGPPYJJ?77!!!~~~~~~~~~~~~~~~~~~~~~~~!?GB###&#BBPGP?~^   "   << endl;
	cout << "&@@@&&@@@&@@@@@@&&&&#########BBBBBBBBB##B##BGPYJ77!!!!!~~~~~~~~~~~~~~~~~~~~!!JGGBBB###BPGJ7~:   "   << endl;
	cout << "&&@&&&&@&@@@@@&&&&##&&&#B#####################BGP5J?7!!!!~~~~~~~~~~~~~~~~~~!!JGGBB####PPP?7~.   "   << endl;
	cout << "@&&&&&&@@@@@@@&###&&&#PB########################BBPYJ?7!!!!!~~~~~~~~~~~~~~~~!?PGBB###BPPY?!:    "   << endl;
	cout << "&&&&&&@@@@@@@&&&###BBGYBBGGGBB#####BBGGBB###B###BBBPYJ?7!!!!!!!!!!~~~~~~~~~~~!5GBB#BBGP5Y?~     "   << endl;
	cout << "&&&&&&&&&&&&&&&###GPP5J5YJYY5GBBBBB##&##BBBBBBB##BBG5YJ?77!!!7!!77777!!!~~~~~~7PBBBBGP55J?:     "   << endl;
	cout << "#&&&&&&&&&&&&&###BGGGY555YYJYY5PPP55Y5PP5B###GGBBBPGPYJ?77!!!77??JY555555YJ?777YB#BBPPP5J!      "   << endl;
	cout << "#&#&&&&&&&&&&####BBBBYPP5YYJJJJJYYYYYJJ??JYPGBBBBBBBBPJ7!!!!!7JJYPPGGGGGGGGPP5YYB#BGPPPY7.      "   << endl;
	cout << "##&&&&&&&&&&&####BGPG?5P55YJJJJ?????????JJJ?JYPB#B#BGP5Y??7~7J5PGBBBGGGPP55YYYYYBBGPPP5?.       "   << endl;
	cout << "&##&&&&@&&&&#####BGPGYY555YJJJ????77777????J5BBB##BPY?7!!7J?5YYPGGP5YJJ?YP55Y?7JGGGGG5J.        "   << endl;
	cout << "&&&&&&&&&&&#########BBGP5YYJJJ??7777777777JPB#B#BGP5J?!!~~!757YPBB##BPY??5P5555PGPGBG5:         "   << endl;
	cout << "&@@@&&&&&&###########BBBGGPP5YJ??77!!!!!!!J5PBBGP555Y7!!~!7JPYJJY5PPPJYP5YYJYPP5PGGG5^          "   << endl;
	cout << "&@@@@&&&&##########BGP55YJJJJJYYYYJJ????77?5BGP5PPP5J7!!!!75#BY??JJJ?JJJ??7YBBGPPG55~           "   << endl;
	cout << "&&&@@@&&&#########BBGP5YJ?77!!!!!!77?JYY55PPPGGGGP5Y?7!!!!7YP?!!!!7777777!7PGGP5GGY~            "   << endl;
	cout << "&&&&@@&&###########BBGPYJ??777!!!!!!777?YPPPGBBBBG5J?7!!!!!J5!!!!!!!!!!!!7?PPPPPG5~             "   << endl;
	cout << "&&&&@@@&############BGP5YJ??777777777J5GBGGPPPGGGP5J7!!!!!!?P7!~~!!!!!!!!!?PGPGPJ^              "   << endl;
	cout << "&&&&&@@&############BGP5YJJ??777!!!7YGB#BBBBBBBBGPY?7!!~~!!7JY?77!!!!~~~!7PGGG5!.               "   << endl;
	cout << "&&&&&&@&############BGPYYJ??7777777YGBB##########BGY?7!!!!!777777?????????YJ7~.                 "   << endl;
	cout << "&&&&&&&&###########BGGPYJJ??77?????YGBB####&######BPY?7??7!!77!!~~~~~!!7!!~                     "   << endl;
	cout << "&&&&&@@&&&#########BGGPYJ??7?Y555YJ?JJ5GB#######BGP5YJJJ7!~!!777!~~~~~~~~~.                     "   << endl;
	cout << "GGBBB##&###&#######BBG5JJ?7!?B#BBGP5YJ??JJYYYYY5Y?7!!!!~~~~~!!77!!!~~~~~^.                      "   << endl;
	cout << "GGGGPPPPGGGGBB#####BBG5JJ?!!?G#&####BGP55YJ7!!!77!!!~~~!~~~~~~!7!!!!~!~:                        "   << endl;
	cout << "GPPPPPPPPP55PPPGBB##BGYJJ?7!7?Y5GGBBBBBBGP55Y?7!!!!!!~!!~!!!!!~!7!!!!^                          "   << endl;
	cout << "PPPP5P555555555555PGGG5JJJ?77?YY555555YY55PPP5YYJJJ???77!!777!!!777~.                           "   << endl;
	cout << "PPP555555555555555YYY55YYJJ??JY5PP555YY?77?????JJJ?JJJYJJ?7?7!!!7!:                             "   << endl;
	cout << "GGP55555555555555Y5YYYYYYYYJ?JJY555YYYYYJJ?????7777?777!!!!7!!!!^                               "   << endl;
	cout << "PGG55555P5PP5YYYYYY5YYYYYYYY??JJJYYYJJ?JJJJ??????777!!~~~!!!7!~.                                "   << endl;
	cout << "PGGPPP55P55P55555555YYYYYYY5J7???????77???????777!!!!!!!!!77~.                                  "   << endl;
	cout << "PBGGPP55PP5555555YYY5YYYYYY55?7777!!!!!!!!!7777!!!!!!!!!!7~:                                    "   << endl;
	cout << "PPGGPP55PP555P55555555YYYY555Y7!!!!!!!!!!~~~~~!~!!!!!!!!~.                                      "   << endl;
	cout << "GP5PPPP555555555555555555YYYY5J7777!!!!~~~~~~~~~~~~!!!~.                                        "   << endl;
	cout << "GG55PPPPP55555555555555555YYY55??77!!!!!!~~~~~~~~~!!^.                                          "   << endl;
	cout << "GG55PPPPPP55555PPPP555555555YY55Y??77!!!!!!!!!~!!!^.    										"		 << endl;
	return 0;
}
int exitProgram() {
	system("cls");
	std::cout << "Çàïóùåíà ôóíêöèÿ âûõîäà èç ïðîãðàììû.\n\n";
	system("pause");
	exit(0);
}

namespace ZDV {

	int c1{};
	int c2{};
	int c3{};
	const int maxCount = 50;
}

int Users() {
	system("cls");
	cout << "Âûâîä îáúåêòà êëàññà Parcel" << endl;
	Parcel parcel(5000, "14.03.2022", "Kaluga");
	parcel.print();
	cout << "\nÂûâîä îáúåêòà êëàññà Worker" << endl;
	Worker worker("Daniil", "Zudin", 19, "log", "pas", "Postman");
	worker.print();
	cout << "\nÂûâîä îáúåêòà êëàññà Client" << endl;
	Client client("Nikita", "Kuzin", 18, "log", "pas", parcel.getCodeNumber());
	client.print();
	cout << "\n\n";
	system("pause");
	return 0;
}

int AddWorker(MyVector& vector) {
	system("cls");
	using namespace ZDV;
	int count{};
	cout << "\nÂâåäèòå êîë-âî îáúåêòîâ êëàññà Ðàáî÷èé: ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "\nÂâîä èíôîðìàöèè îá îáúåêòå êëàññà #" << i + 1;
		Worker worker;
		cin >> worker;
		vector.PushBack(worker);
	}
	system("pause");
	system("cls");
	return 1;
}

int AddParcel(Parcel* parcels) {
	system("cls");
	using namespace ZDV;
	int count{};
	cout << "\nÂâåäèòå êîë-âî îáúåêòîâ êëàññà Ïîñûëêà: ";
	cin >> count;
	for (int i = c2; i < (c2 + count); i++) {
		cout << "\nÂâîä èíôîðìàöèè îá îáúåêòå êëàññà #" << i + 1;
		cin >> parcels[i];
	}
	c2 += count;
	system("pause");
	system("cls");
	return 1;
}

int AddClient(Client* clients, Parcel* parcels) {
	system("cls");
	using namespace ZDV;
	int count{};
	cout << "\nÂâåäèòå êîë-âî îáúåêòîâ êëàññà Êëèåíò: ";
	cin >> count;
	for (int i = c3; i < (c3 + count); i++) {
		cout << "\nÂâîä èíôîðìàöèè îá îáúåêòå êëàññà #" << i + 1;
		cin >> clients[i];
		clients[i].setNumber(parcels[i].getCodeNumber());
	}
	c3 += count;
	system("pause");
	system("cls");
	return 1;
}

void AddUser(MyVector& vector, Parcel* parcels, Client* clients) {
	using namespace ZDV;
	cout << "Âûáåðèòå êëàññ äëÿ äîáàâëåíèÿ:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
	int switcher{};
	cin >> switcher;
	switch (switcher) {
	case 1:
		AddWorker(vector);
		break;
	case 2:
		AddParcel(parcels);
		break;
	case 3:
		AddClient(clients, parcels);
		break;
	}
}

int PrintWorker(MyVector vector) {
	system("cls");
	using namespace ZDV;
	int j = 1;
	for (Worker w : vector) {
		cout << "\n\nÂûâîä èíôîðìàöèè îá îáúåêòàõ êëàññà Ðàáî÷èé #" << j << "\n";
		cout << w;
		j++;
	}
	system("pause");
	return 1;
}

int PrintParcel(Parcel* parcels) {
	system("cls");
	using namespace ZDV;
	for (int i = 0; i < c2; i++) {
		cout << "\n\nÂûâîä èíôîðìàöèè îá îáúåêòàõ êëàññà Ïîñûëêà #" << i + 1 << "\n";
		cout << parcels[i] << endl;
	}
	system("pause");
	return 1;
}

int PrintClient(Client* clients) {
	system("cls");
	using namespace ZDV;
	for (int i = 0; i < c3; i++) {
		cout << "\n\nÂûâîä èíôîðìàöèè îá îáúåêòàõ êëàññà Êëèåíò #" << i + 1 << "\n";
		cout << clients[i] << endl;
	}
	system("pause");
	return 1;
}

void PrintUser(MyVector vector, Parcel* parcels, Client* clients) {
    using namespace ZDV;
	cout << "Âûáåðèòå êëàññ äëÿ âûâîäà èíôîðìàöèè:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
	int switcher{};
	cin >> switcher;
	switch (switcher) {
	case 1:
		PrintWorker(vector);
		break;
	case 2:
		PrintParcel(parcels);
		break;
	case 3:
		PrintClient(clients);
		break;
	}
}

int DeleteWorker(MyVector& vector) {
	using namespace ZDV;
	int tempResult = PrintWorker(vector);
	cout << "\nÂûáåðèòå íîìåð îáúåêòà äëÿ óäàëåíèÿ: ";
	int deleteNum{};
	cin >> deleteNum;
	vector.Remove(deleteNum - 1);
	return 1;
}

int DeleteParcel(Parcel* parcels) {
	using namespace ZDV;
	int tempResult = PrintParcel(parcels);
	cout << "\nÂûáåðèòå íîìåð îáúåêòà äëÿ óäàëåíèÿ: ";
	int deleteNum{};
	cin >> deleteNum;
	for (int i = (deleteNum - 1); i < (maxCount - 1); i++) {
		parcels[i] = parcels[i + 1];
	}
	c2--;
	return 1;
}

int DeleteClient (Client* clients) {
	using namespace ZDV;
	int tempResult = PrintClient(clients);
	cout << "\nÂûáåðèòå íîìåð îáúåêòà äëÿ óäàëåíèÿ: ";
	int deleteNum{};
	cin >> deleteNum;
	for (int i = (deleteNum - 1); i < (maxCount - 1); i++) {
		clients[i] = clients[i + 1];
	}
	c3--;
	return 1;
}

void DeleteUser(MyVector& vector, Parcel* parcels, Client* clients) {
	using namespace ZDV;
	system("cls");
	cout << "Âûáåðèòå êëàññ äëÿ óäàëåíèÿ èíôîðìàöèè:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
	int switcher{};
	cin >> switcher;
	switch (switcher) {
	case 1:
		DeleteWorker(vector);
		break;
	case 2:
		DeleteParcel(parcels);
		break;
	case 3:
		DeleteClient(clients);
		break;
	}
}

int SortWorker(MyVector& vector) {
	using namespace ZDV;
	system("cls");
	for (int j = 0; j < vector.Size(); j++) {
		for (int i = 0; i < vector.Size() - 1; i++) {
			if (vector[i] > vector[i + 1]) {
				Worker tempWorker = vector[i + 1];
				vector[i + 1] = vector[i];
				vector[i] = tempWorker;
			}
		}
	}
	int tempResult = PrintWorker(vector);
	return 1;
}

int SortParcel(Parcel* parcels) {
	using namespace ZDV;
	system("cls");
	for (int i = 0; i < c2 - 1; i++) {
		if (parcels[i] > parcels[i + 1]) {
			Parcel tempParcel = parcels[i + 1];
			parcels[i + 1] = parcels[i];
			parcels[i] = tempParcel;
		}
	}
	int tempResult = PrintParcel(parcels);
	return 1;
}

int SortClient(Client* clients) {
	using namespace ZDV;
	system("cls");
	for (int i = 0; i < c3 - 1; i++) {
		if (clients[i] > clients[i + 1]) {
			Client tempClient = clients[i + 1];
			clients[i + 1] = clients[i];
			clients[i] = tempClient;
		}
	}
	int tempResult = PrintClient(clients);
	return 1;
}

void SortUser(MyVector& vector, Parcel* parcels, Client* clients) {
	using namespace ZDV;
	system("cls");
	cout << "Âûáåðèòå êëàññ äëÿ ñîðèòðîâêè èíôîðìàöèè:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
	int switcher{};
	cin >> switcher;
	switch (switcher) {
	case 1:
		SortWorker(vector);
		break;
	case 2:
		SortParcel(parcels);
		break;
	case 3:
		SortClient(clients);
		break;
	}
}

void FilterWorker(MyVector vector) {
	system("cls");
	string name;
	cout << "Ââåäèòå èìÿ ïîëüçîâàòåëÿ äëÿ ôèëüòðàöèè: ";
	cin >> name;
	int j = 1;
	for (Worker w : vector) {
		if (w.getName() == name) {
			cout << "\n\nÂûâîä èíôîðìàöèè îá îáúåêòàõ êëàññà Ðàáî÷èé #" << j << "\n";
			cout << w;
			j++;
		}
	}
	system("pause");
}

void FilterParcel(Parcel* parcels) {
	return;
}

void FilterClient(Client* clients) {
	return;
}

void FilterUser(MyVector& vector, Parcel* parcels, Client* clients) {
	using namespace ZDV;
	system("cls");
	cout << "Âûáåðèòå êëàññ äëÿ ôèëüòðàöèè èíôîðìàöèè:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
	int switcher{};
	cin >> switcher;
	switch (switcher) {
	case 1:
		FilterWorker(vector);
		break;
	case 2:
		FilterParcel(parcels);
		break;
	case 3:
		FilterClient(clients);
		break;
	}
}

int User() {
	return 5;
}
int AddUser() {
	return 1;
}
int PrintUser() {
	return 5;
}
int DeleteUser() {
	return 2;
}
int SortUser() {
	return 3;
}
int FilterUser() {
	return 4;
}
int BackMainMenu() {
	return 6;
}
#pragma endregion


int main() {
	using namespace ZDV;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(nullptr));
	Parcel* parcels = new Parcel[maxCount];
	MyVector vector;
	Client* clients = new Client[maxCount];

	const int itemsCount = 6;
	char squareRootOf25Name[]{ "Âû÷èñëèòü êîðåíü èç 25" };
	char helloName[]{ "Ïîçäîðîâàòüñÿ ñ ïîëüçîâàòåëåì" };
	char printHelloName[]{ "Èçîáðàçèòü êàðòèíêó ïñåâäîãðàôèêîé" };
	char menuTitle[]{ "Ãëàâíîå ìåíþ" };
	char incheritance[]{ "Íàñëåäîâàíèå" };
	char operatorOverloading[]{ "Ïåðåãðóçêà îïåðàòîðîâ" };
	char ex[]{ "Âûõîä" };
	Item items[itemsCount]{
		Item {squareRootOf25Name, sqrt25},
		Item {helloName, hello},
		Item {printHelloName, printgraf},
		Item {incheritance, Users},
		Item {operatorOverloading, User},
		Item {ex, exitProgram} };
	Menu menu{ menuTitle, items, itemsCount };

	const int runMenuUsers = 6;
	char usersMenu[] = "Ïîëüçîâàòåëüñêîå ìåíþ";
	char addUsers[] = "Äîáàâèòü ïîëüçîâàòåëÿ";
	char deleteUsers[] = "Óäàëèòü ïîëüçîâàòåëÿ";
	char sortUsers[] = "Ñîðòèðîâàòü ìàññèâ ïîëüçîâàòåëåé";
	char filterUsers[] = "Ôèëüòðîâàòü ìàññèâ ïîëüçîâàòåëåé";
	char printUsers[] = "Âûâåñòè èíôîðìàöèþ î ïîëüçîâàòåëå";
	char backToMainMenu[] = "Íàçàä â ãëàâíîå ìåíþ";
	Item items_user[runMenuUsers]{
		Item {addUsers, AddUser},
		Item {deleteUsers, DeleteUser},
		Item {sortUsers, SortUser},
		Item {filterUsers, FilterUser},
		Item {printUsers, PrintUser},
		Item {backToMainMenu, BackMainMenu } };
	Menu menu_user(usersMenu, items_user, runMenuUsers);
	MenuManage managerOfMenu(menu, menu_user);

	while (managerOfMenu.runMainMenu()) {
		if (managerOfMenu.getMain_select() == User()) {
			do {
				system("cls");
				managerOfMenu.runSubMenu();
				if (managerOfMenu.getSub_select() == AddUser()) {
					AddUser(vector, parcels, clients);
				}
				else if (managerOfMenu.getSub_select() == PrintUser()) {
					PrintUser(vector, parcels, clients);
				}
				else if (managerOfMenu.getSub_select() == DeleteUser()) {
					DeleteUser(vector, parcels, clients);
				}
				else if (managerOfMenu.getSub_select() == SortUser()) {
					SortUser(vector, parcels, clients);
				}
				else if (managerOfMenu.getSub_select() == FilterUser()) {
					FilterUser(vector, parcels, clients);
				}
			} while (managerOfMenu.getSub_select() != BackMainMenu());
			system("cls");
		}
	};
	return 0;
}
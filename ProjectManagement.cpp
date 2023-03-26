// ProjectManagement.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <map>
#include <fstream>
using namespace std;

void showTheTasks(map<string, int>& Project) {
	for (auto it = Project.begin(); it != Project.end(); it++ ){ 
		cout << it->first << " (" << it->second << " members"<< ")" << endl;
	}
}
void addTask(map<string, int>& Project) {
	string taskName;
	int members;

	cout << "What is the task name?" << endl;
	cin >> taskName;
	cout << "How many members to this task" << endl;
	cin >> members;

	if (Project.count(taskName) > 0)
	{
		Project.at(taskName) += members;
		cout << "New designer has joined aour team " << endl;
	}
	else {
		Project.emplace(taskName, members);
		cout << "We have created a new task with vacances" << endl;
	}
	
}
void removeTasks(map<string, int>& Project) {
	string taskToRemove;
	cin >> taskToRemove;
	Project.erase(taskToRemove);
	} 


void  changeTask(map<string, int>& Project) {
	string oldTaskName;
	int members;

	string newTaskName;

	cout << "What task would you like to change?" << endl;
	cin >> oldTaskName;
	

	cout << "What will be the new task name?" << endl;
	cin >> newTaskName;
	
}


int main()
{
	map<string, int>Project;

	int projectStep = -1;
	while (projectStep != 0){
		cout << ("Choose an option what you want to do") << endl;
		cout << ("1. Show the project tasks") << endl;
		cout << ("2. Add a task to the projects list") << endl;
		cout << ("3. Remove a task from the project list") << endl;
		cout << ("4. Change task") << endl;

		cin >> projectStep;

		if (projectStep == 1) {
			showTheTasks(Project);
		}
		else if (projectStep == 2) {
			addTask(Project);
		}
		else if (projectStep == 3) {
			removeTasks(Project);
		}
		else if (projectStep == 4) {
			changeTask(Project);
		}
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

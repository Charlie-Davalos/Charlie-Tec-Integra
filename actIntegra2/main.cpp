#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "algorithms.h"
using namespace std;

// Functions declaration
vector<vector<string>> readData();
template<typename T>
void outputData(vector<vector<T>> data, int start, int end);
template<typename T>
vector<vector<T>> sortData(vector<vector<T>>& data, int start, int end, int varIndex);
void casosPrueba();


// Main
int main() {
	int answer;
	vector<vector<string>> data = readData();
	do {
		cout << "\nWelcome to the the CO2 emissions Worldwide database, please select an option\n";
		cout << "0. Exit\n";
		cout << "1. Output dataset\n";
		cout << "2. Sort by variable (ascending)\n";
		cin >> answer;
		cout << endl;

		switch(answer){
			case 1: {
				int start;
				int end;
				cout << "Start row (min. 0) -> ";
				cin >> start;
				cout << "End row (max. 20853) -> ";
				cin >> end;
				outputData(data, start, end);
				break;
			}
			case 2: {
				string variableName;
				int index;
				cout << "Enter variable name\n";
				cout << "2. Year\n";
				cout << "3. CO2 emissions\n-> ";
				cin >> index;
				int start;
				int end;
				cout << "Start row (min. 0) -> ";
				cin >> start;
				cout << "End row (max. 20853) -> ";
				cin >> end;
				vector<vector<string>> sortedData = sortData(data, start, end, index);
				outputData(sortedData, start, end);
				break;
			}
		}
	} while (answer != 0);
}


// Read data
vector<vector<string>> readData() {
	vector<vector<string>> data;
	// Read file
	ifstream file;
	file.open("co2_emission.csv");
	while(file.good()){
		string str_entity;
		string str_code;
		string str_year;
		string str_co2;
		// Read line
		getline(file, str_entity, ',');
		getline(file, str_code, ',');
		getline(file, str_year, ',');
		getline(file, str_co2, '\n');
		// Append to the vector
		vector<string> row;
		row.push_back(str_entity);
		row.push_back(str_code);
		row.push_back(str_year);
		row.push_back(str_co2);
		data.push_back(row);
	}
	file.close();
	return data;
}


// Print vector
template<typename T>
void outputData(vector<vector<T>> data, int start, int end){
	cout << "\nENTITY     CODE     YEAR     CO2-EMISSIONS\n";
	for(int i=start; i<end; i++){
		cout << data[i][0] << "    ";
		cout << data[i][1] << "    ";
		cout << data[i][2] << "    ";
		cout << data [i][3] << endl;
	}
	cout << "\n\n";
}

// Sort
template<typename T>
vector<vector<T>> sortData(vector<vector<T>>& data, int start, int end, int varIndex){
	vector<vector<T>> rangedVector;
	for (int i=start; i<end; i++){
		rangedVector.push_back(data[i]);
	}
	sort(rangedVector, varIndex);

	return rangedVector;
}

void casosPrueba(){

}
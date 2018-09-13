#include <iostream>
#include <iomanip>
#include <cstring>
#include <istream>

using namespace std;

int batteries;
bool CAR;
bool FRK;
int Parallel;
bool vowel;
bool even;

void information();
void wires();
void button();
void keypad();
void simonsays();
void whosonfirst();
void memory();
void morsecode();
void complicatedwires();
void wiresequence();
void maze();
void password();

void main()
{
	char module[17];
	char more;

	information();

	/*if (::vowel == 1) {
		cout << "The Serial Number has at least one vowel." << endl;
	}
	else {
		cout << "The Serial Number does not have a vowel." << endl;
	}
	if (::even == 1) {
		cout << "The Last Digit of the Serial Number is even." << endl;
	}
	else {
		cout << "The Last Digit of the Serial Number is odd." << endl;
	}
	cout << "There are " << ::batteries << " batteries on the bomb." << endl;
	if (::CAR == 1) {
		cout << "Indicator CAR is illuminated." << endl;
	}
	else {
		cout << "Indicator CAR is not illuminated." << endl;
	}
	if (::FRK == 1) {
		cout << "Indicator FRK is illuminated." << endl;
	}
	else {
		cout << "Indicator FRK is not illuminated." << endl;
	}
	cout << "There are " << ::Parallel << " Parallel Ports." << endl;*/

	do
	{
		cout << endl << "Which module? ";
		cin.ignore();
		cin.getline(module, 17);
		for (int i = 0; i < 17; i++)
		{
			module[i] = toupper(module[i]);
		}
		if (strcmp(module, "WIRES") == 0) {
			wires();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "BUTTON") == 0) {
			button();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "KEYPAD") == 0) {
			keypad();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "SIMONSAYS") == 0) {
			simonsays();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "WHOSONFIRST") == 0) {
			whosonfirst();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "MEMORY") == 0) {
			memory();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "MORSECODE") == 0) {
			morsecode();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "COMPLICATEDWIRES") == 0) {
			complicatedwires();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "WIRESEQUENCE") == 0) {
			wiresequence();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "MAZE") == 0) {
			maze();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "PASSWORD") == 0) {
			password();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else {
			cout << endl << "Enter a valid input.";
			more = 'Y';
		}
	} while (toupper(more) == 'Y');
}

void information()
{
	char line[7];
	char *strPtr = nullptr;
	char CAR;
	char FRK;

	cout << "Enter the Serial Number: ";
	cin.getline(line, 7);
	for (int i = 0; i < 7; i++)
	{
		line[i] = toupper(line[i]);
	}
	cout << "How many batteries? ";
	cin >> ::batteries;
	cout << "Is CAR illuminated?(Y/N) ";
	CAR:
	cin >> CAR;
	if (toupper(CAR) == 'Y') {
		::CAR = 1;
	}
	else if (toupper(CAR) == 'N') {
		::CAR = 0;
	}
	else {
		cout << "Enter a valid response.";
		goto CAR;
	}
	cout << "Is FRK illuminated?(Y/N) ";
	FRK:
	cin >> FRK;
	if (toupper(FRK) == 'Y') {
		::FRK = 1;
	}
	else if (toupper(FRK) == 'N') {
		::FRK = 0;
	}
	else {
		cout << "Enter a valid response.";
		goto FRK;
	}
	cout << "How many parallel ports? ";
	cin >> ::Parallel;

	//Test for Vowels
	if (strstr(line, "A") != 0 || strstr(line, "E") != 0 || strstr(line, "I") != 0 || strstr(line, "O") != 0 || strstr(line, "U") != 0) {
		::vowel = 1;
	}
	else {
		::vowel = 0;
	}

	//Test if Last Digit is even
	strPtr = strstr(line, "2");
	if ((strstr(line, "2") != 0) && ((std::char_traits<char>::length(strPtr)) == 1)) {
		::even = 1;
	}
	else {
		strPtr = strstr(line, "4");
		if ((strstr(line, "4") != 0) && ((std::char_traits<char>::length(strPtr)) == 1)) {
			::even = 1;
		}
		else {
			strPtr = strstr(line, "6");
			if ((strstr(line, "6") != 0) && ((std::char_traits<char>::length(strPtr)) == 1)) {
				::even = 1;
			}
			else {
				strPtr = strstr(line, "8");
				if ((strstr(line, "8") != 0) && ((std::char_traits<char>::length(strPtr)) == 1)) {
					::even = 1;
				}
				else {
					::even = 0;
				}
			}
		}
	}
}

void wires()
{
	int wires;
	int red;
	int blue;
	int yellow;
	int black;
	int white;
	char test;

	cout << "How many wires? ";
	cin >> wires;
	if (wires == 3) {
		cout << endl << "How many red wires? ";
		cin >> red;
		if (red == 0) {
			cout << endl << "Cut the second wire.";
		}
		else {
			cout << endl << "Is the last wire white?(Y/N) ";
			cin >> test;
			if (toupper(test) == 'Y') {
				cout << endl << "Cut the last wire.";
			}
			else if (toupper(test) == 'N') {
				cout << endl << "How many blue wires? ";
				cin >> blue;
				if (blue > 1) {
					cout << endl << "Cut the last blue wire.";
				}
				else {
					cout << endl << "Cut the last wire.";
				}
			}

		}
	}
	if (wires == 4) {
		cout << endl << "How many red wires? ";
		cin >> red;
		if ((red > 1) && (::even != 1)) {
			cout << endl << "Cut the last red wire.";
		}
		else {
			cout << endl << "Is the last wire yellow?(Y/N) ";
			cin >> test;
			if ((toupper(test) == 'Y') && (red == 0)) {
				cout << endl << "Cut the first wire.";
			}
			else {
				cout << endl << "How many blue wires? ";
				cin >> blue;
				if (blue == 1) {
					cout << endl << "Cut the first wire.";
				}
				else {
					cout << endl << "How many yellow wires? ";
					cin >> yellow;
					if (yellow > 1) {
						cout << endl << "Cut the last wire.";
					}
					else {
						cout << endl << "Cut the second wire.";
					}
				}
			}
		}
	}
	if (wires == 5) {
		cout << endl << "Is the last wire black?(Y/N) ";
		cin >> test;
		if ((toupper(test) == 'Y') && (::even != 1)) {
			cout << endl << "Cut the fourth wire.";
		}
		else {
			cout << endl << "How many red wires? ";
			cin >> red;
			cout << endl << "How many yellow wires? ";
			cin >> yellow;
			if ((red == 1) && (yellow > 1)) {
				cout << endl << "Cut the first wire.";
			}
			else {
				cout << endl << "How many black wires? ";
				cin >> black;
				if (black == 0) {
					cout << endl << "Cut the second wire.";
				}
				else {
					cout << endl << "Cut the first wire.";
				}
			}
		}
	}
	if (wires == 6) {
		cout << endl << "How many yellow wires? ";
		cin >> yellow;
		if ((yellow == 0) && (::even != 1)) {
			cout << endl << "Cut the third wire.";
		}
		else {
			cout << endl << "How many white wires? ";
			cin >> white;
			if ((yellow == 1) && (white > 1)) {
				cout << endl << "Cut the fourth wire.";
			}
			else {
				cout << endl << "How many red wires? ";
				cin >> red;
				if (red == 0) {
					cout << endl << "Cut the last wire.";
				}
				else {
					cout << endl << "Cut the fourth wire.";
				}
			}
		}
	}
}

void button()
{
	char color[7];
	char text[9];
	char strip[7];

	cout << endl << "What is the color of the button? ";
	cin.getline(color, 7);
	for (int i = 0; i < 7; i++)
	{
		color[i] = toupper(color[i]);
	}
	cout << endl << "What is the text on the button? ";
	for (int i = 0; i < 9; i++)
	{
		text[i] = toupper(text[i]);
	}
	if (((::batteries > 2) && (::FRK == 1)) || ((::batteries > 1) && ((strcmp(text, "DETONATE") == 0))) || ((strcmp(color, "RED") == 0) && (strcmp(text, "HOLD") == 0))) {
		cout << endl << "Press the button.";
	}
	else {
		cout << endl << "Press and hold the button.";
		cout << endl << "What is the color of the strip? ";
		cin.getline(strip, 7);
		for (int i = 0; i < 7; i++)
		{
			strip[i] = toupper(strip[i]);
		}
		if ((strcmp(strip, "BLUE") == 0)) {
			cout << endl << "Release when there is a 4 in any position.";
		}
		else if ((strcmp(strip, "YELLOW") == 0)) {
			cout << endl << "Release when there is a 5 in any position.";
		}
		else {
			cout << endl << "Release when there is a 1 in any position.";
		}
	}
}

void keypad()
{

}

void simonsays()
{
	int strikes;
	char color[7];
	char next;

	simonsays:
	cout << endl << "How many strikes? ";
	cin >> strikes;
	cout << endl << "Which color is blinking? ";
	cin.getline(color, 7);
	for (int i = 0; i < 7; i++)
	{
		color[i] = toupper(color[i]);
	}
	if (strikes == 0) {
		if (::vowel == 1) {
			if (strcmp(color, "RED") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "BLUE") == 0) {
				cout << endl << "Press red.";
			}
			else if (strcmp(color, "GREEN") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "YELLOW") == 0) {
				cout << endl << "Press green.";
			}
			else {
				cout << endl << "Input a valid color.";
				goto simonsays;
			}
		}
		else {
			if (strcmp(color, "RED") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "BLUE") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "GREEN") == 0) {
				cout << endl << "Press green.";
			}
			else if (strcmp(color, "YELLOW") == 0) {
				cout << endl << "Press red.";
			}
			else {
				cout << endl << "Input a valid color.";
				goto simonsays;
			}
		}
	}
	else if (strikes == 1) {
		if (::vowel == 1) {
			if (strcmp(color, "RED") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "BLUE") == 0) {
				cout << endl << "Press green.";
			}
			else if (strcmp(color, "GREEN") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "YELLOW") == 0) {
				cout << endl << "Press red.";
			}
			else {
				cout << endl << "Input a valid color.";
				goto simonsays;
			}
		}
		else {
			if (strcmp(color, "RED") == 0) {
				cout << endl << "Press red.";
			}
			else if (strcmp(color, "BLUE") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "GREEN") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "YELLOW") == 0) {
				cout << endl << "Press green.";
			}
			else {
				cout << endl << "Input a valid color.";
				goto simonsays;
			}
		}
	}
	else if (strikes == 2) {
		if (::vowel == 1) {
			if (strcmp(color, "RED") == 0) {
				cout << endl << "Press green.";
			}
			else if (strcmp(color, "BLUE") == 0) {
				cout << endl << "Press red.";
			}
			else if (strcmp(color, "GREEN") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "YELLOW") == 0) {
				cout << endl << "Press blue.";
			}
			else {
				cout << endl << "Input a valid color.";
				goto simonsays;
			}
		}
		else {
			if (strcmp(color, "RED") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "BLUE") == 0) {
				cout << endl << "Press green.";
			}
			else if (strcmp(color, "GREEN") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "YELLOW") == 0) {
				cout << endl << "Press red.";
			}
			else {
				cout << endl << "Input a valid color.";
				goto simonsays;
			}
		}
	}
	next:
	cout << endl << "Next color?(Y/N) ";
	cin >> next;
	if (toupper(next) == 'Y') {
		goto simonsays;
	}
	else if (toupper(next) == 'N') {
		return;
	}
	else {
		cout << endl << "Enter a valid input.";
		goto next;
	}
}

void whosonfirst()
{
	char display[9];
	char label[8];
	char more;

	checkDisplay:
		cout << endl << "Enter the word on the display. ";
		cin.getline(display, 9);
		for (int i = 0; i < 9; i++)
		{
			display[i] = toupper(display[i]);
		}

		if (strcmp(display, "UR") == 0) {
			cout << endl << "Enter the label of the first column, first row. ";
		}
		else if ((strcmp(display, "FIRST") == 0) || (strcmp(display, "OKAY") == 0) || (strcmp(display, "C") == 0)) {
			cout << endl << "Enter the label of the second column, first row. ";
		}
		else if ((strcmp(display, "YES") == 0) || (strcmp(display, "NOTHING") == 0) || (strcmp(display, "LED") == 0) || (strcmp(display, "THEY ARE") == 0)) {
			cout << endl << "Enter the label of the first column, second row. ";
		}
		else if ((strcmp(display, "BLANK") == 0) || (strcmp(display, "READ") == 0) || (strcmp(display, "RED") == 0) || (strcmp(display, "YOU") == 0) || (strcmp(display, "YOUR") == 0) || (strcmp(display, "YOU'RE") == 0) || (strcmp(display, "THEIR") == 0)) {
			cout << endl << "Enter the label of the second column, second row. ";
		}
		else if ((strcmp(display, "EMPTY") == 0) || (strcmp(display, "REED") == 0) || (strcmp(display, "LEED") == 0) || (strcmp(display, "THEY'RE") == 0)) {
			cout << endl << "Enter the label of the first column, third row. ";
		}
		else if ((strcmp(display, "DISPLAY") == 0) || (strcmp(display, "SAYS") == 0) || (strcmp(display, "NO") == 0) || (strcmp(display, "LEAD") == 0) || (strcmp(display, "HOLD ON") == 0) || (strcmp(display, "YOU ARE") == 0) || (strcmp(display, "THERE") == 0) || (strcmp(display, "SEE") == 0) || (strcmp(display, "CEE") == 0)) {
			cout << endl << "Enter the label of the second column, third row. ";
		}
		else {
			cout << endl << "Enter a valid display word unless the display is blank, then enter 'empty.'";
			goto checkDisplay;
		}

	checkLabel:
		cin.getline(label, 8);
		for (int i = 0; i < 8; i++)
		{
			label[i] = toupper(label[i]);
		}

		if (strcmp(label, "READY") == 0) {
			cout << endl << "Push YES, OKAY, WHAT, MIDDLE, LEFT, PRESS, RIGHT, BLANK, READY";
		}
		else if (strcmp(label, "FIRST") == 0) {
			cout << endl << "Push LEFT, OKAY, YES, MIDDLE, NO, RIGHT, NOTHING, UHHH, WAIT, READY, BLANK, WHAT, PRESS, FIRST";
		}
		else if (strcmp(label, "NO") == 0) {
			cout << endl << "Push BLANK, UHHH, WAIT, FIRST, WHAT, READY, RIGHT, YES, NOTHING, LEFT, PRESS, OKAY, NO";
		}
		else if (strcmp(label, "BLANK") == 0) {
			cout << endl << "Push WAIT, RIGHT, OKAY, MIDDLE, BLANK";
		}
		else if (strcmp(label, "NOTHING") == 0) {
			cout << endl << "Push UHHH, RIGHT, OKAY, MIDDLE, YES, BLANK, NO, PRESS, LEFT, WHAT, WAIT, FIRST, NOTHING";
		}
		else if (strcmp(label, "YES") == 0) {
			cout << endl << "Push OKAY, RIGHT, UHHH, MIDDLE, FIRST, WHAT, PRESS, READY, NOTHING, YES";
		}
		else if (strcmp(label, "WHAT") == 0) {
			cout << endl << "Push UHHH, WHAT";
		}
		else if (strcmp(label, "UHHH") == 0) {
			cout << endl << "Push READY, NOTHING, LEFT, WHAT, OKAY, YES, RIGHT, NO, PRESS, BLANK, UHHH";
		}
		else if (strcmp(label, "LEFT") == 0) {
			cout << endl << "Push RIGHT, LEFT";
		}
		else if (strcmp(label, "RIGHT") == 0) {
			cout << endl << "Push YES, NOTHING, READY, PRESS, NO, WAIT, WHAT, RIGHT";
		}
		else if (strcmp(label, "MIDDLE") == 0) {
			cout << endl << "Push BLANK, READY, OKAY, WHAT, NOTHING, PRESS, NO, WAIT, LEFT, MIDDLE";
		}
		else if (strcmp(label, "OKAY") == 0) {
			cout << endl << "Push MIDDLE, NO, FIRST, YES, UHHH, NOTHING, WAIT, OKAY";
		}
		else if (strcmp(label, "WAIT") == 0) {
			cout << endl << "Push UHHH, NO, BLANK, OKAY, YES, LEFT, FIRST, PRESS, WHAT, WAIT";
		}
		else if (strcmp(label, "PRESS") == 0) {
			cout << endl << "Push RIGHT, MIDDLE, YES, READY, PRESS";
		}
		else if (strcmp(label, "YOU") == 0) {
			cout << endl << "Push SURE, YOU ARE, YOUR, YOU'RE, NEXT, UH HUH, UR, HOLD, WHAT?, YOU";
		}
		else if (strcmp(label, "YOU ARE") == 0) {
			cout << endl << "Push YOUR, NEXT, LIKE, UH HUH, WHAT?, DONE, UH UH, HOLD, YOU, U, YOU'RE, SURE, UR, YOU ARE";
		}
		else if (strcmp(label, "YOUR") == 0) {
			cout << endl << "Push UH UH, YOU ARE, UH HUH, YOUR";
		}
		else if (strcmp(label, "YOU'RE") == 0) {
			cout << endl << "Push YOU, YOU'RE";
		}
		else if (strcmp(label, "UR") == 0) {
			cout << endl << "Push DONE, U, UR";
		}
		else if (strcmp(label, "U") == 0) {
			cout << endl << "Push UH HUH, SURE, NEXT, WHAT?, YOU'RE, UR, UH UH, DONE, U";
		}
		else if (strcmp(label, "UH HUH") == 0) {
			cout << endl << "Push UH HUH";
		}
		else if (strcmp(label, "UH UH") == 0) {
			cout << endl << "Push UR, U, YOU ARE, YOU'RE, NEXT, UH UH";
		}
		else if (strcmp(label, "WHAT?") == 0) {
			cout << endl << "Push YOU, HOLD, YOU'RE, YOUR, U, DONE, UH UH, LIKE, YOU ARE, UH HUH, UR, NEXT, WHAT?";
		}
		else if (strcmp(label, "DONE") == 0) {
			cout << endl << "Push SURE, UH HUH, NEXT, WHAT?, YOUR, UR, YOU'RE, HOLD, LIKE, YOU, U, YOU ARE, UH UH, DONE";
		}
		else if (strcmp(label, "NEXT") == 0) {
			cout << endl << "Push WHAT?, UH HUH, UH UH, YOUR, HOLD, SURE, NEXT";
		}
		else if (strcmp(label, "HOLD") == 0) {
			cout << endl << "Push YOU ARE, U, DONE, UH UH, YOU, UR, SURE, WHAT?, YOU'RE, NEXT, HOLD";
		}
		else if (strcmp(label, "SURE") == 0) {
			cout << endl << "Push YOU ARE, DONE, LIKE, YOU'RE, YOU, HOLD, UH HUH, UR, SURE";
		}
		else if (strcmp(label, "LIKE") == 0) {
			cout << endl << "Push YOU'RE, NEXT, U, UR, HOLD, DONE, UH UH, WHAT?, UH HUH, YOU, LIKE";
		}
		else {
			cout << endl << "Enter a valid label word.";
			goto checkLabel;
		}
	
	next:
	cout << endl << "Next stage?(Y/N) ";
	cin >> more;
	if (toupper(more) == 'Y') {
		goto checkDisplay;
	}
	else if (toupper(more) == 'N') {
		return;
	}
	else {
		cout << endl << "Enter a valid input.";
		goto next;
	}

}

void memory()
{
	int one_dis;
	int one_one;
	int one_two;
	int one_three;
	int one_four;
	int one_resultPos;
	int one_resultLab;
	int two_dis;
	int two_one;
	int two_two;
	int two_three;
	int two_four;
	int two_resultPos;
	int two_resultLab;
	int three_dis;
	int three_one;
	int three_two;
	int three_three;
	int three_four;
	int three_resultPos;
	int three_resultLab;
	int four_dis;
	int four_one;
	int four_two;
	int four_three;
	int four_four;
	int four_resultPos;
	int four_resultLab;
	int five_dis;
	int five_one;
	int five_two;
	int five_three;
	int five_four;
	char correct;

StageOne:
	cout << endl << "Stage One: enter the number on the display and all four positions separated by spaces.";
	cin >> one_dis >> one_one >> one_two >> one_three >> one_four;
	if ((one_dis == 1) || (one_dis == 2)) {
		cout << endl << "Press the button labeled " << one_two;
		one_resultPos = 2;
		one_resultLab = one_two;
	}
	else if (one_dis == 3) {
		cout << endl << "Press the button labeled " << one_three;
		one_resultPos = 3;
		one_resultLab = one_three;
	}
	else if (one_dis == 4) {
		cout << endl << "Press the button labeled " << one_four;
		one_resultPos = 4;
		one_resultLab = one_four;
	}
	else {
		cout << endl << "Please enter a valid number array.";
		goto StageOne;
	}

CheckCorrectOne:
	cout << endl << "Correct?(Y/N) ";
	cin >> correct;
	if (toupper(correct) == 'Y') {
		goto StageTwo;
	}
	else if (toupper(correct) == 'N') {
		goto StageOne;
	}
	else {
		cout << endl << "Enter a valid input.";
		goto CheckCorrectOne;
	}

StageTwo:
	cout << endl << "Stage Two: enter the number on the display and all four positions separated by spaces.";
	cin >> two_dis >> two_one >> two_two >> two_three >> two_four;
	if (two_dis == 1) {
		cout << endl << "Press the button labeled '4'";
		cout << endl << "What position? ";
		cin >> two_resultPos;
		two_resultLab = 4;
	}
	else if ((two_dis == 2) || (two_dis == 4)) {
		cout << endl << "Press the button in position " << one_resultPos;
		cout << endl << "What label? ";
		cin >> two_resultLab;
		two_resultPos = one_resultPos;
	}
	else if (two_dis == 3) {
		cout << endl << "Press the button in the first position";
		two_resultPos = 1;
		two_resultLab = two_one;
	}
	else {
		cout << endl << "Please enter a valid number array.";
		goto StageTwo;
	}

CheckCorrectTwo:
	cout << endl << "Correct?(Y/N) ";
	cin >> correct;
	if (toupper(correct) == 'Y') {
		goto StageThree;
	}
	else if (toupper(correct) == 'N') {
		goto StageOne;
	}
	else {
		cout << endl << "Enter a valid input.";
		goto CheckCorrectTwo;
	}

StageThree:
	cout << endl << "Stage Three: enter the number on the display and all four positions separated by spaces.";
	cin >> three_dis >> three_one >> three_two >> three_three >> three_four;
	if (three_dis == 1) {
		cout << endl << "Press the button with the label '" << two_resultLab << "'";
		cout << endl << "What position? ";
		cin >> three_resultPos;
		three_resultLab = two_resultLab;
	}
	else if (three_dis == 2) {
		cout << endl << "Press the button with the label '" << one_resultLab << "'";
		cout << endl << "What position? ";
		cin >> three_resultPos;
		three_resultLab = one_resultLab;
	}
	else if (three_dis == 3) {
		cout << endl << "Press the button in the third position";
		three_resultPos = 3;
		three_resultLab = three_three;
	}
	else if (three_dis == 4) {
		cout << endl << "Press the button labeled '4'";
		cout << endl << "What position? ";
		cin >> three_resultPos;
		three_resultLab = 4;
	}
	else {
		cout << endl << "Please enter a valid number array.";
		goto StageThree;
	}

CheckCorrectThree:
	cout << endl << "Correct?(Y/N) ";
	cin >> correct;
	if (toupper(correct) == 'Y') {
		goto StageFour;
	}
	else if (toupper(correct) == 'N') {
		goto StageOne;
	}
	else {
		cout << endl << "Enter a valid input.";
		goto CheckCorrectThree;
	}

StageFour:
	cout << endl << "Stage Four: enter the number on the display and all four positions separated by spaces.";
	cin >> four_dis >> four_one >> four_two >> four_three >> four_four;
	if (four_dis == 1) {
		cout << endl << "Press the button in position " << one_resultPos;
		cout << endl << "What label? ";
		cin >> four_resultLab;
		four_resultPos = one_resultPos;
	}
	else if (four_dis == 2) {
		cout << endl << "Press the button in the first position";
		four_resultPos = 1;
		four_resultLab = four_one;
	}
	else if ((four_dis == 3) || (four_dis == 4)) {
		cout << endl << "Press the button in position " << two_resultPos;
		cout << endl << "What label? ";
		cin >> four_resultLab;
		four_resultPos = two_resultPos;
	}
	else {
		cout << endl << "Please enter a valid number array.";
		goto StageFour;
	}

CheckCorrectFour:
	cout << endl << "Correct?(Y/N) ";
	cin >> correct;
	if (toupper(correct) == 'Y') {
		goto StageFive;
	}
	else if (toupper(correct) == 'N') {
		goto StageOne;
	}
	else {
		cout << endl << "Enter a valid input.";
		goto CheckCorrectFour;
	}

StageFive:
	cout << endl << "Stage Five: enter the number on the display and all four positions separated by spaces.";
	cin >> five_dis >> five_one >> five_two >> five_three >> five_four;
	if (five_dis == 1) {
		cout << endl << "Press the button labeled '" << one_resultLab << "'";
	}
	else if (five_dis == 2) {
		cout << endl << "Press the button labeled '" << two_resultLab << "'";
	}
	else if (five_dis == 3) {
		cout << endl << "Press the button labeled '" << four_resultLab << "'";
	}
	else if (five_dis == 4) {
		cout << endl << "Press the button labeled '" << three_resultLab << "'";
	}
	else {
		cout << endl << "Please enter a valid number array.";
		goto StageFive;
	}

CheckCorrectFive:
	cout << endl << "Correct?(Y/N) ";
	cin >> correct;
	if (toupper(correct) == 'Y') {
	}
	else if (toupper(correct) == 'N') {
		goto StageOne;
	}
	else {
		cout << endl << "Enter a valid input.";
		goto CheckCorrectFive;
	}
}

void morsecode()
{

}

void complicatedwires()
{
	char color[6];
	bool star;
	bool led;
	char next;

	cout << endl << "Describe the wire by its color, status of star, and status of led, separated by spaces.";
	cout << endl << "Example: \"BOTH 1 0\" and \"WHITE 0 0\"" << endl;
	cin >> color >> star >> led;
	if (strcmp(color, "WHITE") == 0) {
		if ((star == 0) && (led == 0)) {
			cout << endl << "Cut the wire";
		}
		else if ((star == 0) && (led == 1)) {
			cout << endl << "Do not cut the wire";
		}
		else if ((star == 1) && (led == 0)) {
			cout << endl << "Cut the wire";
		}
		else if ((star == 1) && (led == 1)) {
			if (::batteries >= 2) {
				cout << endl << "Cut the wire";
			}
			else {
				cout << endl << "Do not cut the wire";
			}
		}
	}
	else if (strcmp(color, "RED") == 0) {
		if ((star == 0) && (led == 0)) {
			if (::even == 1) {
				cout << endl << "Cut the wire";
			}
			else if (::even == 0) {
				cout << endl << "Do not cut the wire";
			}
		}
		else if ((star == 0) && (led == 1)) {
			if (::batteries >= 2) {
				cout << endl << "Cut the wire";
			}
			else {
				cout << endl << "Do not cut the wire";
			}
		}
		else if ((star == 1) && (led == 0)) {
			cout << endl << "Cut the wire";
		}
		else if ((star == 1) && (led == 1)) {
			if (::batteries >= 2) {
				cout << endl << "Cut the wire";
			}
			else {
				cout << endl << "Do not cut the wire";
			}
		}
	}
	else if (strcmp(color, "BLUE") == 0) {
		if ((star == 0) && (led == 0)) {
			if (::even == 1) {
				cout << endl << "Cut the wire";
			}
			else if (::even == 0) {
				cout << endl << "Do not cut the wire";
			}
		}
		else if ((star == 0) && (led == 1)) {
			if (::Parallel >= 1) {
				cout << endl << "Cut the wire";
			}
			else {
				cout << endl << "Do not cut the wire";
			}
		}
		else if ((star == 1) && (led == 0)) {
			cout << endl << "Do not cut the wire";
		}
		else if ((star == 1) && (led == 1)) {
			if (::Parallel >= 1) {
				cout << endl << "Cut the wire";
			}
			else {
				cout << endl << "Do not cut the wire";
			}
		}
	}
	else if (strcmp(color, "BOTH") == 0) {
		if ((star == 0) && (led == 0)) {
			if (::even == 1) {
				cout << endl << "Cut the wire";
			}
			else if (::even == 0) {
				cout << endl << "Do not cut the wire";
			}
		}
		else if ((star == 0) && (led == 1)) {
			if (::even == 1) {
				cout << endl << "Cut the wire";
			}
			else if (::even == 0) {
				cout << endl << "Do not cut the wire";
			}
		}
		else if ((star == 1) && (led == 0)) {
			if (::Parallel >= 1) {
				cout << endl << "Cut the wire";
			}
			else {
				cout << endl << "Do not cut the wire";
			}
		}
		else if ((star == 1) && (led == 1)) {
			cout << endl << "Do not cut the wire";
		}
	}

Next:
	cout << endl << "Next wire?(Y/N) ";
	cin >> next;
	if (toupper(next) == 'Y') {
		complicatedwires();
	}
	else if (toupper(next) == 'N') {
	}
	else {
		cout << endl << "Enter a valid response.";
		goto Next;
	}
}

void wiresequence()
{

}

void maze()
{

}

void password()
{
	char one_one;
	char one_two;
	char one_three;
	char one_four;
	char one_five;
	char one_six;
	char two_one;
	char two_two;
	char two_three;
	char two_four;
	char two_five;
	char two_six;
	char three_one;
	char three_two;
	char three_three;
	char three_four;
	char three_five;
	char three_six;

	cout << endl << "Enter the 6 letters of the first column, separated by spaces" << endl;
	cin >> one_one >> one_two >> one_three >> one_four >> one_five >> one_six;
	cout << endl << "Enter the 6 letters of the second column, separated by spaces" << endl;
	cin >> two_one >> two_two >> two_three >> two_four >> two_five >> two_six;
	cout << endl << "Enter the 6 letters of the third column, separated by spaces" << endl;
	cin >> three_one >> three_two >> three_three >> three_four >> three_five >> three_six;

	if ((toupper(one_one) == 'A') || (toupper(one_two) == 'A') || (toupper(one_three) == 'A') || (toupper(one_four) == 'A') || (toupper(one_five) == 'A') || (toupper(one_six) == 'A')) {
		if ((toupper(two_one) == 'B') || (toupper(two_two) == 'B') || (toupper(two_three) == 'B') || (toupper(two_four) == 'B') || (toupper(two_five) == 'B') || (toupper(two_six) == 'B')) {
			if ((toupper(three_one) == 'O') || (toupper(three_two) == 'O') || (toupper(three_three) == 'O') || (toupper(three_four) == 'O') || (toupper(three_five) == 'O') || (toupper(three_six) == 'O')) {
				cout << endl << "The password may be 'ABOUT'";
			}
		}
		if ((toupper(two_one) == 'F') || (toupper(two_two) == 'F') || (toupper(two_three) == 'F') || (toupper(two_four) == 'F') || (toupper(two_five) == 'F') || (toupper(two_six) == 'F')) {
			if ((toupper(three_one) == 'T') || (toupper(three_two) == 'T') || (toupper(three_three) == 'T') || (toupper(three_four) == 'T') || (toupper(three_five) == 'T') || (toupper(three_six) == 'T')) {
				cout << endl << "The password may be 'AFTER'";
			}
		}
		if ((toupper(two_one) == 'G') || (toupper(two_two) == 'G') || (toupper(two_three) == 'G') || (toupper(two_four) == 'G') || (toupper(two_five) == 'G') || (toupper(two_six) == 'G')) {
			if ((toupper(three_one) == 'A') || (toupper(three_two) == 'A') || (toupper(three_three) == 'A') || (toupper(three_four) == 'A') || (toupper(three_five) == 'A') || (toupper(three_six) == 'A')) {
				cout << endl << "The password may be 'AGAIN'";
			}
		}
	}
	if ((toupper(one_one) == 'B') || (toupper(one_two) == 'B') || (toupper(one_three) == 'B') || (toupper(one_four) == 'B') || (toupper(one_five) == 'B') || (toupper(one_six) == 'B')) {
		if ((toupper(two_one) == 'E') || (toupper(two_two) == 'E') || (toupper(two_three) == 'E') || (toupper(two_four) == 'E') || (toupper(two_five) == 'E') || (toupper(two_six) == 'E')) {
			if ((toupper(three_one) == 'L') || (toupper(three_two) == 'L') || (toupper(three_three) == 'L') || (toupper(three_four) == 'L') || (toupper(three_five) == 'L') || (toupper(three_six) == 'L')) {
				cout << endl << "The password may be 'BELOW'";
			}
		}
	}
	if ((toupper(one_one) == 'C') || (toupper(one_two) == 'C') || (toupper(one_three) == 'C') || (toupper(one_four) == 'C') || (toupper(one_five) == 'C') || (toupper(one_six) == 'C')) {
		if ((toupper(two_one) == 'O') || (toupper(two_two) == 'O') || (toupper(two_three) == 'O') || (toupper(two_four) == 'O') || (toupper(two_five) == 'O') || (toupper(two_six) == 'O')) {
			if ((toupper(three_one) == 'U') || (toupper(three_two) == 'U') || (toupper(three_three) == 'U') || (toupper(three_four) == 'U') || (toupper(three_five) == 'U') || (toupper(three_six) == 'U')) {
				cout << endl << "The password may be 'COULD'";
			}
		}
	}
	if ((toupper(one_one) == 'E') || (toupper(one_two) == 'E') || (toupper(one_three) == 'E') || (toupper(one_four) == 'E') || (toupper(one_five) == 'E') || (toupper(one_six) == 'E')) {
		if ((toupper(two_one) == 'V') || (toupper(two_two) == 'V') || (toupper(two_three) == 'V') || (toupper(two_four) == 'V') || (toupper(two_five) == 'V') || (toupper(two_six) == 'V')) {
			if ((toupper(three_one) == 'E') || (toupper(three_two) == 'E') || (toupper(three_three) == 'E') || (toupper(three_four) == 'E') || (toupper(three_five) == 'E') || (toupper(three_six) == 'E')) {
				cout << endl << "The password may be 'EVERY'";
			}
		}
	}
	if ((toupper(one_one) == 'F') || (toupper(one_two) == 'F') || (toupper(one_three) == 'F') || (toupper(one_four) == 'F') || (toupper(one_five) == 'F') || (toupper(one_six) == 'F')) {
		if ((toupper(two_one) == 'I') || (toupper(two_two) == 'I') || (toupper(two_three) == 'I') || (toupper(two_four) == 'I') || (toupper(two_five) == 'I') || (toupper(two_six) == 'I')) {
			if ((toupper(three_one) == 'R') || (toupper(three_two) == 'R') || (toupper(three_three) == 'R') || (toupper(three_four) == 'R') || (toupper(three_five) == 'R') || (toupper(three_six) == 'R')) {
				cout << endl << "The password may be 'FIRST'";
			}
		}
		if ((toupper(two_one) == 'O') || (toupper(two_two) == 'O') || (toupper(two_three) == 'O') || (toupper(two_four) == 'O') || (toupper(two_five) == 'O') || (toupper(two_six) == 'O')) {
			if ((toupper(three_one) == 'U') || (toupper(three_two) == 'U') || (toupper(three_three) == 'U') || (toupper(three_four) == 'U') || (toupper(three_five) == 'U') || (toupper(three_six) == 'U')) {
				cout << endl << "The password may be 'FOUND'";
			}
		}
	}
	if ((toupper(one_one) == 'G') || (toupper(one_two) == 'G') || (toupper(one_three) == 'G') || (toupper(one_four) == 'G') || (toupper(one_five) == 'G') || (toupper(one_six) == 'G')) {
		if ((toupper(two_one) == 'R') || (toupper(two_two) == 'R') || (toupper(two_three) == 'R') || (toupper(two_four) == 'R') || (toupper(two_five) == 'R') || (toupper(two_six) == 'R')) {
			if ((toupper(three_one) == 'E') || (toupper(three_two) == 'E') || (toupper(three_three) == 'E') || (toupper(three_four) == 'E') || (toupper(three_five) == 'E') || (toupper(three_six) == 'E')) {
				cout << endl << "The password may be 'GREAT'";
			}
		}
	}
	if ((toupper(one_one) == 'H') || (toupper(one_two) == 'H') || (toupper(one_three) == 'H') || (toupper(one_four) == 'H') || (toupper(one_five) == 'H') || (toupper(one_six) == 'H')) {
		if ((toupper(two_one) == 'O') || (toupper(two_two) == 'O') || (toupper(two_three) == 'O') || (toupper(two_four) == 'O') || (toupper(two_five) == 'O') || (toupper(two_six) == 'O')) {
			if ((toupper(three_one) == 'U') || (toupper(three_two) == 'U') || (toupper(three_three) == 'U') || (toupper(three_four) == 'U') || (toupper(three_five) == 'U') || (toupper(three_six) == 'U')) {
				cout << endl << "The password may be 'HOUSE'";
			}
		}
	}
	if ((toupper(one_one) == 'L') || (toupper(one_two) == 'L') || (toupper(one_three) == 'L') || (toupper(one_four) == 'L') || (toupper(one_five) == 'L') || (toupper(one_six) == 'L')) {
		if ((toupper(two_one) == 'A') || (toupper(two_two) == 'A') || (toupper(two_three) == 'A') || (toupper(two_four) == 'A') || (toupper(two_five) == 'A') || (toupper(two_six) == 'A')) {
			if ((toupper(three_one) == 'R') || (toupper(three_two) == 'R') || (toupper(three_three) == 'R') || (toupper(three_four) == 'R') || (toupper(three_five) == 'R') || (toupper(three_six) == 'R')) {
				cout << endl << "The password may be 'LARGE'";
			}
		}
		if ((toupper(two_one) == 'E') || (toupper(two_two) == 'E') || (toupper(two_three) == 'E') || (toupper(two_four) == 'E') || (toupper(two_five) == 'E') || (toupper(two_six) == 'E')) {
			if ((toupper(three_one) == 'A') || (toupper(three_two) == 'A') || (toupper(three_three) == 'A') || (toupper(three_four) == 'A') || (toupper(three_five) == 'A') || (toupper(three_six) == 'A')) {
				cout << endl << "The password may be 'LEARN'";
			}
		}
	}
	if ((toupper(one_one) == 'N') || (toupper(one_two) == 'N') || (toupper(one_three) == 'N') || (toupper(one_four) == 'N') || (toupper(one_five) == 'N') || (toupper(one_six) == 'N')) {
		if ((toupper(two_one) == 'E') || (toupper(two_two) == 'E') || (toupper(two_three) == 'E') || (toupper(two_four) == 'E') || (toupper(two_five) == 'E') || (toupper(two_six) == 'E')) {
			if ((toupper(three_one) == 'V') || (toupper(three_two) == 'V') || (toupper(three_three) == 'V') || (toupper(three_four) == 'V') || (toupper(three_five) == 'V') || (toupper(three_six) == 'V')) {
				cout << endl << "The password may be 'NEVER'";
			}
		}
	}
	if ((toupper(one_one) == 'O') || (toupper(one_two) == 'O') || (toupper(one_three) == 'O') || (toupper(one_four) == 'O') || (toupper(one_five) == 'O') || (toupper(one_six) == 'O')) {
		if ((toupper(two_one) == 'T') || (toupper(two_two) == 'T') || (toupper(two_three) == 'T') || (toupper(two_four) == 'T') || (toupper(two_five) == 'T') || (toupper(two_six) == 'T')) {
			if ((toupper(three_one) == 'H') || (toupper(three_two) == 'H') || (toupper(three_three) == 'H') || (toupper(three_four) == 'H') || (toupper(three_five) == 'H') || (toupper(three_six) == 'H')) {
				cout << endl << "The password may be 'OTHER'";
			}
		}
	}
	if ((toupper(one_one) == 'P') || (toupper(one_two) == 'P') || (toupper(one_three) == 'P') || (toupper(one_four) == 'P') || (toupper(one_five) == 'P') || (toupper(one_six) == 'P')) {
		if ((toupper(two_one) == 'L') || (toupper(two_two) == 'L') || (toupper(two_three) == 'L') || (toupper(two_four) == 'L') || (toupper(two_five) == 'L') || (toupper(two_six) == 'L')) {
			if ((toupper(three_one) == 'A') || (toupper(three_two) == 'A') || (toupper(three_three) == 'A') || (toupper(three_four) == 'A') || (toupper(three_five) == 'A') || (toupper(three_six) == 'A')) {
				cout << endl << "The password may be 'PLANT' or 'PLACE'";
			}
		}
		if ((toupper(two_one) == 'O') || (toupper(two_two) == 'O') || (toupper(two_three) == 'O') || (toupper(two_four) == 'O') || (toupper(two_five) == 'O') || (toupper(two_six) == 'O')) {
			if ((toupper(three_one) == 'I') || (toupper(three_two) == 'I') || (toupper(three_three) == 'I') || (toupper(three_four) == 'I') || (toupper(three_five) == 'I') || (toupper(three_six) == 'I')) {
				cout << endl << "The password may be 'POINT'";
			}
		}
	}
	if ((toupper(one_one) == 'R') || (toupper(one_two) == 'R') || (toupper(one_three) == 'R') || (toupper(one_four) == 'R') || (toupper(one_five) == 'R') || (toupper(one_six) == 'R')) {
		if ((toupper(two_one) == 'I') || (toupper(two_two) == 'I') || (toupper(two_three) == 'I') || (toupper(two_four) == 'I') || (toupper(two_five) == 'I') || (toupper(two_six) == 'I')) {
			if ((toupper(three_one) == 'G') || (toupper(three_two) == 'G') || (toupper(three_three) == 'G') || (toupper(three_four) == 'G') || (toupper(three_five) == 'G') || (toupper(three_six) == 'G')) {
				cout << endl << "The password may be 'RIGHT'";
			}
		}
	}
	if ((toupper(one_one) == 'S') || (toupper(one_two) == 'S') || (toupper(one_three) == 'S') || (toupper(one_four) == 'S') || (toupper(one_five) == 'S') || (toupper(one_six) == 'S')) {
		if ((toupper(two_one) == 'M') || (toupper(two_two) == 'M') || (toupper(two_three) == 'M') || (toupper(two_four) == 'M') || (toupper(two_five) == 'M') || (toupper(two_six) == 'M')) {
			if ((toupper(three_one) == 'A') || (toupper(three_two) == 'A') || (toupper(three_three) == 'A') || (toupper(three_four) == 'A') || (toupper(three_five) == 'A') || (toupper(three_six) == 'A')) {
				cout << endl << "The password may be 'SMALL'";
			}
		}
		if ((toupper(two_one) == 'O') || (toupper(two_two) == 'O') || (toupper(two_three) == 'O') || (toupper(two_four) == 'O') || (toupper(two_five) == 'O') || (toupper(two_six) == 'O')) {
			if ((toupper(three_one) == 'U') || (toupper(three_two) == 'U') || (toupper(three_three) == 'U') || (toupper(three_four) == 'U') || (toupper(three_five) == 'U') || (toupper(three_six) == 'U')) {
				cout << endl << "The password may be 'SOUND'";
			}
		}
		if ((toupper(two_one) == 'P') || (toupper(two_two) == 'P') || (toupper(two_three) == 'P') || (toupper(two_four) == 'P') || (toupper(two_five) == 'P') || (toupper(two_six) == 'P')) {
			if ((toupper(three_one) == 'E') || (toupper(three_two) == 'E') || (toupper(three_three) == 'E') || (toupper(three_four) == 'E') || (toupper(three_five) == 'E') || (toupper(three_six) == 'E')) {
				cout << endl << "The password may be 'SPELL'";
			}
		}
		if ((toupper(two_one) == 'T') || (toupper(two_two) == 'T') || (toupper(two_three) == 'T') || (toupper(two_four) == 'T') || (toupper(two_five) == 'T') || (toupper(two_six) == 'T')) {
			if ((toupper(three_one) == 'I') || (toupper(three_two) == 'I') || (toupper(three_three) == 'I') || (toupper(three_four) == 'I') || (toupper(three_five) == 'I') || (toupper(three_six) == 'I')) {
				cout << endl << "The password may be 'STILL'";
			}
			if ((toupper(three_one) == 'U') || (toupper(three_two) == 'U') || (toupper(three_three) == 'U') || (toupper(three_four) == 'U') || (toupper(three_five) == 'U') || (toupper(three_six) == 'U')) {
				cout << endl << "The password may be 'STUDY'";
			}
		}
	}
	if ((toupper(one_one) == 'T') || (toupper(one_two) == 'T') || (toupper(one_three) == 'T') || (toupper(one_four) == 'T') || (toupper(one_five) == 'T') || (toupper(one_six) == 'T')) {
		if ((toupper(two_one) == 'H') || (toupper(two_two) == 'H') || (toupper(two_three) == 'H') || (toupper(two_four) == 'H') || (toupper(two_five) == 'H') || (toupper(two_six) == 'H')) {
			if ((toupper(three_one) == 'E') || (toupper(three_two) == 'E') || (toupper(three_three) == 'E') || (toupper(three_four) == 'E') || (toupper(three_five) == 'E') || (toupper(three_six) == 'E')) {
				cout << endl << "The password may be 'THEIR,' 'THERE,' or 'THESE'";
			}
			if ((toupper(three_one) == 'I') || (toupper(three_two) == 'I') || (toupper(three_three) == 'I') || (toupper(three_four) == 'I') || (toupper(three_five) == 'I') || (toupper(three_six) == 'I')) {
				cout << endl << "The password may be 'THING' or 'THINK'";
			}
			if ((toupper(three_one) == 'R') || (toupper(three_two) == 'R') || (toupper(three_three) == 'R') || (toupper(three_four) == 'R') || (toupper(three_five) == 'R') || (toupper(three_six) == 'R')) {
				cout << endl << "The password may be 'THREE'";
			}
		}
	}
	if ((toupper(one_one) == 'W') || (toupper(one_two) == 'W') || (toupper(one_three) == 'W') || (toupper(one_four) == 'W') || (toupper(one_five) == 'W') || (toupper(one_six) == 'W')) {
		if ((toupper(two_one) == 'A') || (toupper(two_two) == 'A') || (toupper(two_three) == 'A') || (toupper(two_four) == 'A') || (toupper(two_five) == 'A') || (toupper(two_six) == 'A')) {
			if ((toupper(three_one) == 'T') || (toupper(three_two) == 'T') || (toupper(three_three) == 'T') || (toupper(three_four) == 'T') || (toupper(three_five) == 'T') || (toupper(three_six) == 'T')) {
				cout << endl << "The password may be 'WATER'";
			}
		}
		if ((toupper(two_one) == 'H') || (toupper(two_two) == 'H') || (toupper(two_three) == 'H') || (toupper(two_four) == 'H') || (toupper(two_five) == 'H') || (toupper(two_six) == 'H')) {
			if ((toupper(three_one) == 'E') || (toupper(three_two) == 'E') || (toupper(three_three) == 'E') || (toupper(three_four) == 'E') || (toupper(three_five) == 'E') || (toupper(three_six) == 'E')) {
				cout << endl << "The password may be 'WHERE'";
			}
			if ((toupper(three_one) == 'I') || (toupper(three_two) == 'I') || (toupper(three_three) == 'I') || (toupper(three_four) == 'I') || (toupper(three_five) == 'I') || (toupper(three_six) == 'I')) {
				cout << endl << "The password may be 'WHICH'";
			}
		}
		if ((toupper(two_one) == 'O') || (toupper(two_two) == 'O') || (toupper(two_three) == 'O') || (toupper(two_four) == 'O') || (toupper(two_five) == 'O') || (toupper(two_six) == 'O')) {
			if ((toupper(three_one) == 'R') || (toupper(three_two) == 'R') || (toupper(three_three) == 'R') || (toupper(three_four) == 'R') || (toupper(three_five) == 'R') || (toupper(three_six) == 'R')) {
				cout << endl << "The password may be 'WORLD'";
			}
			if ((toupper(three_one) == 'U') || (toupper(three_two) == 'U') || (toupper(three_three) == 'U') || (toupper(three_four) == 'U') || (toupper(three_five) == 'U') || (toupper(three_six) == 'U')) {
				cout << endl << "The password may be 'WOULD'";
			}
		}
		if ((toupper(two_one) == 'R') || (toupper(two_two) == 'R') || (toupper(two_three) == 'R') || (toupper(two_four) == 'R') || (toupper(two_five) == 'R') || (toupper(two_six) == 'R')) {
			if ((toupper(three_one) == 'I') || (toupper(three_two) == 'I') || (toupper(three_three) == 'I') || (toupper(three_four) == 'I') || (toupper(three_five) == 'I') || (toupper(three_six) == 'I')) {
				cout << endl << "The password may be 'WRITE'";
			}
		}
	}
}
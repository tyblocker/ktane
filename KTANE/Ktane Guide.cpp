#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
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
		cout << endl << "Which module in full lowercase? ";
		cin >> module;
		if (strcmp(module, "wires") == 0) {
			wires();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "button") == 0) {
			button();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "keypad") == 0) {
			keypad();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "simonsays") == 0) {
			simonsays();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "whosonfirst") == 0) {
			whosonfirst();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "memory") == 0) {
			memory();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "morsecode") == 0) {
			morsecode();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "complicatedwires") == 0) {
			complicatedwires();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "wiresequence") == 0) {
			wiresequence();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "maze") == 0) {
			maze();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
		}
		else if (strcmp(module, "password") == 0) {
			password();
			cout << endl << "More Modules?(Y/N) ";
			cin >> more;
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
	cout << "How many batteries? ";
	cin >> ::batteries;
	cout << "Is CAR illuminated?(Y/N) ";
	cin >> CAR;
	if (toupper(CAR) == 'Y') {
		::CAR = 1;
	}
	else {
		::CAR = 0;
	}
	cout << "Is FRK illuminated?(Y/N) ";
	cin >> FRK;
	if (toupper(FRK) == 'Y') {
		::FRK = 1;
	}
	else {
		::FRK = 0;
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
	if (strstr(line, "2") != 0 && (std::char_traits<char>::length(strPtr)) == 1) {
		::even = 1;
	}
	else {
		strPtr = strstr(line, "4");
		if (strstr(line, "4") != 0 && (std::char_traits<char>::length(strPtr)) == 1) {
			::even = 1;
		}
		else {
			if (strstr(line, "6") != 0 && (std::char_traits<char>::length(strPtr)) == 1) {
				::even = 1;
			}
			else {
				strPtr = strstr(line, "8");
				if (strstr(line, "8") != 0 && (std::char_traits<char>::length(strPtr)) == 1) {
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
	cin >> color;
	cout << endl << "What is the text on the button? ";
	cin >> text;
	if (((::batteries > 2) && (::FRK == 1)) || ((::batteries > 1) && ((strcmp(text, "detonate") == 0))) || ((strcmp(color, "red") == 0) && (strcmp(text, "hold") == 0))) {
		cout << endl << "Press the button.";
	}
	else {
		cout << endl << "Press and hold the button.";
		cout << endl << "What is the color of the strip? ";
		cin >> strip;
		if ((strcmp(strip, "blue") == 0)) {
			cout << endl << "Release when there is a 4 in any position.";
		}
		else if ((strcmp(strip, "yellow") == 0)) {
			cout << endl << "Release when there is a 5 in any position.";
		}
		else {
			cout << endl << "Release when there is a 5 in any position.";
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

	cout << endl << "How many strikes? ";
	cin >> strikes;
	if (strikes == 0) {
		if (::vowel == 1) {
			cout << endl << "Which color is blinking? ";
			cin >> color;
			if (strcmp(color, "red") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "blue") == 0) {
				cout << endl << "Press red.";
			}
			else if (strcmp(color, "green") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "yellow") == 0) {
				cout << endl << "Press green.";
			}
			else {
				cout << endl << "Input in all lowercase with a valid color.";
			}
		}
		else {
			cout << endl << "Which color is blinking? ";
			cin >> color;
			if (strcmp(color, "red") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "blue") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "green") == 0) {
				cout << endl << "Press green.";
			}
			else if (strcmp(color, "yellow") == 0) {
				cout << endl << "Press red.";
			}
			else {
				cout << endl << "Input in all lowercase with a valid color.";
			}
		}
	}
	else if (strikes == 1) {
		if (::vowel == 1) {
			cout << endl << "Which color is blinking? ";
			cin >> color;
			if (strcmp(color, "red") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "blue") == 0) {
				cout << endl << "Press green.";
			}
			else if (strcmp(color, "green") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "yellow") == 0) {
				cout << endl << "Press red.";
			}
			else {
				cout << endl << "Input in all lowercase with a valid color.";
			}
		}
		else {
			cout << endl << "Which color is blinking? ";
			cin >> color;
			if (strcmp(color, "red") == 0) {
				cout << endl << "Press red.";
			}
			else if (strcmp(color, "blue") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "green") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "yellow") == 0) {
				cout << endl << "Press green.";
			}
			else {
				cout << endl << "Input in all lowercase with a valid color.";
			}
		}
	}
	else if (strikes == 2) {
		if (::vowel == 1) {
			cout << endl << "Which color is blinking? ";
			cin >> color;
			if (strcmp(color, "red") == 0) {
				cout << endl << "Press green.";
			}
			else if (strcmp(color, "blue") == 0) {
				cout << endl << "Press red.";
			}
			else if (strcmp(color, "green") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "yellow") == 0) {
				cout << endl << "Press blue.";
			}
			else {
				cout << endl << "Input in all lowercase with a valid color.";
			}
		}
		else {
			cout << endl << "Which color is blinking? ";
			cin >> color;
			if (strcmp(color, "red") == 0) {
				cout << endl << "Press yellow.";
			}
			else if (strcmp(color, "blue") == 0) {
				cout << endl << "Press green.";
			}
			else if (strcmp(color, "green") == 0) {
				cout << endl << "Press blue.";
			}
			else if (strcmp(color, "yellow") == 0) {
				cout << endl << "Press red.";
			}
			else {
				cout << endl << "Input in all lowercase with a valid color.";
			}
		}
	}
}

void whosonfirst()
{
	char display[9];
	char label[8];
	char more;

	do
	{
	checkDisplay:
		cout << endl << "Enter the word on the display. ";
		cin.getline(display, 9);

		if (strcmp(display, "UR") == 0) {
			cout << endl << "Enter the label of the first column, first row. ";
			cin.getline(label, 8);
		}
		else if ((strcmp(display, "FIRST") == 0) || (strcmp(display, "OKAY") == 0) || (strcmp(display, "C") == 0)) {
			cout << endl << "Enter the label of the second column, first row. ";
			cin.getline(label, 8);
		}
		else if ((strcmp(display, "YES") == 0) || (strcmp(display, "NOTHING") == 0) || (strcmp(display, "LED") == 0) || (strcmp(display, "THEY ARE") == 0)) {
			cout << endl << "Enter the label of the first column, second row. ";
			cin.getline(label, 8);
		}
		else if ((strcmp(display, "BLANK") == 0) || (strcmp(display, "READ") == 0) || (strcmp(display, "RED") == 0) || (strcmp(display, "YOU") == 0) || (strcmp(display, "YOUR") == 0) || (strcmp(display, "YOU'RE") == 0) || (strcmp(display, "THEIR") == 0)) {
			cout << endl << "Enter the label of the second column, second row. ";
			cin.getline(label, 8);
		}
		else if ((strcmp(display, "emmpty") == 0) || (strcmp(display, "REED") == 0) || (strcmp(display, "LEED") == 0) || (strcmp(display, "THEY'RE") == 0)) {
			cout << endl << "Enter the label of the first column, third row. ";
			cin.getline(label, 8);
		}
		else if ((strcmp(display, "DISPLAY") == 0) || (strcmp(display, "SAYS") == 0) || (strcmp(display, "NO") == 0) || (strcmp(display, "LEAD") == 0) || (strcmp(display, "HOLD ON") == 0) || (strcmp(display, "YOU ARE") == 0) || (strcmp(display, "THERE") == 0) || (strcmp(display, "SEE") == 0) || (strcmp(display, "CEE") == 0)) {
			cout << endl << "Enter the label of the second column, third row. ";
			cin.getline(label, 8);
		}
		else {
			cout << endl << "Enter a valid display word in full uppercase unless the display is blank, then enter 'empty.'";
			goto checkDisplay;
		}

	checkLabel:
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
			cout << endl << "Enter a valid label word in full uppercase.";
			goto checkLabel;
		}
		cout << endl << "Next Stage?(Y/N) ";
		cin >> more;
	}
	while (toupper(more) == 'Y');

}

void memory()
{
	int one_dis;
	int one_one;
	int one_two;
	int one_three;
	int one_four;
	int two_dis;
	int two_one;
	int two_two;
	int two_three;
	int two_four;
	int three_dis;
	int three_one;
	int three_two;
	int three_three;
	int three_four;
	int four_dis;
	char correct;

	StageOne:
	cout << endl << "Stage One: enter the nuber on the display and all four positions separated by spaces.";
	cin >> one_dis >> one_one >> one_two >> one_three >> one_four;
	if ((one_dis == 1) || (one_dis == 2)) {
		cout << endl << "Press the button labeled " << one_two;
	}
	else if (one_dis == 3) {
		cout << endl << "Press the button labeled " << one_three;
	}
	else if (one_dis == 4) {
		cout << endl << "Press the button labeled " << one_four;
	}
	else {
		cout << endl << "Enter a valid display number.";
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
	cout << endl << "Stage Two: enter the nuber on the display and all four positions separated by spaces.";
	cin >> two_dis >> two_one >> two_two >> two_three >> two_four;
	if (two_dis == 1) {
		cout << endl << "Press the button labeled '4'";
	}
	else if ((two_dis == 2) || (two_dis == 4)) {
		if ((one_dis == 1) || (one_dis == 2)) {
			cout << endl << "Press the button in the second position";
		}
		else if (one_dis == 3) {
			cout << endl << "Press the button in the third position";
		}
		else if (one_dis == 4) {
			cout << endl << "Press the button in the fourth position";
		}
	}
	else if (two_dis == 3) {
		cout << endl << "Press the button in the first position";
	}
	else {
		cout << endl << "Please enter a valid display number.";
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
	cout << endl << "This is a placeholder for stage 3.";


}

void morsecode()
{

}

void complicatedwires()
{

}

void wiresequence()
{

}

void maze()
{

}

void password()
{

}
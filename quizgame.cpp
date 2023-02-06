#include <iostream>
using namespace std;
void end_game(int score);
void display();
int main()
{
	display();
	cout<<"Press 1 to continue"<<endl;
	int key,selection,total,opt,score=5;
	cin>>key;
	if(key==1){
	system("cls");}
	else
   {end_game(score);}
	cout<<endl<<"Rules for the QUIZ:";
	cout<<endl<<"1. There is no time limit for this quiz.";
	cout<<endl<<"2. If you manage to answer 3 questions right out of 5, You will win!"<<endl;
	cout<<"3. Each correct answer will reward 5 point, no points for wrong answers."<<endl<<endl;
    cout<<"Goodluck!"<<endl<<endl;
	do{
	cout<<"Please Select the Quiz you want to Play:"<<endl<<endl;
	cout<<"          1. TV & Entertainment"<<endl;
	cout<<"          2. Gaming"<<endl;
	cout<<"          3. General Knowledge"<<endl;
	cout<<"          4. Mathematics"<<endl;
	cout<<"          5. Programming"<<endl<<endl;
	cout<<"Choose between 1-5 : ";
	cin>>selection;
	system("cls");
	
	switch(selection)
	{
		case 1:
				cout<<endl<<" ____________________________________________________________________________ ";
				cout<<endl<<"                                                                              ";
				cout<<endl<<"                  Your TV & Entertainment Quiz Starts Here!                   ";
				cout<<endl<<" ____________________________________________________________________________ "<<endl<<endl;
			cout<<endl<<"i) Which Artist or Band has the most #1 hits of all times?"<<endl;
			cout<<"1. Elvis Presley       2. The Beatles"<<endl;
			cout<<"3. Enrique Iglesias    4. George Strait"<<endl;
			cout<<"Option: ";
			cin>>opt;
			if(opt==2)
			{
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"ii) Which book is not title of a book in Twilight series?"<<endl;
			cout<<"1. Midnight            2. New Moon"<<endl;
			cout<<"3. Eclipse             4. Breaking Dawn"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==1)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 1";
			}
			cout<<endl<<endl<<"iii) How many seasons of the TV show 'FRIENDS' were there?"<<endl;
			cout<<"1. 9                   2. 10"<<endl;
			cout<<"3. 11                  4. 12"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==2)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"iv) Who is the most funniest character in drama serial Ehd e Wafa?"<<endl;
			cout<<"1. Shariq              2. Rani"<<endl;
			cout<<"3. Firdous             4. Gulzar"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==4)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 4";
			}
			cout<<endl<<endl<<"v) Which Pakistani Artist has the most followers on Instagram?"<<endl;
			cout<<"1. Rahat Fateh Ali     2. Ali Zafar"<<endl;
			cout<<"3. Atif Aslam          4. Asim Azhar"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==3)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 3";
			}
			cout<<endl<<endl<<"Your Score: "<<total<<"/25";
			if(total<15)
			{
		    	cout<<endl<<"           ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                        ";
				cout<<endl<<"                                       Sorry! You Lost.                                 ";
				cout<<endl<<"           ____________________________________________________________________________ "<<endl<<endl;
			}
			else
			{
				cout<<endl<<"           ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                        ";
				cout<<endl<<"                    Congratulations! You've passed the vibe check. (You WIN)  =)               ";
				cout<<endl<<"           ____________________________________________________________________________ "<<endl<<endl;
			}
		break;
		case 2:
			cout<<endl<<" ____________________________________________________________________________ ";
			cout<<endl<<"                                                                              ";
			cout<<endl<<"                         Your Gaming Quiz Starts Here!                        ";
			cout<<endl<<" ____________________________________________________________________________ "<<endl<<endl;
			cout<<endl<<"i) Which is the most viewed game of all time?"<<endl;
			cout<<"1. Fortnite            2. GTA"<<endl;
			cout<<"3. Minecraft           4. PUBG"<<endl;
			cout<<"Option: ";
			cin>>opt;
			if(opt==3)
			{
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 3";
			}
			cout<<endl<<endl<<"ii) Who is the biggest gaming youtuber?"<<endl;
			cout<<"1. Markiplier          2. pewdiepie"<<endl;
			cout<<"3. Mr.Beast            4. Ninja"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==2)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"iii) Which game has the most emotional/sad storyline?"<<endl;
			cout<<"1. GTA IV              2. Life is strange"<<endl;
			cout<<"3. God of war          4. The last of us"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==4)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 4";
			}
			cout<<endl<<endl<<"iv) Which is the most anticipated game?"<<endl;
			cout<<"1. Spider-Man          2. Demon's soul'"<<endl;
			cout<<"3. Cyberpunk           4. STAR WARS SQUADRONS"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==3)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 3";
			}
			cout<<endl<<endl<<"v) Can you guess our favourite game?"<<endl;
			cout<<"1. COD warzone         2. Subway surfers"<<endl;
			cout<<"3. Fortnite            4. GTA"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==2)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"Your Score: "<<total<<"/25";
			if(total<15)
			{
				cout<<endl<<"            ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                         ";
				cout<<endl<<"                We don't approve you as a GAMER, go play Clash of Clans. You LOST!!!     ";
				cout<<endl<<"            ____________________________________________________________________________ "<<endl<<endl;
			}
			else
			{
				cout<<endl<<"            ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                         ";
				cout<<endl<<"                                Congrats! You're a Legit GAMER =)                        ";
				cout<<endl<<"            ____________________________________________________________________________ "<<endl<<endl;
			}
		break;
		case 3:
			cout<<endl<<" ____________________________________________________________________________ ";
			cout<<endl<<"                                                                              ";
			cout<<endl<<"                  Your General Knowledge  Quiz Starts Here!                   ";
		    cout<<endl<<" ____________________________________________________________________________ "<<endl<<endl;
			cout<<endl<<"i) In which province maximum languages are spoken?"<<endl;
			cout<<"1. Sindh               2. Punjab"<<endl;
			cout<<"3. Balochistan         4. KPK"<<endl;
			cout<<"Option: ";
			cin>>opt;
			if(opt==2)
			{
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"ii) How many letters are there in Urdu alphabets?"<<endl;
			cout<<"1. 37                  2. 35"<<endl;
			cout<<"3. 36                  4. 38"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==3)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 3";
			}
			cout<<endl<<endl<<"iii) 'Heer Ranjha' is a love story of?"<<endl;
			cout<<"1. Punjabi             2. Sindhi"<<endl;
			cout<<"3. Pushto              4. Saraiki"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==1)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 1";
			}
			cout<<endl<<endl<<"iv) Who composed the verses of Pakistan national Anthem?"<<endl;
			cout<<"1. Allama Iqbal        2. Nasir Kazmi"<<endl;
			cout<<"3. Faiz Ahmed Faiz     4. Hafiz Jallandri"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==4)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 4";
			}
			cout<<endl<<endl<<"v) How many words are in national anthem?"<<endl;
			cout<<"1. 51                  2. 49"<<endl;
			cout<<"3. 48                  4. 47"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==2)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"Your Score: "<<total<<"/25";
			if(total<15)
			{
				cout<<endl<<"           ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                         ";
				cout<<endl<<"                                      Oops! You lost the quiz.                           ";
				cout<<endl<<"           ____________________________________________________________________________ "<<endl<<endl;
			}
			else
			{
 		     	cout<<endl<<"           ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                         ";
				cout<<endl<<"                                 Congratulations! You won the quiz.                      ";
				cout<<endl<<"           ____________________________________________________________________________ "<<endl<<endl;
			}
		break;
		case 4:
				cout<<endl<<" ____________________________________________________________________________ ";
				cout<<endl<<"                                                                              ";
				cout<<endl<<"                    Your Mathematics Quiz Starts Here!                        ";
				cout<<endl<<" ____________________________________________________________________________ "<<endl<<endl;
			cout<<endl<<"i) The average of first 50 natural numbers is?"<<endl;
			cout<<"1. 32                  2. 25.5"<<endl;
			cout<<"3. 22.6                4. 29"<<endl;
			cout<<"Option: ";
			cin>>opt;
			if(opt==2)
			{
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"ii) The result of 32+5 is?"<<endl;
			cout<<"1. 37                  2. 33"<<endl;
			cout<<"3. 38                  4. 39"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==1)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 1";
			}
			cout<<endl<<endl<<"iii) 106 x 106 - 94 x 94 ?"<<endl;
			cout<<"1. 2550                2. 2400"<<endl;
			cout<<"3. 2200                4. 2250"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==2)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"iv) Which of the following numbers gives 240 when added to its own square?"<<endl;
			cout<<"1. 23                  2. 12"<<endl;
			cout<<"3. 20                  4. 15"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==4)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 4";
			}
			cout<<endl<<endl<<"v) The simplest form of 1.5 : 2.5 is ?"<<endl;
			cout<<"1. 9:6                 2. 2:5"<<endl;
			cout<<"3. 3:5                 4. 5:3"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==3)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 3";
			}
			cout<<endl<<endl<<"Your Score: "<<total<<"/25";
			if(total<15)
			{
		    	cout<<endl<<"           ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                        ";
				cout<<endl<<"                                       Sorry! You Lost.                                 ";
				cout<<endl<<"           ____________________________________________________________________________ "<<endl<<endl;
			}
			else
			{
				cout<<endl<<"           ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                        ";
				cout<<endl<<"                               Congratulations!  You WON this Game  =)                  ";
				cout<<endl<<"           ____________________________________________________________________________ "<<endl<<endl;
			}
		break;
		case 5:
			cout<<endl<<" ____________________________________________________________________________ ";
			cout<<endl<<"                                                                              ";
			cout<<endl<<"                    Your Programming Quiz Starts Here!                        ";
			cout<<endl<<" ____________________________________________________________________________ "<<endl<<endl;
			cout<<endl<<"i) Which is not a loop structure?"<<endl;
			cout<<"1. For                    2. while"<<endl;
			cout<<"3. Repeat until           4. do while"<<endl;
			cout<<"Option: ";
			cin>>opt;
			if(opt==3)
			{
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 3";
			}
			cout<<endl<<endl<<"ii) Adding 1 to a  variable is also called?"<<endl;
			cout<<"1. reseting            2. increment"<<endl;
			cout<<"3. digesting           4. decrement"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==2)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"iii) Which of the following correctly declares an array?"<<endl;
			cout<<"1. anarray{10}         2. int anarray"<<endl;
			cout<<"3. array aarray[10];   4. int anarray[10]"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==4)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 4";
			}
			cout<<endl<<endl<<"iv) What is the size of 'int'?"<<endl;
			cout<<"1. 2                   2. 4"<<endl;
			cout<<"3. Compiler dependent  4. 8"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==3)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 3";
			}
			cout<<endl<<endl<<"v) Who developed the C++ language?"<<endl;
			cout<<"1. Steve Jobs          2. Bjarne Stroustrup"<<endl;
			cout<<"3. Bill Gates          4. Linus Torvalds"<<endl;
			cout<<"Option: ";
			cin>>opt;
	        if(opt==2)
	        {
				cout<<endl<<"Correct Answer!";
				total+=score;
			}
			else
			{
				cout<<endl<<"Wrong Answer!";
				cout<<endl<<"Correct Answer is 2";
			}
			cout<<endl<<endl<<"Your Score: "<<total<<"/25";
			if(total<15)
			{
				cout<<endl<<"            ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                         ";
				cout<<endl<<"                                            You LOST!!!                                  ";
				cout<<endl<<"            ____________________________________________________________________________ "<<endl<<endl;
			}
			else
			{
				cout<<endl<<"            ____________________________________________________________________________ ";
				cout<<endl<<"                                                                                         ";
				cout<<endl<<"                                      Congrats! You Won =)                               ";
				cout<<endl<<"            ____________________________________________________________________________ "<<endl<<endl;
			}
		break;
		default: 
		cout<<endl<<"Invalid Entry"<<endl;
	}
	}
	while(selection!=0);
}
void end_game(int score) {
	cout<<"\n Game Ends ";
	cout<<"\n SCORE: 00 ";
}
void display()
{
	cout<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	cout<<endl<<"$$                                                    $$";
	cout<<endl<<" $$                                                    $$";
	cout<<endl<<"  $$                                                    $$";
	cout<<endl<<"   $$        QQQQQQQQ    UU   UU  IIIIII  ZZZZZZZZ       $$";
	cout<<endl<<"    $$       QQ    QQ    UU   UU    II         ZZ         $$";
	cout<<endl<<"     $$      QQ    QQ    UU   UU    II       ZZ            $$";
	cout<<endl<<"      $$     QQ   \\QQ    UU   UU    II     ZZ               $$";
	cout<<endl<<"       $$    QQQQQQ\\     UUUUUUU  IIIIII  ZZZZZZZZ           $$";
	cout<<endl<<"        $$          \\                                         $$";
	cout<<endl<<"         $$                                                    $$";
	cout<<endl<<"          $$                                                    $$";
	cout<<endl<<"           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl<<endl;
	cout<<endl<<" ____________________________________________________________________________ ";
	cout<<endl<<"|                                                                            |";
	cout<<endl<<"|                         Welcome to the Quiz Game                           | ";
	cout<<endl<<"|____________________________________________________________________________|"<<endl<<endl;
}

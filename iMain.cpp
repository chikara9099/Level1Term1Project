#include "iGraphics.h"
// All necessary global variables declared here
int screenwidth = 1024;
int screenheight = 1024;
bool bgmusicOn = true;
char img[30][50] = {"img\\home.bmp", "img\\subjects.bmp", "img\\about.bmp", "img\\questions.bmp", "img\\score.bmp", "img\\leaderboard.bmp", "img\\leaderboardcse101.bmp", "img\\leaderboardcse103.bmp", "img\\leaderboardeee163.bmp", "img\\leaderboardmath141.bmp", "img\\leaderboardphy129.bmp", "img\\leaderboardcgpa.bmp", "img\\AdminModeOptions.bmp", "img\\AdminMode.bmp", "img\\AdminModeWarning.bmp"};
char img2[2][50] = {"img\\SoundOn.bmp","img\\SoundOff.bmp"};
char cse101_question_files[15][100] = {"questions\\cse101\\cse101question1.dat", "questions\\cse101\\cse101question2.dat", "questions\\cse101\\cse101question3.dat", "questions\\cse101\\cse101question4.dat", "questions\\cse101\\cse101question5.dat","questions\\cse101\\cse101question6.dat", "questions\\cse101\\cse101question7.dat", "questions\\cse101\\cse101question8.dat", "questions\\cse101\\cse101question9.dat", "questions\\cse101\\cse101question10.dat", "questions\\cse101\\cse101question11.dat", "questions\\cse101\\cse101question12.dat", "questions\\cse101\\cse101question13.dat", "questions\\cse101\\cse101question14.dat", "questions\\cse101\\cse101question15.dat"};
char cse101_extra_question_files[10][100] = {"questions\\cse101\\cse101question6.dat", "questions\\cse101\\cse101question7.dat", "questions\\cse101\\cse101question8.dat", "questions\\cse101\\cse101question9.dat", "questions\\cse101\\cse101question10.dat", "questions\\cse101\\cse101question11.dat", "questions\\cse101\\cse101question12.dat", "questions\\cse101\\cse101question13.dat", "questions\\cse101\\cse101question14.dat", "questions\\cse101\\cse101question15.dat"};
char cse103_question_files[15][100] = {"questions\\cse103\\cse103question1.dat", "questions\\cse103\\cse103question2.dat", "questions\\cse103\\cse103question3.dat", "questions\\cse103\\cse103question4.dat", "questions\\cse103\\cse103question5.dat","questions\\cse103\\cse103question6.dat", "questions\\cse103\\cse103question7.dat", "questions\\cse103\\cse103question8.dat", "questions\\cse103\\cse103question9.dat", "questions\\cse103\\cse103question10.dat", "questions\\cse103\\cse103question11.dat", "questions\\cse103\\cse103question12.dat", "questions\\cse103\\cse103question13.dat", "questions\\cse103\\cse103question14.dat", "questions\\cse103\\cse103question15.dat"};
char cse103_extra_question_files[10][100] = {"questions\\cse103\\cse103question6.dat", "questions\\cse103\\cse103question7.dat", "questions\\cse103\\cse103question8.dat", "questions\\cse103\\cse103question9.dat", "questions\\cse103\\cse103question10.dat", "questions\\cse103\\cse103question11.dat", "questions\\cse103\\cse103question12.dat", "questions\\cse103\\cse103question13.dat", "questions\\cse103\\cse103question14.dat", "questions\\cse103\\cse103question15.dat"};
char eee163_question_files[15][100] = {"questions\\eee163\\eee163question1.dat", "questions\\eee163\\eee163question2.dat", "questions\\eee163\\eee163question3.dat", "questions\\eee163\\eee163question4.dat", "questions\\eee163\\eee163question5.dat","questions\\eee163\\eee163question6.dat", "questions\\eee163\\eee163question7.dat", "questions\\eee163\\eee163question8.dat", "questions\\eee163\\eee163question9.dat", "questions\\eee163\\eee163question10.dat", "questions\\eee163\\eee163question11.dat", "questions\\eee163\\eee163question12.dat", "questions\\eee163\\eee163question13.dat", "questions\\eee163\\eee163question14.dat", "questions\\eee163\\eee163question15.dat"};
char eee163_extra_question_files[10][100] = {"questions\\eee163\\eee163question6.dat", "questions\\eee163\\eee163question7.dat", "questions\\eee163\\eee163question8.dat", "questions\\eee163\\eee163question9.dat", "questions\\eee163\\eee163question10.dat", "questions\\eee163\\eee163question11.dat", "questions\\eee163\\eee163question12.dat", "questions\\eee163\\eee163question13.dat", "questions\\eee163\\eee163question14.dat", "questions\\eee163\\eee163question15.dat"};
char math141_question_files[15][100] = {"questions\\math141\\math141question1.dat", "questions\\math141\\math141question2.dat", "questions\\math141\\math141question3.dat", "questions\\math141\\math141question4.dat", "questions\\math141\\math141question5.dat","questions\\math141\\math141question6.dat", "questions\\math141\\math141question7.dat", "questions\\math141\\math141question8.dat", "questions\\math141\\math141question9.dat", "questions\\math141\\math141question10.dat", "questions\\math141\\math141question11.dat", "questions\\math141\\math141question12.dat", "questions\\math141\\math141question13.dat", "questions\\math141\\math141question14.dat", "questions\\math141\\math141question15.dat"};
char math141_extra_question_files[10][100] = {"questions\\math141\\math141question6.dat", "questions\\math141\\math141question7.dat", "questions\\math141\\math141question8.dat", "questions\\math141\\math141question9.dat", "questions\\math141\\math141question10.dat", "questions\\math141\\math141question11.dat", "questions\\math141\\math141question12.dat", "questions\\math141\\math141question13.dat", "questions\\math141\\math141question14.dat", "questions\\math141\\math141question15.dat"};
char phy129_question_files[15][100] = {"questions\\phy129\\phy129question1.dat", "questions\\phy129\\phy129question2.dat", "questions\\phy129\\phy129question3.dat", "questions\\phy129\\phy129question4.dat", "questions\\phy129\\phy129question5.dat","questions\\phy129\\phy129question6.dat", "questions\\phy129\\phy129question7.dat", "questions\\phy129\\phy129question8.dat", "questions\\phy129\\phy129question9.dat", "questions\\phy129\\phy129question10.dat", "questions\\phy129\\phy129question11.dat", "questions\\phy129\\phy129question12.dat", "questions\\phy129\\phy129question13.dat", "questions\\phy129\\phy129question14.dat", "questions\\phy129\\phy129question15.dat"};
char phy129_extra_question_files[10][100] = {"questions\\phy129\\phy129question6.dat", "questions\\phy129\\phy129question7.dat", "questions\\phy129\\phy129question8.dat", "questions\\phy129\\phy129question9.dat", "questions\\phy129\\phy129question10.dat", "questions\\phy129\\phy129question11.dat", "questions\\phy129\\phy129question12.dat", "questions\\phy129\\phy129question13.dat", "questions\\phy129\\phy129question14.dat", "questions\\phy129\\phy129question15.dat"};
char leaderboard_files[6][100] = {"leaderboard\\cse101leaderboard.dat", "leaderboard\\cse103leaderboard.dat", "leaderboard\\eee163leaderboard.dat", "leaderboard\\math141leaderboard.dat", "leaderboard\\phy129leaderboard.dat", "leaderboard\\cgpaleaderboard.dat"};
int img_index = 0;
int img2_index = 0;
int file_index = 0;
int subject_index;
int admin_index;
int newcse101Ques_index;
int newcse103Ques_index;
int neweee163Ques_index;
int newmath141Ques_index;
int newphy129Ques_index;
int admin_entry_index = 0;
int cse101_entry_index = 0;
int cse103_entry_index = 0;
int eee163_entry_index = 0;
int math141_entry_index = 0;
int phy129_entry_index = 0;
int score = 0;
int score_adder;
int question_num = 1;
char score_string[20] = "Score: 0";
char question_nums[3] = "1";
char GPA[5];
int indexnumber = 0;
char name[100];
char statement[500];
char admin_question[500];
char admin_options[4][20];
char admin_answer[3];
char admin_score[3];
char optionA[20];
char optionB[20];
char optionC[20];
char optionD[20];
char correct_option;
struct lead
{
	char Name[100];
	char GPAa[5];
	char CGPA[5];
	int score;
	char score_string[4];
};
struct lead cse101_entries[5];
struct lead cse103_entries[5];
struct lead eee163_entries[5];
struct lead math141_entries[5];
struct lead phy129_entries[5];
struct quiz
{
	char question[500];
	char options[4][20];
	char answer;
	int score;
};
struct quiz newQues;
//Function to open files and store the contents in required variables
void files(char *s)
{
	FILE *inputfile;
	struct quiz questions;
	inputfile = fopen(s, "r");
	if (inputfile == NULL)
	{
		fprintf(stderr, "Error while opening file!");
		exit(1);
	}
	while (fread(&questions, sizeof(struct quiz), 1, inputfile))
	{
		sprintf(statement, "%s", questions.question);
		sprintf(optionA, "%s", questions.options[0]);
		sprintf(optionB, "%s", questions.options[1]);
		sprintf(optionC, "%s", questions.options[2]);
		sprintf(optionD, "%s", questions.options[3]);
		correct_option = questions.answer;
		score_adder = questions.score;
	}
	fclose(inputfile);
}
//Function to draw multiple lines since iText can't process newline character
void drawMultilineText(char *text, int x, int y, void *font, int lineHeight)
{
	char buffer[500];
	char *lineStart = text;
	char *lineEnd;
	int yPosition = y;
	while (*lineStart != '\0')
	{
		lineEnd = strchr(lineStart, '\n');
		if (lineEnd == NULL)
		{
			lineEnd = lineStart + strlen(lineStart);
		}
		strncpy(buffer, lineStart, lineEnd - lineStart);
		buffer[lineEnd - lineStart] = '\0';
		iText(x, yPosition, buffer, font);
		yPosition -= lineHeight;
		lineStart = lineEnd;
		if (*lineStart == '\n')
		{
			lineStart++;
		}
	}
}
//comparison function for qsort
int compare_scores(const void *a, const void *b)
{
	struct lead *entry1 = (struct lead *)a;
	struct lead *entry2 = (struct lead *)b;
	return entry2->score - entry1->score; // Sort in descending order
}
//functions to store and read entries for leaderboard(so that it isn't reset after the game is quit)
void writeLeaderboard(char *s, struct lead entries[], int size)
{
	FILE *file = fopen(s, "wb");
	if (file != NULL)
	{
		fwrite(entries, sizeof(struct lead), size, file);
		fclose(file);
	}
}
void readLeaderboard(char *s, struct lead entries[], int size)
{
	FILE *file = fopen(s, "rb");
	if (file != NULL)
	{
		fread(entries, sizeof(struct lead), size, file);
		fclose(file);
	}
}
void WriteNewQues(char *adress, char *question, char options[][20], char *answer, char *score, struct quiz Question)
{
	strcpy(Question.question, question);
	for (int i = 0; i < 4; i++)
	{
		strcpy(Question.options[i], options[i]);
		Question.options[i][strlen(Question.options[i])] = '\0';
	}
	Question.answer = answer[0];
	Question.score = atoi(score);
	FILE *outputfile;
	outputfile = fopen(adress, "w");
	if (outputfile == NULL)
	{
		fprintf(stderr, "\nError while opening the file");
		exit(1);
	}
	fwrite(&Question, sizeof(struct quiz), 1, outputfile);
	if (fwrite != 0)
	{
		printf("\n Structures were written to the file!");
	}
	else
	{
		printf("\n Error writing to the file");
	}
	fclose(outputfile);
}
void QuesIndexUpdate(char *adress, int n)
{
	FILE *index_file = fopen(adress, "w");
	if (index_file != NULL)
	{
		fprintf(index_file, "%d", n);
		fclose(index_file);
	}
}
void QuesIndexRead(char *adress, int *n)
{
	FILE *index_file = fopen(adress, "r");
	if (index_file != NULL)
	{
		fscanf(index_file, "%d", n);
		fclose(index_file);
	}
}
bool fileExists(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file) {
        fclose(file);
        return true;
    }
    return false;
}
void shuffle(char arr[][100], int n) {
    srand(time(NULL));
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp[100];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[j]);
        strcpy(arr[j], temp);
    }
    int valid_count = 0;
    for (int i = 0; i < 5 && valid_count < 5; i++) {
        if (fileExists(arr[i])) {
            valid_count++;
        } else {
            for (int j = 5; j < n; j++) {
                if (fileExists(arr[j])) {
                    char temp[100];
                    strcpy(temp, arr[i]);
                    strcpy(arr[i], arr[j]);
                    strcpy(arr[j], temp);
                    valid_count++;
                    break;
                }
            }
        }
    }
}
// function iDraw() is called again and again by the system.
void iDraw()
{
	iClear();
	iShowBMP(0, 0, img[img_index]);
	if(img_index == 0){
		iShowBMP(900,110,img2[img2_index]);
	}
	iSetColor(168, 218, 255);
	if (img_index == 3)
	{
		iText(109, 910, score_string, GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 0, 0);
		iText(548, 775, question_nums, GLUT_BITMAP_TIMES_ROMAN_24);
		drawMultilineText(statement, 98, 710, GLUT_BITMAP_HELVETICA_18, 25);
		iText(180, 255, optionA, GLUT_BITMAP_HELVETICA_18);
		iText(685, 255, optionB, GLUT_BITMAP_HELVETICA_18);
		iText(180, 110, optionC, GLUT_BITMAP_HELVETICA_18);
		iText(685, 110, optionD, GLUT_BITMAP_HELVETICA_18);
	}
	if (img_index == 4)
	{
		iSetColor(0, 0, 0);
		iText(570, 700, score_string, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(570, 560, GPA, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(434, 404, name, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (img_index == 6)
	{
		readLeaderboard(leaderboard_files[subject_index], cse101_entries, 5);
		iSetColor(255, 222, 89);
		int Y = 802;
		int line_gap = 150;
		for (int i = 0; i < 5; i++)
		{
			int y = Y - i * (line_gap);
			iText(212, y, cse101_entries[i].Name, GLUT_BITMAP_HELVETICA_18);
			iText(640, y, cse101_entries[i].GPAa, GLUT_BITMAP_HELVETICA_18);
			iText(824, y, cse101_entries[i].score_string, GLUT_BITMAP_HELVETICA_18);
		}
	}
	if (img_index == 7)
	{
		readLeaderboard(leaderboard_files[subject_index], cse103_entries, 5);
		iSetColor(255, 222, 89);
		int Y = 802;
		int line_gap = 150;
		for (int i = 0; i < 5; i++)
		{
			int y = Y - i * (line_gap);
			iText(212, y, cse103_entries[i].Name, GLUT_BITMAP_HELVETICA_18);
			iText(640, y, cse103_entries[i].GPAa, GLUT_BITMAP_HELVETICA_18);
			iText(824, y, cse103_entries[i].score_string, GLUT_BITMAP_HELVETICA_18);
		}
	}
	if (img_index == 8)
	{
		readLeaderboard(leaderboard_files[subject_index], eee163_entries, 5);
		iSetColor(255, 222, 89);
		int Y = 802;
		int line_gap = 150;
		for (int i = 0; i < 5; i++)
		{
			int y = Y - i * (line_gap);
			iText(212, y, eee163_entries[i].Name, GLUT_BITMAP_HELVETICA_18);
			iText(640, y, eee163_entries[i].GPAa, GLUT_BITMAP_HELVETICA_18);
			iText(824, y, eee163_entries[i].score_string, GLUT_BITMAP_HELVETICA_18);
		}
	}
	if (img_index == 9)
	{
		readLeaderboard(leaderboard_files[subject_index], math141_entries, 5);
		iSetColor(255, 222, 89);
		int Y = 802;
		int line_gap = 150;
		for (int i = 0; i < 5; i++)
		{
			int y = Y - i * (line_gap);
			iText(212, y, math141_entries[i].Name, GLUT_BITMAP_HELVETICA_18);
			iText(640, y, math141_entries[i].GPAa, GLUT_BITMAP_HELVETICA_18);
			iText(824, y, math141_entries[i].score_string, GLUT_BITMAP_HELVETICA_18);
		}
	}
	if (img_index == 10)
	{
		readLeaderboard(leaderboard_files[subject_index], phy129_entries, 5);
		iSetColor(255, 222, 89);
		int Y = 802;
		int line_gap = 150;
		for (int i = 0; i < 5; i++)
		{
			int y = Y - i * (line_gap);
			iText(212, y, phy129_entries[i].Name, GLUT_BITMAP_HELVETICA_18);
			iText(640, y, phy129_entries[i].GPAa, GLUT_BITMAP_HELVETICA_18);
			iText(824, y, phy129_entries[i].score_string, GLUT_BITMAP_HELVETICA_18);
		}
	}
	if (img_index == 13)
	{
		iSetColor(0, 0, 0);
		iText(98, 883, admin_question, GLUT_BITMAP_HELVETICA_18);
		iText(178, 468, admin_options[0], GLUT_BITMAP_HELVETICA_18);
		iText(683, 468, admin_options[1], GLUT_BITMAP_HELVETICA_18);
		iText(178, 323, admin_options[2], GLUT_BITMAP_HELVETICA_18);
		iText(683, 323, admin_options[3], GLUT_BITMAP_HELVETICA_18);
		iText(452, 212, admin_answer, GLUT_BITMAP_HELVETICA_18);
		iText(662, 212, admin_score, GLUT_BITMAP_HELVETICA_18);
	}
}
/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.*/
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	// place your codes here
}
/*function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.*/
void iMouse(int button, int state, int mx, int my)
{
	bool answer;
	bool wrong;
	bool A = (mx > 122 && mx < 416) && (my > 219 && my < 300);
	bool B = (mx > 627 && mx < 921) && (my > 219 && my < 300);
	bool C = (mx > 122 && mx < 416) && (my > 75 && my < 157);
	bool D = (mx > 627 && mx < 921) && (my > 75 && my < 157);
	bool play = (mx > 289 && mx < 738) && (my > 663 && my < 712);
	bool about = (mx > 289 && mx < 738) && (my > 391 && my < 441);
	bool cse101 = (mx > 343 && mx < 652) && (my > 649 && my < 764);
	bool cse103 = (mx > 343 && mx < 652) && (my > 525 && my < 640);
	bool eee163 = (mx > 343 && mx < 652) && (my > 401 && my < 516);
	bool math141 = (mx > 343 && mx < 652) && (my > 277 && my < 392);
	bool phy129 = (mx > 343 && mx < 652) && (my > 153 && my < 268);
	bool leaderboard = (mx > 289 && mx < 738) && (my > 526 && my < 577);
	bool cse101leaderboard = (mx > 370 && mx < 705) && (my > 830 && my < 891);
	bool cse103leaderboard = (mx > 370 && mx < 705) && (my > 686 && my < 747);
	bool eee163leaderboard = (mx > 370 && mx < 705) && (my > 542 && my < 603);
	bool math141leaderboard = (mx > 370 && mx < 705) && (my > 388 && my < 449);
	bool phy129leaderboard = (mx > 370 && mx < 705) && (my > 244 && my < 305);
	//bool cgpaleaderboard = (mx > 370 && mx < 705) && (my > 100 && my < 161);
	bool cse101admin = (mx > 370 && mx < 705) && (my > 830 && my < 891);
	bool cse103admin = (mx > 370 && mx < 705) && (my > 686 && my < 747);
	bool eee163admin = (mx > 370 && mx < 705) && (my > 542 && my < 603);
	bool math141admin = (mx > 370 && mx < 705) && (my > 388 && my < 449);
	bool phy129admin = (mx > 370 && mx < 705) && (my > 244 && my < 305);
	bool quit = (mx > 289 && mx < 738) && (my > 255 && my < 304);
	bool cross = (mx > 901 && mx < 924) && (my > 760 && my < 787);
	bool AdminMode = (mx > 308 && mx < 714) && (my > 107 && my < 172);
	bool Add = (mx > 125 && mx < 406) && (my > 70 && my < 140);
	bool AddMore = (mx > 618 && mx < 899) && (my > 70 && my < 140);
	bool Yes = (mx > 264 && mx < 459) && (my > 499 && my < 551);
	bool No = (mx > 564 && mx < 759) && (my > 499 && my < 551);
	bool Sound = (mx > 900 && mx < 963) && (my > 112 && my < 175);
	if (img_index == 0 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && play)
	{
		img_index = 1;
		if (bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 0 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && about)
	{
		img_index = 2;
		if (bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 0 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && Sound)
	{
		img2_index = !img2_index;
		if(img2_index == 0){
			PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
		}
		else if(img2_index == 1){
			PlaySound(0,0,0);
		}
	}
	else if (img_index == 1 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && cse101)
	{
		img_index = 3;
		subject_index = 0;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 1 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && cse103)
	{
		img_index = 3;
		subject_index = 1;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 1 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && eee163)
	{
		img_index = 3;
		subject_index = 2;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 1 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && math141)
	{
		img_index = 3;
		subject_index = 3;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 1 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && phy129)
	{
		img_index = 3;
		subject_index = 4;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 0 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && leaderboard)
	{
		img_index = 5;
		if (bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 5 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && cse101leaderboard)
	{
		img_index = 6;
		subject_index = 0;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 5 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && cse103leaderboard)
	{
		img_index = 7;
		subject_index = 1;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 5 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && eee163leaderboard)
	{
		img_index = 8;
		subject_index = 2;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 5 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && math141leaderboard)
	{
		img_index = 9;
		subject_index = 3;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 5 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && phy129leaderboard)
	{
		img_index = 10;
		subject_index = 4;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 0 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && quit)
	{
		exit(0);
	}
	else if (img_index == 3 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && cross)
	{
		img_index = 0;
		file_index = 0;
		question_num = 1;
		score = 0;
		sprintf(question_nums, "%d", question_num);
		sprintf(score_string, "Score: %d", score);
		if (!(bgmusicOn))
		{
			bgmusicOn = true;
			PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	else if (img_index == 3)
	{
		if (subject_index == 0)
		{
			files(cse101_question_files[file_index]);
			if (correct_option == 'A')
			{
				answer = A;
				wrong = B || C || D;
			}
			else if (correct_option == 'B')
			{
				answer = B;
				wrong = A || C || D;
			}
			else if (correct_option == 'C')
			{
				answer = C;
				wrong = A || B || D;
			}
			else if (correct_option == 'D')
			{
				answer = D;
				wrong = A || B || C;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && answer)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\correct.wav", NULL, SND_ASYNC);
				}
				score = score + score_adder;
				question_num++;
				sprintf(score_string, "Score: %d", score);
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
			else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && wrong)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\wrong.wav", NULL, SND_ASYNC);
				}
				question_num++;
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
		}
		if (subject_index == 1)
		{
			files(cse103_question_files[file_index]);
			if (correct_option == 'A')
			{
				answer = A;
				wrong = B || C || D;
			}
			else if (correct_option == 'B')
			{
				answer = B;
				wrong = A || C || D;
			}
			else if (correct_option == 'C')
			{
				answer = C;
				wrong = A || B || D;
			}
			else if (correct_option == 'D')
			{
				answer = D;
				wrong = A || B || C;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && answer)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\correct.wav", NULL, SND_ASYNC);
				}
				score = score + score_adder;
				question_num++;
				sprintf(score_string, "Score: %d", score);
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
			else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && wrong)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\wrong.wav", NULL, SND_ASYNC);
				}
				question_num++;
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
		}
		if (subject_index == 2)
		{
			files(eee163_question_files[file_index]);
			if (correct_option == 'A')
			{
				answer = A;
				wrong = B || C || D;
			}
			else if (correct_option == 'B')
			{
				answer = B;
				wrong = A || C || D;
			}
			else if (correct_option == 'C')
			{
				answer = C;
				wrong = A || B || D;
			}
			else if (correct_option == 'D')
			{
				answer = D;
				wrong = A || B || C;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && answer)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\correct.wav", NULL, SND_ASYNC);
				}
				score = score + score_adder;
				question_num++;
				sprintf(score_string, "Score: %d", score);
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
			else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && wrong)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\wrong.wav", NULL, SND_ASYNC);
				}
				question_num++;
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
		}
		if (subject_index == 3)
		{
			files(math141_question_files[file_index]);
			if (correct_option == 'A')
			{
				answer = A;
				wrong = B || C || D;
			}
			else if (correct_option == 'B')
			{
				answer = B;
				wrong = A || C || D;
			}
			else if (correct_option == 'C')
			{
				answer = C;
				wrong = A || B || D;
			}
			else if (correct_option == 'D')
			{
				answer = D;
				wrong = A || B || C;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && answer)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\correct.wav", NULL, SND_ASYNC);
				}
				score = score + score_adder;
				question_num++;
				sprintf(score_string, "Score: %d", score);
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
			else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && wrong)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\wrong.wav", NULL, SND_ASYNC);
				}
				question_num++;
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
		}
		if (subject_index == 4)
		{
			files(phy129_question_files[file_index]);
			if (correct_option == 'A')
			{
				answer = A;
				wrong = B || C || D;
			}
			else if (correct_option == 'B')
			{
				answer = B;
				wrong = A || C || D;
			}
			else if (correct_option == 'C')
			{
				answer = C;
				wrong = A || B || D;
			}
			else if (correct_option == 'D')
			{
				answer = D;
				wrong = A || B || C;
			}
			if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && answer)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\correct.wav", NULL, SND_ASYNC);
				}
				score = score + score_adder;
				question_num++;
				sprintf(score_string, "Score: %d", score);
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
			else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && wrong)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\wrong.wav", NULL, SND_ASYNC);
				}
				question_num++;
				sprintf(question_nums, "%d", question_num);
				if (file_index < 4)
					file_index++;
				else if (file_index == 4)
				{
					img_index++;
					sprintf(score_string, "%d", score);
				}
			}
		}
	}
	else if (img_index == 4)
	{
		if (score >= 80)
		{
			sprintf(GPA, "4.00");
			GPA[sizeof(GPA) - 1] = '\0';
		}
		else if (score >= 70 && score < 80)
		{
			sprintf(GPA, "3.75");
			GPA[sizeof(GPA) - 1] = '\0';
		}
		else if (score >= 60 && score < 70)
		{
			sprintf(GPA, "3.50");
			GPA[sizeof(GPA) - 1] = '\0';
		}
		else if (score >= 50 && score < 60)
		{
			sprintf(GPA, "3.25");
			GPA[sizeof(GPA) - 1] = '\0';
		}
		else if (score >= 40 && score < 50)
		{
			sprintf(GPA, "3.00");
			GPA[sizeof(GPA) - 1] = '\0';
		}
		else if (score >= 30 && score < 40)
		{
			sprintf(GPA, "2.75");
			GPA[sizeof(GPA) - 1] = '\0';
		}
		else if (score >= 20 && score < 30)
		{
			sprintf(GPA, "2.50");
			GPA[sizeof(GPA) - 1] = '\0';
		}
		else
		{
			sprintf(GPA, "0.00");
			GPA[sizeof(GPA) - 1] = '\0';
		}
	}
	else if (img_index == 0 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && AdminMode)
	{
		img_index = 12;
		if (bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 12 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && cse101admin)
	{
		img_index = 13;
		admin_index = 0;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 12 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && cse103admin)
	{
		img_index = 13;
		admin_index = 1;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 12 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && eee163admin)
	{
		img_index = 13;
		admin_index = 2;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 12 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && math141admin)
	{
		img_index = 13;
		admin_index = 3;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 12 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && phy129admin)
	{
		img_index = 13;
		admin_index = 4;
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
	}
	else if (img_index == 13 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && Add)
	{
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
		if (admin_index == 0)
		{
			QuesIndexRead("questions\\QuesIndex\\cse101.txt", &newcse101Ques_index);
			if (newcse101Ques_index < 10)
			{
				WriteNewQues(cse101_extra_question_files[newcse101Ques_index], admin_question, admin_options, admin_answer, admin_score, newQues);
				shuffle(cse101_question_files,15);
				newcse101Ques_index++;
				if (newcse101Ques_index < 10)
				{
					QuesIndexUpdate("questions\\QuesIndex\\cse101.txt", newcse101Ques_index);
				}
			}
		}
		else if (admin_index == 1)
		{
			QuesIndexRead("questions\\QuesIndex\\cse103.txt", &newcse103Ques_index);
			if (newcse103Ques_index < 10)
			{
				WriteNewQues(cse103_extra_question_files[newcse103Ques_index], admin_question, admin_options, admin_answer, admin_score, newQues);
				shuffle(cse103_question_files,15);
				newcse103Ques_index++;
				if (newcse103Ques_index < 10)
				{
					QuesIndexUpdate("questions\\QuesIndex\\cse103.txt", newcse103Ques_index);
				}
			}
		}
		else if (admin_index == 2)
		{
			QuesIndexRead("questions\\QuesIndex\\eee163.txt", &neweee163Ques_index);
			if (neweee163Ques_index < 10)
			{
				WriteNewQues(eee163_extra_question_files[neweee163Ques_index], admin_question, admin_options, admin_answer, admin_score, newQues);
				shuffle(eee163_question_files,15);
				neweee163Ques_index++;
				if (neweee163Ques_index < 10)
				{
					QuesIndexUpdate("questions\\QuesIndex\\eee163.txt", neweee163Ques_index);
				}
			}
		}
		else if (admin_index == 3)
		{
			QuesIndexRead("questions\\QuesIndex\\math141.txt", &newmath141Ques_index);
			if (newmath141Ques_index < 10)
			{
				WriteNewQues(math141_extra_question_files[newmath141Ques_index], admin_question, admin_options, admin_answer, admin_score, newQues);
				shuffle(math141_question_files,15);
				newmath141Ques_index++;
				if (newmath141Ques_index < 10)
				{
					QuesIndexUpdate("questions\\QuesIndex\\math141.txt", newmath141Ques_index);
				}
			}
		}
		else if (admin_index == 4)
		{
			QuesIndexRead("questions\\QuesIndex\\phy129.txt", &newphy129Ques_index);
			if (newphy129Ques_index < 10)
			{
				WriteNewQues(phy129_extra_question_files[newphy129Ques_index], admin_question, admin_options, admin_answer, admin_score, newQues);
				shuffle(phy129_question_files,15);
				newphy129Ques_index++;
				if (newphy129Ques_index < 10)
				{
					QuesIndexUpdate("questions\\QuesIndex\\phy129.txt", newphy129Ques_index);
				}
			}
		}
	}
	else if (img_index == 13 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && AddMore)
	{
		if (newcse101Ques_index > 9 || newcse103Ques_index > 9 || neweee163Ques_index > 9 || newmath141Ques_index > 9 || newphy129Ques_index > 9)
		{
			img_index = 14;
			if (!bgmusicOn)
			{
				bgmusicOn = false;
				PlaySound("music\\warning.wav", NULL, SND_ASYNC);
			}
		}
		else
		{
			if (!bgmusicOn)
			{
				bgmusicOn = false;
				PlaySound("music\\click.wav", NULL, SND_ASYNC);
			}
			for (int i = 0; i < strlen(admin_question); i++)
			{
				admin_question[i] = '\0';
			}
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < strlen(admin_options[i]); j++)
				{
					admin_options[i][j] = '\0';
				}
			}
			for (int i = 0; i < strlen(admin_answer); i++)
			{
				admin_answer[i] = '\0';
			}
			for (int i = 0; i < strlen(admin_score); i++)
			{
				admin_score[i] = '\0';
			}
		}
	}
	else if (img_index == 14 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && Yes)
	{
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
		for (int i = 0; i < strlen(admin_question); i++)
		{
			admin_question[i] = '\0';
		}
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < strlen(admin_options[i]); j++)
			{
				admin_options[i][j] = '\0';
			}
		}
		for (int i = 0; i < strlen(admin_answer); i++)
		{
			admin_answer[i] = '\0';
		}
		for (int i = 0; i < strlen(admin_score); i++)
		{
			admin_score[i] = '\0';
		}
		if (newcse101Ques_index > 9)
		{
			newcse101Ques_index = 0;
			QuesIndexUpdate("questions\\QuesIndex\\cse101.txt", newcse101Ques_index);
		}
		else if (newcse103Ques_index > 9)
		{
			newcse103Ques_index = 0;
			QuesIndexUpdate("questions\\QuesIndex\\cse103.txt", newcse103Ques_index);
		}
		else if (neweee163Ques_index > 9)
		{
			neweee163Ques_index = 0;
			QuesIndexUpdate("questions\\QuesIndex\\eee163.txt", neweee163Ques_index);
		}
		else if (newmath141Ques_index > 9)
		{
			newmath141Ques_index = 0;
			QuesIndexUpdate("questions\\QuesIndex\\math141.txt", newmath141Ques_index);
		}
		else if (newphy129Ques_index > 9)
		{
			newphy129Ques_index = 0;
			QuesIndexUpdate("questions\\QuesIndex\\phy129.txt", newphy129Ques_index);
		}
		img_index = 13;
	}
	else if (img_index == 14 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && No)
	{
		for (int i = 0; i < strlen(admin_question); i++)
		{
			admin_question[i] = '\0';
		}
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < strlen(admin_options[i]); j++)
			{
				admin_options[i][j] = '\0';
			}
		}
		for (int i = 0; i < strlen(admin_answer); i++)
		{
			admin_answer[i] = '\0';
		}
		for (int i = 0; i < strlen(admin_score); i++)
		{
			admin_score[i] = '\0';
		}
		if (!bgmusicOn)
		{
			bgmusicOn = false;
			PlaySound("music\\click.wav", NULL, SND_ASYNC);
		}
		img_index = 0;
		if (!(bgmusicOn))
		{
			bgmusicOn = true;
			PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
}
/*function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.*/
void iKeyboard(unsigned char key)
{
	if (img_index == 4 && key == 13)
	{
		if (subject_index == 0)
		{
			shuffle(cse101_question_files,15);
			if (cse101_entry_index < 4)
			{
				cse101_entry_index++;
			}
			else
			{
				cse101_entry_index = 4;
			}
			qsort(cse101_entries, 5, sizeof(struct lead), compare_scores);
			writeLeaderboard(leaderboard_files[subject_index], cse101_entries, 5);
			img_index = 0;
			file_index = 0;
			indexnumber = 0;
			question_num = 1;
			score = 0;
			sprintf(question_nums, "%d", question_num);
			sprintf(score_string, "Score: %d", score);
			int n = strlen(name);
			for (int i = 0; i < n; i++)
			{
				name[i] = '\0';
			}
			n = strlen(GPA);
			for (int i = 0; i < n; i++)
			{
				GPA[i] = '\0';
			}
			if (!(bgmusicOn) && img2_index == 0)
			{
				bgmusicOn = true;
				PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		else if (subject_index == 1)
		{
			shuffle(cse103_question_files,15);
			if (cse103_entry_index < 4)
			{
				cse103_entry_index++;
			}
			else
			{
				cse103_entry_index = 4;
			}
			qsort(cse103_entries, 5, sizeof(struct lead), compare_scores);
			writeLeaderboard(leaderboard_files[subject_index], cse103_entries, 5);
			img_index = 0;
			file_index = 0;
			indexnumber = 0;
			question_num = 1;
			score = 0;
			sprintf(question_nums, "%d", question_num);
			sprintf(score_string, "Score: %d", score);
			int n = strlen(name);
			for (int i = 0; i < n; i++)
			{
				name[i] = '\0';
			}
			n = strlen(GPA);
			for (int i = 0; i < n; i++)
			{
				GPA[i] = '\0';
			}
			if (!(bgmusicOn) && img2_index == 0)
			{
				bgmusicOn = true;
				PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		else if (subject_index == 2)
		{
			shuffle(eee163_question_files,15);
			if (eee163_entry_index < 4)
			{
				eee163_entry_index++;
			}
			else
			{
				eee163_entry_index = 4;
			}
			qsort(eee163_entries, 5, sizeof(struct lead), compare_scores);
			writeLeaderboard(leaderboard_files[subject_index], eee163_entries, 5);
			img_index = 0;
			file_index = 0;
			indexnumber = 0;
			question_num = 1;
			score = 0;
			sprintf(question_nums, "%d", question_num);
			sprintf(score_string, "Score: %d", score);
			int n = strlen(name);
			for (int i = 0; i < n; i++)
			{
				name[i] = '\0';
			}
			n = strlen(GPA);
			for (int i = 0; i < n; i++)
			{
				GPA[i] = '\0';
			}
			if (!(bgmusicOn) && img2_index == 0)
			{
				bgmusicOn = true;
				PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		else if (subject_index == 3)
		{
			shuffle(math141_question_files,15);
			if (math141_entry_index < 4)
			{
				math141_entry_index++;
			}
			else
			{
				math141_entry_index = 4;
			}
			qsort(math141_entries, 5, sizeof(struct lead), compare_scores);
			writeLeaderboard(leaderboard_files[subject_index], math141_entries, 5);
			img_index = 0;
			file_index = 0;
			indexnumber = 0;
			question_num = 1;
			score = 0;
			sprintf(question_nums, "%d", question_num);
			sprintf(score_string, "Score: %d", score);
			int n = strlen(name);
			for (int i = 0; i < n; i++)
			{
				name[i] = '\0';
			}
			n = strlen(GPA);
			for (int i = 0; i < n; i++)
			{
				GPA[i] = '\0';
			}
			if (!(bgmusicOn) && img2_index == 0)
			{
				bgmusicOn = true;
				PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		else if (subject_index == 4)
		{
			shuffle(phy129_question_files,15);
			if (phy129_entry_index < 4)
			{
				phy129_entry_index++;
			}
			else
			{
				phy129_entry_index = 4;
			}
			qsort(phy129_entries, 5, sizeof(struct lead), compare_scores);
			writeLeaderboard(leaderboard_files[subject_index], phy129_entries, 5);
			img_index = 0;
			file_index = 0;
			indexnumber = 0;
			question_num = 1;
			score = 0;
			sprintf(question_nums, "%d", question_num);
			sprintf(score_string, "Score: %d", score);
			int n = strlen(name);
			for (int i = 0; i < n; i++)
			{
				name[i] = '\0';
			}
			n = strlen(GPA);
			for (int i = 0; i < n; i++)
			{
				GPA[i] = '\0';
			}
			if (!(bgmusicOn) && img2_index == 0)
			{
				bgmusicOn = true;
				PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
	}
	if (key == 27)
	{
		if(img_index == 3)
		{
			if(subject_index == 0){
				shuffle(cse101_question_files,15);
			}
			else if(subject_index == 1){
				shuffle(cse103_question_files,15);
			}
			else if(subject_index == 2){
				shuffle(eee163_question_files,15);
			}
			else if(subject_index == 3){
				shuffle(math141_question_files,15);
			}
			else if(subject_index == 4){
				shuffle(phy129_question_files,15);
			}
		}
		img_index = 0;
		file_index = 0;
		indexnumber = 0;
		question_num = 1;
		score = 0;
		sprintf(question_nums, "%d", question_num);
		sprintf(score_string, "Score: %d", score);
		int n = strlen(name);
		for (int i = 0; i < n; i++)
		{
			name[i] = '\0';
		}
		n = strlen(GPA);
		for (int i = 0; i < n; i++)
		{
			GPA[i] = '\0';
		}
		if (!(bgmusicOn) && img2_index == 0)
		{
			bgmusicOn = true;
			PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	if (img_index == 4)
	{
		if (key != '\b')
		{
			if (!bgmusicOn)
			{
				bgmusicOn = false;
				PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
			}
			name[indexnumber] = key;
			name[indexnumber + 1] = '\0';
			indexnumber++;
		}
		else
		{
			if (!bgmusicOn)
			{
				bgmusicOn = false;
				PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
			}
			if (indexnumber >= 0)
			{
				name[indexnumber - 1] = '\0';
				indexnumber--;
			}
			else
			{
				indexnumber = 0;
			}
		}
		if (subject_index == 0)
		{
			strcpy(cse101_entries[cse101_entry_index].Name, name);
			strcpy(cse101_entries[cse101_entry_index].GPAa, GPA);
			cse101_entries[cse101_entry_index].score = score;
			sprintf(cse101_entries[cse101_entry_index].score_string, "%d", score);
		}
		else if (subject_index == 1)
		{
			strcpy(cse103_entries[cse103_entry_index].Name, name);
			strcpy(cse103_entries[cse103_entry_index].GPAa, GPA);
			cse103_entries[cse103_entry_index].score = score;
			sprintf(cse103_entries[cse103_entry_index].score_string, "%d", score);
		}
		else if (subject_index == 2)
		{
			strcpy(eee163_entries[eee163_entry_index].Name, name);
			strcpy(eee163_entries[eee163_entry_index].GPAa, GPA);
			eee163_entries[eee163_entry_index].score = score;
			sprintf(eee163_entries[eee163_entry_index].score_string, "%d", score);
		}
		else if (subject_index == 3)
		{
			strcpy(math141_entries[math141_entry_index].Name, name);
			strcpy(math141_entries[math141_entry_index].GPAa, GPA);
			math141_entries[math141_entry_index].score = score;
			sprintf(math141_entries[math141_entry_index].score_string, "%d", score);
		}
		else if (subject_index == 4)
		{
			strcpy(phy129_entries[phy129_entry_index].Name, name);
			strcpy(phy129_entries[phy129_entry_index].GPAa, GPA);
			phy129_entries[phy129_entry_index].score = score;
			sprintf(phy129_entries[phy129_entry_index].score_string, "%d", score);
		}
	}
	if (img_index == 13)
	{
		if (key == 13)
		{
			if (!bgmusicOn)
			{
				bgmusicOn = false;
				PlaySound("music\\enter.wav", NULL, SND_ASYNC);
			}
			admin_entry_index++;
			indexnumber = 0;
			return;
		}
		if (admin_entry_index % 7 == 0)
		{
			if (key != '\b' && key != 13)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				admin_question[indexnumber] = key;
				admin_question[indexnumber + 1] = '\0';
				indexnumber++;
			}
			else
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				if (indexnumber >= 0)
				{
					admin_question[indexnumber - 1] = '\0';
					indexnumber--;
				}
				else
				{
					indexnumber = 0;
				}
			}
		}
		else if (admin_entry_index % 7 == 1)
		{
			if (key != '\b' && key != 13)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				admin_options[0][indexnumber] = key;
				admin_options[0][indexnumber + 1] = '\0';
				indexnumber++;
			}
			else
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				if (indexnumber >= 0)
				{
					admin_options[0][indexnumber - 1] = '\0';
					indexnumber--;
				}
				else
				{
					indexnumber = 0;
				}
			}
		}
		else if (admin_entry_index % 7 == 2)
		{
			if (key != '\b' && key != 13)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				admin_options[1][indexnumber] = key;
				admin_options[1][indexnumber + 1] = '\0';
				indexnumber++;
			}
			else
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				if (indexnumber >= 0)
				{
					admin_options[1][indexnumber - 1] = '\0';
					indexnumber--;
				}
				else
				{
					indexnumber = 0;
				}
			}
		}
		else if (admin_entry_index % 7 == 3)
		{
			if (key != '\b' && key != 13)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				admin_options[2][indexnumber] = key;
				admin_options[2][indexnumber + 1] = '\0';
				indexnumber++;
			}
			else
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				if (indexnumber >= 0)
				{
					admin_options[2][indexnumber - 1] = '\0';
					indexnumber--;
				}
				else
				{
					indexnumber = 0;
				}
			}
		}
		else if (admin_entry_index % 7 == 4)
		{
			if (key != '\b' && key != 13)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				admin_options[3][indexnumber] = key;
				admin_options[3][indexnumber + 1] = '\0';
				indexnumber++;
			}
			else
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				if (indexnumber >= 0)
				{
					admin_options[3][indexnumber - 1] = '\0';
					indexnumber--;
				}
				else
				{
					indexnumber = 0;
				}
			}
		}
		else if (admin_entry_index % 7 == 5)
		{
			if (key != '\b' && key != 13)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				admin_answer[indexnumber] = key;
				admin_answer[indexnumber + 1] = '\0';
				indexnumber++;
			}
			else
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				if (indexnumber >= 0)
				{
					admin_answer[indexnumber - 1] = '\0';
					indexnumber--;
				}
				else
				{
					indexnumber = 0;
				}
			}
		}
		else if (admin_entry_index % 7 == 6)
		{
			if (key != '\b' && key != 13)
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				admin_score[indexnumber] = key;
				admin_score[indexnumber + 1] = '\0';
				indexnumber++;
			}
			else
			{
				if (!bgmusicOn)
				{
					bgmusicOn = false;
					PlaySound("music\\keystroke.wav", NULL, SND_ASYNC);
				}
				if (indexnumber >= 0)
				{
					admin_score[indexnumber - 1] = '\0';
					indexnumber--;
				}
				else
				{
					indexnumber = 0;
				}
			}
		}
	}
}
/*function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT*/
void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
}
int main()
{
	if (bgmusicOn)
	{
		PlaySound("music\\quizgamemenu.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	iInitialize(screenwidth, screenheight, "Quiz Game");
	return 0;
}
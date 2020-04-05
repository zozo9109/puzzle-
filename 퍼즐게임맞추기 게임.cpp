#include<Bangtal.h>
#pragma comment(lib,"Bangtal.lib")

	 
SceneID scene1;
ObjectID startButton,endButton, restartButton, Original, zoro1, zoro2, zoro3, zoro4, zoro5, zoro6, zoro7, zoro8, zoro9, blank;





int boardX[3] = {
	210, 410, 610
};

int boardY[3] = {
	500, 300, 100
};


int blankX;
int blankY;




ObjectID createObject(const char* name, const char* image, SceneID scene, int x, int y, bool shown) {
	ObjectID object = createObject(name, image);
	locateObject(object, scene, x, y);
	if(shown == true)
		if (shown) {
			showObject(object);
		}
	return object;
		}
}

void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == endButton) {
		endGame();
	}
	else if
}
for (int i = 0; i < 3; i++) {
	for (int i = 0; i < 3; i++){
		if (object == board[i][j]){
			if (i == 0 && j == 0){
				if (board[i][j + 1] == blank){






					






	
Swap(boardX,)



					Swap(board[i][j], blank);

					SwapX(boardX[i][j], boardX[i + 1][j]);

					SwapY(boardY[i][j], boardY[i + 1][j]);









int main() {
	
	setMouseCallback(mouseCallback);
	
	scene1 = createScene("퍼즐맞추기", "Original.jpg");

	scene2 = createScene("흰화면", "background.jpg");

	startButton = createObject("시작버튼", "start.png", scene1, 280, 70, true);

	endButton = createObject("종료버튼", "end.png", scene1, 280, 20, true);

	restartButton = createObject("재시작버튼,"reatart.png", scene1, true);





	startGame(scene1);
}

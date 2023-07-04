#pragma once
#include "Grid.h"
#include "blocks.cpp"
using namespace std;

class Game
{
public:
	Game();
	
	bool gameOver;
	int score;
	void Draw();
	void HandleInput();
	void MoveBlockDown();
	

private:
	Block GetRandomBlock();
	vector<Block> GetAllBlocks();
	void MoveBlockLeft();
	void MoveBlockRight();
	bool IsBlookOutside();
	void RotateBlock();
	void LockBlock();
	bool BlockFits();
	void Reset();
	void UpdateScore(int linesCleared, int moveDownPoints);
	Grid grid;
	vector<Block> blocks;
	Block currentBlock;
	Block nextBlock;

};


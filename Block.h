#pragma once
#include <vector>
#include <map>
#include "Position.h"
#include "Colors.h"

using namespace std;

class Block
{

public:
	Block();
	void Draw(int offsetX, int offsetY);
	void Move(int rows, int columns);
	vector<Position> GetCellPositions();
	void Rotate();
	void UndoRotation();
	int Id;
	map<int, vector<Position>> cells;
	

private:
	int cellSize;
	int rotationState;
	vector<Color> colors;
	int rowOffset;
	int columnOffset;

};


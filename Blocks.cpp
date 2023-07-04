#include "Block.h"
#include "Position.h"

class LBlock : public Block
{
public:
	LBlock()
	{
		Id = 1;
		//Rotation state 0
		 cells[0] = { Position(0,2),Position(1,0),Position(1,1),Position(1,2) };
		//Rotation state1
		 cells[1] = { Position(0,1),Position(1,1),Position(2,1),Position(2,2) };
		//Rotation state2
		 cells[2] = { Position(1,0),Position(1,1),Position(1,2),Position(2,0) };
		//Rotation state3
		 cells[3] = { Position(0,0),Position(0,1),Position(1,1),Position(2,1) };
		//Start from center
		 Move(0, 3);
	}

};

class JBlock : public Block
{
public:
	JBlock()
	{
		Id = 2;
		//Rotation state 0
		cells[0] = { Position(0,0),Position(1,0),Position(1,1),Position(1,2) };
		//Rotation state 1
		cells[1] = { Position(0,1),Position(0,2),Position(1,1),Position(2,1) };
		//Rotation state 2
		cells[2] = { Position(1,0),Position(1,1),Position(1,2),Position(2,2) };
		//Rotation state 3
		cells[3] = { Position(0,1),Position(1,1),Position(2,0),Position(2,1) };
		//Start from center
		Move(0, 3);
	}

};

class IBlock : public Block
{
public:
	IBlock()
	{
		Id = 3;
		//Rotation state 0
		cells[0] = { Position(1,0),Position(1,1),Position(1,2),Position(1,3) };
		//Rotation state 1
		cells[1] = { Position(0,2),Position(1,2),Position(2,2),Position(3,2) };
		//Rotation state 2
		cells[2] = { Position(2,0),Position(2,1),Position(2,2),Position(2,3) };
		//Rotation state 3
		cells[3] = { Position(0,1),Position(1,1),Position(2,1),Position(3,1) };
		//Start from center
		Move(-1, 3);
	}


};

class OBlock : public Block
{
public:
	OBlock()
	{
		Id = 4;
		//Rotation state 0
		cells[0] = { Position(0,0),Position(0,1),Position(1,0),Position(1,1) };
		//Rotation state 1
		cells[1] = { Position(0,0),Position(0,1),Position(1,0),Position(1,1) };
		//Rotation state 2
		cells[2] = { Position(0,0),Position(0,1),Position(1,0),Position(1,1) };
		//Rotation state 3
		cells[3] = { Position(0,0),Position(0,1),Position(1,0),Position(1,1) };
		//Start from center
		Move(0, 4);
	}
};

class SBlock : public Block
{
public:
	SBlock()
	{
		Id = 5;
		//Rotation state 0
		cells[0] = { Position(0,1),Position(0,2),Position(1,0),Position(1,1) };
		//Rotation state 1
		cells[1] = { Position(0,1),Position(1,1),Position(1,2),Position(2,2) };
		//Rotation state 2
		cells[2] = { Position(1,1),Position(1,2),Position(2,0),Position(2,1) };
		//Rotation state 3
		cells[3] = { Position(0,0),Position(1,0),Position(1,1),Position(2,1) };
		//Start from center
		Move(0, 3);
	}
};

class TBlock : public Block
{
public:
	TBlock()
	{
		Id = 6;
		//Rotation state 0
		cells[0] = { Position(0,1),Position(1,0),Position(1,1),Position(1,2) };
		//Rotation state 1
		cells[1] = { Position(0,1),Position(1,1),Position(1,2),Position(2,1) };
		//Rotation state 2
		cells[2] = { Position(1,0),Position(1,1),Position(1,2),Position(2,1) };
		//Rotation state 3
		cells[3] = { Position(0,1),Position(1,0),Position(1,1),Position(2,1) };
		//Start from center
		Move(0, 3);
	}
};

class ZBlock : public Block
{
public:
	ZBlock()
	{
		Id = 7;
		//Rotation state 0
		cells[0] = { Position(0,0),Position(0,1),Position(1,1),Position(1,2) };
		//Rotation state 1
		cells[1] = { Position(0,2),Position(1,1),Position(1,2),Position(2,1) };
		//Rotation state 2
		cells[2] = { Position(1,0),Position(1,1),Position(2,1),Position(2,2) };
		//Rotation state 3
		cells[3] = { Position(0,1),Position(1,0),Position(1,1),Position(2,0) };
		//Start from center
		Move(0, 3);
	}
};
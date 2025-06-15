#include "libImpossibleLevel.hpp"
#include <cmath>

extern Level levelDat("blank.lvl/level.dat");

void addS(int xpos, int ypos)
{
    float correctX = static_cast<float>(xpos) - 30.0;
    float correctY = static_cast<float>(ypos);
    BlockObj newSpike = {static_cast<int>(round(correctX)), static_cast<int>(round(correctY)), 01, 00};
    levelDat.addNewBlock(newSpike);
}

void addB(int xpos, int ypos)
{
    float correctX = static_cast<float>(xpos) - 30.0;
    float correctY = static_cast<float>(ypos);
    BlockObj newBlock = {static_cast<int>(round(correctX)), static_cast<int>(round(correctY)), 00, 00};
    levelDat.addNewBlock(newBlock);
}

void addP(int startx, int endx)
{
    int correctStart = static_cast<int>(round(static_cast<float>(startx) - 30.0));
	int correctEnd = static_cast<int>(round(static_cast<float>(endx) - 30.0));

    BlockObj newPit = {correctStart, correctEnd, 02, 00};
    levelDat.addNewBlock(newPit);
}

void blockLine(int startx, int endx, int ypos)
{
    float distance = (static_cast<float>(endx) - static_cast<float>(startx)) + 30.0;
    int correctStart = static_cast<int>(round(static_cast<float>(startx) + 30.0));
    int numBlocks = static_cast<int>(round(distance/129 ));

    BlockObj newBlock = {0, 0, 0, 00};
    for(int i = 0; i < numBlocks; i++)
    {
        newBlock.xPos = (correctStart + (i * 129));
		newBlock.yPos = (ypos + (i * 30));
        levelDat.addNewBlock(newBlock);
    }
}

void fireAura()
{
  addS(1020,0);
   addS(1500,0);
   addS(1530,0);
   addB(2000,0);
   addB(2150,0);
   addP(2030,2120);
   addS(2700,0);
   addS(2730,0);
   addS(3200,0);
   addS(3470,0);
   addS(3500,0);
   addB(3750,0);
   addB(3882,30);
   addB(4014,60);
   addB(4184,30);
   addB(4354,0);
   addP(3780,4320);
   addS(4550,0);
   addS(5000,0);
   addB(5400,0);
   addB(5532,30);
   addB(5607,30);
   addS(5607,60);
   addB(5682,30);
   addB(5853,0);
   addS(6040,0);
   addP(5430,5820);
   addS(6300,0);
   addS(6600,0);
   addS(6800,0);
   addS(7000,0);
   addP(7280,9000);
   addB(7250,0);
   addB(7382,30);
   addB(7514,60);
   addB(7646,90);
   addB(7778,120);
   addB(7808,120);
   addB(7838,120);
   addB(7868,120);
   addB(7898,120);
   addB(7928,120);
   addB(7958,120);
   addB(7988,120);
   addB(8018,120);
   addB(8048,120);
   addB(8078,120);
   addB(8108,120);
   addS(8108,150);
   addB(8210,150);
   addB(8240,150);
   addB(8270,150);
   addB(8300,150);
   levelDat.setEndPos(8600);
}

int main()
{
    fireAura();
    levelDat.writeDataToFile("output/fireauraflash.lvl/level.dat");
    return 0;
}
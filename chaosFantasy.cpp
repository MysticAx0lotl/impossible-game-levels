#include "libImpossibleLevel.hpp"
#include <cmath>

extern int yOffset = 500;
extern float scale = 0.60000002;
extern int inversion = -1;
extern int xOffset = -200;

extern Level levelDat("blank.lvl/level.dat");

void spike(int xpos, int ypos)
{
    float correctX = scale * static_cast<float>(xpos + xOffset);// + xOffset);
    float correctY = scale * (inversion * static_cast<float>(ypos - yOffset));// + yOffset));
    BlockObj newSpike = {static_cast<int>(round(correctX)), static_cast<int>(round(correctY)), 01, 00};
    levelDat.addNewBlock(newSpike);
}

void block(int xpos, int ypos)
{
    float correctX = scale * static_cast<float>(xpos + xOffset);// + xOffset);
    float correctY = scale * (inversion * static_cast<float>(ypos - yOffset));// + yOffset));
    BlockObj newBlock = {static_cast<int>(round(correctX)), static_cast<int>(round(correctY)), 00, 00};
    levelDat.addNewBlock(newBlock);
}

void pit(int startx, int endx)
{
    int correctStart = static_cast<int>(round(static_cast<float>(startx + xOffset) * scale));// + xOffset) * scale));
	int correctEnd = static_cast<int>(round(static_cast<float>(endx + xOffset) * scale));// + xOffset) * scale));

    BlockObj newPit = {correctStart, correctEnd, 02, 00};
    levelDat.addNewBlock(newPit);
}

void blockLine(int startx, int endx, int ypos)
{
    float distance = (static_cast<float>(endx + xOffset) - static_cast<float>(startx + xOffset)) * scale;
    int correctStart = static_cast<int>(round(static_cast<float>(startx + xOffset) * scale));
    int numBlocks = static_cast<int>(round(distance/129));
	float correctY = scale * (inversion * static_cast<float>(ypos - yOffset));// + yOffset));

    BlockObj newBlock = {0, 0, 0, 00};
    for(int i = 0; i < numBlocks; i++)
    {
        newBlock.xPos = (correctStart + (i * 129));
		newBlock.yPos = (static_cast<int>(round(correctY)) + (i * 30));
        levelDat.addNewBlock(newBlock);
    }
}

void genSpikeObj(float correctX, float correctY)
{
	BlockObj newSpike = {static_cast<int>(round(correctX)), static_cast<int>(round(correctY)), 01, 00};
	levelDat.addNewBlock(newSpike);
}

void genBlockObj(float correctX, float correctY)
{
	BlockObj newBlock = {static_cast<int>(round(correctX)), static_cast<int>(round(correctY)), 00, 00};
	levelDat.addNewBlock(newBlock);
}

void genPitObj(float correctX, float correctEnd)
{
	BlockObj newPit = {static_cast<int>(round(correctX)), static_cast<int>(round(correctEnd)), 02, 00};
	levelDat.addNewBlock(newPit);
}

void antiGravSection(float correctX)
{
	GravityChange newGrav = {static_cast<int>(round(correctX)), 00};
	levelDat.addGravitySwitch(newGrav);
}

void colorChange(float xpos, int colorID, bool customGraphics)
{
	BgCon newBG = {static_cast<int>(round(xpos)), colorID, "", customGraphics, "", 0};
	levelDat.addBgCon(newBG);
}

void chaosFantasy()
{
  genSpikeObj(540, (0.0 * 0.6000000238418579));
  genSpikeObj((scale * (xOffset + 1500)), ((inversion * (500 - yOffset)) * scale));
  genSpikeObj((scale * (xOffset + 1900)), ((inversion * (500 - yOffset)) * scale));
  genSpikeObj((scale * (xOffset + 1950)), ((inversion * (500 - yOffset)) * scale));
  genSpikeObj((scale * (xOffset + 2200)), ((inversion * (500 - yOffset)) * scale));
  genBlockObj((scale * (xOffset + 2500)), ((inversion * (500 - yOffset)) * scale));
  genBlockObj((scale * (xOffset + 2550)), ((inversion * (500 - yOffset)) * scale));
  genSpikeObj((scale * (xOffset + 2600)), ((inversion * (500 - yOffset)) * scale));
  genSpikeObj((scale * (xOffset + 2650)), ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 3000)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 3300)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 3600)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 3650)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 3900)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 4150)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 4200)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 4400)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 4450)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 4750)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 5100)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 5400)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 5450)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 5700)),
    ((inversion * (500 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 6050)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 6100)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 6150)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 6200)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 6500)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 6800)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 7100)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 7150)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 7400)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 7700)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 7780)),
    ((inversion * (500 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 8150)),
    ((inversion * (500 - yOffset)) * scale));
  genPitObj((scale * (xOffset + 8200)), ((xOffset + 9350) * scale));
  genBlockObj(
    (scale * (xOffset + 8365)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 8580)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 8730)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 8945)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 9095)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 9400)),
    ((inversion * (500 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 9450)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 9450)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 9500)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 9500)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 9650)),
    ((inversion * (500 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 9740)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 9740)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 9790)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 9790)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 10200)),
    ((inversion * (500 - yOffset)) * scale));
  genPitObj((scale * (xOffset + 10250)), ((xOffset + 13770) * scale));
  genBlockObj(
    (scale * (xOffset + 10415)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 10565)),
    ((inversion * (500 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 10825)),
    ((inversion * (500 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11040)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11255)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11305)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11355)),
    ((inversion * (400 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 11355)),
    ((inversion * (350 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11405)),
    ((inversion * (400 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 11405)),
    ((inversion * (350 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11455)),
    ((inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 11455)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11505)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11555)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11605)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 11850)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 12080)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 12130)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 12180)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 12230)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 12380)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 12595)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 12855)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 13025)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 13075)),
    ((inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 13075)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 13125)),
    ((inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 13125)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 13175)),
    ((inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 13175)),
    ((inversion * (400 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 13225)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 13485)),
    ((inversion * (450 - yOffset)) * scale));
  genBlockObj(
    (scale * (xOffset + 13770)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 14350)),
    ((inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    
    (scale * (xOffset + 14650)),
    ((inversion * (500 - yOffset)) * scale));
  antiGravSection(((xOffset + 14600) * scale));
  colorChange(((xOffset + 14600) * scale), 2, 0);
  spike(16000, 500);
  spike(16400, 500);
  spike(16450, 500);
  block(16900, 500);
  pit(16950, 17350);
  block(17115, 450);
  block(17400, 500);
  spike(17700, 500);
  block(18100, 500);
  pit(18150, 18415);
  block(18315, 450);
  block(18465, 500);
  spike(18515, 500);
  spike(18565, 500);
  spike(18615, 500);
  spike(19000, 500);
  spike(19050, 500);
  spike(19300, 500);
  spike(19600, 500);
  spike(19930, 500);
  block(20000, 500);
  spike(20130, 500);
  block(20260, 500);
  spike(20330, 500);
  block(20900, 500);
  pit(21000, 22640);
  block(20950, 500);
  block(21165, 450);
  block(21215, 450);
  block(21430, 400);
  block(21480, 400);
  block(21765, 450);
  block(21815, 450);
  block(22030, 400);
  block(22080, 400);
  block(22230, 450);
  block(22280, 450);
  block(22540, 450);
  block(22590, 450);
  spike(22640, 500);
  spike(22690, 500);
  spike(22740, 500);
  spike(22790, 500);
  block(23200, 500);
  pit(23250, 27390);
  block(23415, 450);
  block(23630, 400);
  block(23780, 450);
  block(23995, 400);
  block(24280, 450);
  block(24495, 400);
  block(24780, 450);
  block(24995, 400);
  block(25145, 450);
  block(25360, 400);
  block(25510, 450);
  block(25725, 400);
  block(25875, 450);
  block(26090, 400);
  block(26240, 450);
  block(26455, 400);
  block(26740, 450);
  block(26955, 400);
  block(27135, 450);
  block(27185, 450);
  spike(27185, 400);
  block(27235, 450);
  spike(27235, 400);
  block(27420, 500);
  block(27470, 500);
  block(27520, 500);
  spike(27570, 500);
  spike(27620, 500);
  spike(27670, 500);
  spike(27720, 500);
  spike(27870, 500);
  spike(27920, 500);
  spike(27970, 500);
  spike(28500, 500);
  spike(28800, 500);
  antiGravSection(((xOffset + 28800) * scale));
  colorChange(((xOffset + 28800) * scale), 3, 0);
  spike(30300, 500);
  spike(30600, 500);
  block(31000, 500);
  block(31050, 500);
  block(31100, 500);
  spike(31100, 450);
  pit(31150, 31660);
  block(31265, 450);
  block(31525, 450);
  spike(31810, 500);
  block(31900, 450);
  spike(32400, 500);
  block(32900, 500);
  pit(32950, 33490);
  block(33115, 450);
  block(33165, 450);
  block(33215, 450);
  spike(33215, 400);
  block(33265, 450);
  spike(33265, 400);
  block(33315, 450);
  spike(33315, 400);
  block(33365, 450);
  block(33515, 500);
  spike(33565, 500);
  spike(33615, 500);
  spike(33665, 500);
  spike(34100, 500);
  spike(34150, 500);
  block(34800, 500);
  pit(34850, 35375);
  block(35015, 450);
  block(35165, 500);
  block(35425, 500);
  spike(35645, 500);
  spike(35695, 500);
  spike(35745, 500);
  antiGravSection(((xOffset + 35750) * scale));
  colorChange(((xOffset + 35750) * scale), 1, 0);
  spike(37100, 500);
  spike(37500, 500);
  spike(37550, 500);
  spike(38100, 500);
  spike(38150, 500);
  spike(38200, 500);
  spike(38355, 500);
  spike(38405, 500);
  spike(38455, 500);
  spike(38610, 500);
  spike(38660, 500);
  spike(38710, 500);
  spike(38870, 500);
  spike(38920, 500);
  spike(38970, 500);
  spike(39130, 500);
  spike(39180, 500);
  spike(39230, 500);
  block(39600, 500);
  pit(39650, 42190);
  block(39815, 450);
  block(40075, 450);
  block(40290, 400);
  block(40440, 450);
  block(40655, 400);
  block(40705, 400);
  block(40755, 400);
  spike(40755, 350);
  block(40805, 400);
  spike(40805, 350);
  block(40855, 400);
  spike(40855, 350);
  block(40905, 400);
  block(41055, 450);
  block(41315, 450);
  block(41530, 400);
  block(41790, 400);
  block(42075, 450);
  block(42225, 500);
  spike(42455, 500);
  block(42545, 450);
  block(42695, 500);
  spike(42745, 500);
  spike(42795, 500);
  spike(42845, 500);
  spike(42895, 500);
  block(42945, 500);
  antiGravSection(((xOffset + 42800) * scale));
  colorChange(((xOffset + 42800) * scale), 3, 0);
  spike(44300, 500);
  colorChange(((xOffset + 44600) * scale), 4, 0);
  spike(44700, 500);
  spike(45600, 500);
  spike(45650, 500);
  spike(45700, 500);
  spike(46100, 500);
  spike(46450, 500);
  spike(46500, 500);
  block(46900, 500);
  pit(46950, 47415);
  block(47115, 450);
  block(47165, 450);
  block(47215, 450);
  block(47265, 450);
  spike(47265, 400);
  block(47315, 450);
  spike(47315, 400);
  block(47365, 450);
  spike(47365, 400);
  spike(47570, 500);
  spike(47620, 500);
  spike(47670, 500);
  spike(48000, 500);
  block(48070, 500);
  pit(48120, 49890);
  block(48285, 450);
  block(48335, 450);
  block(48385, 450);
  block(48600, 400);
  block(48750, 450);
  block(49020, 450);
  block(49225, 400);
  block(49375, 450);
  block(49425, 450);
  block(49475, 450);
  spike(49475, 400);
  block(49525, 450);
  spike(49525, 400);
  block(49575, 450);
  spike(49575, 400);
  block(49625, 450);
  block(49910, 500);
  colorChange(((xOffset + 49950) * scale), 0, 0);
  spike(50500, 500);
  spike(51200, 500);
  spike(51250, 500);
  blockLine(51700, 60000, 500);
  pit(51750, 60000);
  levelDat.setEndPos(static_cast<int>(round((xOffset + 51700) * scale)));
}

int main()
{
    chaosFantasy();
    levelDat.writeDataToFile("output/chaozfantasy.lvl/level.dat");
    return 0;
}
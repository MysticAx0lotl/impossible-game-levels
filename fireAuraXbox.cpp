#include "libImpossibleLevel.hpp"
#include <cmath>

extern int yOffset = 500;
extern float scale = 0.60000002;
extern int inversion = -1;
extern int xOffset = -200;

extern Level levelDat("blank.lvl/level.dat");

void messStuffUp(int *a1, int *a2)
{
  int result;
  *a2 -= yOffset;
  *a2 *= inversion;
  *a1 += xOffset;
  *a1 = static_cast<int>(round((static_cast<float>(*a1) * scale)));
  result = static_cast<int>(round(static_cast<float>(*a2) * scale));
  *a2 = result;
}

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
	int correctEnd = static_cast<int>(round(static_cast<float>(endx + xOffset) * scale));
    int numBlocks = static_cast<int>(round(distance/129));
	float correctY = scale * (inversion * static_cast<float>(ypos - yOffset));// + yOffset));

    BlockObj newBlock = {0, 0, 0, 00};
	int currentXPos = correctStart;
	int i = 0;
    while(currentXPos <= correctEnd)
    {
        newBlock.xPos = (correctStart + (i * 129));
		newBlock.yPos = (static_cast<int>(round(correctY)) + (i * 30));
        levelDat.addNewBlock(newBlock);
		currentXPos += 129;
		i++;
    }
}

void descendingBlocks(int startx, int endx, int ypos)
{
    float distance = (static_cast<float>(endx + xOffset) - static_cast<float>(startx + xOffset)) * scale;
    int correctStart = static_cast<int>(round(static_cast<float>(startx + xOffset) * scale));
	int correctEnd = static_cast<int>(round(static_cast<float>(endx + xOffset) * scale));
    int numBlocks = static_cast<int>(round(distance/171));
	float correctY = scale * (inversion * static_cast<float>(ypos - yOffset));// + yOffset));

    BlockObj newBlock = {0, 0, 0, 00};
	int currentXPos = correctStart;
	int i = 0;
    while(currentXPos <= correctEnd)
    {
        newBlock.xPos = (correctStart + (i * 171));
		newBlock.yPos = (static_cast<int>(round(correctY)) - (i * 30));
        levelDat.addNewBlock(newBlock);
		currentXPos += 171;
		i++;
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

void blocksFall(float startx, float endx)
{
	FallingBlocks newFalling = {static_cast<int>(round(startx)), static_cast<int>(round(endx)), 00};
	levelDat.addFallingBlocks(newFalling);
}

void blocksRise(float startx, float endx)
{
	RisingBlocks newRising = {static_cast<int>(round(startx)), static_cast<int>(round(endx)), 00};
	levelDat.addRisingBlocks(newRising);
}

void fallingblocks(int startx, int endx)
{
	blocksFall((scale * (xOffset + startx)), ((xOffset + endx) * scale));
}

void fireAuraXbox()
{
  int a1;
  int v2;
  genSpikeObj( 1080, (0.0 * 0.6000000238418579));
  a1 = xOffset + 2500;
  genSpikeObj(
    
    (scale * (xOffset + 2500)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 2900;
  genSpikeObj(
    
    (scale * (xOffset + 2900)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 2950;
  genSpikeObj(
    
    (scale * (xOffset + 2950)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 3800;
  genBlockObj((scale * (xOffset + 3800)), ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 3850;
  genPitObj((scale * (xOffset + 3850)), ((xOffset + 4000) * scale));
  a1 = xOffset + 4016;
  genBlockObj((scale * (xOffset + 4016)), ((inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 4450;
  genSpikeObj(
    
    (scale * (xOffset + 4450)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 4500;
  genSpikeObj(
    
    (scale * (xOffset + 4500)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 5200;
  genSpikeObj(
    
    (scale * (xOffset + 5200)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 6000;
  genSpikeObj(
    
    (scale * (xOffset + 6000)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 6300;
  genSpikeObj(
    
    (scale * (xOffset + 6300)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 6550;
  genSpikeObj(
    
    (scale * (xOffset + 6550)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 6600;
  genSpikeObj(
    
    (scale * (xOffset + 6600)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 7000;
  genBlockObj((scale * (xOffset + 7000)), ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 7050;
  genPitObj((scale * (xOffset + 7050)), ((xOffset + 7950) * scale));
  a1 = xOffset + 7215;
  genBlockObj((scale * (xOffset + 7215)), ((inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 7430;
  genBlockObj((scale * (xOffset + 7430)), ((inversion * (400 - yOffset)) * scale));
  a1 = xOffset + 7715;
  genBlockObj((scale * (xOffset + 7715)), ((inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 8000;
  genBlockObj((scale * (xOffset + 8000)), ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 8350;
  genSpikeObj(
    
    (scale * (xOffset + 8350)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9300;
  genSpikeObj(
    
    (scale * (xOffset + 9300)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9800;
  genBlockObj((scale * (xOffset + 9800)), ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9850;
  genSpikeObj(
    
    (scale * (xOffset + 9850)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9900;
  genSpikeObj(
    
    (scale * (xOffset + 9900)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9950;
  genSpikeObj(
    
    (scale * (xOffset + 9950)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 10250;
  genSpikeObj(
    
    (scale * (xOffset + 10250)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 10300;
  genBlockObj((scale * (xOffset + 10300)), ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 10400;
  genSpikeObj(
    
    (scale * (xOffset + 10400)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 10700;
  genSpikeObj(
    
    (scale * (xOffset + 10700)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 11500;
  genBlockObj((scale * (xOffset + 11500)), ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 11700;
  genBlockObj((scale * (xOffset + 11700)), ((inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 11750;
  genBlockObj((scale * (xOffset + 11750)), ((inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 11750;
  genSpikeObj(
    
    (scale * (xOffset + 11750)),
    ((inversion * (400 - yOffset)) * scale));
  a1 = xOffset + 11950;
  genSpikeObj(
    
    (scale * (xOffset + 11950)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 12000;
  genSpikeObj(
    
    (scale * (xOffset + 12000)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 12300;
  genSpikeObj(
    
    (scale * (xOffset + 12300)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 12900;
  genSpikeObj(
    
    (scale * (xOffset + 12900)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 13350;
  genPitObj((scale * (xOffset + 13350)), ((xOffset + 26250) * scale));
  blockLine(13300, 13945, 500);
  a1 = xOffset + 13995;
  genBlockObj((scale * (xOffset + 13995)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14045;
  genBlockObj((scale * (xOffset + 14045)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14095;
  genBlockObj((scale * (xOffset + 14095)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14145;
  genBlockObj((scale * (xOffset + 14145)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14195;
  genBlockObj((scale * (xOffset + 14195)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14245;
  genBlockObj((scale * (xOffset + 14245)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14295;
  genBlockObj((scale * (xOffset + 14295)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14345;
  genBlockObj((scale * (xOffset + 14345)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14395;
  genBlockObj((scale * (xOffset + 14395)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14445;
  genBlockObj((scale * (xOffset + 14445)), ((inversion * (350 - yOffset)) * scale));
  descendingBlocks(14660, 15230, 300);
  a1 = xOffset + 15380;
  genBlockObj((scale * (xOffset + 15380)), ((inversion * (450 - yOffset)) * scale));
  blockLine(15445, 15445, 350);
  a1 = xOffset + 15445;
  genSpikeObj(
    
    (scale * (xOffset + 15445)),
    ((inversion * (300 - yOffset)) * scale));
  a1 = xOffset + 15530;
  genBlockObj((scale * (xOffset + 15530)), ((inversion * (500 - yOffset)) * scale));
  blockLine(15815, 20115, 500);
  a1 = xOffset + 16890;
  genBlockObj((scale * (xOffset + 16890)), ((inversion * (250 - yOffset)) * scale));
  a1 = xOffset + 17040;
  genBlockObj((scale * (xOffset + 17040)), ((inversion * (300 - yOffset)) * scale));
  a1 = xOffset + 17190;
  genBlockObj((scale * (xOffset + 17190)), ((inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 17340;
  genBlockObj((scale * (xOffset + 17340)), ((inversion * (400 - yOffset)) * scale));
  a1 = xOffset + 17490;
  genBlockObj((scale * (xOffset + 17490)), ((inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 17640;
  genBlockObj((scale * (xOffset + 17640)), ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17690;
  genSpikeObj(
    
    (scale * (xOffset + 17690)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17740;
  genSpikeObj(
    
    (scale * (xOffset + 17740)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17790;
  genSpikeObj(
    
    (scale * (xOffset + 17790)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17840;
  genSpikeObj(
    
    (scale * (xOffset + 17840)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17890;
  genSpikeObj(
    
    (scale * (xOffset + 17890)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17940;
  genSpikeObj(
    
    (scale * (xOffset + 17940)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17990;
  genSpikeObj(
    
    (scale * (xOffset + 17990)),
    ((inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 20400;
  genBlockObj((scale * (xOffset + 20400)), ((inversion * (-450 - yOffset)) * scale));
  a1 = xOffset + 20450;
  genBlockObj((scale * (xOffset + 20450)), ((inversion * (-450 - yOffset)) * scale));
  a1 = xOffset + 20450;
  genSpikeObj(
    
    (scale * (xOffset + 20450)),
    ((inversion * (-500 - yOffset)) * scale));
  a1 = xOffset + 20500;
  genBlockObj((scale * (xOffset + 20500)), ((inversion * (-450 - yOffset)) * scale));
  a1 = xOffset + 20500;
  genSpikeObj(
    
    (scale * (xOffset + 20500)),
    ((inversion * (-500 - yOffset)) * scale));
  a1 = xOffset + 20600;
  genBlockObj((scale * (xOffset + 20600)), ((inversion * (-400 - yOffset)) * scale));
  a1 = xOffset + 20885;
  genBlockObj((scale * (xOffset + 20885)), ((inversion * (-350 - yOffset)) * scale));
  a1 = xOffset + 21230;
  genBlockObj((scale * (xOffset + 21230)), ((inversion * (-300 - yOffset)) * scale));
  a1 = xOffset + 21280;
  genBlockObj((scale * (xOffset + 21280)), ((inversion * (-300 - yOffset)) * scale));
  a1 = xOffset + 21280;
  genSpikeObj(
    
    (scale * (xOffset + 21280)),
    ((inversion * (-350 - yOffset)) * scale));
  a1 = xOffset + 21515;
  genBlockObj((scale * (xOffset + 21515)), ((inversion * (-250 - yOffset)) * scale));
  a1 = xOffset + 21800;
  genBlockObj((scale * (xOffset + 21800)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 21850;
  genBlockObj((scale * (xOffset + 21850)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 21900;
  genBlockObj((scale * (xOffset + 21900)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 21950;
  genBlockObj((scale * (xOffset + 21950)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22000;
  genBlockObj((scale * (xOffset + 22000)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22000;
  genSpikeObj(
    
    (scale * (xOffset + 22000)),
    ((inversion * (-250 - yOffset)) * scale));
  a1 = xOffset + 22050;
  genBlockObj((scale * (xOffset + 22050)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22100;
  genBlockObj((scale * (xOffset + 22100)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22150;
  genBlockObj((scale * (xOffset + 22150)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22200;
  genBlockObj((scale * (xOffset + 22200)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22250;
  genBlockObj((scale * (xOffset + 22250)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22250;
  genSpikeObj(
    
    (scale * (xOffset + 22250)),
    ((inversion * (-250 - yOffset)) * scale));
  a1 = xOffset + 22300;
  genBlockObj((scale * (xOffset + 22300)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22350;
  genBlockObj((scale * (xOffset + 22350)), ((inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22400;
  genBlockObj((scale * (xOffset + 22400)), ((inversion * (-200 - yOffset)) * scale));
  a1 = -200;
  v2 = 22450;
  messStuffUp(&v2, &a1);
  genBlockObj(v2, a1);
  spike(22500, -250);
  block(22500, -200);
  descendingBlocks(22650, 26355, -150);
  spike(26650, 500);
  spike(27000, 500);
  spike(27050, 500);
  spike(27100, 500);
  blockLine(27400, 28475, 500);
  pit(27400, 29050);
  block(28800, 450);
  spike(29250, 500);
  spike(29550, 500);
  spike(29850, 500);
  spike(30100, 500);
  spike(30400, 500);
  spike(30450, 500);
  spike(30700, 500);
  spike(30750, 500);
  spike(31100, 500);
  spike(31150, 500);
  spike(31200, 500);
  block(31500, 500);
  spike(31550, 500);
  spike(31600, 500);
  spike(31650, 500);
  spike(31700, 500);
  blockLine(32300, 34450, 500);
  pit(32350, 40600);
  block(34600, 50);
  block(34865, 50);
  blockLine(35080, 35725, 0);
  blockLine(36025, 37745, 0);
  block(37895, -350);
  block(38110, -400);
  blockLine(38260, 38905, -350);
  blockLine(39190, 39835, -450);
  block(40350, 400);
  block(40400, 400);
  spike(41000, 500);
  spike(41050, 500);
  spike(41350, 500);
  spike(41400, 500);
  spike(41600, 500);
  spike(41650, 500);
  spike(42000, 500);
  spike(42050, 500);
  spike(42300, 500);
  spike(42350, 500);
  spike(42600, 500);
  spike(42650, 500);
  spike(42700, 500);
  spike(42850, 500);
  spike(42900, 500);
  spike(42950, 500);
  spike(43200, 500);
  spike(43500, 500);
  spike(43550, 500);
  block(43600, 500);
  pit(43650, 43900);
  block(43815, 450);
  block(43965, 500);
  spike(44015, 500);
  spike(44065, 500);
  spike(44115, 500);
  spike(44165, 500);
  spike(44500, 500);
  spike(44800, 500);
  spike(45200, 500);
  spike(45450, 500);
  spike(45700, 500);
  block(46100, 500);
  pit(46150, 49500);
  block(46315, 450);
  block(46530, 400);
  block(46680, 450);
  block(46895, 400);
  block(47045, 450);
  block(47260, 400);
  block(47545, 450);
  block(47760, 400);
  block(47910, 450);
  block(48125, 400);
  block(48410, 450);
  block(48625, 400);
  block(48910, 450);
  block(49125, 400);
  block(49275, 450);
  block(49560, 500);
  spike(49900, 500);
  spike(50200, 500);
  spike(50250, 500);
  spike(50550, 500);
  spike(50600, 500);
  spike(50650, 500);
  spike(50950, 500);
  spike(51000, 500);
  spike(51300, 500);
  blockLine(51700, 60000, 500);
  pit(51750, 60000);
  a1 = xOffset + 51700;
  levelDat.setEndPos(static_cast<int>(round((xOffset + 51700) * scale)));
}

int main()
{
    fireAuraXbox();
    levelDat.writeDataToFile("output/fireauraxbox.lvl/level.dat");
    return 0;
}
int __cdecl spawnObjects1(int a1)
{
  int v2; // [esp+8h] [ebp-14h] BYREF
  void *v3; // [esp+Ch] [ebp-10h]
  int v4; // [esp+18h] [ebp-4h]

  dword_FB9570 = a1;
  loadLevelMusic(&v2, "soundtrack.ogg", 0);
  v4 = 0;
  sub_F8D160(&v2, 1, 0);
  v4 = -1;
  v2 = (int)&UString::`vftable';
  if ( v3 )
    operator delete[](v3);
  yOffset = 500;
  scale = 0.60000002;
  inversion = -1;
  xOffset = -200;
  genSpikeObj((_DWORD *)dword_FB9570, 1080, (int)(0.0 * 0.6000000238418579));
  a1 = xOffset + 2500;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2500)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 2900;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2900)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 2950;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2950)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 3800;
  genBlockObj((int)(scale * (double)(xOffset + 3800)), (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 3850;
  genPitObj((int)(scale * (double)(xOffset + 3850)), (int)((double)(xOffset + 4000) * scale));
  a1 = xOffset + 4016;
  genBlockObj((int)(scale * (double)(xOffset + 4016)), (int)((double)(inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 4450;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4450)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 4500;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4500)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 5200;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 5200)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 6000;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6000)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 6300;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6300)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 6550;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6550)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 6600;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6600)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 7000;
  genBlockObj((int)(scale * (double)(xOffset + 7000)), (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 7050;
  genPitObj((int)(scale * (double)(xOffset + 7050)), (int)((double)(xOffset + 7950) * scale));
  a1 = xOffset + 7215;
  genBlockObj((int)(scale * (double)(xOffset + 7215)), (int)((double)(inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 7430;
  genBlockObj((int)(scale * (double)(xOffset + 7430)), (int)((double)(inversion * (400 - yOffset)) * scale));
  a1 = xOffset + 7715;
  genBlockObj((int)(scale * (double)(xOffset + 7715)), (int)((double)(inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 8000;
  genBlockObj((int)(scale * (double)(xOffset + 8000)), (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 8350;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 8350)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9300;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9300)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9800;
  genBlockObj((int)(scale * (double)(xOffset + 9800)), (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9850;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9850)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9900;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9900)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 9950;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9950)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 10250;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 10250)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 10300;
  genBlockObj((int)(scale * (double)(xOffset + 10300)), (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 10400;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 10400)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 10700;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 10700)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 11500;
  genBlockObj((int)(scale * (double)(xOffset + 11500)), (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 11700;
  genBlockObj((int)(scale * (double)(xOffset + 11700)), (int)((double)(inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 11750;
  genBlockObj((int)(scale * (double)(xOffset + 11750)), (int)((double)(inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 11750;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 11750)),
    (int)((double)(inversion * (400 - yOffset)) * scale));
  a1 = xOffset + 11950;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 11950)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 12000;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 12000)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 12300;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 12300)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 12900;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 12900)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 13350;
  genPitObj((int)(scale * (double)(xOffset + 13350)), (int)((double)(xOffset + 26250) * scale));
  ascendingBlocks(13300, 13945, 500);
  a1 = xOffset + 13995;
  genBlockObj((int)(scale * (double)(xOffset + 13995)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14045;
  genBlockObj((int)(scale * (double)(xOffset + 14045)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14095;
  genBlockObj((int)(scale * (double)(xOffset + 14095)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14145;
  genBlockObj((int)(scale * (double)(xOffset + 14145)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14195;
  genBlockObj((int)(scale * (double)(xOffset + 14195)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14245;
  genBlockObj((int)(scale * (double)(xOffset + 14245)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14295;
  genBlockObj((int)(scale * (double)(xOffset + 14295)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14345;
  genBlockObj((int)(scale * (double)(xOffset + 14345)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14395;
  genBlockObj((int)(scale * (double)(xOffset + 14395)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 14445;
  genBlockObj((int)(scale * (double)(xOffset + 14445)), (int)((double)(inversion * (350 - yOffset)) * scale));
  descendingBlocks(14660, 15230, 300);
  a1 = xOffset + 15380;
  genBlockObj((int)(scale * (double)(xOffset + 15380)), (int)((double)(inversion * (450 - yOffset)) * scale));
  ascendingBlocks(15445, 15445, 350);
  a1 = xOffset + 15445;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 15445)),
    (int)((double)(inversion * (300 - yOffset)) * scale));
  a1 = xOffset + 15530;
  genBlockObj((int)(scale * (double)(xOffset + 15530)), (int)((double)(inversion * (500 - yOffset)) * scale));
  ascendingBlocks(15815, 20115, 500);
  a1 = xOffset + 16890;
  genBlockObj((int)(scale * (double)(xOffset + 16890)), (int)((double)(inversion * (250 - yOffset)) * scale));
  a1 = xOffset + 17040;
  genBlockObj((int)(scale * (double)(xOffset + 17040)), (int)((double)(inversion * (300 - yOffset)) * scale));
  a1 = xOffset + 17190;
  genBlockObj((int)(scale * (double)(xOffset + 17190)), (int)((double)(inversion * (350 - yOffset)) * scale));
  a1 = xOffset + 17340;
  genBlockObj((int)(scale * (double)(xOffset + 17340)), (int)((double)(inversion * (400 - yOffset)) * scale));
  a1 = xOffset + 17490;
  genBlockObj((int)(scale * (double)(xOffset + 17490)), (int)((double)(inversion * (450 - yOffset)) * scale));
  a1 = xOffset + 17640;
  genBlockObj((int)(scale * (double)(xOffset + 17640)), (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17690;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 17690)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17740;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 17740)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17790;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 17790)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17840;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 17840)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17890;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 17890)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17940;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 17940)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 17990;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 17990)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  a1 = xOffset + 20400;
  genBlockObj((int)(scale * (double)(xOffset + 20400)), (int)((double)(inversion * (-450 - yOffset)) * scale));
  a1 = xOffset + 20450;
  genBlockObj((int)(scale * (double)(xOffset + 20450)), (int)((double)(inversion * (-450 - yOffset)) * scale));
  a1 = xOffset + 20450;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 20450)),
    (int)((double)(inversion * (-500 - yOffset)) * scale));
  a1 = xOffset + 20500;
  genBlockObj((int)(scale * (double)(xOffset + 20500)), (int)((double)(inversion * (-450 - yOffset)) * scale));
  a1 = xOffset + 20500;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 20500)),
    (int)((double)(inversion * (-500 - yOffset)) * scale));
  a1 = xOffset + 20600;
  genBlockObj((int)(scale * (double)(xOffset + 20600)), (int)((double)(inversion * (-400 - yOffset)) * scale));
  a1 = xOffset + 20885;
  genBlockObj((int)(scale * (double)(xOffset + 20885)), (int)((double)(inversion * (-350 - yOffset)) * scale));
  a1 = xOffset + 21230;
  genBlockObj((int)(scale * (double)(xOffset + 21230)), (int)((double)(inversion * (-300 - yOffset)) * scale));
  a1 = xOffset + 21280;
  genBlockObj((int)(scale * (double)(xOffset + 21280)), (int)((double)(inversion * (-300 - yOffset)) * scale));
  a1 = xOffset + 21280;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 21280)),
    (int)((double)(inversion * (-350 - yOffset)) * scale));
  a1 = xOffset + 21515;
  genBlockObj((int)(scale * (double)(xOffset + 21515)), (int)((double)(inversion * (-250 - yOffset)) * scale));
  a1 = xOffset + 21800;
  genBlockObj((int)(scale * (double)(xOffset + 21800)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 21850;
  genBlockObj((int)(scale * (double)(xOffset + 21850)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 21900;
  genBlockObj((int)(scale * (double)(xOffset + 21900)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 21950;
  genBlockObj((int)(scale * (double)(xOffset + 21950)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22000;
  genBlockObj((int)(scale * (double)(xOffset + 22000)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22000;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 22000)),
    (int)((double)(inversion * (-250 - yOffset)) * scale));
  a1 = xOffset + 22050;
  genBlockObj((int)(scale * (double)(xOffset + 22050)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22100;
  genBlockObj((int)(scale * (double)(xOffset + 22100)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22150;
  genBlockObj((int)(scale * (double)(xOffset + 22150)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22200;
  genBlockObj((int)(scale * (double)(xOffset + 22200)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22250;
  genBlockObj((int)(scale * (double)(xOffset + 22250)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22250;
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 22250)),
    (int)((double)(inversion * (-250 - yOffset)) * scale));
  a1 = xOffset + 22300;
  genBlockObj((int)(scale * (double)(xOffset + 22300)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22350;
  genBlockObj((int)(scale * (double)(xOffset + 22350)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = xOffset + 22400;
  genBlockObj((int)(scale * (double)(xOffset + 22400)), (int)((double)(inversion * (-200 - yOffset)) * scale));
  a1 = -200;
  v2 = 22450;
  flipStuff(&v2, &a1);
  genBlockObj(v2, a1);
  spike(22500, -250);
  block(22500, -200);
  descendingBlocks(22650, 26355, -150);
  spike(26650, 500);
  spike(27000, 500);
  spike(27050, 500);
  spike(27100, 500);
  ascendingBlocks(27400, 28475, 500);
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
  ascendingBlocks(32300, 34450, 500);
  pit(32350, 40600);
  block(34600, 50);
  block(34865, 50);
  ascendingBlocks(35080, 35725, 0);
  ascendingBlocks(36025, 37745, 0);
  block(37895, -350);
  block(38110, -400);
  ascendingBlocks(38260, 38905, -350);
  ascendingBlocks(39190, 39835, -450);
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
  ascendingBlocks(51700, 60000, 500);
  pit(51750, 60000);
  a1 = xOffset + 51700;
  return genLevelEnd((int)((double)(xOffset + 51700) * scale));
}
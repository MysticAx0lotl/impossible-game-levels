int __cdecl spawnObjects1(int a1)
{
  int v2; // [esp+8h] [ebp-14h] BYREF
  void *v3; // [esp+Ch] [ebp-10h]
  int v4; // [esp+18h] [ebp-4h]

  dword_299570 = a1;
  loadLevelMusic(&v2, "soundtrack.ogg", 0);
  v4 = 0;
  sub_26D160(&v2, 1, 0);
  v4 = -1;
  v2 = (int)&UString::`vftable';
  if ( v3 )
    operator delete[](v3);
  dword_299574 = 500;
  flt_2986B0 = 0.60000002;
  dword_2986B4 = -1;
  dword_299578 = -200;
  genSpikeObj((_DWORD *)dword_299570, 1080, (int)(0.0 * 0.6000000238418579));
  a1 = dword_299578 + 2500;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 2500)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 2900;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 2900)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 2950;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 2950)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 3800;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 3800)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 3850;
  genPitObj((int)(flt_2986B0 * (double)(dword_299578 + 3850)), (int)((double)(dword_299578 + 4000) * flt_2986B0));
  a1 = dword_299578 + 4016;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 4016)),
    (int)((double)(dword_2986B4 * (450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 4450;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 4450)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 4500;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 4500)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 5200;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 5200)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 6000;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 6000)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 6300;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 6300)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 6550;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 6550)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 6600;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 6600)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 7000;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 7000)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 7050;
  genPitObj((int)(flt_2986B0 * (double)(dword_299578 + 7050)), (int)((double)(dword_299578 + 7950) * flt_2986B0));
  a1 = dword_299578 + 7215;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 7215)),
    (int)((double)(dword_2986B4 * (450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 7430;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 7430)),
    (int)((double)(dword_2986B4 * (400 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 7715;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 7715)),
    (int)((double)(dword_2986B4 * (450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 8000;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 8000)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 8350;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 8350)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 9300;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 9300)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 9800;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 9800)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 9850;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 9850)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 9900;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 9900)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 9950;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 9950)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 10250;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 10250)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 10300;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 10300)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 10400;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 10400)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 10700;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 10700)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 11500;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 11500)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 11700;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 11700)),
    (int)((double)(dword_2986B4 * (450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 11750;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 11750)),
    (int)((double)(dword_2986B4 * (450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 11750;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 11750)),
    (int)((double)(dword_2986B4 * (400 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 11950;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 11950)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 12000;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 12000)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 12300;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 12300)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 12900;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 12900)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 13350;
  genPitObj((int)(flt_2986B0 * (double)(dword_299578 + 13350)), (int)((double)(dword_299578 + 26250) * flt_2986B0));
  blockLine(13300, 13945, 500);
  a1 = dword_299578 + 13995;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 13995)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14045;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14045)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14095;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14095)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14145;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14145)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14195;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14195)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14245;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14245)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14295;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14295)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14345;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14345)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14395;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14395)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 14445;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 14445)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  sub_278EB0(14660, 15230, 300);
  a1 = dword_299578 + 15380;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 15380)),
    (int)((double)(dword_2986B4 * (450 - dword_299574)) * flt_2986B0));
  blockLine(15445, 15445, 350);
  a1 = dword_299578 + 15445;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 15445)),
    (int)((double)(dword_2986B4 * (300 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 15530;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 15530)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  blockLine(15815, 20115, 500);
  a1 = dword_299578 + 16890;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 16890)),
    (int)((double)(dword_2986B4 * (250 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17040;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 17040)),
    (int)((double)(dword_2986B4 * (300 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17190;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 17190)),
    (int)((double)(dword_2986B4 * (350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17340;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 17340)),
    (int)((double)(dword_2986B4 * (400 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17490;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 17490)),
    (int)((double)(dword_2986B4 * (450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17640;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 17640)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17690;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 17690)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17740;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 17740)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17790;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 17790)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17840;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 17840)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17890;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 17890)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17940;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 17940)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 17990;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 17990)),
    (int)((double)(dword_2986B4 * (500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 20400;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 20400)),
    (int)((double)(dword_2986B4 * (-450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 20450;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 20450)),
    (int)((double)(dword_2986B4 * (-450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 20450;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 20450)),
    (int)((double)(dword_2986B4 * (-500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 20500;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 20500)),
    (int)((double)(dword_2986B4 * (-450 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 20500;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 20500)),
    (int)((double)(dword_2986B4 * (-500 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 20600;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 20600)),
    (int)((double)(dword_2986B4 * (-400 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 20885;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 20885)),
    (int)((double)(dword_2986B4 * (-350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 21230;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 21230)),
    (int)((double)(dword_2986B4 * (-300 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 21280;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 21280)),
    (int)((double)(dword_2986B4 * (-300 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 21280;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 21280)),
    (int)((double)(dword_2986B4 * (-350 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 21515;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 21515)),
    (int)((double)(dword_2986B4 * (-250 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 21800;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 21800)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 21850;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 21850)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 21900;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 21900)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 21950;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 21950)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22000;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22000)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22000;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 22000)),
    (int)((double)(dword_2986B4 * (-250 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22050;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22050)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22100;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22100)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22150;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22150)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22200;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22200)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22250;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22250)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22250;
  genSpikeObj(
    (_DWORD *)dword_299570,
    (int)(flt_2986B0 * (double)(dword_299578 + 22250)),
    (int)((double)(dword_2986B4 * (-250 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22300;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22300)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22350;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22350)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = dword_299578 + 22400;
  genBlockObj(
    (int)(flt_2986B0 * (double)(dword_299578 + 22400)),
    (int)((double)(dword_2986B4 * (-200 - dword_299574)) * flt_2986B0));
  a1 = -200;
  v2 = 22450;
  sub_278C20(&v2, &a1);
  genBlockObj(v2, a1);
  spike(22500, -250);
  block(22500, -200);
  sub_278EB0(22650, 26355, -150);
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
  a1 = dword_299578 + 51700;
  return genLevelEnd((int)((double)(dword_299578 + 51700) * flt_2986B0));
}
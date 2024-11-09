int __cdecl spawnObjects3(int a1)
{
  void **v2; // [esp+8h] [ebp-14h] BYREF
  void *v3; // [esp+Ch] [ebp-10h]
  int v4; // [esp+18h] [ebp-4h]

  dword_FB9570 = a1;
  loadLevelMusic(&v2, "soundtrack3.ogg", 0);
  v4 = 0;
  sub_F8D160(&v2, 1, 0);
  v4 = -1;
  v2 = &UString::`vftable';
  if ( v3 )
    operator delete[](v3);
  yOffset = 500;
  scale = 0.60000002;
  inversion = -1;
  xOffset = -200;
  genSpikeObj((_DWORD *)dword_FB9570, 780, (int)(0.0 * 0.6000000238418579));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 1900)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2400)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2800)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3400)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3800)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4300)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 4800)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 4850)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4850)),
    (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 4900)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4900)),
    (int)((double)(inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 5300)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 5700)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6200)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6650)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 7200)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 7600)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 8100)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8450)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genPitObj((int)(scale * (double)(xOffset + 8500)), (int)((double)(xOffset + 8615) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8665)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8665)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 8715)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 8765)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 8815)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9150)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9600)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 10100)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 10550)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 11100)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 11500)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 12000)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12500)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12715)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 12715)),
    (int)((double)(inversion * (400 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13000)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13400)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13450)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13900)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14300)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14350)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 14350)),
    (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14400)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 14400)),
    (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14450)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 14900)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 15250)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 15300)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 15500)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 15550)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 15800)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 16250)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 16300)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  colorChange((int)((double)(xOffset + 16300) * scale), 5, 0);
  colorChange((int)((double)(xOffset + 18150) * scale), 1, 0);
  blocksRise1((int)(scale * (double)(xOffset + 16300)), (int)((double)(xOffset + 34100) * scale));
  ascendingBlocks(18700, 19560, 500);
  genPitObj((int)(scale * (double)(xOffset + 18750)), (int)((double)(xOffset + 33550) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 19710)), (int)((double)(inversion * (350 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 19925)), (int)((double)(inversion * (300 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 20140)), (int)((double)(inversion * (250 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 20190)), (int)((double)(inversion * (250 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 20240)), (int)((double)(inversion * (250 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 20455)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 20740)), (int)((double)(inversion * (250 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 20955)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21005)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21055)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 21055)),
    (int)((double)(inversion * (150 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21105)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 21105)),
    (int)((double)(inversion * (150 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21155)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21205)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21355)), (int)((double)(inversion * (250 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21570)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21620)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21670)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 21670)),
    (int)((double)(inversion * (150 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21720)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 21720)),
    (int)((double)(inversion * (150 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21770)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 21770)),
    (int)((double)(inversion * (150 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21820)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21870)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21920)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 21920)),
    (int)((double)(inversion * (150 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 21970)), (int)((double)(inversion * (200 - yOffset)) * scale));
  spike(21970, 150);
  block(22020, 200);
  spike(22020, 150);
  block(22070, 200);
  block(22120, 200);
  block(22170, 200);
  spike(22170, 150);
  block(22220, 200);
  spike(22220, 150);
  block(22270, 200);
  spike(22270, 150);
  block(22320, 200);
  block(22470, 250);
  block(22685, 200);
  block(22900, 150);
  block(23115, 100);
  block(23285, 150);
  block(23335, 150);
  spike(23335, 100);
  block(23385, 150);
  spike(23385, 100);
  block(23435, 150);
  spike(23435, 100);
  block(23485, 150);
  block(23700, 100);
  block(23915, 50);
  block(23965, 50);
  block(24015, 50);
  block(24065, 50);
  spike(24065, 0);
  block(24115, 50);
  spike(24115, 0);
  block(24165, 50);
  spike(24165, 0);
  block(24215, 50);
  block(24430, 0);
  block(24480, 0);
  block(24530, 0);
  block(24580, 0);
  spike(24580, -50);
  block(24630, 0);
  spike(24630, -50);
  block(24680, 0);
  spike(24680, -50);
  block(24730, 0);
  block(24945, -50);
  block(24995, -50);
  block(25045, -50);
  block(25095, -50);
  spike(25095, -100);
  block(25145, -50);
  spike(25145, -100);
  block(25195, -50);
  spike(25195, -100);
  block(25245, -50);
  block(25460, -100);
  block(25610, -50);
  block(25825, -100);
  block(26110, -50);
  block(26325, -100);
  block(26540, -150);
  block(26755, -200);
  block(26805, -200);
  block(26855, -200);
  block(26905, -200);
  spike(26905, -250);
  block(26955, -200);
  spike(26955, -250);
  block(27005, -200);
  block(27055, -200);
  block(27105, -200);
  spike(27105, -250);
  block(27340, -150);
  block(27555, -200);
  block(27705, -150);
  block(27920, -200);
  block(28070, -150);
  block(28285, -200);
  block(28500, -250);
  block(28670, -200);
  block(28720, -200);
  spike(28720, -250);
  block(28770, -200);
  spike(28770, -250);
  block(28820, -200);
  spike(28820, -250);
  block(28955, -150);
  block(29005, -150);
  spike(29005, -200);
  block(29055, -150);
  spike(29055, -200);
  block(29105, -150);
  spike(29105, -200);
  block(29240, -100);
  block(29290, -100);
  spike(29290, -150);
  block(29340, -100);
  spike(29340, -150);
  block(29390, -100);
  spike(29390, -150);
  block(29440, -100);
  block(29490, -100);
  block(29540, -100);
  spike(29540, -150);
  block(29590, -100);
  spike(29590, -150);
  block(29640, -100);
  spike(29640, -150);
  block(29690, -100);
  ascendingBlocks(29840, 30915, -50);
  block(31045, -300);
  spike(31045, -350);
  block(31175, -300);
  block(31390, -350);
  block(31520, -350);
  spike(31520, -400);
  block(31650, -350);
  block(31700, -350);
  block(31750, -350);
  block(31800, -350);
  spike(31800, -400);
  block(31850, -350);
  spike(31850, -400);
  block(31900, -350);
  spike(31900, -400);
  block(31950, -350);
  block(32165, -400);
  block(32335, -350);
  block(32385, -350);
  spike(32385, -400);
  block(32435, -350);
  spike(32435, -400);
  block(32595, -350);
  ascendingBlocks(32745, 33240, -300);
  block(33800, -200);
  block(33850, -150);
  block(33900, -100);
  block(33900, -150);
  block(33900, -200);
  block(33900, -250);
  block(33900, -300);
  block(33900, -350);
  block(33950, -150);
  block(34000, -200);
  colorChange((int)((double)(xOffset + 33600) * scale), 5, 0);
  colorChange((int)((double)(xOffset + 34550) * scale), 0, 0);
  fallingblocks(35200, 51700);
  block(35200, 500);
  pit(35250, 42995);
  block(35415, 450);
  block(35630, 400);
  block(35890, 400);
  block(36040, 450);
  block(36255, 400);
  block(36470, 350);
  block(36755, 400);
  block(36970, 350);
  block(37185, 300);
  block(37470, 350);
  block(37685, 300);
  block(37835, 350);
  block(38095, 350);
  block(38145, 350);
  block(38195, 350);
  spike(38195, 300);
  block(38245, 350);
  spike(38245, 300);
  block(38295, 350);
  spike(38295, 300);
  block(38345, 350);
  block(38495, 400);
  block(38710, 350);
  block(38880, 400);
  block(38930, 400);
  spike(38930, 350);
  block(38980, 400);
  spike(38980, 350);
  block(39030, 400);
  spike(39030, 350);
  block(39080, 400);
  block(39340, 400);
  block(39390, 400);
  block(39440, 400);
  block(39490, 400);
  spike(39490, 350);
  block(39540, 400);
  spike(39540, 350);
  block(39590, 400);
  block(39640, 400);
  block(39690, 400);
  block(39740, 400);
  spike(39740, 350);
  block(39905, 350);
  block(39955, 350);
  block(40005, 350);
  spike(40005, 300);
  block(40170, 300);
  block(40220, 300);
  block(40270, 300);
  spike(40270, 250);
  block(40505, 350);
  block(40635, 350);
  spike(40635, 300);
  block(40765, 350);
  block(40980, 300);
  block(41195, 250);
  block(41365, 300);
  block(41415, 300);
  spike(41415, 250);
  block(41465, 300);
  block(41515, 300);
  block(41565, 300);
  block(41615, 300);
  block(41665, 300);
  block(41715, 300);
  spike(41715, 250);
  block(41765, 300);
  block(41910, 350);
  block(42125, 300);
  block(42410, 350);
  block(42560, 400);
  block(42845, 450);
  block(42995, 500);
  spike(43045, 500);
  spike(43095, 500);
  spike(43145, 500);
  spike(43195, 500);
  spike(43500, 500);
  spike(44100, 500);
  spike(44150, 500);
  spike(44200, 500);
  spike(44355, 500);
  spike(44405, 500);
  spike(44455, 500);
  spike(44610, 500);
  spike(44660, 500);
  spike(44710, 500);
  spike(44870, 500);
  spike(44920, 500);
  spike(44970, 500);
  spike(45130, 500);
  spike(45180, 500);
  spike(45230, 500);
  spike(45385, 500);
  spike(45435, 500);
  spike(45485, 500);
  spike(45640, 500);
  spike(45690, 500);
  spike(45740, 500);
  spike(45900, 500);
  spike(45950, 500);
  spike(46000, 500);
  spike(46355, 500);
  spike(46405, 500);
  spike(46455, 500);
  spike(46870, 500);
  spike(46920, 500);
  spike(46970, 500);
  spike(47385, 500);
  spike(47435, 500);
  spike(47485, 500);
  spike(47900, 500);
  spike(47950, 500);
  spike(48000, 500);
  spike(48355, 500);
  spike(48405, 500);
  spike(48455, 500);
  block(49000, 450);
  spike(49000, 400);
  block(49050, 450);
  block(49100, 450);
  block(49150, 450);
  block(49200, 450);
  block(49250, 450);
  block(49300, 450);
  block(49350, 450);
  block(49400, 450);
  block(49450, 400);
  block(49500, 350);
  spike(49550, 500);
  block(49550, 300);
  block(49600, 300);
  block(49600, 500);
  block(49650, 300);
  block(49650, 500);
  block(49700, 300);
  block(49700, 500);
  block(49750, 350);
  block(49750, 500);
  block(49800, 400);
  block(49800, 500);
  block(49850, 350);
  block(49850, 500);
  block(49900, 300);
  block(49900, 500);
  block(49950, 300);
  block(49950, 500);
  block(50000, 300);
  block(50000, 500);
  spike(50000, 450);
  block(50050, 300);
  block(50050, 500);
  block(50100, 300);
  block(50100, 500);
  block(50150, 300);
  block(50200, 350);
  block(50250, 400);
  block(50300, 450);
  block(50350, 450);
  spike(50600, 500);
  spike(50900, 500);
  spike(50950, 500);
  ascendingBlocks(51700, 60000, 500);
  pit(51750, 60000);
  return genLevelEnd((int)((double)(xOffset + 51700) * scale));
}
int __cdecl spawnObjects2(int a1)
{
  void **v2; // [esp+8h] [ebp-14h] BYREF
  void *v3; // [esp+Ch] [ebp-10h]
  int v4; // [esp+18h] [ebp-4h]

  dword_FB9570 = a1;
  loadLevelMusic(&v2, "soundtrack2.ogg", 0);
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
  genSpikeObj((_DWORD *)dword_FB9570, 540, (int)(0.0 * 0.6000000238418579));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 1500)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 1900)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 1950)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2200)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 2500)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 2550)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2600)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2650)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3000)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3300)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3600)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3650)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3900)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4150)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4200)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4400)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4450)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4750)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 5100)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 5400)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 5450)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 5700)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 6050)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6100)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6150)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6200)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6500)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6800)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 7100)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 7150)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 7400)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 7700)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 7780)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8150)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genPitObj((int)(scale * (double)(xOffset + 8200)), (int)((double)(xOffset + 9350) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8365)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8580)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8730)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8945)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 9095)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 9400)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 9450)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9450)),
    (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 9500)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9500)),
    (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 9650)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 9740)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9740)),
    (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 9790)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9790)),
    (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 10200)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genPitObj((int)(scale * (double)(xOffset + 10250)), (int)((double)(xOffset + 13770) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 10415)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 10565)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 10825)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11040)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11255)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11305)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11355)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 11355)),
    (int)((double)(inversion * (350 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11405)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 11405)),
    (int)((double)(inversion * (350 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11455)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 11455)),
    (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11505)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11555)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11605)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11850)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12080)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12130)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12180)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12230)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12380)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12595)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12855)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13025)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13075)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13075)),
    (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13125)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13125)),
    (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13175)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13175)),
    (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13225)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13485)), (int)((double)(inversion * (450 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13770)), (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 14350)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 14650)),
    (int)((double)(inversion * (500 - yOffset)) * scale));
  antiGravSection((int)((double)(xOffset + 14600) * scale));
  colorChange((_DWORD *)dword_FB9570, (int)((double)(xOffset + 14600) * scale), 2, 0);
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
  antiGravSection((int)((double)(xOffset + 28800) * scale));
  colorChange((_DWORD *)dword_FB9570, (int)((double)(xOffset + 28800) * scale), 3, 0);
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
  antiGravSection((int)((double)(xOffset + 35750) * scale));
  colorChange((_DWORD *)dword_FB9570, (int)((double)(xOffset + 35750) * scale), 1, 0);
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
  antiGravSection((int)((double)(xOffset + 42800) * scale));
  colorChange((_DWORD *)dword_FB9570, (int)((double)(xOffset + 42800) * scale), 3, 0);
  spike(44300, 500);
  colorChange((_DWORD *)dword_FB9570, (int)((double)(xOffset + 44600) * scale), 4, 0);
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
  colorChange((_DWORD *)dword_FB9570, (int)((double)(xOffset + 49950) * scale), 0, 0);
  spike(50500, 500);
  spike(51200, 500);
  spike(51250, 500);
  ascendingBlocks(51700, 60000, 500);
  pit(51750, 60000);
  return genLevelEnd((int)((double)(xOffset + 51700) * scale));
}
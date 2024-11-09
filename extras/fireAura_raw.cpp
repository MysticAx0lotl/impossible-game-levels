int __cdecl spawnObjects(int a1)
{
  void **v2; // [esp+8h] [ebp-14h] BYREF
  void *v3; // [esp+Ch] [ebp-10h]
  int v4; // [esp+18h] [ebp-4h]

  dword_FB9570 = a1;
  loadLevelMusic(&v2, "soundtrack.ogg", 0);
  v4 = 0;
  sub_F8D160(&v2, 1, 0);
  v4 = -1;
  v2 = &UString::`vftable';
  if ( v3 )
    operator delete[](v3);
  yOffset = 0;
  scale = 0.75;
  inversion = 1;
  xOffset = 0;
  genSpikeObj((_DWORD *)dword_FB9570, 1050, (int)(0.0 * 0.75));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2140)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 2180)),
    (int)((double)-(yOffset * inversion) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 3000)), (int)((double)-(yOffset * inversion) * scale));
  genPitObj((int)(scale * (double)(xOffset + 3040)), (int)((double)(xOffset + 3160) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 3180)), (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3900)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 3940)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4600)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4950)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 4990)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 5200)),
    (int)((double)-(yOffset * inversion) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 5500)), (int)((double)-(yOffset * inversion) * scale));
  genPitObj((int)(scale * (double)(xOffset + 5540)), (int)((double)(xOffset + 6240) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 5662)), (int)((double)(inversion * (40 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 5824)), (int)((double)(inversion * (80 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 6029)), (int)((double)(inversion * (40 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 6236)), (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 6550)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 7200)),
    (int)((double)-(yOffset * inversion) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 7800)), (int)((double)-(yOffset * inversion) * scale));
  genPitObj((int)(scale * (double)(xOffset + 7840)), (int)((double)(xOffset + 8340) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 7962)), (int)((double)(inversion * (40 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8052)), (int)((double)(inversion * (40 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 8052)),
    (int)((double)(inversion * (80 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8142)), (int)((double)(inversion * (40 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 8349)), (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 8560)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9070)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9500)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 9800)),
    (int)((double)-(yOffset * inversion) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 10150)),
    (int)((double)-(yOffset * inversion) * scale));
  xOffset = -1170;
  genBlockObj((int)(scale * 10450.0), (int)((double)-(yOffset * inversion) * scale));
  genPitObj((int)(scale * (double)(xOffset + 11660)), (int)((double)(xOffset + 20539) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11782)), (int)((double)(inversion * (40 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 11944)), (int)((double)(inversion * (80 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12106)), (int)((double)(inversion * (120 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12268)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12308)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12348)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12388)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12428)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12468)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12508)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12548)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12588)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12628)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12668)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12708)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 12708)),
    (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12830)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12870)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12910)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12950)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 12990)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 12990)),
    (int)((double)(inversion * (240 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13030)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13070)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13110)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13150)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13190)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13190)),
    (int)((double)(inversion * (240 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13230)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13270)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13310)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13430)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13500)), (int)((double)(inversion * (240 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 13500)),
    (int)((double)(inversion * (280 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13550)), (int)((double)(inversion * (120 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13670)), (int)((double)(inversion * (80 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13790)), (int)((double)(inversion * (40 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 13910)), (int)((double)-(yOffset * inversion) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14072)), (int)((double)(inversion * (40 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14234)), (int)((double)(inversion * (80 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14396)), (int)((double)(inversion * (120 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14558)), (int)((double)(inversion * (160 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14720)), (int)((double)(inversion * (200 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 14882)), (int)((double)(inversion * (240 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 15044)), (int)((double)(inversion * (280 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 15206)), (int)((double)(inversion * (320 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 15368)), (int)((double)(inversion * (360 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 15530)), (int)((double)(inversion * (400 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 15692)), (int)((double)(inversion * (440 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 15854)), (int)((double)(inversion * (480 - yOffset)) * scale));
  xOffset = -3170;
  genBlockObj((int)(scale * 14804.0), (int)((double)(inversion * (440 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 18136)), (int)((double)(inversion * (480 - yOffset)) * scale));
  genBlockObj((int)(scale * (double)(xOffset + 18176)), (int)((double)(inversion * (480 - yOffset)) * scale));
  genSpikeObj(
    (_DWORD *)dword_FB9570,
    (int)(scale * (double)(xOffset + 18176)),
    (int)((double)(inversion * (520 - yOffset)) * scale));
  block(18216, 480);
  spike(18216, 520);
  block(18256, 480);
  spike(18256, 520);
  block(18296, 480);
  block(18503, 440);
  block(18693, 440);
  block(18733, 440);
  block(18773, 440);
  block(18935, 480);
  block(19097, 520);
  block(19259, 560);
  block(19466, 520);
  block(19582, 480);
  block(19622, 480);
  block(19662, 480);
  spike(19662, 520);
  block(19702, 480);
  block(19742, 480);
  block(19782, 480);
  block(19822, 480);
  block(19862, 480);
  block(19902, 440);
  spike(19902, 480);
  block(19942, 440);
  spike(19942, 480);
  block(19982, 440);
  spike(19982, 480);
  block(20022, 440);
  block(20062, 440);
  block(20102, 440);
  block(20142, 440);
  block(20182, 440);
  block(20222, 440);
  block(20261, 440);
  block(20469, 400);
  block(20676, 360);
  block(20883, 320);
  block(21090, 280);
  block(21297, 240);
  block(21504, 200);
  block(21711, 160);
  block(21918, 120);
  block(22125, 80);
  block(22332, 40);
  block(22539, 0);
  spike(22750, 0);
  spike(23000, 0);
  spike(23040, 0);
  spike(23350, 0);
  spike(23390, 0);
  spike(23430, 0);
  block(23800, 0);
  pit(23840, 28760);
  block(23962, 40);
  block(24124, 80);
  block(24286, 120);
  block(24448, 160);
  block(24568, 120);
  block(24730, 160);
  block(24920, 160);
  block(25040, 120);
  block(25202, 160);
  block(25409, 120);
  block(25571, 160);
  block(25691, 120);
  block(25853, 160);
  block(26043, 160);
  block(26233, 160);
  block(26423, 160);
  block(26630, 120);
  block(26792, 160);
  block(26912, 120);
  block(27074, 160);
  block(27236, 200);
  block(27356, 160);
  block(27426, 240);
  spike(27426, 280);
  block(27476, 120);
  block(27596, 80);
  block(27836, 0);
  block(28026, 0);
  block(28188, 40);
  block(28350, 80);
  block(28512, 120);
  block(28593, 120);
  spike(28593, 160);
  block(28674, 160);
  spike(28850, 0);
  spike(29100, 0);
  spike(29400, 0);
  spike(29440, 0);
  spike(29480, 0);
  spike(29750, 0);
  spike(29790, 0);
  spike(30050, 0);
  block(30300, 0);
  pit(30340, 34580);
  block(30462, 40);
  block(30624, 80);
  block(30786, 120);
  block(30948, 160);
  block(31110, 200);
  block(31272, 240);
  block(31434, 280);
  block(31596, 320);
  block(31758, 360);
  block(31920, 400);
  block(32082, 440);
  block(32244, 480);
  block(32406, 520);
  block(32568, 560);
  block(32730, 600);
  block(32892, 640);
  block(33054, 680);
  block(33216, 720);
  block(33378, 760);
  block(33540, 800);
  block(33702, 840);
  block(33864, 880);
  block(34026, 920);
  block(34188, 960);
  spike(34188, 1000);
  block(34390, 200);
  block(34430, 200);
  spike(34760, 0);
  spike(34960, 0);
  spike(35400, 0);
  spike(35700, 0);
  spike(35740, 0);
  spike(35900, 0);
  spike(35940, 0);
  block(35980, 0);
  spike(36020, 0);
  spike(36060, 0);
  block(36360, 0);
  spike(36400, 0);
  spike(36440, 0);
  spike(36480, 0);
  spike(36520, 0);
  block(36900, 0);
  pit(36940, 37910);
  block(37062, 40);
  block(37224, 80);
  block(37264, 80);
  block(37304, 80);
  block(37344, 80);
  block(37384, 80);
  spike(37384, 120);
  block(37506, 120);
  block(37626, 80);
  block(37833, 40);
  block(37953, 0);
  spike(37993, 0);
  spike(38033, 0);
  spike(38073, 0);
  spike(38113, 0);
  spike(38400, 0);
  spike(38800, 0);
  spike(38840, 0);
  spike(38880, 0);
  spike(38990, 0);
  spike(39030, 0);
  spike(39070, 0);
  xOffset = -3460;
  block(39800, 0);
  pit(39840, 43000);
  block(39962, 40);
  block(40124, 80);
  block(40286, 120);
  block(40286, 0);
  spike(40286, 40);
  block(40448, 160);
  block(40448, 40);
  spike(40448, 80);
  block(40610, 200);
  block(40610, 80);
  spike(40610, 120);
  block(40772, 240);
  block(40772, 120);
  spike(40772, 160);
  block(40934, 280);
  block(40934, 160);
  spike(40934, 200);
  block(41096, 320);
  block(41096, 200);
  spike(41096, 240);
  block(41216, 280);
  block(41216, 400);
  spike(41216, 440);
  block(41336, 240);
  block(41336, 440);
  spike(41336, 480);
  block(41543, 200);
  block(41543, 360);
  spike(41543, 400);
  block(41750, 160);
  block(41750, 320);
  spike(41750, 360);
  block(41940, 160);
  block(41940, 320);
  spike(41940, 360);
  block(42102, 200);
  block(42102, 80);
  spike(42102, 120);
  block(42264, 240);
  block(42264, 120);
  spike(42264, 160);
  block(42426, 280);
  block(42426, 160);
  spike(42426, 200);
  block(42578, 320);
  block(42578, 200);
  spike(42578, 240);
  block(42745, 360);
  block(42745, 240);
  spike(42745, 280);
  block(42785, 360);
  spike(42785, 400);
  block(42855, 320);
  spike(42855, 360);
  block(42895, 280);
  spike(42895, 320);
  block(42935, 200);
  spike(42935, 240);
  block(42975, 120);
  spike(42975, 160);
  block(43005, 0);
  spike(43005, 40);
  spike(43360, 0);
  spike(43660, 0);
  spike(43700, 0);
  spike(44000, 0);
  spike(44040, 0);
  spike(44080, 0);
  spike(44380, 0);
  spike(44420, 0);
  spike(44760, 0);
  ascendingBlocks(45490, 50000, 0);
  pit(45530, 50000);
  return genLevelEnd((int)((double)(xOffset + 45490) * scale));
}
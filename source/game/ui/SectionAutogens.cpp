#include "SectionAutogens.hpp"

// --- EXTERN DECLARATIONS BEGIN ---

extern "C" {

// Extern function references.
// PAL: 0x80622d08
extern UNKNOWN_FUNCTION(Section_addPage);
// PAL: 0x80622da0
extern UNKNOWN_FUNCTION(Section_addActivePage);
// PAL: 0x8062c3dc
extern UNKNOWN_FUNCTION(jump_8062c3dc);
// PAL: 0x8062c3e8
extern UNKNOWN_FUNCTION(jump_8062c3e8);
// PAL: 0x8062c3f4
extern UNKNOWN_FUNCTION(jump_8062c3f4);
// PAL: 0x8062c400
extern UNKNOWN_FUNCTION(jump_8062c400);
// PAL: 0x8062c40c
extern UNKNOWN_FUNCTION(jump_8062c40c);
// PAL: 0x8062c418
extern UNKNOWN_FUNCTION(jump_8062c418);
// PAL: 0x8062c424
extern UNKNOWN_FUNCTION(jump_8062c424);
// PAL: 0x8062c430
extern UNKNOWN_FUNCTION(jump_8062c430);
// PAL: 0x8062c43c
extern UNKNOWN_FUNCTION(jump_8062c43c);
// PAL: 0x8062c448
extern UNKNOWN_FUNCTION(jump_8062c448);
// PAL: 0x8062c454
extern UNKNOWN_FUNCTION(jump_8062c454);
// PAL: 0x8062c478
extern UNKNOWN_FUNCTION(jump_8062c478);
// PAL: 0x8062c4a8
extern UNKNOWN_FUNCTION(jump_8062c4a8);
// PAL: 0x8062c4d8
extern UNKNOWN_FUNCTION(jump_8062c4d8);
// PAL: 0x8062c4fc
extern UNKNOWN_FUNCTION(jump_8062c4fc);
// PAL: 0x8062c514
extern UNKNOWN_FUNCTION(jump_8062c514);
// PAL: 0x8062c52c
extern UNKNOWN_FUNCTION(jump_8062c52c);
// PAL: 0x8062c538
extern UNKNOWN_FUNCTION(jump_8062c538);
// PAL: 0x8062c544
extern UNKNOWN_FUNCTION(jump_8062c544);
// PAL: 0x8062c550
extern UNKNOWN_FUNCTION(jump_8062c550);
// PAL: 0x8062c55c
extern UNKNOWN_FUNCTION(jump_8062c55c);
// PAL: 0x8062c568
extern UNKNOWN_FUNCTION(jump_8062c568);
// PAL: 0x8062c574
extern UNKNOWN_FUNCTION(jump_8062c574);
// PAL: 0x8062c580
extern UNKNOWN_FUNCTION(jump_8062c580);
// PAL: 0x8062c58c
extern UNKNOWN_FUNCTION(jump_8062c58c);
// PAL: 0x8062c5e0
extern UNKNOWN_FUNCTION(jump_8062c5e0);
// PAL: 0x8062c64c
extern UNKNOWN_FUNCTION(jump_8062c64c);
// PAL: 0x8062c694
extern UNKNOWN_FUNCTION(jump_8062c694);
// PAL: 0x8062c6e8
extern UNKNOWN_FUNCTION(jump_8062c6e8);
// PAL: 0x8062c73c
extern UNKNOWN_FUNCTION(jump_8062c73c);
// PAL: 0x8062c790
extern UNKNOWN_FUNCTION(jump_8062c790);
// PAL: 0x8062c7d8
extern UNKNOWN_FUNCTION(jump_8062c7d8);
// PAL: 0x8062c82c
extern UNKNOWN_FUNCTION(jump_8062c82c);
// PAL: 0x8062c880
extern UNKNOWN_FUNCTION(jump_8062c880);
// PAL: 0x8062c8d4
extern UNKNOWN_FUNCTION(jump_8062c8d4);
// PAL: 0x8062c928
extern UNKNOWN_FUNCTION(jump_8062c928);
// PAL: 0x8062c988
extern UNKNOWN_FUNCTION(jump_8062c988);
// PAL: 0x8062c9e8
extern UNKNOWN_FUNCTION(jump_8062c9e8);
// PAL: 0x8062ca48
extern UNKNOWN_FUNCTION(jump_8062ca48);
// PAL: 0x8062ca84
extern UNKNOWN_FUNCTION(jump_8062ca84);
// PAL: 0x8062cacc
extern UNKNOWN_FUNCTION(jump_8062cacc);
// PAL: 0x8062cafc
extern UNKNOWN_FUNCTION(jump_8062cafc);
// PAL: 0x8062cb44
extern UNKNOWN_FUNCTION(jump_8062cb44);
// PAL: 0x8062cbbc
extern UNKNOWN_FUNCTION(jump_8062cbbc);
// PAL: 0x8062cc40
extern UNKNOWN_FUNCTION(jump_8062cc40);
// PAL: 0x8062cc7c
extern UNKNOWN_FUNCTION(jump_8062cc7c);
// PAL: 0x8062ccb8
extern UNKNOWN_FUNCTION(jump_8062ccb8);
// PAL: 0x8062ccf4
extern UNKNOWN_FUNCTION(jump_8062ccf4);
// PAL: 0x8062cd0c
extern UNKNOWN_FUNCTION(jump_8062cd0c);
// PAL: 0x8062cd24
extern UNKNOWN_FUNCTION(jump_8062cd24);
// PAL: 0x8062cd3c
extern UNKNOWN_FUNCTION(jump_8062cd3c);
// PAL: 0x8062cd54
extern UNKNOWN_FUNCTION(jump_8062cd54);
// PAL: 0x8062cd60
extern UNKNOWN_FUNCTION(jump_8062cd60);
// PAL: 0x8062cd6c
extern UNKNOWN_FUNCTION(jump_8062cd6c);
// PAL: 0x8062cd84
extern UNKNOWN_FUNCTION(jump_8062cd84);
// PAL: 0x8062cd9c
extern UNKNOWN_FUNCTION(jump_8062cd9c);
// PAL: 0x8062cdd8
extern UNKNOWN_FUNCTION(jump_8062cdd8);
// PAL: 0x8062ce14
extern UNKNOWN_FUNCTION(jump_8062ce14);
// PAL: 0x8062ce98
extern UNKNOWN_FUNCTION(jump_8062ce98);
// PAL: 0x8062cf1c
extern UNKNOWN_FUNCTION(jump_8062cf1c);
// PAL: 0x8062cfa0
extern UNKNOWN_FUNCTION(jump_8062cfa0);
// PAL: 0x8062d024
extern UNKNOWN_FUNCTION(jump_8062d024);
// PAL: 0x8062d0a8
extern UNKNOWN_FUNCTION(jump_8062d0a8);
// PAL: 0x8062d0c0
extern UNKNOWN_FUNCTION(jump_8062d0c0);
// PAL: 0x8062d108
extern UNKNOWN_FUNCTION(jump_8062d108);
// PAL: 0x8062d150
extern UNKNOWN_FUNCTION(jump_8062d150);
// PAL: 0x8062d1f8
extern UNKNOWN_FUNCTION(jump_8062d1f8);
// PAL: 0x8062d33c
extern UNKNOWN_FUNCTION(jump_8062d33c);
// PAL: 0x8062d480
extern UNKNOWN_FUNCTION(jump_8062d480);
// PAL: 0x8062d5c4
extern UNKNOWN_FUNCTION(jump_8062d5c4);
// PAL: 0x8062d648
extern UNKNOWN_FUNCTION(jump_8062d648);
// PAL: 0x8062d6cc
extern UNKNOWN_FUNCTION(jump_8062d6cc);
// PAL: 0x8062d810
extern UNKNOWN_FUNCTION(jump_8062d810);
// PAL: 0x8062d87c
extern UNKNOWN_FUNCTION(jump_8062d87c);
// PAL: 0x8062d8e8
extern UNKNOWN_FUNCTION(jump_8062d8e8);
// PAL: 0x8062d954
extern UNKNOWN_FUNCTION(jump_8062d954);
// PAL: 0x8062d99c
extern UNKNOWN_FUNCTION(jump_8062d99c);
// PAL: 0x8062d9e4
extern UNKNOWN_FUNCTION(jump_8062d9e4);
// PAL: 0x8062da2c
extern UNKNOWN_FUNCTION(jump_8062da2c);
// PAL: 0x8062db64
extern UNKNOWN_FUNCTION(jump_8062db64);
// PAL: 0x8062dd08
extern UNKNOWN_FUNCTION(jump_8062dd08);
// PAL: 0x8062deac
extern UNKNOWN_FUNCTION(jump_8062deac);
// PAL: 0x8062e050
extern UNKNOWN_FUNCTION(jump_8062e050);
// PAL: 0x8062e0e0
extern UNKNOWN_FUNCTION(jump_8062e0e0);
// PAL: 0x8062e170
extern UNKNOWN_FUNCTION(jump_8062e170);
// PAL: 0x8062e1d0
extern UNKNOWN_FUNCTION(jump_8062e1d0);
// PAL: 0x8062e374
extern UNKNOWN_FUNCTION(jump_8062e374);
// PAL: 0x8062e518
extern UNKNOWN_FUNCTION(jump_8062e518);
// PAL: 0x8062e6bc
extern UNKNOWN_FUNCTION(jump_8062e6bc);
// PAL: 0x8062e74c
extern UNKNOWN_FUNCTION(jump_8062e74c);
// PAL: 0x8062e7dc
extern UNKNOWN_FUNCTION(jump_8062e7dc);
// PAL: 0x8062e86c
extern UNKNOWN_FUNCTION(jump_8062e86c);
// PAL: 0x8062e8fc
extern UNKNOWN_FUNCTION(jump_8062e8fc);
// PAL: 0x8062e98c
extern UNKNOWN_FUNCTION(jump_8062e98c);
// PAL: 0x8062ea1c
extern UNKNOWN_FUNCTION(jump_8062ea1c);
// PAL: 0x8062eaac
extern UNKNOWN_FUNCTION(jump_8062eaac);
// PAL: 0x8062eb3c
extern UNKNOWN_FUNCTION(jump_8062eb3c);
// PAL: 0x8062ebcc
extern UNKNOWN_FUNCTION(jump_8062ebcc);
// PAL: 0x8062ec5c
extern UNKNOWN_FUNCTION(jump_8062ec5c);
// PAL: 0x8062ecd4
extern UNKNOWN_FUNCTION(jump_8062ecd4);
// PAL: 0x8062ed4c
extern UNKNOWN_FUNCTION(jump_8062ed4c);
// PAL: 0x8062eda0
extern UNKNOWN_FUNCTION(jump_8062eda0);
// PAL: 0x8062edf4
extern UNKNOWN_FUNCTION(jump_8062edf4);
// PAL: 0x8062ee78
extern UNKNOWN_FUNCTION(jump_8062ee78);
// PAL: 0x8062eefc
extern UNKNOWN_FUNCTION(jump_8062eefc);
// PAL: 0x8062ef5c
extern UNKNOWN_FUNCTION(jump_8062ef5c);
// PAL: 0x8062efbc
extern UNKNOWN_FUNCTION(jump_8062efbc);
// PAL: 0x8062f028
extern UNKNOWN_FUNCTION(jump_8062f028);
// PAL: 0x8062f094
extern UNKNOWN_FUNCTION(jump_8062f094);
// PAL: 0x8062f100
extern UNKNOWN_FUNCTION(jump_8062f100);
// PAL: 0x8062f16c
extern UNKNOWN_FUNCTION(jump_8062f16c);
// PAL: 0x8062f1d8
extern UNKNOWN_FUNCTION(jump_8062f1d8);
// PAL: 0x8062f244
extern UNKNOWN_FUNCTION(jump_8062f244);
// PAL: 0x8062f2b0
extern UNKNOWN_FUNCTION(jump_8062f2b0);
// PAL: 0x8062f31c
extern UNKNOWN_FUNCTION(jump_8062f31c);
// PAL: 0x8062f334
extern UNKNOWN_FUNCTION(jump_8062f334);
// PAL: 0x8062f34c
extern UNKNOWN_FUNCTION(jump_8062f34c);
// PAL: 0x8062f3a0
extern UNKNOWN_FUNCTION(jump_8062f3a0);
// PAL: 0x8062f3f4
extern UNKNOWN_FUNCTION(jump_8062f3f4);
// PAL: 0x8062f448
extern UNKNOWN_FUNCTION(jump_8062f448);
// PAL: 0x8062f544
extern UNKNOWN_FUNCTION(jump_8062f544);
// PAL: 0x8062f610
extern UNKNOWN_FUNCTION(jump_8062f610);
// PAL: 0x8062f694
extern UNKNOWN_FUNCTION(jump_8062f694);
// PAL: 0x8062f778
extern UNKNOWN_FUNCTION(jump_8062f778);
// PAL: 0x8062f850
extern UNKNOWN_FUNCTION(jump_8062f850);
// PAL: 0x8062f8b0
extern UNKNOWN_FUNCTION(jump_8062f8b0);
// PAL: 0x8062fa3c
extern UNKNOWN_FUNCTION(jump_8062fa3c);
// PAL: 0x8062fbd4
extern UNKNOWN_FUNCTION(jump_8062fbd4);
// PAL: 0x8062fc4c
extern UNKNOWN_FUNCTION(jump_8062fc4c);
// PAL: 0x8062fcc4
extern UNKNOWN_FUNCTION(jump_8062fcc4);
// PAL: 0x8062fd48
extern UNKNOWN_FUNCTION(jump_8062fd48);
// PAL: 0x8062fd60
extern UNKNOWN_FUNCTION(jump_8062fd60);
// PAL: 0x8062fd78
extern UNKNOWN_FUNCTION(jump_8062fd78);
// PAL: 0x8062fdcc
extern UNKNOWN_FUNCTION(jump_8062fdcc);
// PAL: 0x8062fe08
extern UNKNOWN_FUNCTION(jump_8062fe08);
// PAL: 0x8062fec8
extern UNKNOWN_FUNCTION(jump_8062fec8);
// PAL: 0x8062fef8
extern UNKNOWN_FUNCTION(jump_8062fef8);
// PAL: 0x8062ff1c
extern UNKNOWN_FUNCTION(jump_8062ff1c);
// PAL: 0x8062ff88
extern UNKNOWN_FUNCTION(jump_8062ff88);
// PAL: 0x8062ffb8
extern UNKNOWN_FUNCTION(jump_8062ffb8);
// PAL: 0x8062ffe8
extern UNKNOWN_FUNCTION(jump_8062ffe8);
// PAL: 0x80630018
extern UNKNOWN_FUNCTION(jump_80630018);
// PAL: 0x80630048
extern UNKNOWN_FUNCTION(jump_80630048);
// PAL: 0x806300cc
extern UNKNOWN_FUNCTION(jump_806300cc);
// PAL: 0x806300d8
extern UNKNOWN_FUNCTION(jump_806300d8);
// PAL: 0x806300e4
extern UNKNOWN_FUNCTION(jump_806300e4);
// PAL: 0x806300f0
extern UNKNOWN_FUNCTION(jump_806300f0);
// PAL: 0x806300fc
extern UNKNOWN_FUNCTION(jump_806300fc);
// PAL: 0x80630108
extern UNKNOWN_FUNCTION(jump_80630108);
// PAL: 0x80630114
extern UNKNOWN_FUNCTION(jump_80630114);
// PAL: 0x80630120
extern UNKNOWN_FUNCTION(jump_80630120);
// PAL: 0x8063012c
extern UNKNOWN_FUNCTION(jump_8063012c);
// PAL: 0x80630138
extern UNKNOWN_FUNCTION(jump_80630138);
// PAL: 0x80630144
extern UNKNOWN_FUNCTION(jump_80630144);
// PAL: 0x8063015c
extern UNKNOWN_FUNCTION(jump_8063015c);
// PAL: 0x80630174
extern UNKNOWN_FUNCTION(jump_80630174);
// PAL: 0x8063018c
extern UNKNOWN_FUNCTION(jump_8063018c);
// PAL: 0x806301a4
extern UNKNOWN_FUNCTION(jump_806301a4);
// PAL: 0x806301bc
extern UNKNOWN_FUNCTION(jump_806301bc);
// PAL: 0x806301d4
extern UNKNOWN_FUNCTION(jump_806301d4);
// PAL: 0x806301e0
extern UNKNOWN_FUNCTION(jump_806301e0);
// PAL: 0x806301ec
extern UNKNOWN_FUNCTION(jump_806301ec);
// PAL: 0x806301f8
extern UNKNOWN_FUNCTION(jump_806301f8);
// PAL: 0x80630204
extern UNKNOWN_FUNCTION(jump_80630204);
// PAL: 0x80630210
extern UNKNOWN_FUNCTION(jump_80630210);
// PAL: 0x8063021c
extern UNKNOWN_FUNCTION(jump_8063021c);
// PAL: 0x80630228
extern UNKNOWN_FUNCTION(jump_80630228);
// PAL: 0x80630234
extern UNKNOWN_FUNCTION(jump_80630234);
// PAL: 0x8063024c
extern UNKNOWN_FUNCTION(jump_8063024c);
// PAL: 0x80630270
extern UNKNOWN_FUNCTION(jump_80630270);
// PAL: 0x80630288
extern UNKNOWN_FUNCTION(jump_80630288);
// PAL: 0x806302a0
extern UNKNOWN_FUNCTION(jump_806302a0);
// PAL: 0x806302b8
extern UNKNOWN_FUNCTION(jump_806302b8);
// PAL: 0x806302d0
extern UNKNOWN_FUNCTION(jump_806302d0);
// PAL: 0x806302e8
extern UNKNOWN_FUNCTION(jump_806302e8);
// PAL: 0x80630300
extern UNKNOWN_FUNCTION(jump_80630300);
// PAL: 0x80630318
extern UNKNOWN_FUNCTION(jump_80630318);
// PAL: 0x80630330
extern UNKNOWN_FUNCTION(jump_80630330);
// PAL: 0x80630348
extern UNKNOWN_FUNCTION(jump_80630348);
// PAL: 0x80630360
extern UNKNOWN_FUNCTION(jump_80630360);
// PAL: 0x80630378
extern UNKNOWN_FUNCTION(jump_80630378);
// PAL: 0x80630390
extern UNKNOWN_FUNCTION(jump_80630390);
// PAL: 0x806303a8
extern UNKNOWN_FUNCTION(jump_806303a8);
// PAL: 0x806303c0
extern UNKNOWN_FUNCTION(jump_806303c0);
// PAL: 0x806303d8
extern UNKNOWN_FUNCTION(jump_806303d8);
// PAL: 0x806303fc
extern UNKNOWN_FUNCTION(jump_806303fc);
// PAL: 0x80630414
extern UNKNOWN_FUNCTION(jump_80630414);
// PAL: 0x80630438
extern UNKNOWN_FUNCTION(jump_80630438);
// PAL: 0x8063045c
extern UNKNOWN_FUNCTION(jump_8063045c);
// PAL: 0x80630480
extern UNKNOWN_FUNCTION(jump_80630480);
// PAL: 0x806304a4
extern UNKNOWN_FUNCTION(jump_806304a4);
// PAL: 0x806304b0
extern UNKNOWN_FUNCTION(jump_806304b0);
// PAL: 0x806304bc
extern UNKNOWN_FUNCTION(jump_806304bc);
// PAL: 0x806304c8
extern UNKNOWN_FUNCTION(jump_806304c8);
// PAL: 0x806304d4
extern UNKNOWN_FUNCTION(jump_806304d4);
// PAL: 0x806304e0
extern UNKNOWN_FUNCTION(jump_806304e0);
// PAL: 0x806304ec
extern UNKNOWN_FUNCTION(jump_806304ec);
// PAL: 0x80630504
extern UNKNOWN_FUNCTION(jump_80630504);
// PAL: 0x8063051c
extern UNKNOWN_FUNCTION(jump_8063051c);
// PAL: 0x80630534
extern UNKNOWN_FUNCTION(jump_80630534);
// PAL: 0x8063054c
extern UNKNOWN_FUNCTION(jump_8063054c);
// PAL: 0x8063057c
extern UNKNOWN_FUNCTION(jump_8063057c);
// PAL: 0x806305ac
extern UNKNOWN_FUNCTION(jump_806305ac);
// PAL: 0x806305dc
extern UNKNOWN_FUNCTION(jump_806305dc);
// PAL: 0x8063060c
extern UNKNOWN_FUNCTION(jump_8063060c);
// PAL: 0x8063063c
extern UNKNOWN_FUNCTION(jump_8063063c);
// PAL: 0x80630654
extern UNKNOWN_FUNCTION(jump_80630654);
// PAL: 0x80630678
extern UNKNOWN_FUNCTION(jump_80630678);
// PAL: 0x8063069c
extern UNKNOWN_FUNCTION(jump_8063069c);
// PAL: 0x806306c0
extern UNKNOWN_FUNCTION(jump_806306c0);
// PAL: 0x806306fc
extern UNKNOWN_FUNCTION(jump_806306fc);
// PAL: 0x80630738
extern UNKNOWN_FUNCTION(jump_80630738);
// PAL: 0x80630774
extern UNKNOWN_FUNCTION(jump_80630774);
// PAL: 0x806307b0
extern UNKNOWN_FUNCTION(jump_806307b0);
// PAL: 0x806307ec
extern UNKNOWN_FUNCTION(jump_806307ec);
// PAL: 0x8063081c
extern UNKNOWN_FUNCTION(jump_8063081c);
// PAL: 0x80630858
extern UNKNOWN_FUNCTION(jump_80630858);
// PAL: 0x80630894
extern UNKNOWN_FUNCTION(jump_80630894);
// PAL: 0x806308d0
extern UNKNOWN_FUNCTION(jump_806308d0);
// PAL: 0x80630900
extern UNKNOWN_FUNCTION(jump_80630900);
// PAL: 0x80630930
extern UNKNOWN_FUNCTION(jump_80630930);
// PAL: 0x80630960
extern UNKNOWN_FUNCTION(jump_80630960);
// PAL: 0x80630990
extern UNKNOWN_FUNCTION(jump_80630990);
// PAL: 0x806309d8
extern UNKNOWN_FUNCTION(jump_806309d8);
// PAL: 0x80630a20
extern UNKNOWN_FUNCTION(jump_80630a20);
// PAL: 0x80630a68
extern UNKNOWN_FUNCTION(jump_80630a68);
// PAL: 0x80630aa4
extern UNKNOWN_FUNCTION(jump_80630aa4);
// PAL: 0x80630ae0
extern UNKNOWN_FUNCTION(jump_80630ae0);
// PAL: 0x80630af8
extern UNKNOWN_FUNCTION(jump_80630af8);
// PAL: 0x80630b40
extern UNKNOWN_FUNCTION(jump_80630b40);
// PAL: 0x80630b88
extern UNKNOWN_FUNCTION(jump_80630b88);
// PAL: 0x80630bd0
extern UNKNOWN_FUNCTION(jump_80630bd0);
// PAL: 0x80630c0c
extern UNKNOWN_FUNCTION(jump_80630c0c);
// PAL: 0x80630c48
extern UNKNOWN_FUNCTION(jump_80630c48);
// PAL: 0x80630c84
extern UNKNOWN_FUNCTION(jump_80630c84);
// PAL: 0x80630cc0
extern UNKNOWN_FUNCTION(jump_80630cc0);
// PAL: 0x80630cfc
extern UNKNOWN_FUNCTION(jump_80630cfc);
// PAL: 0x80630d38
extern UNKNOWN_FUNCTION(jump_80630d38);
// PAL: 0x80630d74
extern UNKNOWN_FUNCTION(jump_80630d74);
// PAL: 0x80630db0
extern UNKNOWN_FUNCTION(jump_80630db0);
// PAL: 0x80630dec
extern UNKNOWN_FUNCTION(jump_80630dec);
// PAL: 0x80630e28
extern UNKNOWN_FUNCTION(jump_80630e28);
// PAL: 0x80630e58
extern UNKNOWN_FUNCTION(jump_80630e58);
// PAL: 0x80630e88
extern UNKNOWN_FUNCTION(jump_80630e88);
// PAL: 0x80630eb8
extern UNKNOWN_FUNCTION(jump_80630eb8);
// PAL: 0x80630ee8
extern UNKNOWN_FUNCTION(jump_80630ee8);
// PAL: 0x80630f18
extern UNKNOWN_FUNCTION(jump_80630f18);
// PAL: 0x80630f48
extern UNKNOWN_FUNCTION(jump_80630f48);
// PAL: 0x80630f78
extern UNKNOWN_FUNCTION(jump_80630f78);
// PAL: 0x80630fa8
extern UNKNOWN_FUNCTION(jump_80630fa8);
// PAL: 0x80630fd8
extern UNKNOWN_FUNCTION(jump_80630fd8);
// PAL: 0x80631008
extern UNKNOWN_FUNCTION(jump_80631008);
// PAL: 0x80631038
extern UNKNOWN_FUNCTION(jump_80631038);
// PAL: 0x80631068
extern UNKNOWN_FUNCTION(jump_80631068);
// PAL: 0x80631098
extern UNKNOWN_FUNCTION(jump_80631098);
// PAL: 0x806310c8
extern UNKNOWN_FUNCTION(jump_806310c8);
// PAL: 0x806310f8
extern UNKNOWN_FUNCTION(jump_806310f8);
// PAL: 0x80631128
extern UNKNOWN_FUNCTION(jump_80631128);
// PAL: 0x80631140
extern UNKNOWN_FUNCTION(jump_80631140);
// PAL: 0x80631158
extern UNKNOWN_FUNCTION(jump_80631158);
// PAL: 0x80631170
extern UNKNOWN_FUNCTION(jump_80631170);
// PAL: 0x80631188
extern UNKNOWN_FUNCTION(jump_80631188);
// PAL: 0x806311a0
extern UNKNOWN_FUNCTION(jump_806311a0);
// PAL: 0x806311e8
extern UNKNOWN_FUNCTION(jump_806311e8);
// PAL: 0x80631224
extern UNKNOWN_FUNCTION(jump_80631224);
// PAL: 0x80631248
extern UNKNOWN_FUNCTION(jump_80631248);
// PAL: 0x80631278
extern UNKNOWN_FUNCTION(jump_80631278);
// PAL: 0x806312a8
extern UNKNOWN_FUNCTION(jump_806312a8);
// PAL: 0x806312cc
extern UNKNOWN_FUNCTION(jump_806312cc);
// PAL: 0x80631314
extern UNKNOWN_FUNCTION(jump_80631314);
// PAL: 0x8063135c
extern UNKNOWN_FUNCTION(jump_8063135c);
// PAL: 0x80631380
extern UNKNOWN_FUNCTION(jump_80631380);
// PAL: 0x806313a4
extern UNKNOWN_FUNCTION(jump_806313a4);
// PAL: 0x806313c8
extern UNKNOWN_FUNCTION(jump_806313c8);
// PAL: 0x806313e0
extern UNKNOWN_FUNCTION(jump_806313e0);
// PAL: 0x806313f8
extern UNKNOWN_FUNCTION(jump_806313f8);
// PAL: 0x80631410
extern UNKNOWN_FUNCTION(jump_80631410);
// PAL: 0x80631428
extern UNKNOWN_FUNCTION(jump_80631428);
// PAL: 0x8063144c
extern UNKNOWN_FUNCTION(jump_8063144c);
// PAL: 0x80631470
extern UNKNOWN_FUNCTION(jump_80631470);
// PAL: 0x80631494
extern UNKNOWN_FUNCTION(jump_80631494);
// PAL: 0x806314b8
extern UNKNOWN_FUNCTION(jump_806314b8);
// PAL: 0x806314e8
extern UNKNOWN_FUNCTION(jump_806314e8);
// PAL: 0x80631518
extern UNKNOWN_FUNCTION(jump_80631518);
// PAL: 0x80631548
extern UNKNOWN_FUNCTION(jump_80631548);
// PAL: 0x806321d4
extern UNKNOWN_FUNCTION(jump_806321d4);
// PAL: 0x806321dc
extern UNKNOWN_FUNCTION(jump_806321dc);
// PAL: 0x806321e4
extern UNKNOWN_FUNCTION(jump_806321e4);
// PAL: 0x806321ec
extern UNKNOWN_FUNCTION(jump_806321ec);
// PAL: 0x806321f4
extern UNKNOWN_FUNCTION(jump_806321f4);
// PAL: 0x806321fc
extern UNKNOWN_FUNCTION(jump_806321fc);
// PAL: 0x80632204
extern UNKNOWN_FUNCTION(jump_80632204);
// PAL: 0x8063220c
extern UNKNOWN_FUNCTION(jump_8063220c);
// PAL: 0x80632214
extern UNKNOWN_FUNCTION(jump_80632214);
// PAL: 0x8063221c
extern UNKNOWN_FUNCTION(jump_8063221c);
// PAL: 0x80632224
extern UNKNOWN_FUNCTION(jump_80632224);
// PAL: 0x8063222c
extern UNKNOWN_FUNCTION(jump_8063222c);
// PAL: 0x80632234
extern UNKNOWN_FUNCTION(jump_80632234);
// PAL: 0x8063223c
extern UNKNOWN_FUNCTION(jump_8063223c);
// PAL: 0x80632244
extern UNKNOWN_FUNCTION(jump_80632244);
// PAL: 0x8063224c
extern UNKNOWN_FUNCTION(jump_8063224c);
// PAL: 0x80632254
extern UNKNOWN_FUNCTION(jump_80632254);
// PAL: 0x8063225c
extern UNKNOWN_FUNCTION(jump_8063225c);
// PAL: 0x80632264
extern UNKNOWN_FUNCTION(jump_80632264);
// PAL: 0x8063226c
extern UNKNOWN_FUNCTION(jump_8063226c);
// PAL: 0x80632274
extern UNKNOWN_FUNCTION(jump_80632274);
// PAL: 0x8063227c
extern UNKNOWN_FUNCTION(jump_8063227c);
// PAL: 0x80632284
extern UNKNOWN_FUNCTION(jump_80632284);
// PAL: 0x8063228c
extern UNKNOWN_FUNCTION(jump_8063228c);
// PAL: 0x80632294
extern UNKNOWN_FUNCTION(jump_80632294);
// PAL: 0x8063229c
extern UNKNOWN_FUNCTION(jump_8063229c);
// PAL: 0x806322a4
extern UNKNOWN_FUNCTION(jump_806322a4);
// PAL: 0x806322ac
extern UNKNOWN_FUNCTION(jump_806322ac);
// PAL: 0x806322b4
extern UNKNOWN_FUNCTION(jump_806322b4);
// PAL: 0x806322bc
extern UNKNOWN_FUNCTION(jump_806322bc);
// PAL: 0x806322c4
extern UNKNOWN_FUNCTION(jump_806322c4);
// PAL: 0x806322cc
extern UNKNOWN_FUNCTION(jump_806322cc);
// PAL: 0x806322d4
extern UNKNOWN_FUNCTION(jump_806322d4);
// PAL: 0x806322dc
extern UNKNOWN_FUNCTION(jump_806322dc);
// PAL: 0x806322e4
extern UNKNOWN_FUNCTION(jump_806322e4);
// PAL: 0x806322ec
extern UNKNOWN_FUNCTION(jump_806322ec);
// PAL: 0x806322f4
extern UNKNOWN_FUNCTION(jump_806322f4);
// PAL: 0x806322fc
extern UNKNOWN_FUNCTION(jump_806322fc);
// PAL: 0x80632304
extern UNKNOWN_FUNCTION(jump_80632304);
// PAL: 0x8063230c
extern UNKNOWN_FUNCTION(jump_8063230c);
// PAL: 0x80632314
extern UNKNOWN_FUNCTION(jump_80632314);
// PAL: 0x8063231c
extern UNKNOWN_FUNCTION(jump_8063231c);
// PAL: 0x80632324
extern UNKNOWN_FUNCTION(jump_80632324);
// PAL: 0x8063232c
extern UNKNOWN_FUNCTION(jump_8063232c);
// PAL: 0x80632334
extern UNKNOWN_FUNCTION(jump_80632334);
// PAL: 0x8063233c
extern UNKNOWN_FUNCTION(jump_8063233c);
// PAL: 0x80632344
extern UNKNOWN_FUNCTION(jump_80632344);
// PAL: 0x8063234c
extern UNKNOWN_FUNCTION(jump_8063234c);
// PAL: 0x80632354
extern UNKNOWN_FUNCTION(jump_80632354);
// PAL: 0x8063235c
extern UNKNOWN_FUNCTION(jump_8063235c);
// PAL: 0x80632364
extern UNKNOWN_FUNCTION(jump_80632364);
// PAL: 0x8063236c
extern UNKNOWN_FUNCTION(jump_8063236c);
// PAL: 0x80632374
extern UNKNOWN_FUNCTION(jump_80632374);
// PAL: 0x8063237c
extern UNKNOWN_FUNCTION(jump_8063237c);
// PAL: 0x80632384
extern UNKNOWN_FUNCTION(jump_80632384);
// PAL: 0x8063238c
extern UNKNOWN_FUNCTION(jump_8063238c);
// PAL: 0x80632394
extern UNKNOWN_FUNCTION(jump_80632394);
// PAL: 0x8063239c
extern UNKNOWN_FUNCTION(jump_8063239c);
// PAL: 0x806323a4
extern UNKNOWN_FUNCTION(jump_806323a4);
// PAL: 0x806323ac
extern UNKNOWN_FUNCTION(jump_806323ac);
// PAL: 0x806323b4
extern UNKNOWN_FUNCTION(jump_806323b4);
// PAL: 0x806323bc
extern UNKNOWN_FUNCTION(jump_806323bc);
// PAL: 0x806323c4
extern UNKNOWN_FUNCTION(jump_806323c4);
// PAL: 0x806323cc
extern UNKNOWN_FUNCTION(jump_806323cc);
// PAL: 0x806323d4
extern UNKNOWN_FUNCTION(jump_806323d4);
// PAL: 0x806323dc
extern UNKNOWN_FUNCTION(jump_806323dc);
// PAL: 0x806323e4
extern UNKNOWN_FUNCTION(jump_806323e4);
// PAL: 0x806323ec
extern UNKNOWN_FUNCTION(jump_806323ec);
// PAL: 0x806323f4
extern UNKNOWN_FUNCTION(jump_806323f4);
// PAL: 0x806323fc
extern UNKNOWN_FUNCTION(jump_806323fc); // Extern data references.
// PAL: 0x80897d94
extern UNKNOWN_DATA(lbl_80897d94);
}

// --- EXTERN DECLARATIONS END ---

// .rodata

// .data
#pragma explicit_zero_data on
void (*jtbl_808bc810[])() = {
    jump_8062c3dc, jump_8062c3e8, jump_8062c3f4, jump_8062c400, jump_8062c40c,
    jump_8062c418, jump_8062c424, jump_8062c430, jump_8062c43c, jump_8062c448,
    jump_8062c454, jump_8062c478, jump_8062c4a8, jump_8062c4d8, jump_8062c4fc,
    jump_8062c514, jump_8062c52c, jump_8062c538, jump_8062c544, jump_8062c550,
    jump_8062c55c, jump_8062c568, jump_8062c574, jump_8062c580, jump_8062c58c,
    jump_8062c5e0, jump_8062c64c, jump_8062c694, jump_8062c6e8, jump_8062c73c,
    jump_8062c790, jump_8062c7d8, jump_8062c82c, jump_8062c880, jump_8062c8d4,
    jump_8062c928, jump_8062c988, jump_8062c9e8, jump_8062ca48, jump_8062ca84,
    jump_8062cacc, jump_8062cafc, jump_8062cb44, jump_8062cbbc, jump_8062cc40,
    jump_8062cc7c, jump_8062ccb8, jump_8062ccf4, jump_8062cd0c, jump_8062cd24,
    jump_8062cd3c, jump_8062cd54, jump_8062cd60, jump_8062cd6c, jump_8062cd84,
    jump_8062cd9c, jump_8062cdd8, jump_8062ce14, jump_8062ce98, jump_8062cf1c,
    jump_8062cfa0, jump_8062d024, jump_8062d0a8, jump_8062d0c0, jump_8062d108,
    jump_8062d150, jump_8062d1f8, jump_8062d33c, jump_8062d480, jump_8062d5c4,
    jump_8062d648, jump_8062d6cc, jump_8062d810, jump_8062d87c, jump_8062d8e8,
    jump_8062d954, jump_8062d99c, jump_8062d9e4, jump_8062da2c, jump_8062db64,
    jump_8062dd08, jump_8062deac, jump_8062e050, jump_8062e0e0, jump_8062e170,
    jump_8062e1d0, jump_8062e374, jump_8062e518, jump_8062e6bc, jump_8062e74c,
    jump_8062e7dc, jump_8062e86c, jump_8062e8fc, jump_8062e98c, jump_8062ea1c,
    jump_8062eaac, jump_8062eb3c, jump_8062ebcc, jump_8062ec5c, jump_8062ecd4,
    jump_8062ed4c, jump_8062eda0, jump_8062edf4, jump_8062ee78, jump_8062eefc,
    jump_8062ef5c, jump_8062efbc, jump_8062f028, jump_8062f094, jump_8062f100,
    jump_8062f16c, jump_8062f1d8, jump_8062f244, jump_8062f2b0, jump_8062f31c,
    jump_8062f334, jump_8062f34c, jump_8062f3a0, jump_8062f3f4, jump_8062f448,
    jump_8062f544, jump_8062f610, jump_8062f694, jump_8062f778, jump_8062f850,
    jump_8062f8b0, jump_8062fa3c, jump_8062fbd4, jump_8062fc4c, jump_8062fcc4,
    jump_8062fd48, jump_8062fd60, jump_8062fd78, jump_8062fdcc, jump_8062fe08,
    jump_8062fec8, jump_8062fef8, jump_8062ff1c, jump_8062ff88, jump_8062ffb8,
    jump_8062ffe8, jump_80630018, jump_80630048,
};

void (*jtbl_808bca4c[])() = {
    jump_806300cc, jump_806300d8, jump_806300e4, jump_806300f0, jump_806300fc,
    jump_80630108, jump_80630114, jump_80630120, jump_8063012c, jump_80630138,
    jump_80630144, jump_8063015c, jump_80630174, jump_8063018c, jump_806301a4,
    jump_806301bc, jump_806301d4, jump_806301e0, jump_806301ec, jump_806301f8,
    jump_80630204, jump_80630210, jump_8063021c, jump_80630228, jump_80630234,
    jump_8063024c, jump_80630270, jump_80630288, jump_806302a0, jump_806302b8,
    jump_806302d0, jump_806302e8, jump_80630300, jump_80630318, jump_80630330,
    jump_80630348, jump_80630360, jump_80630378, jump_80630390, jump_806303a8,
    jump_806303c0, jump_806303d8, jump_806303fc, jump_80630414, jump_80630438,
    jump_8063045c, jump_80630480, jump_806304a4, jump_806304b0, jump_806304bc,
    jump_806304c8, jump_806304d4, jump_806304e0, jump_806304ec, jump_80630504,
    jump_8063051c, jump_80630534, jump_8063054c, jump_8063057c, jump_806305ac,
    jump_806305dc, jump_8063060c, jump_8063063c, jump_80630654, jump_80630678,
    jump_8063069c, jump_806306c0, jump_806306fc, jump_80630738, jump_80630774,
    jump_806307b0, jump_806307ec, jump_8063081c, jump_80630858, jump_80630894,
    jump_806308d0, jump_80630900, jump_80630930, jump_80630960, jump_80630990,
    jump_806309d8, jump_80630a20, jump_80630a68, jump_80630aa4, jump_80630ae0,
    jump_80630af8, jump_80630b40, jump_80630b88, jump_80630bd0, jump_80630c0c,
    jump_80630c48, jump_80630c84, jump_80630cc0, jump_80630cfc, jump_80630d38,
    jump_80630d74, jump_80630db0, jump_80630dec, jump_80630e28, jump_80630e58,
    jump_80630e88, jump_80630eb8, jump_80630ee8, jump_80630f18, jump_80630f48,
    jump_80630f78, jump_80630fa8, jump_80630fd8, jump_80631008, jump_80631038,
    jump_80631068, jump_80631098, jump_806310c8, jump_806310f8, jump_80631128,
    jump_80631140, jump_80631158, jump_80631170, jump_80631188, jump_806311a0,
    jump_806311e8, jump_80631224, jump_80631248, jump_80631278, jump_806312a8,
    jump_806312cc, jump_80631314, jump_8063135c, jump_80631380, jump_806313a4,
    jump_806313c8, jump_806313e0, jump_806313f8, jump_80631410, jump_80631428,
    jump_8063144c, jump_80631470, jump_80631494, jump_806314b8, jump_806314e8,
    jump_80631518,
};
__declspec(section ".data") void (*jthack_808bcc80)() = jump_80631548;
#pragma push
#pragma force_active on
DUMMY_POINTER(jthack_808bcc80)
#pragma pop
void (*jtbl_808bcc84[])() = {
    jump_806321d4, jump_806321dc, jump_806321e4, jump_806321e4, jump_806321e4,
    jump_806321ec, jump_806321f4, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc, jump_806321fc,
    jump_80632204, jump_8063220c, jump_80632214, jump_8063221c, jump_8063221c,
    jump_8063221c, jump_8063221c, jump_8063221c, jump_8063221c, jump_8063221c,
    jump_8063221c, jump_8063221c, jump_80632224, jump_8063222c, jump_8063222c,
    jump_80632234, jump_8063223c, jump_80632244, jump_8063224c, jump_80632254,
    jump_8063225c, jump_80632264, jump_80632264, jump_80632264, jump_80632264,
    jump_80632264, jump_8063226c, jump_80632274, jump_80632274, jump_80632274,
    jump_8063227c, jump_8063227c, jump_80632284, jump_80632284, jump_80632284,
    jump_8063228c, jump_8063228c, jump_80632294, jump_80632294, jump_8063229c,
    jump_8063229c, jump_806322a4, jump_806322ac, jump_806322b4, jump_806322bc,
    jump_806322c4, jump_806322c4, jump_806322cc, jump_806322cc, jump_806322cc,
    jump_806322cc, jump_806322cc, jump_806322d4, jump_806322dc, jump_806322e4,
    jump_806322e4, jump_806322e4, jump_806322ec, jump_806322f4, jump_806322f4,
    jump_806322f4, jump_806322f4, jump_806322f4, jump_806322fc, jump_80632304,
    jump_8063230c, jump_80632314, jump_8063231c, jump_80632324, jump_8063232c,
    jump_8063232c, jump_8063232c, jump_80632334, jump_80632334, jump_8063233c,
    jump_80632344, jump_80632344, jump_8063234c, jump_8063234c, jump_80632354,
    jump_8063235c, jump_80632364, jump_8063236c, jump_8063236c, jump_80632374,
    jump_8063237c, jump_80632384, jump_8063238c, jump_8063238c, jump_8063238c,
    jump_80632394, jump_80632394, jump_80632394, jump_8063239c, jump_8063239c,
    jump_8063239c, jump_8063239c, jump_8063239c, jump_8063239c, jump_8063239c,
    jump_8063239c, jump_8063239c, jump_806323a4, jump_806323a4, jump_806323ac,
    jump_806323b4, jump_806323bc, jump_806323c4, jump_806323c4, jump_806323cc,
    jump_806323d4, jump_806323d4, jump_806323dc, jump_806323dc, jump_806323dc,
    jump_806323dc, jump_806323dc, jump_806323e4, jump_806323e4, jump_806323e4,
    jump_806323e4, jump_806323e4, jump_806323e4, jump_806323e4, jump_806323e4,
    jump_806323e4, jump_806323e4, jump_806323ec, jump_806323ec, jump_806323f4,
    jump_806323fc, jump_806323fc, jump_806323fc, jump_806323fc, jump_806323fc,
    jump_806323fc,
};

#pragma explicit_zero_data off

// .bss

// Symbol: Section_addPages
// PAL: 0x8062c3a4..0x80630094
MARK_BINARY_BLOB(Section_addPages, 0x8062c3a4, 0x80630094);
asm UNKNOWN_FUNCTION(Section_addPages){
#include "asm/8062c3a4.s"
}

// Symbol: Section_addActivePages
// PAL: 0x80630094..0x80631588
MARK_BINARY_BLOB(Section_addActivePages, 0x80630094, 0x80631588);
asm UNKNOWN_FUNCTION(Section_addActivePages){
#include "asm/80630094.s"
}

// Symbol: Section_getSceneId
// PAL: 0x80631588..0x80631734
MARK_BINARY_BLOB(Section_getSceneId, 0x80631588, 0x80631734);
asm UNKNOWN_FUNCTION(Section_getSceneId){
#include "asm/80631588.s"
}

// Symbol: Section_getResourceName
// PAL: 0x80631734..0x80631a58
MARK_BINARY_BLOB(Section_getResourceName, 0x80631734, 0x80631a58);
asm UNKNOWN_FUNCTION(Section_getResourceName){
#include "asm/80631734.s"
}

// Symbol: Section_hasBackModel
// PAL: 0x80631a58..0x80631af8
MARK_BINARY_BLOB(Section_hasBackModel, 0x80631a58, 0x80631af8);
asm UNKNOWN_FUNCTION(Section_hasBackModel){
#include "asm/80631a58.s"
}

// Symbol: SectionId_hasDriver
// PAL: 0x80631af8..0x80631bf0
MARK_BINARY_BLOB(SectionId_hasDriver, 0x80631af8, 0x80631bf0);
asm UNKNOWN_FUNCTION(SectionId_hasDriver){
#include "asm/80631af8.s"
}

// Symbol: SectionManager_getPageName
// PAL: 0x80631bf0..0x80631c00
MARK_BINARY_BLOB(SectionManager_getPageName, 0x80631bf0, 0x80631c00);
asm UNKNOWN_FUNCTION(SectionManager_getPageName){
#include "asm/80631bf0.s"
}

// Symbol: SectionManager_getSectionName
// PAL: 0x80631c00..0x80631c10
MARK_BINARY_BLOB(SectionManager_getSectionName, 0x80631c00, 0x80631c10);
asm UNKNOWN_FUNCTION(SectionManager_getSectionName){
#include "asm/80631c00.s"
}

// Symbol: unk_80631c10
// PAL: 0x80631c10..0x80631c68
MARK_BINARY_BLOB(unk_80631c10, 0x80631c10, 0x80631c68);
asm UNKNOWN_FUNCTION(unk_80631c10){
#include "asm/80631c10.s"
}

// Symbol: unk_80631c68
// PAL: 0x80631c68..0x80631ef8
MARK_BINARY_BLOB(unk_80631c68, 0x80631c68, 0x80631ef8);
asm UNKNOWN_FUNCTION(unk_80631c68) {
#include "asm/80631c68.s"
}

extern "C" u32 Section_getSoundType(s32 a1) {
  switch (a1) {
  case 0x0 ... 0xC:
    return -1;
  case 0xD:
    return 8;
  case 0xE:
    return -1;
  case 0xF:
    return 9;
  case 0x10 ... 0x34:
    return -1;
  case 0x35 ... 0x38:
    return 8;
  case 0x39 ... 0x3A:
    return 9;
  case 0x3B ... 0x3C:
    return 10;
  case 0x3D ... 0x3E:
    return 11;
  case 0x3F ... 0x44:
    return 5;
  case 0x45 ... 0x47:
    return 6;
  case 0x48 ... 0x54:
    return 7;
  case 0x55 ... 0x67:
    return 3;
  case 0x68 ... 0x79:
    return -1;
  case 0x7A ... 0x7C:
    return 2;
  case 0x7D ... 0x7E:
    return 4;
  case 0x7F ... 0x8B:
    return 3;
  case 0x8C ... 0x8F:
    return 6;
  case 0x90 ... 0x93:
    return 12;
  case 0x94:
    return -1;
  case 0x95 ... 0xAC:
    return -1;
  case 0xAD ... 0xB2:
    return -1;
  default:
    return -1;
  }
}

// Symbol: unk_80632080
// PAL: 0x80632080..0x806321b4
MARK_BINARY_BLOB(unk_80632080, 0x80632080, 0x806321b4);
asm UNKNOWN_FUNCTION(unk_80632080){
#include "asm/80632080.s"
}

// Symbol: unk_806321b4
// PAL: 0x806321b4..0x8063240c
MARK_BINARY_BLOB(unk_806321b4, 0x806321b4, 0x8063240c);
asm UNKNOWN_FUNCTION(unk_806321b4) {
#include "asm/806321b4.s"
}
#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ApCqpart_SDPlane_Proc__FP9ApcCqpartP17CQ2PartsSequencer
// Address: 0x1665d0 - 0x1673dc
void ApCqpart_SDPlane_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x1665d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_SDPlane_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x1665d0");
#endif

    switch (ctx->pc) {
        case 0x1665d0u: goto label_1665d0;
        case 0x1665d4u: goto label_1665d4;
        case 0x1665d8u: goto label_1665d8;
        case 0x1665dcu: goto label_1665dc;
        case 0x1665e0u: goto label_1665e0;
        case 0x1665e4u: goto label_1665e4;
        case 0x1665e8u: goto label_1665e8;
        case 0x1665ecu: goto label_1665ec;
        case 0x1665f0u: goto label_1665f0;
        case 0x1665f4u: goto label_1665f4;
        case 0x1665f8u: goto label_1665f8;
        case 0x1665fcu: goto label_1665fc;
        case 0x166600u: goto label_166600;
        case 0x166604u: goto label_166604;
        case 0x166608u: goto label_166608;
        case 0x16660cu: goto label_16660c;
        case 0x166610u: goto label_166610;
        case 0x166614u: goto label_166614;
        case 0x166618u: goto label_166618;
        case 0x16661cu: goto label_16661c;
        case 0x166620u: goto label_166620;
        case 0x166624u: goto label_166624;
        case 0x166628u: goto label_166628;
        case 0x16662cu: goto label_16662c;
        case 0x166630u: goto label_166630;
        case 0x166634u: goto label_166634;
        case 0x166638u: goto label_166638;
        case 0x16663cu: goto label_16663c;
        case 0x166640u: goto label_166640;
        case 0x166644u: goto label_166644;
        case 0x166648u: goto label_166648;
        case 0x16664cu: goto label_16664c;
        case 0x166650u: goto label_166650;
        case 0x166654u: goto label_166654;
        case 0x166658u: goto label_166658;
        case 0x16665cu: goto label_16665c;
        case 0x166660u: goto label_166660;
        case 0x166664u: goto label_166664;
        case 0x166668u: goto label_166668;
        case 0x16666cu: goto label_16666c;
        case 0x166670u: goto label_166670;
        case 0x166674u: goto label_166674;
        case 0x166678u: goto label_166678;
        case 0x16667cu: goto label_16667c;
        case 0x166680u: goto label_166680;
        case 0x166684u: goto label_166684;
        case 0x166688u: goto label_166688;
        case 0x16668cu: goto label_16668c;
        case 0x166690u: goto label_166690;
        case 0x166694u: goto label_166694;
        case 0x166698u: goto label_166698;
        case 0x16669cu: goto label_16669c;
        case 0x1666a0u: goto label_1666a0;
        case 0x1666a4u: goto label_1666a4;
        case 0x1666a8u: goto label_1666a8;
        case 0x1666acu: goto label_1666ac;
        case 0x1666b0u: goto label_1666b0;
        case 0x1666b4u: goto label_1666b4;
        case 0x1666b8u: goto label_1666b8;
        case 0x1666bcu: goto label_1666bc;
        case 0x1666c0u: goto label_1666c0;
        case 0x1666c4u: goto label_1666c4;
        case 0x1666c8u: goto label_1666c8;
        case 0x1666ccu: goto label_1666cc;
        case 0x1666d0u: goto label_1666d0;
        case 0x1666d4u: goto label_1666d4;
        case 0x1666d8u: goto label_1666d8;
        case 0x1666dcu: goto label_1666dc;
        case 0x1666e0u: goto label_1666e0;
        case 0x1666e4u: goto label_1666e4;
        case 0x1666e8u: goto label_1666e8;
        case 0x1666ecu: goto label_1666ec;
        case 0x1666f0u: goto label_1666f0;
        case 0x1666f4u: goto label_1666f4;
        case 0x1666f8u: goto label_1666f8;
        case 0x1666fcu: goto label_1666fc;
        case 0x166700u: goto label_166700;
        case 0x166704u: goto label_166704;
        case 0x166708u: goto label_166708;
        case 0x16670cu: goto label_16670c;
        case 0x166710u: goto label_166710;
        case 0x166714u: goto label_166714;
        case 0x166718u: goto label_166718;
        case 0x16671cu: goto label_16671c;
        case 0x166720u: goto label_166720;
        case 0x166724u: goto label_166724;
        case 0x166728u: goto label_166728;
        case 0x16672cu: goto label_16672c;
        case 0x166730u: goto label_166730;
        case 0x166734u: goto label_166734;
        case 0x166738u: goto label_166738;
        case 0x16673cu: goto label_16673c;
        case 0x166740u: goto label_166740;
        case 0x166744u: goto label_166744;
        case 0x166748u: goto label_166748;
        case 0x16674cu: goto label_16674c;
        case 0x166750u: goto label_166750;
        case 0x166754u: goto label_166754;
        case 0x166758u: goto label_166758;
        case 0x16675cu: goto label_16675c;
        case 0x166760u: goto label_166760;
        case 0x166764u: goto label_166764;
        case 0x166768u: goto label_166768;
        case 0x16676cu: goto label_16676c;
        case 0x166770u: goto label_166770;
        case 0x166774u: goto label_166774;
        case 0x166778u: goto label_166778;
        case 0x16677cu: goto label_16677c;
        case 0x166780u: goto label_166780;
        case 0x166784u: goto label_166784;
        case 0x166788u: goto label_166788;
        case 0x16678cu: goto label_16678c;
        case 0x166790u: goto label_166790;
        case 0x166794u: goto label_166794;
        case 0x166798u: goto label_166798;
        case 0x16679cu: goto label_16679c;
        case 0x1667a0u: goto label_1667a0;
        case 0x1667a4u: goto label_1667a4;
        case 0x1667a8u: goto label_1667a8;
        case 0x1667acu: goto label_1667ac;
        case 0x1667b0u: goto label_1667b0;
        case 0x1667b4u: goto label_1667b4;
        case 0x1667b8u: goto label_1667b8;
        case 0x1667bcu: goto label_1667bc;
        case 0x1667c0u: goto label_1667c0;
        case 0x1667c4u: goto label_1667c4;
        case 0x1667c8u: goto label_1667c8;
        case 0x1667ccu: goto label_1667cc;
        case 0x1667d0u: goto label_1667d0;
        case 0x1667d4u: goto label_1667d4;
        case 0x1667d8u: goto label_1667d8;
        case 0x1667dcu: goto label_1667dc;
        case 0x1667e0u: goto label_1667e0;
        case 0x1667e4u: goto label_1667e4;
        case 0x1667e8u: goto label_1667e8;
        case 0x1667ecu: goto label_1667ec;
        case 0x1667f0u: goto label_1667f0;
        case 0x1667f4u: goto label_1667f4;
        case 0x1667f8u: goto label_1667f8;
        case 0x1667fcu: goto label_1667fc;
        case 0x166800u: goto label_166800;
        case 0x166804u: goto label_166804;
        case 0x166808u: goto label_166808;
        case 0x16680cu: goto label_16680c;
        case 0x166810u: goto label_166810;
        case 0x166814u: goto label_166814;
        case 0x166818u: goto label_166818;
        case 0x16681cu: goto label_16681c;
        case 0x166820u: goto label_166820;
        case 0x166824u: goto label_166824;
        case 0x166828u: goto label_166828;
        case 0x16682cu: goto label_16682c;
        case 0x166830u: goto label_166830;
        case 0x166834u: goto label_166834;
        case 0x166838u: goto label_166838;
        case 0x16683cu: goto label_16683c;
        case 0x166840u: goto label_166840;
        case 0x166844u: goto label_166844;
        case 0x166848u: goto label_166848;
        case 0x16684cu: goto label_16684c;
        case 0x166850u: goto label_166850;
        case 0x166854u: goto label_166854;
        case 0x166858u: goto label_166858;
        case 0x16685cu: goto label_16685c;
        case 0x166860u: goto label_166860;
        case 0x166864u: goto label_166864;
        case 0x166868u: goto label_166868;
        case 0x16686cu: goto label_16686c;
        case 0x166870u: goto label_166870;
        case 0x166874u: goto label_166874;
        case 0x166878u: goto label_166878;
        case 0x16687cu: goto label_16687c;
        case 0x166880u: goto label_166880;
        case 0x166884u: goto label_166884;
        case 0x166888u: goto label_166888;
        case 0x16688cu: goto label_16688c;
        case 0x166890u: goto label_166890;
        case 0x166894u: goto label_166894;
        case 0x166898u: goto label_166898;
        case 0x16689cu: goto label_16689c;
        case 0x1668a0u: goto label_1668a0;
        case 0x1668a4u: goto label_1668a4;
        case 0x1668a8u: goto label_1668a8;
        case 0x1668acu: goto label_1668ac;
        case 0x1668b0u: goto label_1668b0;
        case 0x1668b4u: goto label_1668b4;
        case 0x1668b8u: goto label_1668b8;
        case 0x1668bcu: goto label_1668bc;
        case 0x1668c0u: goto label_1668c0;
        case 0x1668c4u: goto label_1668c4;
        case 0x1668c8u: goto label_1668c8;
        case 0x1668ccu: goto label_1668cc;
        case 0x1668d0u: goto label_1668d0;
        case 0x1668d4u: goto label_1668d4;
        case 0x1668d8u: goto label_1668d8;
        case 0x1668dcu: goto label_1668dc;
        case 0x1668e0u: goto label_1668e0;
        case 0x1668e4u: goto label_1668e4;
        case 0x1668e8u: goto label_1668e8;
        case 0x1668ecu: goto label_1668ec;
        case 0x1668f0u: goto label_1668f0;
        case 0x1668f4u: goto label_1668f4;
        case 0x1668f8u: goto label_1668f8;
        case 0x1668fcu: goto label_1668fc;
        case 0x166900u: goto label_166900;
        case 0x166904u: goto label_166904;
        case 0x166908u: goto label_166908;
        case 0x16690cu: goto label_16690c;
        case 0x166910u: goto label_166910;
        case 0x166914u: goto label_166914;
        case 0x166918u: goto label_166918;
        case 0x16691cu: goto label_16691c;
        case 0x166920u: goto label_166920;
        case 0x166924u: goto label_166924;
        case 0x166928u: goto label_166928;
        case 0x16692cu: goto label_16692c;
        case 0x166930u: goto label_166930;
        case 0x166934u: goto label_166934;
        case 0x166938u: goto label_166938;
        case 0x16693cu: goto label_16693c;
        case 0x166940u: goto label_166940;
        case 0x166944u: goto label_166944;
        case 0x166948u: goto label_166948;
        case 0x16694cu: goto label_16694c;
        case 0x166950u: goto label_166950;
        case 0x166954u: goto label_166954;
        case 0x166958u: goto label_166958;
        case 0x16695cu: goto label_16695c;
        case 0x166960u: goto label_166960;
        case 0x166964u: goto label_166964;
        case 0x166968u: goto label_166968;
        case 0x16696cu: goto label_16696c;
        case 0x166970u: goto label_166970;
        case 0x166974u: goto label_166974;
        case 0x166978u: goto label_166978;
        case 0x16697cu: goto label_16697c;
        case 0x166980u: goto label_166980;
        case 0x166984u: goto label_166984;
        case 0x166988u: goto label_166988;
        case 0x16698cu: goto label_16698c;
        case 0x166990u: goto label_166990;
        case 0x166994u: goto label_166994;
        case 0x166998u: goto label_166998;
        case 0x16699cu: goto label_16699c;
        case 0x1669a0u: goto label_1669a0;
        case 0x1669a4u: goto label_1669a4;
        case 0x1669a8u: goto label_1669a8;
        case 0x1669acu: goto label_1669ac;
        case 0x1669b0u: goto label_1669b0;
        case 0x1669b4u: goto label_1669b4;
        case 0x1669b8u: goto label_1669b8;
        case 0x1669bcu: goto label_1669bc;
        case 0x1669c0u: goto label_1669c0;
        case 0x1669c4u: goto label_1669c4;
        case 0x1669c8u: goto label_1669c8;
        case 0x1669ccu: goto label_1669cc;
        case 0x1669d0u: goto label_1669d0;
        case 0x1669d4u: goto label_1669d4;
        case 0x1669d8u: goto label_1669d8;
        case 0x1669dcu: goto label_1669dc;
        case 0x1669e0u: goto label_1669e0;
        case 0x1669e4u: goto label_1669e4;
        case 0x1669e8u: goto label_1669e8;
        case 0x1669ecu: goto label_1669ec;
        case 0x1669f0u: goto label_1669f0;
        case 0x1669f4u: goto label_1669f4;
        case 0x1669f8u: goto label_1669f8;
        case 0x1669fcu: goto label_1669fc;
        case 0x166a00u: goto label_166a00;
        case 0x166a04u: goto label_166a04;
        case 0x166a08u: goto label_166a08;
        case 0x166a0cu: goto label_166a0c;
        case 0x166a10u: goto label_166a10;
        case 0x166a14u: goto label_166a14;
        case 0x166a18u: goto label_166a18;
        case 0x166a1cu: goto label_166a1c;
        case 0x166a20u: goto label_166a20;
        case 0x166a24u: goto label_166a24;
        case 0x166a28u: goto label_166a28;
        case 0x166a2cu: goto label_166a2c;
        case 0x166a30u: goto label_166a30;
        case 0x166a34u: goto label_166a34;
        case 0x166a38u: goto label_166a38;
        case 0x166a3cu: goto label_166a3c;
        case 0x166a40u: goto label_166a40;
        case 0x166a44u: goto label_166a44;
        case 0x166a48u: goto label_166a48;
        case 0x166a4cu: goto label_166a4c;
        case 0x166a50u: goto label_166a50;
        case 0x166a54u: goto label_166a54;
        case 0x166a58u: goto label_166a58;
        case 0x166a5cu: goto label_166a5c;
        case 0x166a60u: goto label_166a60;
        case 0x166a64u: goto label_166a64;
        case 0x166a68u: goto label_166a68;
        case 0x166a6cu: goto label_166a6c;
        case 0x166a70u: goto label_166a70;
        case 0x166a74u: goto label_166a74;
        case 0x166a78u: goto label_166a78;
        case 0x166a7cu: goto label_166a7c;
        case 0x166a80u: goto label_166a80;
        case 0x166a84u: goto label_166a84;
        case 0x166a88u: goto label_166a88;
        case 0x166a8cu: goto label_166a8c;
        case 0x166a90u: goto label_166a90;
        case 0x166a94u: goto label_166a94;
        case 0x166a98u: goto label_166a98;
        case 0x166a9cu: goto label_166a9c;
        case 0x166aa0u: goto label_166aa0;
        case 0x166aa4u: goto label_166aa4;
        case 0x166aa8u: goto label_166aa8;
        case 0x166aacu: goto label_166aac;
        case 0x166ab0u: goto label_166ab0;
        case 0x166ab4u: goto label_166ab4;
        case 0x166ab8u: goto label_166ab8;
        case 0x166abcu: goto label_166abc;
        case 0x166ac0u: goto label_166ac0;
        case 0x166ac4u: goto label_166ac4;
        case 0x166ac8u: goto label_166ac8;
        case 0x166accu: goto label_166acc;
        case 0x166ad0u: goto label_166ad0;
        case 0x166ad4u: goto label_166ad4;
        case 0x166ad8u: goto label_166ad8;
        case 0x166adcu: goto label_166adc;
        case 0x166ae0u: goto label_166ae0;
        case 0x166ae4u: goto label_166ae4;
        case 0x166ae8u: goto label_166ae8;
        case 0x166aecu: goto label_166aec;
        case 0x166af0u: goto label_166af0;
        case 0x166af4u: goto label_166af4;
        case 0x166af8u: goto label_166af8;
        case 0x166afcu: goto label_166afc;
        case 0x166b00u: goto label_166b00;
        case 0x166b04u: goto label_166b04;
        case 0x166b08u: goto label_166b08;
        case 0x166b0cu: goto label_166b0c;
        case 0x166b10u: goto label_166b10;
        case 0x166b14u: goto label_166b14;
        case 0x166b18u: goto label_166b18;
        case 0x166b1cu: goto label_166b1c;
        case 0x166b20u: goto label_166b20;
        case 0x166b24u: goto label_166b24;
        case 0x166b28u: goto label_166b28;
        case 0x166b2cu: goto label_166b2c;
        case 0x166b30u: goto label_166b30;
        case 0x166b34u: goto label_166b34;
        case 0x166b38u: goto label_166b38;
        case 0x166b3cu: goto label_166b3c;
        case 0x166b40u: goto label_166b40;
        case 0x166b44u: goto label_166b44;
        case 0x166b48u: goto label_166b48;
        case 0x166b4cu: goto label_166b4c;
        case 0x166b50u: goto label_166b50;
        case 0x166b54u: goto label_166b54;
        case 0x166b58u: goto label_166b58;
        case 0x166b5cu: goto label_166b5c;
        case 0x166b60u: goto label_166b60;
        case 0x166b64u: goto label_166b64;
        case 0x166b68u: goto label_166b68;
        case 0x166b6cu: goto label_166b6c;
        case 0x166b70u: goto label_166b70;
        case 0x166b74u: goto label_166b74;
        case 0x166b78u: goto label_166b78;
        case 0x166b7cu: goto label_166b7c;
        case 0x166b80u: goto label_166b80;
        case 0x166b84u: goto label_166b84;
        case 0x166b88u: goto label_166b88;
        case 0x166b8cu: goto label_166b8c;
        case 0x166b90u: goto label_166b90;
        case 0x166b94u: goto label_166b94;
        case 0x166b98u: goto label_166b98;
        case 0x166b9cu: goto label_166b9c;
        case 0x166ba0u: goto label_166ba0;
        case 0x166ba4u: goto label_166ba4;
        case 0x166ba8u: goto label_166ba8;
        case 0x166bacu: goto label_166bac;
        case 0x166bb0u: goto label_166bb0;
        case 0x166bb4u: goto label_166bb4;
        case 0x166bb8u: goto label_166bb8;
        case 0x166bbcu: goto label_166bbc;
        case 0x166bc0u: goto label_166bc0;
        case 0x166bc4u: goto label_166bc4;
        case 0x166bc8u: goto label_166bc8;
        case 0x166bccu: goto label_166bcc;
        case 0x166bd0u: goto label_166bd0;
        case 0x166bd4u: goto label_166bd4;
        case 0x166bd8u: goto label_166bd8;
        case 0x166bdcu: goto label_166bdc;
        case 0x166be0u: goto label_166be0;
        case 0x166be4u: goto label_166be4;
        case 0x166be8u: goto label_166be8;
        case 0x166becu: goto label_166bec;
        case 0x166bf0u: goto label_166bf0;
        case 0x166bf4u: goto label_166bf4;
        case 0x166bf8u: goto label_166bf8;
        case 0x166bfcu: goto label_166bfc;
        case 0x166c00u: goto label_166c00;
        case 0x166c04u: goto label_166c04;
        case 0x166c08u: goto label_166c08;
        case 0x166c0cu: goto label_166c0c;
        case 0x166c10u: goto label_166c10;
        case 0x166c14u: goto label_166c14;
        case 0x166c18u: goto label_166c18;
        case 0x166c1cu: goto label_166c1c;
        case 0x166c20u: goto label_166c20;
        case 0x166c24u: goto label_166c24;
        case 0x166c28u: goto label_166c28;
        case 0x166c2cu: goto label_166c2c;
        case 0x166c30u: goto label_166c30;
        case 0x166c34u: goto label_166c34;
        case 0x166c38u: goto label_166c38;
        case 0x166c3cu: goto label_166c3c;
        case 0x166c40u: goto label_166c40;
        case 0x166c44u: goto label_166c44;
        case 0x166c48u: goto label_166c48;
        case 0x166c4cu: goto label_166c4c;
        case 0x166c50u: goto label_166c50;
        case 0x166c54u: goto label_166c54;
        case 0x166c58u: goto label_166c58;
        case 0x166c5cu: goto label_166c5c;
        case 0x166c60u: goto label_166c60;
        case 0x166c64u: goto label_166c64;
        case 0x166c68u: goto label_166c68;
        case 0x166c6cu: goto label_166c6c;
        case 0x166c70u: goto label_166c70;
        case 0x166c74u: goto label_166c74;
        case 0x166c78u: goto label_166c78;
        case 0x166c7cu: goto label_166c7c;
        case 0x166c80u: goto label_166c80;
        case 0x166c84u: goto label_166c84;
        case 0x166c88u: goto label_166c88;
        case 0x166c8cu: goto label_166c8c;
        case 0x166c90u: goto label_166c90;
        case 0x166c94u: goto label_166c94;
        case 0x166c98u: goto label_166c98;
        case 0x166c9cu: goto label_166c9c;
        case 0x166ca0u: goto label_166ca0;
        case 0x166ca4u: goto label_166ca4;
        case 0x166ca8u: goto label_166ca8;
        case 0x166cacu: goto label_166cac;
        case 0x166cb0u: goto label_166cb0;
        case 0x166cb4u: goto label_166cb4;
        case 0x166cb8u: goto label_166cb8;
        case 0x166cbcu: goto label_166cbc;
        case 0x166cc0u: goto label_166cc0;
        case 0x166cc4u: goto label_166cc4;
        case 0x166cc8u: goto label_166cc8;
        case 0x166cccu: goto label_166ccc;
        case 0x166cd0u: goto label_166cd0;
        case 0x166cd4u: goto label_166cd4;
        case 0x166cd8u: goto label_166cd8;
        case 0x166cdcu: goto label_166cdc;
        case 0x166ce0u: goto label_166ce0;
        case 0x166ce4u: goto label_166ce4;
        case 0x166ce8u: goto label_166ce8;
        case 0x166cecu: goto label_166cec;
        case 0x166cf0u: goto label_166cf0;
        case 0x166cf4u: goto label_166cf4;
        case 0x166cf8u: goto label_166cf8;
        case 0x166cfcu: goto label_166cfc;
        case 0x166d00u: goto label_166d00;
        case 0x166d04u: goto label_166d04;
        case 0x166d08u: goto label_166d08;
        case 0x166d0cu: goto label_166d0c;
        case 0x166d10u: goto label_166d10;
        case 0x166d14u: goto label_166d14;
        case 0x166d18u: goto label_166d18;
        case 0x166d1cu: goto label_166d1c;
        case 0x166d20u: goto label_166d20;
        case 0x166d24u: goto label_166d24;
        case 0x166d28u: goto label_166d28;
        case 0x166d2cu: goto label_166d2c;
        case 0x166d30u: goto label_166d30;
        case 0x166d34u: goto label_166d34;
        case 0x166d38u: goto label_166d38;
        case 0x166d3cu: goto label_166d3c;
        case 0x166d40u: goto label_166d40;
        case 0x166d44u: goto label_166d44;
        case 0x166d48u: goto label_166d48;
        case 0x166d4cu: goto label_166d4c;
        case 0x166d50u: goto label_166d50;
        case 0x166d54u: goto label_166d54;
        case 0x166d58u: goto label_166d58;
        case 0x166d5cu: goto label_166d5c;
        case 0x166d60u: goto label_166d60;
        case 0x166d64u: goto label_166d64;
        case 0x166d68u: goto label_166d68;
        case 0x166d6cu: goto label_166d6c;
        case 0x166d70u: goto label_166d70;
        case 0x166d74u: goto label_166d74;
        case 0x166d78u: goto label_166d78;
        case 0x166d7cu: goto label_166d7c;
        case 0x166d80u: goto label_166d80;
        case 0x166d84u: goto label_166d84;
        case 0x166d88u: goto label_166d88;
        case 0x166d8cu: goto label_166d8c;
        case 0x166d90u: goto label_166d90;
        case 0x166d94u: goto label_166d94;
        case 0x166d98u: goto label_166d98;
        case 0x166d9cu: goto label_166d9c;
        case 0x166da0u: goto label_166da0;
        case 0x166da4u: goto label_166da4;
        case 0x166da8u: goto label_166da8;
        case 0x166dacu: goto label_166dac;
        case 0x166db0u: goto label_166db0;
        case 0x166db4u: goto label_166db4;
        case 0x166db8u: goto label_166db8;
        case 0x166dbcu: goto label_166dbc;
        case 0x166dc0u: goto label_166dc0;
        case 0x166dc4u: goto label_166dc4;
        case 0x166dc8u: goto label_166dc8;
        case 0x166dccu: goto label_166dcc;
        case 0x166dd0u: goto label_166dd0;
        case 0x166dd4u: goto label_166dd4;
        case 0x166dd8u: goto label_166dd8;
        case 0x166ddcu: goto label_166ddc;
        case 0x166de0u: goto label_166de0;
        case 0x166de4u: goto label_166de4;
        case 0x166de8u: goto label_166de8;
        case 0x166decu: goto label_166dec;
        case 0x166df0u: goto label_166df0;
        case 0x166df4u: goto label_166df4;
        case 0x166df8u: goto label_166df8;
        case 0x166dfcu: goto label_166dfc;
        case 0x166e00u: goto label_166e00;
        case 0x166e04u: goto label_166e04;
        case 0x166e08u: goto label_166e08;
        case 0x166e0cu: goto label_166e0c;
        case 0x166e10u: goto label_166e10;
        case 0x166e14u: goto label_166e14;
        case 0x166e18u: goto label_166e18;
        case 0x166e1cu: goto label_166e1c;
        case 0x166e20u: goto label_166e20;
        case 0x166e24u: goto label_166e24;
        case 0x166e28u: goto label_166e28;
        case 0x166e2cu: goto label_166e2c;
        case 0x166e30u: goto label_166e30;
        case 0x166e34u: goto label_166e34;
        case 0x166e38u: goto label_166e38;
        case 0x166e3cu: goto label_166e3c;
        case 0x166e40u: goto label_166e40;
        case 0x166e44u: goto label_166e44;
        case 0x166e48u: goto label_166e48;
        case 0x166e4cu: goto label_166e4c;
        case 0x166e50u: goto label_166e50;
        case 0x166e54u: goto label_166e54;
        case 0x166e58u: goto label_166e58;
        case 0x166e5cu: goto label_166e5c;
        case 0x166e60u: goto label_166e60;
        case 0x166e64u: goto label_166e64;
        case 0x166e68u: goto label_166e68;
        case 0x166e6cu: goto label_166e6c;
        case 0x166e70u: goto label_166e70;
        case 0x166e74u: goto label_166e74;
        case 0x166e78u: goto label_166e78;
        case 0x166e7cu: goto label_166e7c;
        case 0x166e80u: goto label_166e80;
        case 0x166e84u: goto label_166e84;
        case 0x166e88u: goto label_166e88;
        case 0x166e8cu: goto label_166e8c;
        case 0x166e90u: goto label_166e90;
        case 0x166e94u: goto label_166e94;
        case 0x166e98u: goto label_166e98;
        case 0x166e9cu: goto label_166e9c;
        case 0x166ea0u: goto label_166ea0;
        case 0x166ea4u: goto label_166ea4;
        case 0x166ea8u: goto label_166ea8;
        case 0x166eacu: goto label_166eac;
        case 0x166eb0u: goto label_166eb0;
        case 0x166eb4u: goto label_166eb4;
        case 0x166eb8u: goto label_166eb8;
        case 0x166ebcu: goto label_166ebc;
        case 0x166ec0u: goto label_166ec0;
        case 0x166ec4u: goto label_166ec4;
        case 0x166ec8u: goto label_166ec8;
        case 0x166eccu: goto label_166ecc;
        case 0x166ed0u: goto label_166ed0;
        case 0x166ed4u: goto label_166ed4;
        case 0x166ed8u: goto label_166ed8;
        case 0x166edcu: goto label_166edc;
        case 0x166ee0u: goto label_166ee0;
        case 0x166ee4u: goto label_166ee4;
        case 0x166ee8u: goto label_166ee8;
        case 0x166eecu: goto label_166eec;
        case 0x166ef0u: goto label_166ef0;
        case 0x166ef4u: goto label_166ef4;
        case 0x166ef8u: goto label_166ef8;
        case 0x166efcu: goto label_166efc;
        case 0x166f00u: goto label_166f00;
        case 0x166f04u: goto label_166f04;
        case 0x166f08u: goto label_166f08;
        case 0x166f0cu: goto label_166f0c;
        case 0x166f10u: goto label_166f10;
        case 0x166f14u: goto label_166f14;
        case 0x166f18u: goto label_166f18;
        case 0x166f1cu: goto label_166f1c;
        case 0x166f20u: goto label_166f20;
        case 0x166f24u: goto label_166f24;
        case 0x166f28u: goto label_166f28;
        case 0x166f2cu: goto label_166f2c;
        case 0x166f30u: goto label_166f30;
        case 0x166f34u: goto label_166f34;
        case 0x166f38u: goto label_166f38;
        case 0x166f3cu: goto label_166f3c;
        case 0x166f40u: goto label_166f40;
        case 0x166f44u: goto label_166f44;
        case 0x166f48u: goto label_166f48;
        case 0x166f4cu: goto label_166f4c;
        case 0x166f50u: goto label_166f50;
        case 0x166f54u: goto label_166f54;
        case 0x166f58u: goto label_166f58;
        case 0x166f5cu: goto label_166f5c;
        case 0x166f60u: goto label_166f60;
        case 0x166f64u: goto label_166f64;
        case 0x166f68u: goto label_166f68;
        case 0x166f6cu: goto label_166f6c;
        case 0x166f70u: goto label_166f70;
        case 0x166f74u: goto label_166f74;
        case 0x166f78u: goto label_166f78;
        case 0x166f7cu: goto label_166f7c;
        case 0x166f80u: goto label_166f80;
        case 0x166f84u: goto label_166f84;
        case 0x166f88u: goto label_166f88;
        case 0x166f8cu: goto label_166f8c;
        case 0x166f90u: goto label_166f90;
        case 0x166f94u: goto label_166f94;
        case 0x166f98u: goto label_166f98;
        case 0x166f9cu: goto label_166f9c;
        case 0x166fa0u: goto label_166fa0;
        case 0x166fa4u: goto label_166fa4;
        case 0x166fa8u: goto label_166fa8;
        case 0x166facu: goto label_166fac;
        case 0x166fb0u: goto label_166fb0;
        case 0x166fb4u: goto label_166fb4;
        case 0x166fb8u: goto label_166fb8;
        case 0x166fbcu: goto label_166fbc;
        case 0x166fc0u: goto label_166fc0;
        case 0x166fc4u: goto label_166fc4;
        case 0x166fc8u: goto label_166fc8;
        case 0x166fccu: goto label_166fcc;
        case 0x166fd0u: goto label_166fd0;
        case 0x166fd4u: goto label_166fd4;
        case 0x166fd8u: goto label_166fd8;
        case 0x166fdcu: goto label_166fdc;
        case 0x166fe0u: goto label_166fe0;
        case 0x166fe4u: goto label_166fe4;
        case 0x166fe8u: goto label_166fe8;
        case 0x166fecu: goto label_166fec;
        case 0x166ff0u: goto label_166ff0;
        case 0x166ff4u: goto label_166ff4;
        case 0x166ff8u: goto label_166ff8;
        case 0x166ffcu: goto label_166ffc;
        case 0x167000u: goto label_167000;
        case 0x167004u: goto label_167004;
        case 0x167008u: goto label_167008;
        case 0x16700cu: goto label_16700c;
        case 0x167010u: goto label_167010;
        case 0x167014u: goto label_167014;
        case 0x167018u: goto label_167018;
        case 0x16701cu: goto label_16701c;
        case 0x167020u: goto label_167020;
        case 0x167024u: goto label_167024;
        case 0x167028u: goto label_167028;
        case 0x16702cu: goto label_16702c;
        case 0x167030u: goto label_167030;
        case 0x167034u: goto label_167034;
        case 0x167038u: goto label_167038;
        case 0x16703cu: goto label_16703c;
        case 0x167040u: goto label_167040;
        case 0x167044u: goto label_167044;
        case 0x167048u: goto label_167048;
        case 0x16704cu: goto label_16704c;
        case 0x167050u: goto label_167050;
        case 0x167054u: goto label_167054;
        case 0x167058u: goto label_167058;
        case 0x16705cu: goto label_16705c;
        case 0x167060u: goto label_167060;
        case 0x167064u: goto label_167064;
        case 0x167068u: goto label_167068;
        case 0x16706cu: goto label_16706c;
        case 0x167070u: goto label_167070;
        case 0x167074u: goto label_167074;
        case 0x167078u: goto label_167078;
        case 0x16707cu: goto label_16707c;
        case 0x167080u: goto label_167080;
        case 0x167084u: goto label_167084;
        case 0x167088u: goto label_167088;
        case 0x16708cu: goto label_16708c;
        case 0x167090u: goto label_167090;
        case 0x167094u: goto label_167094;
        case 0x167098u: goto label_167098;
        case 0x16709cu: goto label_16709c;
        case 0x1670a0u: goto label_1670a0;
        case 0x1670a4u: goto label_1670a4;
        case 0x1670a8u: goto label_1670a8;
        case 0x1670acu: goto label_1670ac;
        case 0x1670b0u: goto label_1670b0;
        case 0x1670b4u: goto label_1670b4;
        case 0x1670b8u: goto label_1670b8;
        case 0x1670bcu: goto label_1670bc;
        case 0x1670c0u: goto label_1670c0;
        case 0x1670c4u: goto label_1670c4;
        case 0x1670c8u: goto label_1670c8;
        case 0x1670ccu: goto label_1670cc;
        case 0x1670d0u: goto label_1670d0;
        case 0x1670d4u: goto label_1670d4;
        case 0x1670d8u: goto label_1670d8;
        case 0x1670dcu: goto label_1670dc;
        case 0x1670e0u: goto label_1670e0;
        case 0x1670e4u: goto label_1670e4;
        case 0x1670e8u: goto label_1670e8;
        case 0x1670ecu: goto label_1670ec;
        case 0x1670f0u: goto label_1670f0;
        case 0x1670f4u: goto label_1670f4;
        case 0x1670f8u: goto label_1670f8;
        case 0x1670fcu: goto label_1670fc;
        case 0x167100u: goto label_167100;
        case 0x167104u: goto label_167104;
        case 0x167108u: goto label_167108;
        case 0x16710cu: goto label_16710c;
        case 0x167110u: goto label_167110;
        case 0x167114u: goto label_167114;
        case 0x167118u: goto label_167118;
        case 0x16711cu: goto label_16711c;
        case 0x167120u: goto label_167120;
        case 0x167124u: goto label_167124;
        case 0x167128u: goto label_167128;
        case 0x16712cu: goto label_16712c;
        case 0x167130u: goto label_167130;
        case 0x167134u: goto label_167134;
        case 0x167138u: goto label_167138;
        case 0x16713cu: goto label_16713c;
        case 0x167140u: goto label_167140;
        case 0x167144u: goto label_167144;
        case 0x167148u: goto label_167148;
        case 0x16714cu: goto label_16714c;
        case 0x167150u: goto label_167150;
        case 0x167154u: goto label_167154;
        case 0x167158u: goto label_167158;
        case 0x16715cu: goto label_16715c;
        case 0x167160u: goto label_167160;
        case 0x167164u: goto label_167164;
        case 0x167168u: goto label_167168;
        case 0x16716cu: goto label_16716c;
        case 0x167170u: goto label_167170;
        case 0x167174u: goto label_167174;
        case 0x167178u: goto label_167178;
        case 0x16717cu: goto label_16717c;
        case 0x167180u: goto label_167180;
        case 0x167184u: goto label_167184;
        case 0x167188u: goto label_167188;
        case 0x16718cu: goto label_16718c;
        case 0x167190u: goto label_167190;
        case 0x167194u: goto label_167194;
        case 0x167198u: goto label_167198;
        case 0x16719cu: goto label_16719c;
        case 0x1671a0u: goto label_1671a0;
        case 0x1671a4u: goto label_1671a4;
        case 0x1671a8u: goto label_1671a8;
        case 0x1671acu: goto label_1671ac;
        case 0x1671b0u: goto label_1671b0;
        case 0x1671b4u: goto label_1671b4;
        case 0x1671b8u: goto label_1671b8;
        case 0x1671bcu: goto label_1671bc;
        case 0x1671c0u: goto label_1671c0;
        case 0x1671c4u: goto label_1671c4;
        case 0x1671c8u: goto label_1671c8;
        case 0x1671ccu: goto label_1671cc;
        case 0x1671d0u: goto label_1671d0;
        case 0x1671d4u: goto label_1671d4;
        case 0x1671d8u: goto label_1671d8;
        case 0x1671dcu: goto label_1671dc;
        case 0x1671e0u: goto label_1671e0;
        case 0x1671e4u: goto label_1671e4;
        case 0x1671e8u: goto label_1671e8;
        case 0x1671ecu: goto label_1671ec;
        case 0x1671f0u: goto label_1671f0;
        case 0x1671f4u: goto label_1671f4;
        case 0x1671f8u: goto label_1671f8;
        case 0x1671fcu: goto label_1671fc;
        case 0x167200u: goto label_167200;
        case 0x167204u: goto label_167204;
        case 0x167208u: goto label_167208;
        case 0x16720cu: goto label_16720c;
        case 0x167210u: goto label_167210;
        case 0x167214u: goto label_167214;
        case 0x167218u: goto label_167218;
        case 0x16721cu: goto label_16721c;
        case 0x167220u: goto label_167220;
        case 0x167224u: goto label_167224;
        case 0x167228u: goto label_167228;
        case 0x16722cu: goto label_16722c;
        case 0x167230u: goto label_167230;
        case 0x167234u: goto label_167234;
        case 0x167238u: goto label_167238;
        case 0x16723cu: goto label_16723c;
        case 0x167240u: goto label_167240;
        case 0x167244u: goto label_167244;
        case 0x167248u: goto label_167248;
        case 0x16724cu: goto label_16724c;
        case 0x167250u: goto label_167250;
        case 0x167254u: goto label_167254;
        case 0x167258u: goto label_167258;
        case 0x16725cu: goto label_16725c;
        case 0x167260u: goto label_167260;
        case 0x167264u: goto label_167264;
        case 0x167268u: goto label_167268;
        case 0x16726cu: goto label_16726c;
        case 0x167270u: goto label_167270;
        case 0x167274u: goto label_167274;
        case 0x167278u: goto label_167278;
        case 0x16727cu: goto label_16727c;
        case 0x167280u: goto label_167280;
        case 0x167284u: goto label_167284;
        case 0x167288u: goto label_167288;
        case 0x16728cu: goto label_16728c;
        case 0x167290u: goto label_167290;
        case 0x167294u: goto label_167294;
        case 0x167298u: goto label_167298;
        case 0x16729cu: goto label_16729c;
        case 0x1672a0u: goto label_1672a0;
        case 0x1672a4u: goto label_1672a4;
        case 0x1672a8u: goto label_1672a8;
        case 0x1672acu: goto label_1672ac;
        case 0x1672b0u: goto label_1672b0;
        case 0x1672b4u: goto label_1672b4;
        case 0x1672b8u: goto label_1672b8;
        case 0x1672bcu: goto label_1672bc;
        case 0x1672c0u: goto label_1672c0;
        case 0x1672c4u: goto label_1672c4;
        case 0x1672c8u: goto label_1672c8;
        case 0x1672ccu: goto label_1672cc;
        case 0x1672d0u: goto label_1672d0;
        case 0x1672d4u: goto label_1672d4;
        case 0x1672d8u: goto label_1672d8;
        case 0x1672dcu: goto label_1672dc;
        case 0x1672e0u: goto label_1672e0;
        case 0x1672e4u: goto label_1672e4;
        case 0x1672e8u: goto label_1672e8;
        case 0x1672ecu: goto label_1672ec;
        case 0x1672f0u: goto label_1672f0;
        case 0x1672f4u: goto label_1672f4;
        case 0x1672f8u: goto label_1672f8;
        case 0x1672fcu: goto label_1672fc;
        case 0x167300u: goto label_167300;
        case 0x167304u: goto label_167304;
        case 0x167308u: goto label_167308;
        case 0x16730cu: goto label_16730c;
        case 0x167310u: goto label_167310;
        case 0x167314u: goto label_167314;
        case 0x167318u: goto label_167318;
        case 0x16731cu: goto label_16731c;
        case 0x167320u: goto label_167320;
        case 0x167324u: goto label_167324;
        case 0x167328u: goto label_167328;
        case 0x16732cu: goto label_16732c;
        case 0x167330u: goto label_167330;
        case 0x167334u: goto label_167334;
        case 0x167338u: goto label_167338;
        case 0x16733cu: goto label_16733c;
        case 0x167340u: goto label_167340;
        case 0x167344u: goto label_167344;
        case 0x167348u: goto label_167348;
        case 0x16734cu: goto label_16734c;
        case 0x167350u: goto label_167350;
        case 0x167354u: goto label_167354;
        case 0x167358u: goto label_167358;
        case 0x16735cu: goto label_16735c;
        case 0x167360u: goto label_167360;
        case 0x167364u: goto label_167364;
        case 0x167368u: goto label_167368;
        case 0x16736cu: goto label_16736c;
        case 0x167370u: goto label_167370;
        case 0x167374u: goto label_167374;
        case 0x167378u: goto label_167378;
        case 0x16737cu: goto label_16737c;
        case 0x167380u: goto label_167380;
        case 0x167384u: goto label_167384;
        case 0x167388u: goto label_167388;
        case 0x16738cu: goto label_16738c;
        case 0x167390u: goto label_167390;
        case 0x167394u: goto label_167394;
        case 0x167398u: goto label_167398;
        case 0x16739cu: goto label_16739c;
        case 0x1673a0u: goto label_1673a0;
        case 0x1673a4u: goto label_1673a4;
        case 0x1673a8u: goto label_1673a8;
        case 0x1673acu: goto label_1673ac;
        case 0x1673b0u: goto label_1673b0;
        case 0x1673b4u: goto label_1673b4;
        case 0x1673b8u: goto label_1673b8;
        case 0x1673bcu: goto label_1673bc;
        case 0x1673c0u: goto label_1673c0;
        case 0x1673c4u: goto label_1673c4;
        case 0x1673c8u: goto label_1673c8;
        case 0x1673ccu: goto label_1673cc;
        case 0x1673d0u: goto label_1673d0;
        case 0x1673d4u: goto label_1673d4;
        case 0x1673d8u: goto label_1673d8;
        default: break;
    }

    ctx->pc = 0x1665d0u;

label_1665d0:
    // 0x1665d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1665d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1665d4:
    // 0x1665d4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1665d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1665d8:
    // 0x1665d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1665d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1665dc:
    // 0x1665dc: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1665dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1665e0:
    // 0x1665e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1665e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1665e4:
    // 0x1665e4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1665e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1665e8:
    // 0x1665e8: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1665e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1665ec:
    // 0x1665ec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1665ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1665f0:
    // 0x1665f0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1665f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1665f4:
    // 0x1665f4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1665f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1665f8:
    // 0x1665f8: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x1665f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1665fc:
    // 0x1665fc: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1665fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_166600:
    // 0x166600: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x166600u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_166604:
    // 0x166604: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x166604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_166608:
    // 0x166608: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x166608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_16660c:
    // 0x16660c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x16660cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_166610:
    // 0x166610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_166614:
    // 0x166614: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x166614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_166618:
    // 0x166618: 0x10600364  beqz        $v1, . + 4 + (0x364 << 2)
label_16661c:
    if (ctx->pc == 0x16661Cu) {
        ctx->pc = 0x16661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166618u;
        // 0x16661c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166620u;
        goto label_166620;
    }
    ctx->pc = 0x166618u;
    {
        const bool branch_taken_0x166618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166618u;
        // 0x16661c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166618) {
            ctx->pc = 0x1673ACu;
            goto label_1673ac;
        }
    }
    ctx->pc = 0x166620u;
label_166620:
    // 0x166620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_166624:
    // 0x166624: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x166624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_166628:
    // 0x166628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16662c:
    // 0x16662c: 0x8c637230  lw          $v1, 0x7230($v1)
    ctx->pc = 0x16662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29232)));
label_166630:
    // 0x166630: 0x600008  jr          $v1
label_166634:
    if (ctx->pc == 0x166634u) {
        ctx->pc = 0x166638u;
        goto label_166638;
    }
    ctx->pc = 0x166630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166638u: goto label_166638;
            case 0x1668D0u: goto label_1668d0;
            case 0x166AA0u: goto label_166aa0;
            case 0x166D68u: goto label_166d68;
            case 0x167240u: goto label_167240;
            case 0x167380u: goto label_167380;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x166638u;
label_166638:
    // 0x166638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16663c:
    // 0x16663c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x16663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_166640:
    // 0x166640: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x166640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_166644:
    // 0x166644: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x166644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_166648:
    // 0x166648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16664c:
    // 0x16664c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_166650:
    // 0x166650: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x166650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_166654:
    // 0x166654: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_166658:
    // 0x166658: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x166658u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_16665c:
    // 0x16665c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_166660:
    if (ctx->pc == 0x166660u) {
        ctx->pc = 0x166660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16665Cu;
        // 0x166660: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166664u;
        goto label_166664;
    }
    ctx->pc = 0x16665Cu;
    {
        const bool branch_taken_0x16665c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16665Cu;
        // 0x166660: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16665c) {
            ctx->pc = 0x166640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166640;
        }
    }
    ctx->pc = 0x166664u;
label_166664:
    // 0x166664: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x166664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_166668:
    // 0x166668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16666c:
    // 0x16666c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16666cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166670:
    // 0x166670: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166674:
    // 0x166674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166678:
    // 0x166678: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16667c:
    // 0x16667c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166680:
    // 0x166680: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166684:
    // 0x166684: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166688:
    // 0x166688: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16668c:
    // 0x16668c: 0x60f809  jalr        $v1
label_166690:
    if (ctx->pc == 0x166690u) {
        ctx->pc = 0x166690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16668Cu;
        // 0x166690: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166694u;
        goto label_166694;
    }
    ctx->pc = 0x16668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166694u);
        ctx->pc = 0x166690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16668Cu;
        // 0x166690: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16668Cu, 0x166694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166694u;
label_166694:
    // 0x166694: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x166694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_166698:
    // 0x166698: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16669c:
    // 0x16669c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16669cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1666a0:
    // 0x1666a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1666a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1666a4:
    // 0x1666a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1666a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1666a8:
    // 0x1666a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1666a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1666ac:
    // 0x1666ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1666acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1666b0:
    // 0x1666b0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1666b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1666b4:
    // 0x1666b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1666b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1666b8:
    // 0x1666b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1666b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1666bc:
    // 0x1666bc: 0x60f809  jalr        $v1
label_1666c0:
    if (ctx->pc == 0x1666C0u) {
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666BCu;
        // 0x1666c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666C4u;
        goto label_1666c4;
    }
    ctx->pc = 0x1666BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1666C4u);
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666BCu;
        // 0x1666c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666BCu, 0x1666C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1666C4u;
label_1666c4:
    // 0x1666c4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1666c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1666c8:
    // 0x1666c8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1666c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1666cc:
    // 0x1666cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1666ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1666d0:
    // 0x1666d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1666d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1666d4:
    // 0x1666d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1666d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1666d8:
    // 0x1666d8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1666d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1666dc:
    // 0x1666dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1666dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1666e0:
    // 0x1666e0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1666e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1666e4:
    // 0x1666e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1666e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1666e8:
    // 0x1666e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1666e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1666ec:
    // 0x1666ec: 0x60f809  jalr        $v1
label_1666f0:
    if (ctx->pc == 0x1666F0u) {
        ctx->pc = 0x1666F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666ECu;
        // 0x1666f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666F4u;
        goto label_1666f4;
    }
    ctx->pc = 0x1666ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1666F4u);
        ctx->pc = 0x1666F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666ECu;
        // 0x1666f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666ECu, 0x1666F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1666F4u;
label_1666f4:
    // 0x1666f4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1666f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1666f8:
    // 0x1666f8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1666fc:
    // 0x1666fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1666fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166700:
    // 0x166700: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166704:
    // 0x166704: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166708:
    // 0x166708: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16670c:
    // 0x16670c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166710:
    // 0x166710: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166714:
    // 0x166714: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166718:
    // 0x166718: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16671c:
    // 0x16671c: 0x60f809  jalr        $v1
label_166720:
    if (ctx->pc == 0x166720u) {
        ctx->pc = 0x166720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16671Cu;
        // 0x166720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166724u;
        goto label_166724;
    }
    ctx->pc = 0x16671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166724u);
        ctx->pc = 0x166720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16671Cu;
        // 0x166720: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16671Cu, 0x166724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166724u;
label_166724:
    // 0x166724: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166728:
    // 0x166728: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16672c:
    // 0x16672c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166730:
    // 0x166730: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166734:
    // 0x166734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166738:
    // 0x166738: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16673c:
    // 0x16673c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166740:
    // 0x166740: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166744:
    // 0x166744: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166748:
    // 0x166748: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16674c:
    // 0x16674c: 0x60f809  jalr        $v1
label_166750:
    if (ctx->pc == 0x166750u) {
        ctx->pc = 0x166750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16674Cu;
        // 0x166750: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166754u;
        goto label_166754;
    }
    ctx->pc = 0x16674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166754u);
        ctx->pc = 0x166750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16674Cu;
        // 0x166750: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16674Cu, 0x166754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166754u;
label_166754:
    // 0x166754: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166758:
    // 0x166758: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16675c:
    // 0x16675c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16675cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166760:
    // 0x166760: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166764:
    // 0x166764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166768:
    // 0x166768: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16676c:
    // 0x16676c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166770:
    // 0x166770: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166774:
    // 0x166774: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166778:
    // 0x166778: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16677c:
    // 0x16677c: 0x60f809  jalr        $v1
label_166780:
    if (ctx->pc == 0x166780u) {
        ctx->pc = 0x166780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16677Cu;
        // 0x166780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166784u;
        goto label_166784;
    }
    ctx->pc = 0x16677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166784u);
        ctx->pc = 0x166780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16677Cu;
        // 0x166780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16677Cu, 0x166784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166784u;
label_166784:
    // 0x166784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x166784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166788:
    // 0x166788: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x166788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_16678c:
    // 0x16678c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16678cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166790:
    // 0x166790: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166794:
    // 0x166794: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166798:
    // 0x166798: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x166798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16679c:
    // 0x16679c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16679cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1667a0:
    // 0x1667a0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1667a0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1667a4:
    // 0x1667a4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1667a4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_1667a8:
    // 0x1667a8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1667a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_1667ac:
    // 0x1667ac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1667acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1667b0:
    // 0x1667b0: 0x8e470020  lw          $a3, 0x20($s2)
    ctx->pc = 0x1667b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1667b4:
    // 0x1667b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1667b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1667b8:
    // 0x1667b8: 0x8e6201b4  lw          $v0, 0x1B4($s3)
    ctx->pc = 0x1667b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1667bc:
    // 0x1667bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1667bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1667c0:
    // 0x1667c0: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1667c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_1667c4:
    // 0x1667c4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1667c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1667c8:
    // 0x1667c8: 0xc0618c2  jal         func_186308
label_1667cc:
    if (ctx->pc == 0x1667CCu) {
        ctx->pc = 0x1667CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667C8u;
        // 0x1667cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667D0u;
        goto label_1667d0;
    }
    ctx->pc = 0x1667C8u;
    SET_GPR_U32(ctx, 31, 0x1667D0u);
    ctx->pc = 0x1667CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667C8u;
    // 0x1667cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1667C8u, 0x1667D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667D0u;
label_1667d0:
    // 0x1667d0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1667d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1667d4:
    // 0x1667d4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1667d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1667d8:
    // 0x1667d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1667d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1667dc:
    // 0x1667dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1667dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1667e0:
    // 0x1667e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1667e4:
    // 0x1667e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1667e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1667e8:
    // 0x1667e8: 0xc0618c2  jal         func_186308
label_1667ec:
    if (ctx->pc == 0x1667ECu) {
        ctx->pc = 0x1667ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667E8u;
        // 0x1667ec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1667F0u;
        goto label_1667f0;
    }
    ctx->pc = 0x1667E8u;
    SET_GPR_U32(ctx, 31, 0x1667F0u);
    ctx->pc = 0x1667ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667E8u;
    // 0x1667ec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1667E8u, 0x1667F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667F0u;
label_1667f0:
    // 0x1667f0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1667f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1667f4:
    // 0x1667f4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1667f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1667f8:
    // 0x1667f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1667f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1667fc:
    // 0x1667fc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1667fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166800:
    // 0x166800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166804:
    // 0x166804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166808:
    // 0x166808: 0xc0618c2  jal         func_186308
label_16680c:
    if (ctx->pc == 0x16680Cu) {
        ctx->pc = 0x16680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166808u;
        // 0x16680c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166810u;
        goto label_166810;
    }
    ctx->pc = 0x166808u;
    SET_GPR_U32(ctx, 31, 0x166810u);
    ctx->pc = 0x16680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166808u;
    // 0x16680c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x166808u, 0x166810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166810u;
label_166810:
    // 0x166810: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166814:
    // 0x166814: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166818:
    // 0x166818: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x166818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16681c:
    // 0x16681c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16681cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166820:
    // 0x166820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166824:
    // 0x166824: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166828:
    // 0x166828: 0xc0618c2  jal         func_186308
label_16682c:
    if (ctx->pc == 0x16682Cu) {
        ctx->pc = 0x16682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166828u;
        // 0x16682c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166830u;
        goto label_166830;
    }
    ctx->pc = 0x166828u;
    SET_GPR_U32(ctx, 31, 0x166830u);
    ctx->pc = 0x16682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166828u;
    // 0x16682c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x166828u, 0x166830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166830u;
label_166830:
    // 0x166830: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x166830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166834:
    // 0x166834: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x166834u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_166838:
    // 0x166838: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x166838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_16683c:
    // 0x16683c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16683cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166840:
    // 0x166840: 0x8e6201b4  lw          $v0, 0x1B4($s3)
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166844:
    // 0x166844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166848:
    // 0x166848: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x166848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_16684c:
    // 0x16684c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_166850:
    // 0x166850: 0xc0618f2  jal         func_1863C8
label_166854:
    if (ctx->pc == 0x166854u) {
        ctx->pc = 0x166854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166850u;
        // 0x166854: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166858u;
        goto label_166858;
    }
    ctx->pc = 0x166850u;
    SET_GPR_U32(ctx, 31, 0x166858u);
    ctx->pc = 0x166854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166850u;
    // 0x166854: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x166850u, 0x166858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166858u;
label_166858:
    // 0x166858: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x166858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_16685c:
    // 0x16685c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166860:
    // 0x166860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166864:
    // 0x166864: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166868:
    // 0x166868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16686c:
    // 0x16686c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166870:
    // 0x166870: 0xc0618f2  jal         func_1863C8
label_166874:
    if (ctx->pc == 0x166874u) {
        ctx->pc = 0x166874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166870u;
        // 0x166874: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166878u;
        goto label_166878;
    }
    ctx->pc = 0x166870u;
    SET_GPR_U32(ctx, 31, 0x166878u);
    ctx->pc = 0x166874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166870u;
    // 0x166874: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x166870u, 0x166878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166878u;
label_166878:
    // 0x166878: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x166878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_16687c:
    // 0x16687c: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x16687cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166880:
    // 0x166880: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x166880u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_166884:
    // 0x166884: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x166884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_166888:
    // 0x166888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16688c:
    // 0x16688c: 0x8e6201b4  lw          $v0, 0x1B4($s3)
    ctx->pc = 0x16688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166890:
    // 0x166890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166894:
    // 0x166894: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x166894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_166898:
    // 0x166898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16689c:
    // 0x16689c: 0xc0618f2  jal         func_1863C8
label_1668a0:
    if (ctx->pc == 0x1668A0u) {
        ctx->pc = 0x1668A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16689Cu;
        // 0x1668a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668A4u;
        goto label_1668a4;
    }
    ctx->pc = 0x16689Cu;
    SET_GPR_U32(ctx, 31, 0x1668A4u);
    ctx->pc = 0x1668A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16689Cu;
    // 0x1668a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x16689Cu, 0x1668A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668A4u;
label_1668a4:
    // 0x1668a4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1668a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1668a8:
    // 0x1668a8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1668a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1668ac:
    // 0x1668ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1668acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1668b0:
    // 0x1668b0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1668b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1668b4:
    // 0x1668b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1668b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1668b8:
    // 0x1668b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1668b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1668bc:
    // 0x1668bc: 0xc0618f2  jal         func_1863C8
label_1668c0:
    if (ctx->pc == 0x1668C0u) {
        ctx->pc = 0x1668C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668BCu;
        // 0x1668c0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668C4u;
        goto label_1668c4;
    }
    ctx->pc = 0x1668BCu;
    SET_GPR_U32(ctx, 31, 0x1668C4u);
    ctx->pc = 0x1668C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668BCu;
    // 0x1668c0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1668BCu, 0x1668C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668C4u;
label_1668c4:
    // 0x1668c4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1668c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1668c8:
    // 0x1668c8: 0x100002b8  b           . + 4 + (0x2B8 << 2)
label_1668cc:
    if (ctx->pc == 0x1668CCu) {
        ctx->pc = 0x1668CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668C8u;
        // 0x1668cc: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668D0u;
        goto label_1668d0;
    }
    ctx->pc = 0x1668C8u;
    {
        const bool branch_taken_0x1668c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668C8u;
        // 0x1668cc: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668c8) {
            ctx->pc = 0x1673ACu;
            goto label_1673ac;
        }
    }
    ctx->pc = 0x1668D0u;
label_1668d0:
    // 0x1668d0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1668d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1668d4:
    // 0x1668d4: 0x544002ad  bnel        $v0, $zero, . + 4 + (0x2AD << 2)
label_1668d8:
    if (ctx->pc == 0x1668D8u) {
        ctx->pc = 0x1668D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668D4u;
        // 0x1668d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668DCu;
        goto label_1668dc;
    }
    ctx->pc = 0x1668D4u;
    {
        const bool branch_taken_0x1668d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1668d4) {
            ctx->pc = 0x1668D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668D4u;
            // 0x1668d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16738Cu;
            goto label_16738c;
        }
    }
    ctx->pc = 0x1668DCu;
label_1668dc:
    // 0x1668dc: 0x108002b4  beqz        $a0, . + 4 + (0x2B4 << 2)
label_1668e0:
    if (ctx->pc == 0x1668E0u) {
        ctx->pc = 0x1668E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668DCu;
        // 0x1668e0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668E4u;
        goto label_1668e4;
    }
    ctx->pc = 0x1668DCu;
    {
        const bool branch_taken_0x1668dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668DCu;
        // 0x1668e0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668dc) {
            ctx->pc = 0x1673B0u;
            goto label_1673b0;
        }
    }
    ctx->pc = 0x1668E4u;
label_1668e4:
    // 0x1668e4: 0x8e701264  lw          $s0, 0x1264($s3)
    ctx->pc = 0x1668e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4708)));
label_1668e8:
    // 0x1668e8: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_1668ec:
    if (ctx->pc == 0x1668ECu) {
        ctx->pc = 0x1668ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668E8u;
        // 0x1668ec: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1668F0u;
        goto label_1668f0;
    }
    ctx->pc = 0x1668E8u;
    {
        const bool branch_taken_0x1668e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1668e8) {
            ctx->pc = 0x1668ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668E8u;
            // 0x1668ec: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16693Cu;
            goto label_16693c;
        }
    }
    ctx->pc = 0x1668F0u;
label_1668f0:
    // 0x1668f0: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x1668f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1668f4:
    // 0x1668f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1668f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1668f8:
    // 0x1668f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1668f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1668fc:
    // 0x1668fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1668fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166900:
    // 0x166900: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_166904:
    if (ctx->pc == 0x166904u) {
        ctx->pc = 0x166904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166900u;
        // 0x166904: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166908u;
        goto label_166908;
    }
    ctx->pc = 0x166900u;
    {
        const bool branch_taken_0x166900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x166900) {
            ctx->pc = 0x166904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166900u;
            // 0x166904: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16693Cu;
            goto label_16693c;
        }
    }
    ctx->pc = 0x166908u;
label_166908:
    // 0x166908: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x166908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16690c:
    // 0x16690c: 0x260305f0  addiu       $v1, $s0, 0x5F0
    ctx->pc = 0x16690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
label_166910:
    // 0x166910: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x166910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_166914:
    // 0x166914: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x166914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_166918:
    // 0x166918: 0xc04c9a6  jal         func_132698
label_16691c:
    if (ctx->pc == 0x16691Cu) {
        ctx->pc = 0x166920u;
        goto label_166920;
    }
    ctx->pc = 0x166918u;
    SET_GPR_U32(ctx, 31, 0x166920u);
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x166918u, 0x166920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166920u;
label_166920:
    // 0x166920: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x166920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_166924:
    // 0x166924: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x166924u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_166928:
    // 0x166928: 0xc04c9d4  jal         func_132750
label_16692c:
    if (ctx->pc == 0x16692Cu) {
        ctx->pc = 0x16692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166928u;
        // 0x16692c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166930u;
        goto label_166930;
    }
    ctx->pc = 0x166928u;
    SET_GPR_U32(ctx, 31, 0x166930u);
    ctx->pc = 0x16692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166928u;
    // 0x16692c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x166928u, 0x166930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166930u;
label_166930:
    // 0x166930: 0xc04ca08  jal         func_132820
label_166934:
    if (ctx->pc == 0x166934u) {
        ctx->pc = 0x166934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166930u;
        // 0x166934: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166938u;
        goto label_166938;
    }
    ctx->pc = 0x166930u;
    SET_GPR_U32(ctx, 31, 0x166938u);
    ctx->pc = 0x166934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166930u;
    // 0x166934: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132820u, 0x166930u, 0x166938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166938u;
label_166938:
    // 0x166938: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x166938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_16693c:
    // 0x16693c: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x16693cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166940:
    // 0x166940: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166944:
    // 0x166944: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x166944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_166948:
    // 0x166948: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x166948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_16694c:
    // 0x16694c: 0xc7808384  lwc1        $f0, -0x7C7C($gp)
    ctx->pc = 0x16694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166950:
    // 0x166950: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x166950u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_166954:
    // 0x166954: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x166954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166958:
    // 0x166958: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x166958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16695c:
    // 0x16695c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16695cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166960:
    // 0x166960: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166964:
    // 0x166964: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166964u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166968:
    // 0x166968: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166968u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16696c:
    // 0x16696c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16696cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166970:
    // 0x166970: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166974:
    // 0x166974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166978:
    // 0x166978: 0xc7978388  lwc1        $f23, -0x7C78($gp)
    ctx->pc = 0x166978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16697c:
    // 0x16697c: 0xc06164c  jal         func_185930
label_166980:
    if (ctx->pc == 0x166980u) {
        ctx->pc = 0x166980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16697Cu;
        // 0x166980: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166984u;
        goto label_166984;
    }
    ctx->pc = 0x16697Cu;
    SET_GPR_U32(ctx, 31, 0x166984u);
    ctx->pc = 0x166980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16697Cu;
    // 0x166980: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16697Cu, 0x166984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166984u;
label_166984:
    // 0x166984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166988:
    // 0x166988: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16698c:
    // 0x16698c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166990:
    // 0x166990: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166990u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166994:
    // 0x166994: 0xc796838c  lwc1        $f22, -0x7C74($gp)
    ctx->pc = 0x166994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_166998:
    // 0x166998: 0xc069532  jal         func_1A54C8
label_16699c:
    if (ctx->pc == 0x16699Cu) {
        ctx->pc = 0x16699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166998u;
        // 0x16699c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669A0u;
        goto label_1669a0;
    }
    ctx->pc = 0x166998u;
    SET_GPR_U32(ctx, 31, 0x1669A0u);
    ctx->pc = 0x16699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166998u;
    // 0x16699c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166998u, 0x1669A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669A0u;
label_1669a0:
    // 0x1669a0: 0xc7808390  lwc1        $f0, -0x7C70($gp)
    ctx->pc = 0x1669a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1669a4:
    // 0x1669a4: 0xc7958394  lwc1        $f21, -0x7C6C($gp)
    ctx->pc = 0x1669a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1669a8:
    // 0x1669a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1669a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1669ac:
    // 0x1669ac: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x1669acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1669b0:
    // 0x1669b0: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x1669b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1669b4:
    // 0x1669b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1669b8:
    // 0x1669b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1669b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1669bc:
    // 0x1669bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1669bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_1669c0:
    // 0x1669c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1669c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_1669c4:
    // 0x1669c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1669c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1669c8:
    // 0x1669c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1669c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1669cc:
    // 0x1669cc: 0xc06164c  jal         func_185930
label_1669d0:
    if (ctx->pc == 0x1669D0u) {
        ctx->pc = 0x1669D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669CCu;
        // 0x1669d0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669D4u;
        goto label_1669d4;
    }
    ctx->pc = 0x1669CCu;
    SET_GPR_U32(ctx, 31, 0x1669D4u);
    ctx->pc = 0x1669D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669CCu;
    // 0x1669d0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1669CCu, 0x1669D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669D4u;
label_1669d4:
    // 0x1669d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1669d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1669d8:
    // 0x1669d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1669d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1669dc:
    // 0x1669dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1669dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1669e0:
    // 0x1669e0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1669e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1669e4:
    // 0x1669e4: 0xc069532  jal         func_1A54C8
label_1669e8:
    if (ctx->pc == 0x1669E8u) {
        ctx->pc = 0x1669E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669E4u;
        // 0x1669e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1669ECu;
        goto label_1669ec;
    }
    ctx->pc = 0x1669E4u;
    SET_GPR_U32(ctx, 31, 0x1669ECu);
    ctx->pc = 0x1669E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669E4u;
    // 0x1669e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1669E4u, 0x1669ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669ECu;
label_1669ec:
    // 0x1669ec: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1669ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1669f0:
    // 0x1669f0: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x1669f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1669f4:
    // 0x1669f4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1669f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1669f8:
    // 0x1669f8: 0xc7808398  lwc1        $f0, -0x7C68($gp)
    ctx->pc = 0x1669f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1669fc:
    // 0x1669fc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1669fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_166a00:
    // 0x166a00: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x166a00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_166a04:
    // 0x166a04: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x166a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166a08:
    // 0x166a08: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x166a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166a0c:
    // 0x166a0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x166a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166a10:
    // 0x166a10: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166a14:
    // 0x166a14: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166a14u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166a18:
    // 0x166a18: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166a18u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166a1c:
    // 0x166a1c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166a1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166a20:
    // 0x166a20: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166a24:
    // 0x166a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166a28:
    // 0x166a28: 0xc06164c  jal         func_185930
label_166a2c:
    if (ctx->pc == 0x166A2Cu) {
        ctx->pc = 0x166A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A28u;
        // 0x166a2c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A30u;
        goto label_166a30;
    }
    ctx->pc = 0x166A28u;
    SET_GPR_U32(ctx, 31, 0x166A30u);
    ctx->pc = 0x166A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A28u;
    // 0x166a2c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166A28u, 0x166A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A30u;
label_166a30:
    // 0x166a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166a34:
    // 0x166a34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166a38:
    // 0x166a38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166a3c:
    // 0x166a3c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166a3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166a40:
    // 0x166a40: 0xc069532  jal         func_1A54C8
label_166a44:
    if (ctx->pc == 0x166A44u) {
        ctx->pc = 0x166A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A40u;
        // 0x166a44: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A48u;
        goto label_166a48;
    }
    ctx->pc = 0x166A40u;
    SET_GPR_U32(ctx, 31, 0x166A48u);
    ctx->pc = 0x166A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A40u;
    // 0x166a44: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166A40u, 0x166A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A48u;
label_166a48:
    // 0x166a48: 0xc780839c  lwc1        $f0, -0x7C64($gp)
    ctx->pc = 0x166a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166a4c:
    // 0x166a4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166a50:
    // 0x166a50: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x166a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166a54:
    // 0x166a54: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x166a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166a58:
    // 0x166a58: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166a5c:
    // 0x166a5c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166a5cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166a60:
    // 0x166a60: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166a60u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166a64:
    // 0x166a64: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166a64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166a68:
    // 0x166a68: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166a6c:
    // 0x166a6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x166a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_166a70:
    // 0x166a70: 0xc06164c  jal         func_185930
label_166a74:
    if (ctx->pc == 0x166A74u) {
        ctx->pc = 0x166A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A70u;
        // 0x166a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A78u;
        goto label_166a78;
    }
    ctx->pc = 0x166A70u;
    SET_GPR_U32(ctx, 31, 0x166A78u);
    ctx->pc = 0x166A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A70u;
    // 0x166a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166A70u, 0x166A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A78u;
label_166a78:
    // 0x166a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166a7c:
    // 0x166a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166a80:
    // 0x166a80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166a84:
    // 0x166a84: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166a84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166a88:
    // 0x166a88: 0xc069532  jal         func_1A54C8
label_166a8c:
    if (ctx->pc == 0x166A8Cu) {
        ctx->pc = 0x166A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A88u;
        // 0x166a8c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166A90u;
        goto label_166a90;
    }
    ctx->pc = 0x166A88u;
    SET_GPR_U32(ctx, 31, 0x166A90u);
    ctx->pc = 0x166A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A88u;
    // 0x166a8c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166A88u, 0x166A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A90u;
label_166a90:
    // 0x166a90: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x166a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_166a94:
    // 0x166a94: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x166a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_166a98:
    // 0x166a98: 0x10000243  b           . + 4 + (0x243 << 2)
label_166a9c:
    if (ctx->pc == 0x166A9Cu) {
        ctx->pc = 0x166A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A98u;
        // 0x166a9c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AA0u;
        goto label_166aa0;
    }
    ctx->pc = 0x166A98u;
    {
        const bool branch_taken_0x166a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A98u;
        // 0x166a9c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a98) {
            ctx->pc = 0x1673A8u;
            goto label_1673a8;
        }
    }
    ctx->pc = 0x166AA0u;
label_166aa0:
    // 0x166aa0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x166aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_166aa4:
    // 0x166aa4: 0x14400239  bnez        $v0, . + 4 + (0x239 << 2)
label_166aa8:
    if (ctx->pc == 0x166AA8u) {
        ctx->pc = 0x166AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AA4u;
        // 0x166aa8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AACu;
        goto label_166aac;
    }
    ctx->pc = 0x166AA4u;
    {
        const bool branch_taken_0x166aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AA4u;
        // 0x166aa8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166aa4) {
            ctx->pc = 0x16738Cu;
            goto label_16738c;
        }
    }
    ctx->pc = 0x166AACu;
label_166aac:
    // 0x166aac: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
label_166ab0:
    if (ctx->pc == 0x166AB0u) {
        ctx->pc = 0x166AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AACu;
        // 0x166ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AB4u;
        goto label_166ab4;
    }
    ctx->pc = 0x166AACu;
    {
        const bool branch_taken_0x166aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AACu;
        // 0x166ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166aac) {
            ctx->pc = 0x166BA8u;
            goto label_166ba8;
        }
    }
    ctx->pc = 0x166AB4u;
label_166ab4:
    // 0x166ab4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166ab8:
    // 0x166ab8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166abc:
    // 0x166abc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166ac0:
    // 0x166ac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166ac4:
    // 0x166ac4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166ac8:
    // 0x166ac8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166acc:
    // 0x166acc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166ad0:
    // 0x166ad0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166ad4:
    // 0x166ad4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166ad8:
    // 0x166ad8: 0x60f809  jalr        $v1
label_166adc:
    if (ctx->pc == 0x166ADCu) {
        ctx->pc = 0x166ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AD8u;
        // 0x166adc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AE0u;
        goto label_166ae0;
    }
    ctx->pc = 0x166AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166AE0u);
        ctx->pc = 0x166ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AD8u;
        // 0x166adc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166AD8u, 0x166AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166AE0u;
label_166ae0:
    // 0x166ae0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166ae4:
    // 0x166ae4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166ae8:
    // 0x166ae8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166aec:
    // 0x166aec: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166af0:
    // 0x166af0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166af4:
    // 0x166af4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166af8:
    // 0x166af8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166afc:
    // 0x166afc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166b00:
    // 0x166b00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166b04:
    // 0x166b04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166b08:
    // 0x166b08: 0x60f809  jalr        $v1
label_166b0c:
    if (ctx->pc == 0x166B0Cu) {
        ctx->pc = 0x166B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B08u;
        // 0x166b0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B10u;
        goto label_166b10;
    }
    ctx->pc = 0x166B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166B10u);
        ctx->pc = 0x166B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B08u;
        // 0x166b0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B08u, 0x166B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166B10u;
label_166b10:
    // 0x166b10: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x166b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166b14:
    // 0x166b14: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x166b14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166b18:
    // 0x166b18: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x166b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166b1c:
    // 0x166b1c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x166b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_166b20:
    // 0x166b20: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166b24:
    // 0x166b24: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x166b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_166b28:
    // 0x166b28: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166b2c:
    // 0x166b2c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166b30:
    // 0x166b30: 0xc79583a0  lwc1        $f21, -0x7C60($gp)
    ctx->pc = 0x166b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_166b34:
    // 0x166b34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166b38:
    // 0x166b38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x166b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_166b3c:
    // 0x166b3c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x166b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166b40:
    // 0x166b40: 0xc06164c  jal         func_185930
label_166b44:
    if (ctx->pc == 0x166B44u) {
        ctx->pc = 0x166B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B40u;
        // 0x166b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B48u;
        goto label_166b48;
    }
    ctx->pc = 0x166B40u;
    SET_GPR_U32(ctx, 31, 0x166B48u);
    ctx->pc = 0x166B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B40u;
    // 0x166b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166B40u, 0x166B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B48u;
label_166b48:
    // 0x166b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166b4c:
    // 0x166b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166b50:
    // 0x166b50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166b54:
    // 0x166b54: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x166b54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_166b58:
    // 0x166b58: 0xc069532  jal         func_1A54C8
label_166b5c:
    if (ctx->pc == 0x166B5Cu) {
        ctx->pc = 0x166B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B58u;
        // 0x166b5c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B60u;
        goto label_166b60;
    }
    ctx->pc = 0x166B58u;
    SET_GPR_U32(ctx, 31, 0x166B60u);
    ctx->pc = 0x166B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B58u;
    // 0x166b5c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166B58u, 0x166B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B60u;
label_166b60:
    // 0x166b60: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166b64:
    // 0x166b64: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166b68:
    // 0x166b68: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x166b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_166b6c:
    // 0x166b6c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166b70:
    // 0x166b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166b74:
    // 0x166b74: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x166b74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166b78:
    // 0x166b78: 0xc06164c  jal         func_185930
label_166b7c:
    if (ctx->pc == 0x166B7Cu) {
        ctx->pc = 0x166B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B78u;
        // 0x166b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B80u;
        goto label_166b80;
    }
    ctx->pc = 0x166B78u;
    SET_GPR_U32(ctx, 31, 0x166B80u);
    ctx->pc = 0x166B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B78u;
    // 0x166b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166B78u, 0x166B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B80u;
label_166b80:
    // 0x166b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166b84:
    // 0x166b84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166b88:
    // 0x166b88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166b8c:
    // 0x166b8c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x166b8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_166b90:
    // 0x166b90: 0xc069532  jal         func_1A54C8
label_166b94:
    if (ctx->pc == 0x166B94u) {
        ctx->pc = 0x166B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B90u;
        // 0x166b94: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B98u;
        goto label_166b98;
    }
    ctx->pc = 0x166B90u;
    SET_GPR_U32(ctx, 31, 0x166B98u);
    ctx->pc = 0x166B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B90u;
    // 0x166b94: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166B90u, 0x166B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B98u;
label_166b98:
    // 0x166b98: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x166b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_166b9c:
    // 0x166b9c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x166b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_166ba0:
    // 0x166ba0: 0x10000201  b           . + 4 + (0x201 << 2)
label_166ba4:
    if (ctx->pc == 0x166BA4u) {
        ctx->pc = 0x166BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BA0u;
        // 0x166ba4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166BA8u;
        goto label_166ba8;
    }
    ctx->pc = 0x166BA0u;
    {
        const bool branch_taken_0x166ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BA0u;
        // 0x166ba4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ba0) {
            ctx->pc = 0x1673A8u;
            goto label_1673a8;
        }
    }
    ctx->pc = 0x166BA8u;
label_166ba8:
    // 0x166ba8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166bac:
    // 0x166bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166bb0:
    // 0x166bb0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166bb4:
    // 0x166bb4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166bb8:
    // 0x166bb8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x166bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_166bbc:
    // 0x166bbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166bc0:
    // 0x166bc0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166bc4:
    // 0x166bc4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166bc8:
    // 0x166bc8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166bcc:
    // 0x166bcc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166bd0:
    // 0x166bd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166bd4:
    // 0x166bd4: 0x60f809  jalr        $v1
label_166bd8:
    if (ctx->pc == 0x166BD8u) {
        ctx->pc = 0x166BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BD4u;
        // 0x166bd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166BDCu;
        goto label_166bdc;
    }
    ctx->pc = 0x166BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166BDCu);
        ctx->pc = 0x166BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BD4u;
        // 0x166bd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166BD4u, 0x166BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166BDCu;
label_166bdc:
    // 0x166bdc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166be0:
    // 0x166be0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166be4:
    // 0x166be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166be8:
    // 0x166be8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166bec:
    // 0x166bec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166bf0:
    // 0x166bf0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166bf4:
    // 0x166bf4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166bf8:
    // 0x166bf8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166bfc:
    // 0x166bfc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166c00:
    // 0x166c00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166c04:
    // 0x166c04: 0x60f809  jalr        $v1
label_166c08:
    if (ctx->pc == 0x166C08u) {
        ctx->pc = 0x166C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C04u;
        // 0x166c08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C0Cu;
        goto label_166c0c;
    }
    ctx->pc = 0x166C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166C0Cu);
        ctx->pc = 0x166C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C04u;
        // 0x166c08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C04u, 0x166C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166C0Cu;
label_166c0c:
    // 0x166c0c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x166c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_166c10:
    // 0x166c10: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x166c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166c14:
    // 0x166c14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166c18:
    // 0x166c18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_166c1c:
    // 0x166c1c: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x166c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_166c20:
    // 0x166c20: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x166c20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166c24:
    // 0x166c24: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x166c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166c28:
    // 0x166c28: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x166c28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166c2c:
    // 0x166c2c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166c30:
    // 0x166c30: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166c30u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166c34:
    // 0x166c34: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166c34u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166c38:
    // 0x166c38: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166c38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166c3c:
    // 0x166c3c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166c40:
    // 0x166c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166c44:
    // 0x166c44: 0xc79783a4  lwc1        $f23, -0x7C5C($gp)
    ctx->pc = 0x166c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_166c48:
    // 0x166c48: 0xc06164c  jal         func_185930
label_166c4c:
    if (ctx->pc == 0x166C4Cu) {
        ctx->pc = 0x166C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C48u;
        // 0x166c4c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C50u;
        goto label_166c50;
    }
    ctx->pc = 0x166C48u;
    SET_GPR_U32(ctx, 31, 0x166C50u);
    ctx->pc = 0x166C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C48u;
    // 0x166c4c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166C48u, 0x166C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C50u;
label_166c50:
    // 0x166c50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166c54:
    // 0x166c54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166c58:
    // 0x166c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166c5c:
    // 0x166c5c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166c5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166c60:
    // 0x166c60: 0xc79683a8  lwc1        $f22, -0x7C58($gp)
    ctx->pc = 0x166c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_166c64:
    // 0x166c64: 0xc069532  jal         func_1A54C8
label_166c68:
    if (ctx->pc == 0x166C68u) {
        ctx->pc = 0x166C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C64u;
        // 0x166c68: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C6Cu;
        goto label_166c6c;
    }
    ctx->pc = 0x166C64u;
    SET_GPR_U32(ctx, 31, 0x166C6Cu);
    ctx->pc = 0x166C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C64u;
    // 0x166c68: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166C64u, 0x166C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C6Cu;
label_166c6c:
    // 0x166c6c: 0xc78083ac  lwc1        $f0, -0x7C54($gp)
    ctx->pc = 0x166c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166c70:
    // 0x166c70: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x166c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_166c74:
    // 0x166c74: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x166c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_166c78:
    // 0x166c78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166c7c:
    // 0x166c7c: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x166c7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166c80:
    // 0x166c80: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x166c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166c84:
    // 0x166c84: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166c88:
    // 0x166c88: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166c88u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166c8c:
    // 0x166c8c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166c8cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166c90:
    // 0x166c90: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166c90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166c94:
    // 0x166c94: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166c98:
    // 0x166c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166c9c:
    // 0x166c9c: 0xc06164c  jal         func_185930
label_166ca0:
    if (ctx->pc == 0x166CA0u) {
        ctx->pc = 0x166CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C9Cu;
        // 0x166ca0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166CA4u;
        goto label_166ca4;
    }
    ctx->pc = 0x166C9Cu;
    SET_GPR_U32(ctx, 31, 0x166CA4u);
    ctx->pc = 0x166CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C9Cu;
    // 0x166ca0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166C9Cu, 0x166CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CA4u;
label_166ca4:
    // 0x166ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166ca8:
    // 0x166ca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166cac:
    // 0x166cac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166cb0:
    // 0x166cb0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166cb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166cb4:
    // 0x166cb4: 0xc069532  jal         func_1A54C8
label_166cb8:
    if (ctx->pc == 0x166CB8u) {
        ctx->pc = 0x166CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CB4u;
        // 0x166cb8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166CBCu;
        goto label_166cbc;
    }
    ctx->pc = 0x166CB4u;
    SET_GPR_U32(ctx, 31, 0x166CBCu);
    ctx->pc = 0x166CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CB4u;
    // 0x166cb8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166CB4u, 0x166CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CBCu;
label_166cbc:
    // 0x166cbc: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x166cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_166cc0:
    // 0x166cc0: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166cc4:
    // 0x166cc4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166cc8:
    // 0x166cc8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x166cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_166ccc:
    // 0x166ccc: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x166cccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_166cd0:
    // 0x166cd0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x166cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166cd4:
    // 0x166cd4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x166cd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166cd8:
    // 0x166cd8: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x166cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166cdc:
    // 0x166cdc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166ce0:
    // 0x166ce0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166ce0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166ce4:
    // 0x166ce4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166ce4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166ce8:
    // 0x166ce8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166ce8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166cec:
    // 0x166cec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166cf0:
    // 0x166cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166cf4:
    // 0x166cf4: 0xc06164c  jal         func_185930
label_166cf8:
    if (ctx->pc == 0x166CF8u) {
        ctx->pc = 0x166CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CF4u;
        // 0x166cf8: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166CFCu;
        goto label_166cfc;
    }
    ctx->pc = 0x166CF4u;
    SET_GPR_U32(ctx, 31, 0x166CFCu);
    ctx->pc = 0x166CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CF4u;
    // 0x166cf8: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166CF4u, 0x166CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CFCu;
label_166cfc:
    // 0x166cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166d00:
    // 0x166d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166d04:
    // 0x166d04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166d08:
    // 0x166d08: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166d08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166d0c:
    // 0x166d0c: 0xc069532  jal         func_1A54C8
label_166d10:
    if (ctx->pc == 0x166D10u) {
        ctx->pc = 0x166D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D0Cu;
        // 0x166d10: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D14u;
        goto label_166d14;
    }
    ctx->pc = 0x166D0Cu;
    SET_GPR_U32(ctx, 31, 0x166D14u);
    ctx->pc = 0x166D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D0Cu;
    // 0x166d10: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166D0Cu, 0x166D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D14u;
label_166d14:
    // 0x166d14: 0xc78083b0  lwc1        $f0, -0x7C50($gp)
    ctx->pc = 0x166d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166d18:
    // 0x166d18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166d1c:
    // 0x166d1c: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x166d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166d20:
    // 0x166d20: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x166d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166d24:
    // 0x166d24: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166d28:
    // 0x166d28: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166d28u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166d2c:
    // 0x166d2c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166d2cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166d30:
    // 0x166d30: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166d30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166d34:
    // 0x166d34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166d38:
    // 0x166d38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x166d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_166d3c:
    // 0x166d3c: 0xc06164c  jal         func_185930
label_166d40:
    if (ctx->pc == 0x166D40u) {
        ctx->pc = 0x166D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D3Cu;
        // 0x166d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D44u;
        goto label_166d44;
    }
    ctx->pc = 0x166D3Cu;
    SET_GPR_U32(ctx, 31, 0x166D44u);
    ctx->pc = 0x166D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D3Cu;
    // 0x166d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166D3Cu, 0x166D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D44u;
label_166d44:
    // 0x166d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166d48:
    // 0x166d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166d4c:
    // 0x166d4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166d50:
    // 0x166d50: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166d50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166d54:
    // 0x166d54: 0xc069532  jal         func_1A54C8
label_166d58:
    if (ctx->pc == 0x166D58u) {
        ctx->pc = 0x166D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D54u;
        // 0x166d58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D5Cu;
        goto label_166d5c;
    }
    ctx->pc = 0x166D54u;
    SET_GPR_U32(ctx, 31, 0x166D5Cu);
    ctx->pc = 0x166D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D54u;
    // 0x166d58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166D54u, 0x166D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D5Cu;
label_166d5c:
    // 0x166d5c: 0x10000190  b           . + 4 + (0x190 << 2)
label_166d60:
    if (ctx->pc == 0x166D60u) {
        ctx->pc = 0x166D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D5Cu;
        // 0x166d60: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D64u;
        goto label_166d64;
    }
    ctx->pc = 0x166D5Cu;
    {
        const bool branch_taken_0x166d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D5Cu;
        // 0x166d60: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d5c) {
            ctx->pc = 0x1673A0u;
            goto label_1673a0;
        }
    }
    ctx->pc = 0x166D64u;
label_166d64:
    // 0x166d64: 0x0  nop
    ctx->pc = 0x166d64u;
    // NOP
label_166d68:
    // 0x166d68: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x166d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_166d6c:
    // 0x166d6c: 0x54400187  bnel        $v0, $zero, . + 4 + (0x187 << 2)
label_166d70:
    if (ctx->pc == 0x166D70u) {
        ctx->pc = 0x166D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D6Cu;
        // 0x166d70: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D74u;
        goto label_166d74;
    }
    ctx->pc = 0x166D6Cu;
    {
        const bool branch_taken_0x166d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166d6c) {
            ctx->pc = 0x166D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166D6Cu;
            // 0x166d70: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16738Cu;
            goto label_16738c;
        }
    }
    ctx->pc = 0x166D74u;
label_166d74:
    // 0x166d74: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
label_166d78:
    if (ctx->pc == 0x166D78u) {
        ctx->pc = 0x166D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D74u;
        // 0x166d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D7Cu;
        goto label_166d7c;
    }
    ctx->pc = 0x166D74u;
    {
        const bool branch_taken_0x166d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D74u;
        // 0x166d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d74) {
            ctx->pc = 0x166FE0u;
            goto label_166fe0;
        }
    }
    ctx->pc = 0x166D7Cu;
label_166d7c:
    // 0x166d7c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x166d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_166d80:
    // 0x166d80: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166d84:
    // 0x166d84: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166d88:
    // 0x166d88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166d8c:
    // 0x166d8c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166d90:
    // 0x166d90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166d94:
    // 0x166d94: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166d98:
    // 0x166d98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166d9c:
    // 0x166d9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166da0:
    // 0x166da0: 0x60f809  jalr        $v1
label_166da4:
    if (ctx->pc == 0x166DA4u) {
        ctx->pc = 0x166DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DA0u;
        // 0x166da4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166DA8u;
        goto label_166da8;
    }
    ctx->pc = 0x166DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166DA8u);
        ctx->pc = 0x166DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DA0u;
        // 0x166da4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166DA0u, 0x166DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166DA8u;
label_166da8:
    // 0x166da8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_166dac:
    // 0x166dac: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166db0:
    // 0x166db0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166db4:
    // 0x166db4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166db8:
    // 0x166db8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166dbc:
    // 0x166dbc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166dc0:
    // 0x166dc0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166dc4:
    // 0x166dc4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166dc8:
    // 0x166dc8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166dcc:
    // 0x166dcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166dd0:
    // 0x166dd0: 0x60f809  jalr        $v1
label_166dd4:
    if (ctx->pc == 0x166DD4u) {
        ctx->pc = 0x166DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DD0u;
        // 0x166dd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166DD8u;
        goto label_166dd8;
    }
    ctx->pc = 0x166DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166DD8u);
        ctx->pc = 0x166DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DD0u;
        // 0x166dd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166DD0u, 0x166DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166DD8u;
label_166dd8:
    // 0x166dd8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x166dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_166ddc:
    // 0x166ddc: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166de0:
    // 0x166de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166de4:
    // 0x166de4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166de8:
    // 0x166de8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166dec:
    // 0x166dec: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166df0:
    // 0x166df0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166df4:
    // 0x166df4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166df8:
    // 0x166df8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166dfc:
    // 0x166dfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166e00:
    // 0x166e00: 0x60f809  jalr        $v1
label_166e04:
    if (ctx->pc == 0x166E04u) {
        ctx->pc = 0x166E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E00u;
        // 0x166e04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E08u;
        goto label_166e08;
    }
    ctx->pc = 0x166E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166E08u);
        ctx->pc = 0x166E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E00u;
        // 0x166e04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E00u, 0x166E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166E08u;
label_166e08:
    // 0x166e08: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x166e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_166e0c:
    // 0x166e0c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166e10:
    // 0x166e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166e14:
    // 0x166e14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166e18:
    // 0x166e18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166e1c:
    // 0x166e1c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166e20:
    // 0x166e20: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166e24:
    // 0x166e24: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166e28:
    // 0x166e28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166e2c:
    // 0x166e2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166e30:
    // 0x166e30: 0x60f809  jalr        $v1
label_166e34:
    if (ctx->pc == 0x166E34u) {
        ctx->pc = 0x166E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E30u;
        // 0x166e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E38u;
        goto label_166e38;
    }
    ctx->pc = 0x166E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166E38u);
        ctx->pc = 0x166E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E30u;
        // 0x166e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E30u, 0x166E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166E38u;
label_166e38:
    // 0x166e38: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x166e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_166e3c:
    // 0x166e3c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166e40:
    // 0x166e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166e44:
    // 0x166e44: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166e48:
    // 0x166e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166e4c:
    // 0x166e4c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166e50:
    // 0x166e50: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166e54:
    // 0x166e54: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166e58:
    // 0x166e58: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166e5c:
    // 0x166e5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166e60:
    // 0x166e60: 0x60f809  jalr        $v1
label_166e64:
    if (ctx->pc == 0x166E64u) {
        ctx->pc = 0x166E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E60u;
        // 0x166e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E68u;
        goto label_166e68;
    }
    ctx->pc = 0x166E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166E68u);
        ctx->pc = 0x166E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E60u;
        // 0x166e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E60u, 0x166E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166E68u;
label_166e68:
    // 0x166e68: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x166e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_166e6c:
    // 0x166e6c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166e70:
    // 0x166e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166e74:
    // 0x166e74: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166e78:
    // 0x166e78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166e7c:
    // 0x166e7c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166e80:
    // 0x166e80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166e84:
    // 0x166e84: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166e88:
    // 0x166e88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166e8c:
    // 0x166e8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166e90:
    // 0x166e90: 0x60f809  jalr        $v1
label_166e94:
    if (ctx->pc == 0x166E94u) {
        ctx->pc = 0x166E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E90u;
        // 0x166e94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166E98u;
        goto label_166e98;
    }
    ctx->pc = 0x166E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166E98u);
        ctx->pc = 0x166E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E90u;
        // 0x166e94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166E90u, 0x166E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166E98u;
label_166e98:
    // 0x166e98: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166e9c:
    // 0x166e9c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166ea0:
    // 0x166ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166ea4:
    // 0x166ea4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166ea8:
    // 0x166ea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166eac:
    // 0x166eac: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166eb0:
    // 0x166eb0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166eb4:
    // 0x166eb4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166eb8:
    // 0x166eb8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166ebc:
    // 0x166ebc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166ec0:
    // 0x166ec0: 0x60f809  jalr        $v1
label_166ec4:
    if (ctx->pc == 0x166EC4u) {
        ctx->pc = 0x166EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EC0u;
        // 0x166ec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166EC8u;
        goto label_166ec8;
    }
    ctx->pc = 0x166EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166EC8u);
        ctx->pc = 0x166EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EC0u;
        // 0x166ec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166EC0u, 0x166EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166EC8u;
label_166ec8:
    // 0x166ec8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166ecc:
    // 0x166ecc: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166ed0:
    // 0x166ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166ed4:
    // 0x166ed4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166ed8:
    // 0x166ed8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166edc:
    // 0x166edc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166ee0:
    // 0x166ee0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166ee4:
    // 0x166ee4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166ee8:
    // 0x166ee8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166eec:
    // 0x166eec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166ef0:
    // 0x166ef0: 0x60f809  jalr        $v1
label_166ef4:
    if (ctx->pc == 0x166EF4u) {
        ctx->pc = 0x166EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EF0u;
        // 0x166ef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166EF8u;
        goto label_166ef8;
    }
    ctx->pc = 0x166EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166EF8u);
        ctx->pc = 0x166EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EF0u;
        // 0x166ef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166EF0u, 0x166EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166EF8u;
label_166ef8:
    // 0x166ef8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166efc:
    // 0x166efc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x166efcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166f00:
    // 0x166f00: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x166f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166f04:
    // 0x166f04: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x166f04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_166f08:
    // 0x166f08: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x166f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_166f0c:
    // 0x166f0c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x166f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_166f10:
    // 0x166f10: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166f14:
    // 0x166f14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166f18:
    // 0x166f18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x166f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_166f1c:
    // 0x166f1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166f20:
    // 0x166f20: 0xc79583b4  lwc1        $f21, -0x7C4C($gp)
    ctx->pc = 0x166f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_166f24:
    // 0x166f24: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x166f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166f28:
    // 0x166f28: 0xc79683b8  lwc1        $f22, -0x7C48($gp)
    ctx->pc = 0x166f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_166f2c:
    // 0x166f2c: 0xc79783bc  lwc1        $f23, -0x7C44($gp)
    ctx->pc = 0x166f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_166f30:
    // 0x166f30: 0xc06164c  jal         func_185930
label_166f34:
    if (ctx->pc == 0x166F34u) {
        ctx->pc = 0x166F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F30u;
        // 0x166f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F38u;
        goto label_166f38;
    }
    ctx->pc = 0x166F30u;
    SET_GPR_U32(ctx, 31, 0x166F38u);
    ctx->pc = 0x166F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F30u;
    // 0x166f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166F30u, 0x166F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F38u;
label_166f38:
    // 0x166f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f3c:
    // 0x166f3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166f40:
    // 0x166f40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166f44:
    // 0x166f44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x166f44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_166f48:
    // 0x166f48: 0xc069532  jal         func_1A54C8
label_166f4c:
    if (ctx->pc == 0x166F4Cu) {
        ctx->pc = 0x166F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F48u;
        // 0x166f4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F50u;
        goto label_166f50;
    }
    ctx->pc = 0x166F48u;
    SET_GPR_U32(ctx, 31, 0x166F50u);
    ctx->pc = 0x166F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F48u;
    // 0x166f4c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166F48u, 0x166F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F50u;
label_166f50:
    // 0x166f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f54:
    // 0x166f54: 0xc06164c  jal         func_185930
label_166f58:
    if (ctx->pc == 0x166F58u) {
        ctx->pc = 0x166F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F54u;
        // 0x166f58: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F5Cu;
        goto label_166f5c;
    }
    ctx->pc = 0x166F54u;
    SET_GPR_U32(ctx, 31, 0x166F5Cu);
    ctx->pc = 0x166F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F54u;
    // 0x166f58: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166F54u, 0x166F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F5Cu;
label_166f5c:
    // 0x166f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f60:
    // 0x166f60: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x166f60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_166f64:
    // 0x166f64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166f68:
    // 0x166f68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x166f68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_166f6c:
    // 0x166f6c: 0xc0694d2  jal         func_1A5348
label_166f70:
    if (ctx->pc == 0x166F70u) {
        ctx->pc = 0x166F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F6Cu;
        // 0x166f70: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F74u;
        goto label_166f74;
    }
    ctx->pc = 0x166F6Cu;
    SET_GPR_U32(ctx, 31, 0x166F74u);
    ctx->pc = 0x166F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F6Cu;
    // 0x166f70: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x166F6Cu, 0x166F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F74u;
label_166f74:
    // 0x166f74: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x166f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_166f78:
    // 0x166f78: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166f7c:
    // 0x166f7c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x166f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_166f80:
    // 0x166f80: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166f84:
    // 0x166f84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166f88:
    // 0x166f88: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x166f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166f8c:
    // 0x166f8c: 0xc06164c  jal         func_185930
label_166f90:
    if (ctx->pc == 0x166F90u) {
        ctx->pc = 0x166F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F8Cu;
        // 0x166f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166F94u;
        goto label_166f94;
    }
    ctx->pc = 0x166F8Cu;
    SET_GPR_U32(ctx, 31, 0x166F94u);
    ctx->pc = 0x166F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F8Cu;
    // 0x166f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166F8Cu, 0x166F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F94u;
label_166f94:
    // 0x166f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166f98:
    // 0x166f98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166f9c:
    // 0x166f9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166fa0:
    // 0x166fa0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x166fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_166fa4:
    // 0x166fa4: 0xc069532  jal         func_1A54C8
label_166fa8:
    if (ctx->pc == 0x166FA8u) {
        ctx->pc = 0x166FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FA4u;
        // 0x166fa8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FACu;
        goto label_166fac;
    }
    ctx->pc = 0x166FA4u;
    SET_GPR_U32(ctx, 31, 0x166FACu);
    ctx->pc = 0x166FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FA4u;
    // 0x166fa8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166FA4u, 0x166FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FACu;
label_166fac:
    // 0x166fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166fb0:
    // 0x166fb0: 0xc06164c  jal         func_185930
label_166fb4:
    if (ctx->pc == 0x166FB4u) {
        ctx->pc = 0x166FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FB0u;
        // 0x166fb4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FB8u;
        goto label_166fb8;
    }
    ctx->pc = 0x166FB0u;
    SET_GPR_U32(ctx, 31, 0x166FB8u);
    ctx->pc = 0x166FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FB0u;
    // 0x166fb4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166FB0u, 0x166FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FB8u;
label_166fb8:
    // 0x166fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166fbc:
    // 0x166fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166fc0:
    // 0x166fc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x166fc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_166fc4:
    // 0x166fc4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x166fc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_166fc8:
    // 0x166fc8: 0xc0694d2  jal         func_1A5348
label_166fcc:
    if (ctx->pc == 0x166FCCu) {
        ctx->pc = 0x166FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FC8u;
        // 0x166fcc: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FD0u;
        goto label_166fd0;
    }
    ctx->pc = 0x166FC8u;
    SET_GPR_U32(ctx, 31, 0x166FD0u);
    ctx->pc = 0x166FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166FC8u;
    // 0x166fcc: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x166FC8u, 0x166FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166FD0u;
label_166fd0:
    // 0x166fd0: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x166fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_166fd4:
    // 0x166fd4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x166fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_166fd8:
    // 0x166fd8: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_166fdc:
    if (ctx->pc == 0x166FDCu) {
        ctx->pc = 0x166FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FD8u;
        // 0x166fdc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FE0u;
        goto label_166fe0;
    }
    ctx->pc = 0x166FD8u;
    {
        const bool branch_taken_0x166fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FD8u;
        // 0x166fdc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fd8) {
            ctx->pc = 0x1673A8u;
            goto label_1673a8;
        }
    }
    ctx->pc = 0x166FE0u;
label_166fe0:
    // 0x166fe0: 0x8e701264  lw          $s0, 0x1264($s3)
    ctx->pc = 0x166fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4708)));
label_166fe4:
    // 0x166fe4: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_166fe8:
    if (ctx->pc == 0x166FE8u) {
        ctx->pc = 0x166FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FE4u;
        // 0x166fe8: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166FECu;
        goto label_166fec;
    }
    ctx->pc = 0x166FE4u;
    {
        const bool branch_taken_0x166fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x166fe4) {
            ctx->pc = 0x166FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166FE4u;
            // 0x166fe8: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167038u;
            goto label_167038;
        }
    }
    ctx->pc = 0x166FECu;
label_166fec:
    // 0x166fec: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x166fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_166ff0:
    // 0x166ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x166ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_166ff4:
    // 0x166ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x166ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166ff8:
    // 0x166ff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x166ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_166ffc:
    // 0x166ffc: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_167000:
    if (ctx->pc == 0x167000u) {
        ctx->pc = 0x167000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FFCu;
        // 0x167000: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167004u;
        goto label_167004;
    }
    ctx->pc = 0x166FFCu;
    {
        const bool branch_taken_0x166ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x166ffc) {
            ctx->pc = 0x167000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166FFCu;
            // 0x167000: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167038u;
            goto label_167038;
        }
    }
    ctx->pc = 0x167004u;
label_167004:
    // 0x167004: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x167004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_167008:
    // 0x167008: 0x260305f0  addiu       $v1, $s0, 0x5F0
    ctx->pc = 0x167008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
label_16700c:
    // 0x16700c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16700cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_167010:
    // 0x167010: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x167010u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_167014:
    // 0x167014: 0xc04c9a6  jal         func_132698
label_167018:
    if (ctx->pc == 0x167018u) {
        ctx->pc = 0x16701Cu;
        goto label_16701c;
    }
    ctx->pc = 0x167014u;
    SET_GPR_U32(ctx, 31, 0x16701Cu);
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x167014u, 0x16701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16701Cu;
label_16701c:
    // 0x16701c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16701cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167020:
    // 0x167020: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x167020u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_167024:
    // 0x167024: 0xc04c9d4  jal         func_132750
label_167028:
    if (ctx->pc == 0x167028u) {
        ctx->pc = 0x167028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167024u;
        // 0x167028: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16702Cu;
        goto label_16702c;
    }
    ctx->pc = 0x167024u;
    SET_GPR_U32(ctx, 31, 0x16702Cu);
    ctx->pc = 0x167028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167024u;
    // 0x167028: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x167024u, 0x16702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16702Cu;
label_16702c:
    // 0x16702c: 0xc04ca08  jal         func_132820
label_167030:
    if (ctx->pc == 0x167030u) {
        ctx->pc = 0x167030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16702Cu;
        // 0x167030: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167034u;
        goto label_167034;
    }
    ctx->pc = 0x16702Cu;
    SET_GPR_U32(ctx, 31, 0x167034u);
    ctx->pc = 0x167030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16702Cu;
    // 0x167030: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132820u, 0x16702Cu, 0x167034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167034u;
label_167034:
    // 0x167034: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x167034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_167038:
    // 0x167038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16703c:
    // 0x16703c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_167040:
    // 0x167040: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167044:
    // 0x167044: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167048:
    // 0x167048: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16704c:
    // 0x16704c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167050:
    // 0x167050: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167054:
    // 0x167054: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167058:
    // 0x167058: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16705c:
    // 0x16705c: 0x60f809  jalr        $v1
label_167060:
    if (ctx->pc == 0x167060u) {
        ctx->pc = 0x167060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16705Cu;
        // 0x167060: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167064u;
        goto label_167064;
    }
    ctx->pc = 0x16705Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167064u);
        ctx->pc = 0x167060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16705Cu;
        // 0x167060: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16705Cu, 0x167064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167064u;
label_167064:
    // 0x167064: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x167064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_167068:
    // 0x167068: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16706c:
    // 0x16706c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16706cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167070:
    // 0x167070: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167074:
    // 0x167074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167078:
    // 0x167078: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16707c:
    // 0x16707c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167080:
    // 0x167080: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167084:
    // 0x167084: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167088:
    // 0x167088: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16708c:
    // 0x16708c: 0x60f809  jalr        $v1
label_167090:
    if (ctx->pc == 0x167090u) {
        ctx->pc = 0x167090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16708Cu;
        // 0x167090: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167094u;
        goto label_167094;
    }
    ctx->pc = 0x16708Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167094u);
        ctx->pc = 0x167090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16708Cu;
        // 0x167090: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16708Cu, 0x167094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167094u;
label_167094:
    // 0x167094: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x167094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_167098:
    // 0x167098: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16709c:
    // 0x16709c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16709cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1670a0:
    // 0x1670a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1670a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1670a4:
    // 0x1670a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1670a8:
    // 0x1670a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1670a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1670ac:
    // 0x1670ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1670acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1670b0:
    // 0x1670b0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1670b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1670b4:
    // 0x1670b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1670b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1670b8:
    // 0x1670b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1670b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1670bc:
    // 0x1670bc: 0x60f809  jalr        $v1
label_1670c0:
    if (ctx->pc == 0x1670C0u) {
        ctx->pc = 0x1670C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670BCu;
        // 0x1670c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670C4u;
        goto label_1670c4;
    }
    ctx->pc = 0x1670BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1670C4u);
        ctx->pc = 0x1670C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670BCu;
        // 0x1670c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1670BCu, 0x1670C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1670C4u;
label_1670c4:
    // 0x1670c4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1670c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1670c8:
    // 0x1670c8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1670c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1670cc:
    // 0x1670cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1670ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1670d0:
    // 0x1670d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1670d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1670d4:
    // 0x1670d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1670d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1670d8:
    // 0x1670d8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1670d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1670dc:
    // 0x1670dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1670e0:
    // 0x1670e0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1670e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1670e4:
    // 0x1670e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1670e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1670e8:
    // 0x1670e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1670e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1670ec:
    // 0x1670ec: 0x60f809  jalr        $v1
label_1670f0:
    if (ctx->pc == 0x1670F0u) {
        ctx->pc = 0x1670F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670ECu;
        // 0x1670f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670F4u;
        goto label_1670f4;
    }
    ctx->pc = 0x1670ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1670F4u);
        ctx->pc = 0x1670F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670ECu;
        // 0x1670f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1670ECu, 0x1670F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1670F4u;
label_1670f4:
    // 0x1670f4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1670f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1670f8:
    // 0x1670f8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1670f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1670fc:
    // 0x1670fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1670fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167100:
    // 0x167100: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167104:
    // 0x167104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167108:
    // 0x167108: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16710c:
    // 0x16710c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167110:
    // 0x167110: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167114:
    // 0x167114: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167118:
    // 0x167118: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16711c:
    // 0x16711c: 0x60f809  jalr        $v1
label_167120:
    if (ctx->pc == 0x167120u) {
        ctx->pc = 0x167120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16711Cu;
        // 0x167120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167124u;
        goto label_167124;
    }
    ctx->pc = 0x16711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167124u);
        ctx->pc = 0x167120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16711Cu;
        // 0x167120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16711Cu, 0x167124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167124u;
label_167124:
    // 0x167124: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x167124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_167128:
    // 0x167128: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16712c:
    // 0x16712c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167130:
    // 0x167130: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167134:
    // 0x167134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167138:
    // 0x167138: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16713c:
    // 0x16713c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167140:
    // 0x167140: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167144:
    // 0x167144: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167148:
    // 0x167148: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16714c:
    // 0x16714c: 0x60f809  jalr        $v1
label_167150:
    if (ctx->pc == 0x167150u) {
        ctx->pc = 0x167150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16714Cu;
        // 0x167150: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167154u;
        goto label_167154;
    }
    ctx->pc = 0x16714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167154u);
        ctx->pc = 0x167150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16714Cu;
        // 0x167150: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16714Cu, 0x167154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167154u;
label_167154:
    // 0x167154: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x167154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_167158:
    // 0x167158: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16715c:
    // 0x16715c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167160:
    // 0x167160: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167164:
    // 0x167164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167168:
    // 0x167168: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16716c:
    // 0x16716c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167170:
    // 0x167170: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167174:
    // 0x167174: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167178:
    // 0x167178: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16717c:
    // 0x16717c: 0x60f809  jalr        $v1
label_167180:
    if (ctx->pc == 0x167180u) {
        ctx->pc = 0x167180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16717Cu;
        // 0x167180: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167184u;
        goto label_167184;
    }
    ctx->pc = 0x16717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167184u);
        ctx->pc = 0x167180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16717Cu;
        // 0x167180: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16717Cu, 0x167184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167184u;
label_167184:
    // 0x167184: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x167184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_167188:
    // 0x167188: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16718c:
    // 0x16718c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167190:
    // 0x167190: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167194:
    // 0x167194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167198:
    // 0x167198: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16719c:
    // 0x16719c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1671a0:
    // 0x1671a0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1671a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1671a4:
    // 0x1671a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1671a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1671a8:
    // 0x1671a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1671a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1671ac:
    // 0x1671ac: 0x60f809  jalr        $v1
label_1671b0:
    if (ctx->pc == 0x1671B0u) {
        ctx->pc = 0x1671B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671ACu;
        // 0x1671b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1671B4u;
        goto label_1671b4;
    }
    ctx->pc = 0x1671ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1671B4u);
        ctx->pc = 0x1671B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671ACu;
        // 0x1671b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1671ACu, 0x1671B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1671B4u;
label_1671b4:
    // 0x1671b4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1671b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1671b8:
    // 0x1671b8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1671b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1671bc:
    // 0x1671bc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1671bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1671c0:
    // 0x1671c0: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1671c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1671c4:
    // 0x1671c4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1671c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1671c8:
    // 0x1671c8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1671c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1671cc:
    // 0x1671cc: 0xc79583c0  lwc1        $f21, -0x7C40($gp)
    ctx->pc = 0x1671ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1671d0:
    // 0x1671d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1671d4:
    // 0x1671d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1671d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1671d8:
    // 0x1671d8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1671d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1671dc:
    // 0x1671dc: 0xc06164c  jal         func_185930
label_1671e0:
    if (ctx->pc == 0x1671E0u) {
        ctx->pc = 0x1671E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671DCu;
        // 0x1671e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1671E4u;
        goto label_1671e4;
    }
    ctx->pc = 0x1671DCu;
    SET_GPR_U32(ctx, 31, 0x1671E4u);
    ctx->pc = 0x1671E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671DCu;
    // 0x1671e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1671DCu, 0x1671E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671E4u;
label_1671e4:
    // 0x1671e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1671e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1671e8:
    // 0x1671e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1671e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1671ec:
    // 0x1671ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1671ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1671f0:
    // 0x1671f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1671f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1671f4:
    // 0x1671f4: 0xc069532  jal         func_1A54C8
label_1671f8:
    if (ctx->pc == 0x1671F8u) {
        ctx->pc = 0x1671F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671F4u;
        // 0x1671f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1671FCu;
        goto label_1671fc;
    }
    ctx->pc = 0x1671F4u;
    SET_GPR_U32(ctx, 31, 0x1671FCu);
    ctx->pc = 0x1671F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671F4u;
    // 0x1671f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1671F4u, 0x1671FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671FCu;
label_1671fc:
    // 0x1671fc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1671fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_167200:
    // 0x167200: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_167204:
    // 0x167204: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x167204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_167208:
    // 0x167208: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16720c:
    // 0x16720c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167210:
    // 0x167210: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167210u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_167214:
    // 0x167214: 0xc06164c  jal         func_185930
label_167218:
    if (ctx->pc == 0x167218u) {
        ctx->pc = 0x167218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167214u;
        // 0x167218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16721Cu;
        goto label_16721c;
    }
    ctx->pc = 0x167214u;
    SET_GPR_U32(ctx, 31, 0x16721Cu);
    ctx->pc = 0x167218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167214u;
    // 0x167218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167214u, 0x16721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16721Cu;
label_16721c:
    // 0x16721c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167220:
    // 0x167220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167224:
    // 0x167224: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x167224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167228:
    // 0x167228: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x167228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16722c:
    // 0x16722c: 0xc069532  jal         func_1A54C8
label_167230:
    if (ctx->pc == 0x167230u) {
        ctx->pc = 0x167230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16722Cu;
        // 0x167230: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167234u;
        goto label_167234;
    }
    ctx->pc = 0x16722Cu;
    SET_GPR_U32(ctx, 31, 0x167234u);
    ctx->pc = 0x167230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16722Cu;
    // 0x167230: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16722Cu, 0x167234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167234u;
label_167234:
    // 0x167234: 0x1000005a  b           . + 4 + (0x5A << 2)
label_167238:
    if (ctx->pc == 0x167238u) {
        ctx->pc = 0x167238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167234u;
        // 0x167238: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16723Cu;
        goto label_16723c;
    }
    ctx->pc = 0x167234u;
    {
        const bool branch_taken_0x167234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167234u;
        // 0x167238: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167234) {
            ctx->pc = 0x1673A0u;
            goto label_1673a0;
        }
    }
    ctx->pc = 0x16723Cu;
label_16723c:
    // 0x16723c: 0x0  nop
    ctx->pc = 0x16723cu;
    // NOP
label_167240:
    // 0x167240: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x167240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_167244:
    // 0x167244: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
label_167248:
    if (ctx->pc == 0x167248u) {
        ctx->pc = 0x167248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167244u;
        // 0x167248: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16724Cu;
        goto label_16724c;
    }
    ctx->pc = 0x167244u;
    {
        const bool branch_taken_0x167244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167244) {
            ctx->pc = 0x167248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167244u;
            // 0x167248: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16738Cu;
            goto label_16738c;
        }
    }
    ctx->pc = 0x16724Cu;
label_16724c:
    // 0x16724c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_167250:
    if (ctx->pc == 0x167250u) {
        ctx->pc = 0x167250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16724Cu;
        // 0x167250: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167254u;
        goto label_167254;
    }
    ctx->pc = 0x16724Cu;
    {
        const bool branch_taken_0x16724c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x167250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16724Cu;
        // 0x167250: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16724c) {
            ctx->pc = 0x1672B0u;
            goto label_1672b0;
        }
    }
    ctx->pc = 0x167254u;
label_167254:
    // 0x167254: 0x8e701264  lw          $s0, 0x1264($s3)
    ctx->pc = 0x167254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4708)));
label_167258:
    // 0x167258: 0x52000055  beql        $s0, $zero, . + 4 + (0x55 << 2)
label_16725c:
    if (ctx->pc == 0x16725Cu) {
        ctx->pc = 0x16725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167258u;
        // 0x16725c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167260u;
        goto label_167260;
    }
    ctx->pc = 0x167258u;
    {
        const bool branch_taken_0x167258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167258) {
            ctx->pc = 0x16725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167258u;
            // 0x16725c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1673B0u;
            goto label_1673b0;
        }
    }
    ctx->pc = 0x167260u;
label_167260:
    // 0x167260: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x167260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167264:
    // 0x167264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_167268:
    // 0x167268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16726c:
    // 0x16726c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16726cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167270:
    // 0x167270: 0x4502004f  bc1fl       . + 4 + (0x4F << 2)
label_167274:
    if (ctx->pc == 0x167274u) {
        ctx->pc = 0x167274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167270u;
        // 0x167274: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167278u;
        goto label_167278;
    }
    ctx->pc = 0x167270u;
    {
        const bool branch_taken_0x167270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167270) {
            ctx->pc = 0x167274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167270u;
            // 0x167274: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1673B0u;
            goto label_1673b0;
        }
    }
    ctx->pc = 0x167278u;
label_167278:
    // 0x167278: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x167278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16727c:
    // 0x16727c: 0x260305f0  addiu       $v1, $s0, 0x5F0
    ctx->pc = 0x16727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
label_167280:
    // 0x167280: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x167280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_167284:
    // 0x167284: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x167284u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_167288:
    // 0x167288: 0xc04c9a6  jal         func_132698
label_16728c:
    if (ctx->pc == 0x16728Cu) {
        ctx->pc = 0x167290u;
        goto label_167290;
    }
    ctx->pc = 0x167288u;
    SET_GPR_U32(ctx, 31, 0x167290u);
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x167288u, 0x167290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167290u;
label_167290:
    // 0x167290: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x167290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167294:
    // 0x167294: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x167294u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_167298:
    // 0x167298: 0xc04c9d4  jal         func_132750
label_16729c:
    if (ctx->pc == 0x16729Cu) {
        ctx->pc = 0x16729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167298u;
        // 0x16729c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1672A0u;
        goto label_1672a0;
    }
    ctx->pc = 0x167298u;
    SET_GPR_U32(ctx, 31, 0x1672A0u);
    ctx->pc = 0x16729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167298u;
    // 0x16729c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x167298u, 0x1672A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672A0u;
label_1672a0:
    // 0x1672a0: 0xc04ca08  jal         func_132820
label_1672a4:
    if (ctx->pc == 0x1672A4u) {
        ctx->pc = 0x1672A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672A0u;
        // 0x1672a4: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1672A8u;
        goto label_1672a8;
    }
    ctx->pc = 0x1672A0u;
    SET_GPR_U32(ctx, 31, 0x1672A8u);
    ctx->pc = 0x1672A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672A0u;
    // 0x1672a4: 0x92040575  lbu         $a0, 0x575($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132820u, 0x1672A0u, 0x1672A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672A8u;
label_1672a8:
    // 0x1672a8: 0x10000041  b           . + 4 + (0x41 << 2)
label_1672ac:
    if (ctx->pc == 0x1672ACu) {
        ctx->pc = 0x1672ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672A8u;
        // 0x1672ac: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1672B0u;
        goto label_1672b0;
    }
    ctx->pc = 0x1672A8u;
    {
        const bool branch_taken_0x1672a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672A8u;
        // 0x1672ac: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672a8) {
            ctx->pc = 0x1673B0u;
            goto label_1673b0;
        }
    }
    ctx->pc = 0x1672B0u;
label_1672b0:
    // 0x1672b0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1672b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1672b4:
    // 0x1672b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1672b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1672b8:
    // 0x1672b8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1672bc:
    // 0x1672bc: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1672bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1672c0:
    // 0x1672c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1672c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1672c4:
    // 0x1672c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1672c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1672c8:
    // 0x1672c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1672c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1672cc:
    // 0x1672cc: 0xc79583c4  lwc1        $f21, -0x7C3C($gp)
    ctx->pc = 0x1672ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1672d0:
    // 0x1672d0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1672d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1672d4:
    // 0x1672d4: 0xc79783c8  lwc1        $f23, -0x7C38($gp)
    ctx->pc = 0x1672d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1672d8:
    // 0x1672d8: 0xc06164c  jal         func_185930
label_1672dc:
    if (ctx->pc == 0x1672DCu) {
        ctx->pc = 0x1672DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672D8u;
        // 0x1672dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1672E0u;
        goto label_1672e0;
    }
    ctx->pc = 0x1672D8u;
    SET_GPR_U32(ctx, 31, 0x1672E0u);
    ctx->pc = 0x1672DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672D8u;
    // 0x1672dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1672D8u, 0x1672E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672E0u;
label_1672e0:
    // 0x1672e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1672e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1672e4:
    // 0x1672e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1672e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1672e8:
    // 0x1672e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1672e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1672ec:
    // 0x1672ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1672ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1672f0:
    // 0x1672f0: 0xc069532  jal         func_1A54C8
label_1672f4:
    if (ctx->pc == 0x1672F4u) {
        ctx->pc = 0x1672F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672F0u;
        // 0x1672f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1672F8u;
        goto label_1672f8;
    }
    ctx->pc = 0x1672F0u;
    SET_GPR_U32(ctx, 31, 0x1672F8u);
    ctx->pc = 0x1672F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672F0u;
    // 0x1672f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1672F0u, 0x1672F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672F8u;
label_1672f8:
    // 0x1672f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1672f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1672fc:
    // 0x1672fc: 0xc06164c  jal         func_185930
label_167300:
    if (ctx->pc == 0x167300u) {
        ctx->pc = 0x167300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672FCu;
        // 0x167300: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167304u;
        goto label_167304;
    }
    ctx->pc = 0x1672FCu;
    SET_GPR_U32(ctx, 31, 0x167304u);
    ctx->pc = 0x167300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672FCu;
    // 0x167300: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1672FCu, 0x167304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167304u;
label_167304:
    // 0x167304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167308:
    // 0x167308: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x167308u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_16730c:
    // 0x16730c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16730cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167310:
    // 0x167310: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_167314:
    // 0x167314: 0xc0694d2  jal         func_1A5348
label_167318:
    if (ctx->pc == 0x167318u) {
        ctx->pc = 0x167318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167314u;
        // 0x167318: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16731Cu;
        goto label_16731c;
    }
    ctx->pc = 0x167314u;
    SET_GPR_U32(ctx, 31, 0x16731Cu);
    ctx->pc = 0x167318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167314u;
    // 0x167318: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x167314u, 0x16731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16731Cu;
label_16731c:
    // 0x16731c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x16731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_167320:
    // 0x167320: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_167324:
    // 0x167324: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x167324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_167328:
    // 0x167328: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16732c:
    // 0x16732c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167330:
    // 0x167330: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_167334:
    // 0x167334: 0xc06164c  jal         func_185930
label_167338:
    if (ctx->pc == 0x167338u) {
        ctx->pc = 0x167338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167334u;
        // 0x167338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16733Cu;
        goto label_16733c;
    }
    ctx->pc = 0x167334u;
    SET_GPR_U32(ctx, 31, 0x16733Cu);
    ctx->pc = 0x167338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167334u;
    // 0x167338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167334u, 0x16733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16733Cu;
label_16733c:
    // 0x16733c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167340:
    // 0x167340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167344:
    // 0x167344: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x167344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167348:
    // 0x167348: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x167348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16734c:
    // 0x16734c: 0xc069532  jal         func_1A54C8
label_167350:
    if (ctx->pc == 0x167350u) {
        ctx->pc = 0x167350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16734Cu;
        // 0x167350: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167354u;
        goto label_167354;
    }
    ctx->pc = 0x16734Cu;
    SET_GPR_U32(ctx, 31, 0x167354u);
    ctx->pc = 0x167350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16734Cu;
    // 0x167350: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16734Cu, 0x167354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167354u;
label_167354:
    // 0x167354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167358:
    // 0x167358: 0xc06164c  jal         func_185930
label_16735c:
    if (ctx->pc == 0x16735Cu) {
        ctx->pc = 0x16735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167358u;
        // 0x16735c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167360u;
        goto label_167360;
    }
    ctx->pc = 0x167358u;
    SET_GPR_U32(ctx, 31, 0x167360u);
    ctx->pc = 0x16735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167358u;
    // 0x16735c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167358u, 0x167360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167360u;
label_167360:
    // 0x167360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167364:
    // 0x167364: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_167368:
    // 0x167368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16736c:
    // 0x16736c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x16736cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_167370:
    // 0x167370: 0xc0694d2  jal         func_1A5348
label_167374:
    if (ctx->pc == 0x167374u) {
        ctx->pc = 0x167374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167370u;
        // 0x167374: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167378u;
        goto label_167378;
    }
    ctx->pc = 0x167370u;
    SET_GPR_U32(ctx, 31, 0x167378u);
    ctx->pc = 0x167374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167370u;
    // 0x167374: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x167370u, 0x167378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167378u;
label_167378:
    // 0x167378: 0x10000009  b           . + 4 + (0x9 << 2)
label_16737c:
    if (ctx->pc == 0x16737Cu) {
        ctx->pc = 0x16737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167378u;
        // 0x16737c: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167380u;
        goto label_167380;
    }
    ctx->pc = 0x167378u;
    {
        const bool branch_taken_0x167378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167378u;
        // 0x16737c: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167378) {
            ctx->pc = 0x1673A0u;
            goto label_1673a0;
        }
    }
    ctx->pc = 0x167380u;
label_167380:
    // 0x167380: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x167380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_167384:
    // 0x167384: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_167388:
    if (ctx->pc == 0x167388u) {
        ctx->pc = 0x167388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167384u;
        // 0x167388: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16738Cu;
        goto label_16738c;
    }
    ctx->pc = 0x167384u;
    {
        const bool branch_taken_0x167384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167384u;
        // 0x167388: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167384) {
            ctx->pc = 0x167398u;
            goto label_167398;
        }
    }
    ctx->pc = 0x16738Cu;
label_16738c:
    // 0x16738c: 0x10000007  b           . + 4 + (0x7 << 2)
label_167390:
    if (ctx->pc == 0x167390u) {
        ctx->pc = 0x167390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16738Cu;
        // 0x167390: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167394u;
        goto label_167394;
    }
    ctx->pc = 0x16738Cu;
    {
        const bool branch_taken_0x16738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16738Cu;
        // 0x167390: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16738c) {
            ctx->pc = 0x1673ACu;
            goto label_1673ac;
        }
    }
    ctx->pc = 0x167394u;
label_167394:
    // 0x167394: 0x0  nop
    ctx->pc = 0x167394u;
    // NOP
label_167398:
    // 0x167398: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_16739c:
    if (ctx->pc == 0x16739Cu) {
        ctx->pc = 0x16739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167398u;
        // 0x16739c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673A0u;
        goto label_1673a0;
    }
    ctx->pc = 0x167398u;
    {
        const bool branch_taken_0x167398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167398u;
        // 0x16739c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167398) {
            ctx->pc = 0x1673B0u;
            goto label_1673b0;
        }
    }
    ctx->pc = 0x1673A0u;
label_1673a0:
    // 0x1673a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1673a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1673a4:
    // 0x1673a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1673a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1673a8:
    // 0x1673a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1673a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1673ac:
    // 0x1673ac: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1673acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1673b0:
    // 0x1673b0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1673b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1673b4:
    // 0x1673b4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1673b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1673b8:
    // 0x1673b8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1673b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1673bc:
    // 0x1673bc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1673bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1673c0:
    // 0x1673c0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1673c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1673c4:
    // 0x1673c4: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x1673c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1673c8:
    // 0x1673c8: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x1673c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1673cc:
    // 0x1673cc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1673ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1673d0:
    // 0x1673d0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1673d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1673d4:
    // 0x1673d4: 0x3e00008  jr          $ra
label_1673d8:
    if (ctx->pc == 0x1673D8u) {
        ctx->pc = 0x1673D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673D4u;
        // 0x1673d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673DCu;
        goto label_fallthrough_0x1673d4;
    }
    ctx->pc = 0x1673D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673D4u;
        // 0x1673d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1673D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1673d4:
    ctx->pc = 0x1673DCu;
}

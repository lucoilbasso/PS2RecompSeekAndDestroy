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

// Function: Cmd_TANK_EXTRA_Entry__FP15BsSCDEntControl
// Address: 0x154710 - 0x155338
void Cmd_TANK_EXTRA_Entry__FP15BsSCDEntControl_0x154710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_EXTRA_Entry__FP15BsSCDEntControl_0x154710");
#endif

    switch (ctx->pc) {
        case 0x154710u: goto label_154710;
        case 0x154714u: goto label_154714;
        case 0x154718u: goto label_154718;
        case 0x15471cu: goto label_15471c;
        case 0x154720u: goto label_154720;
        case 0x154724u: goto label_154724;
        case 0x154728u: goto label_154728;
        case 0x15472cu: goto label_15472c;
        case 0x154730u: goto label_154730;
        case 0x154734u: goto label_154734;
        case 0x154738u: goto label_154738;
        case 0x15473cu: goto label_15473c;
        case 0x154740u: goto label_154740;
        case 0x154744u: goto label_154744;
        case 0x154748u: goto label_154748;
        case 0x15474cu: goto label_15474c;
        case 0x154750u: goto label_154750;
        case 0x154754u: goto label_154754;
        case 0x154758u: goto label_154758;
        case 0x15475cu: goto label_15475c;
        case 0x154760u: goto label_154760;
        case 0x154764u: goto label_154764;
        case 0x154768u: goto label_154768;
        case 0x15476cu: goto label_15476c;
        case 0x154770u: goto label_154770;
        case 0x154774u: goto label_154774;
        case 0x154778u: goto label_154778;
        case 0x15477cu: goto label_15477c;
        case 0x154780u: goto label_154780;
        case 0x154784u: goto label_154784;
        case 0x154788u: goto label_154788;
        case 0x15478cu: goto label_15478c;
        case 0x154790u: goto label_154790;
        case 0x154794u: goto label_154794;
        case 0x154798u: goto label_154798;
        case 0x15479cu: goto label_15479c;
        case 0x1547a0u: goto label_1547a0;
        case 0x1547a4u: goto label_1547a4;
        case 0x1547a8u: goto label_1547a8;
        case 0x1547acu: goto label_1547ac;
        case 0x1547b0u: goto label_1547b0;
        case 0x1547b4u: goto label_1547b4;
        case 0x1547b8u: goto label_1547b8;
        case 0x1547bcu: goto label_1547bc;
        case 0x1547c0u: goto label_1547c0;
        case 0x1547c4u: goto label_1547c4;
        case 0x1547c8u: goto label_1547c8;
        case 0x1547ccu: goto label_1547cc;
        case 0x1547d0u: goto label_1547d0;
        case 0x1547d4u: goto label_1547d4;
        case 0x1547d8u: goto label_1547d8;
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e0u: goto label_1547e0;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547e8u: goto label_1547e8;
        case 0x1547ecu: goto label_1547ec;
        case 0x1547f0u: goto label_1547f0;
        case 0x1547f4u: goto label_1547f4;
        case 0x1547f8u: goto label_1547f8;
        case 0x1547fcu: goto label_1547fc;
        case 0x154800u: goto label_154800;
        case 0x154804u: goto label_154804;
        case 0x154808u: goto label_154808;
        case 0x15480cu: goto label_15480c;
        case 0x154810u: goto label_154810;
        case 0x154814u: goto label_154814;
        case 0x154818u: goto label_154818;
        case 0x15481cu: goto label_15481c;
        case 0x154820u: goto label_154820;
        case 0x154824u: goto label_154824;
        case 0x154828u: goto label_154828;
        case 0x15482cu: goto label_15482c;
        case 0x154830u: goto label_154830;
        case 0x154834u: goto label_154834;
        case 0x154838u: goto label_154838;
        case 0x15483cu: goto label_15483c;
        case 0x154840u: goto label_154840;
        case 0x154844u: goto label_154844;
        case 0x154848u: goto label_154848;
        case 0x15484cu: goto label_15484c;
        case 0x154850u: goto label_154850;
        case 0x154854u: goto label_154854;
        case 0x154858u: goto label_154858;
        case 0x15485cu: goto label_15485c;
        case 0x154860u: goto label_154860;
        case 0x154864u: goto label_154864;
        case 0x154868u: goto label_154868;
        case 0x15486cu: goto label_15486c;
        case 0x154870u: goto label_154870;
        case 0x154874u: goto label_154874;
        case 0x154878u: goto label_154878;
        case 0x15487cu: goto label_15487c;
        case 0x154880u: goto label_154880;
        case 0x154884u: goto label_154884;
        case 0x154888u: goto label_154888;
        case 0x15488cu: goto label_15488c;
        case 0x154890u: goto label_154890;
        case 0x154894u: goto label_154894;
        case 0x154898u: goto label_154898;
        case 0x15489cu: goto label_15489c;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548a4u: goto label_1548a4;
        case 0x1548a8u: goto label_1548a8;
        case 0x1548acu: goto label_1548ac;
        case 0x1548b0u: goto label_1548b0;
        case 0x1548b4u: goto label_1548b4;
        case 0x1548b8u: goto label_1548b8;
        case 0x1548bcu: goto label_1548bc;
        case 0x1548c0u: goto label_1548c0;
        case 0x1548c4u: goto label_1548c4;
        case 0x1548c8u: goto label_1548c8;
        case 0x1548ccu: goto label_1548cc;
        case 0x1548d0u: goto label_1548d0;
        case 0x1548d4u: goto label_1548d4;
        case 0x1548d8u: goto label_1548d8;
        case 0x1548dcu: goto label_1548dc;
        case 0x1548e0u: goto label_1548e0;
        case 0x1548e4u: goto label_1548e4;
        case 0x1548e8u: goto label_1548e8;
        case 0x1548ecu: goto label_1548ec;
        case 0x1548f0u: goto label_1548f0;
        case 0x1548f4u: goto label_1548f4;
        case 0x1548f8u: goto label_1548f8;
        case 0x1548fcu: goto label_1548fc;
        case 0x154900u: goto label_154900;
        case 0x154904u: goto label_154904;
        case 0x154908u: goto label_154908;
        case 0x15490cu: goto label_15490c;
        case 0x154910u: goto label_154910;
        case 0x154914u: goto label_154914;
        case 0x154918u: goto label_154918;
        case 0x15491cu: goto label_15491c;
        case 0x154920u: goto label_154920;
        case 0x154924u: goto label_154924;
        case 0x154928u: goto label_154928;
        case 0x15492cu: goto label_15492c;
        case 0x154930u: goto label_154930;
        case 0x154934u: goto label_154934;
        case 0x154938u: goto label_154938;
        case 0x15493cu: goto label_15493c;
        case 0x154940u: goto label_154940;
        case 0x154944u: goto label_154944;
        case 0x154948u: goto label_154948;
        case 0x15494cu: goto label_15494c;
        case 0x154950u: goto label_154950;
        case 0x154954u: goto label_154954;
        case 0x154958u: goto label_154958;
        case 0x15495cu: goto label_15495c;
        case 0x154960u: goto label_154960;
        case 0x154964u: goto label_154964;
        case 0x154968u: goto label_154968;
        case 0x15496cu: goto label_15496c;
        case 0x154970u: goto label_154970;
        case 0x154974u: goto label_154974;
        case 0x154978u: goto label_154978;
        case 0x15497cu: goto label_15497c;
        case 0x154980u: goto label_154980;
        case 0x154984u: goto label_154984;
        case 0x154988u: goto label_154988;
        case 0x15498cu: goto label_15498c;
        case 0x154990u: goto label_154990;
        case 0x154994u: goto label_154994;
        case 0x154998u: goto label_154998;
        case 0x15499cu: goto label_15499c;
        case 0x1549a0u: goto label_1549a0;
        case 0x1549a4u: goto label_1549a4;
        case 0x1549a8u: goto label_1549a8;
        case 0x1549acu: goto label_1549ac;
        case 0x1549b0u: goto label_1549b0;
        case 0x1549b4u: goto label_1549b4;
        case 0x1549b8u: goto label_1549b8;
        case 0x1549bcu: goto label_1549bc;
        case 0x1549c0u: goto label_1549c0;
        case 0x1549c4u: goto label_1549c4;
        case 0x1549c8u: goto label_1549c8;
        case 0x1549ccu: goto label_1549cc;
        case 0x1549d0u: goto label_1549d0;
        case 0x1549d4u: goto label_1549d4;
        case 0x1549d8u: goto label_1549d8;
        case 0x1549dcu: goto label_1549dc;
        case 0x1549e0u: goto label_1549e0;
        case 0x1549e4u: goto label_1549e4;
        case 0x1549e8u: goto label_1549e8;
        case 0x1549ecu: goto label_1549ec;
        case 0x1549f0u: goto label_1549f0;
        case 0x1549f4u: goto label_1549f4;
        case 0x1549f8u: goto label_1549f8;
        case 0x1549fcu: goto label_1549fc;
        case 0x154a00u: goto label_154a00;
        case 0x154a04u: goto label_154a04;
        case 0x154a08u: goto label_154a08;
        case 0x154a0cu: goto label_154a0c;
        case 0x154a10u: goto label_154a10;
        case 0x154a14u: goto label_154a14;
        case 0x154a18u: goto label_154a18;
        case 0x154a1cu: goto label_154a1c;
        case 0x154a20u: goto label_154a20;
        case 0x154a24u: goto label_154a24;
        case 0x154a28u: goto label_154a28;
        case 0x154a2cu: goto label_154a2c;
        case 0x154a30u: goto label_154a30;
        case 0x154a34u: goto label_154a34;
        case 0x154a38u: goto label_154a38;
        case 0x154a3cu: goto label_154a3c;
        case 0x154a40u: goto label_154a40;
        case 0x154a44u: goto label_154a44;
        case 0x154a48u: goto label_154a48;
        case 0x154a4cu: goto label_154a4c;
        case 0x154a50u: goto label_154a50;
        case 0x154a54u: goto label_154a54;
        case 0x154a58u: goto label_154a58;
        case 0x154a5cu: goto label_154a5c;
        case 0x154a60u: goto label_154a60;
        case 0x154a64u: goto label_154a64;
        case 0x154a68u: goto label_154a68;
        case 0x154a6cu: goto label_154a6c;
        case 0x154a70u: goto label_154a70;
        case 0x154a74u: goto label_154a74;
        case 0x154a78u: goto label_154a78;
        case 0x154a7cu: goto label_154a7c;
        case 0x154a80u: goto label_154a80;
        case 0x154a84u: goto label_154a84;
        case 0x154a88u: goto label_154a88;
        case 0x154a8cu: goto label_154a8c;
        case 0x154a90u: goto label_154a90;
        case 0x154a94u: goto label_154a94;
        case 0x154a98u: goto label_154a98;
        case 0x154a9cu: goto label_154a9c;
        case 0x154aa0u: goto label_154aa0;
        case 0x154aa4u: goto label_154aa4;
        case 0x154aa8u: goto label_154aa8;
        case 0x154aacu: goto label_154aac;
        case 0x154ab0u: goto label_154ab0;
        case 0x154ab4u: goto label_154ab4;
        case 0x154ab8u: goto label_154ab8;
        case 0x154abcu: goto label_154abc;
        case 0x154ac0u: goto label_154ac0;
        case 0x154ac4u: goto label_154ac4;
        case 0x154ac8u: goto label_154ac8;
        case 0x154accu: goto label_154acc;
        case 0x154ad0u: goto label_154ad0;
        case 0x154ad4u: goto label_154ad4;
        case 0x154ad8u: goto label_154ad8;
        case 0x154adcu: goto label_154adc;
        case 0x154ae0u: goto label_154ae0;
        case 0x154ae4u: goto label_154ae4;
        case 0x154ae8u: goto label_154ae8;
        case 0x154aecu: goto label_154aec;
        case 0x154af0u: goto label_154af0;
        case 0x154af4u: goto label_154af4;
        case 0x154af8u: goto label_154af8;
        case 0x154afcu: goto label_154afc;
        case 0x154b00u: goto label_154b00;
        case 0x154b04u: goto label_154b04;
        case 0x154b08u: goto label_154b08;
        case 0x154b0cu: goto label_154b0c;
        case 0x154b10u: goto label_154b10;
        case 0x154b14u: goto label_154b14;
        case 0x154b18u: goto label_154b18;
        case 0x154b1cu: goto label_154b1c;
        case 0x154b20u: goto label_154b20;
        case 0x154b24u: goto label_154b24;
        case 0x154b28u: goto label_154b28;
        case 0x154b2cu: goto label_154b2c;
        case 0x154b30u: goto label_154b30;
        case 0x154b34u: goto label_154b34;
        case 0x154b38u: goto label_154b38;
        case 0x154b3cu: goto label_154b3c;
        case 0x154b40u: goto label_154b40;
        case 0x154b44u: goto label_154b44;
        case 0x154b48u: goto label_154b48;
        case 0x154b4cu: goto label_154b4c;
        case 0x154b50u: goto label_154b50;
        case 0x154b54u: goto label_154b54;
        case 0x154b58u: goto label_154b58;
        case 0x154b5cu: goto label_154b5c;
        case 0x154b60u: goto label_154b60;
        case 0x154b64u: goto label_154b64;
        case 0x154b68u: goto label_154b68;
        case 0x154b6cu: goto label_154b6c;
        case 0x154b70u: goto label_154b70;
        case 0x154b74u: goto label_154b74;
        case 0x154b78u: goto label_154b78;
        case 0x154b7cu: goto label_154b7c;
        case 0x154b80u: goto label_154b80;
        case 0x154b84u: goto label_154b84;
        case 0x154b88u: goto label_154b88;
        case 0x154b8cu: goto label_154b8c;
        case 0x154b90u: goto label_154b90;
        case 0x154b94u: goto label_154b94;
        case 0x154b98u: goto label_154b98;
        case 0x154b9cu: goto label_154b9c;
        case 0x154ba0u: goto label_154ba0;
        case 0x154ba4u: goto label_154ba4;
        case 0x154ba8u: goto label_154ba8;
        case 0x154bacu: goto label_154bac;
        case 0x154bb0u: goto label_154bb0;
        case 0x154bb4u: goto label_154bb4;
        case 0x154bb8u: goto label_154bb8;
        case 0x154bbcu: goto label_154bbc;
        case 0x154bc0u: goto label_154bc0;
        case 0x154bc4u: goto label_154bc4;
        case 0x154bc8u: goto label_154bc8;
        case 0x154bccu: goto label_154bcc;
        case 0x154bd0u: goto label_154bd0;
        case 0x154bd4u: goto label_154bd4;
        case 0x154bd8u: goto label_154bd8;
        case 0x154bdcu: goto label_154bdc;
        case 0x154be0u: goto label_154be0;
        case 0x154be4u: goto label_154be4;
        case 0x154be8u: goto label_154be8;
        case 0x154becu: goto label_154bec;
        case 0x154bf0u: goto label_154bf0;
        case 0x154bf4u: goto label_154bf4;
        case 0x154bf8u: goto label_154bf8;
        case 0x154bfcu: goto label_154bfc;
        case 0x154c00u: goto label_154c00;
        case 0x154c04u: goto label_154c04;
        case 0x154c08u: goto label_154c08;
        case 0x154c0cu: goto label_154c0c;
        case 0x154c10u: goto label_154c10;
        case 0x154c14u: goto label_154c14;
        case 0x154c18u: goto label_154c18;
        case 0x154c1cu: goto label_154c1c;
        case 0x154c20u: goto label_154c20;
        case 0x154c24u: goto label_154c24;
        case 0x154c28u: goto label_154c28;
        case 0x154c2cu: goto label_154c2c;
        case 0x154c30u: goto label_154c30;
        case 0x154c34u: goto label_154c34;
        case 0x154c38u: goto label_154c38;
        case 0x154c3cu: goto label_154c3c;
        case 0x154c40u: goto label_154c40;
        case 0x154c44u: goto label_154c44;
        case 0x154c48u: goto label_154c48;
        case 0x154c4cu: goto label_154c4c;
        case 0x154c50u: goto label_154c50;
        case 0x154c54u: goto label_154c54;
        case 0x154c58u: goto label_154c58;
        case 0x154c5cu: goto label_154c5c;
        case 0x154c60u: goto label_154c60;
        case 0x154c64u: goto label_154c64;
        case 0x154c68u: goto label_154c68;
        case 0x154c6cu: goto label_154c6c;
        case 0x154c70u: goto label_154c70;
        case 0x154c74u: goto label_154c74;
        case 0x154c78u: goto label_154c78;
        case 0x154c7cu: goto label_154c7c;
        case 0x154c80u: goto label_154c80;
        case 0x154c84u: goto label_154c84;
        case 0x154c88u: goto label_154c88;
        case 0x154c8cu: goto label_154c8c;
        case 0x154c90u: goto label_154c90;
        case 0x154c94u: goto label_154c94;
        case 0x154c98u: goto label_154c98;
        case 0x154c9cu: goto label_154c9c;
        case 0x154ca0u: goto label_154ca0;
        case 0x154ca4u: goto label_154ca4;
        case 0x154ca8u: goto label_154ca8;
        case 0x154cacu: goto label_154cac;
        case 0x154cb0u: goto label_154cb0;
        case 0x154cb4u: goto label_154cb4;
        case 0x154cb8u: goto label_154cb8;
        case 0x154cbcu: goto label_154cbc;
        case 0x154cc0u: goto label_154cc0;
        case 0x154cc4u: goto label_154cc4;
        case 0x154cc8u: goto label_154cc8;
        case 0x154cccu: goto label_154ccc;
        case 0x154cd0u: goto label_154cd0;
        case 0x154cd4u: goto label_154cd4;
        case 0x154cd8u: goto label_154cd8;
        case 0x154cdcu: goto label_154cdc;
        case 0x154ce0u: goto label_154ce0;
        case 0x154ce4u: goto label_154ce4;
        case 0x154ce8u: goto label_154ce8;
        case 0x154cecu: goto label_154cec;
        case 0x154cf0u: goto label_154cf0;
        case 0x154cf4u: goto label_154cf4;
        case 0x154cf8u: goto label_154cf8;
        case 0x154cfcu: goto label_154cfc;
        case 0x154d00u: goto label_154d00;
        case 0x154d04u: goto label_154d04;
        case 0x154d08u: goto label_154d08;
        case 0x154d0cu: goto label_154d0c;
        case 0x154d10u: goto label_154d10;
        case 0x154d14u: goto label_154d14;
        case 0x154d18u: goto label_154d18;
        case 0x154d1cu: goto label_154d1c;
        case 0x154d20u: goto label_154d20;
        case 0x154d24u: goto label_154d24;
        case 0x154d28u: goto label_154d28;
        case 0x154d2cu: goto label_154d2c;
        case 0x154d30u: goto label_154d30;
        case 0x154d34u: goto label_154d34;
        case 0x154d38u: goto label_154d38;
        case 0x154d3cu: goto label_154d3c;
        case 0x154d40u: goto label_154d40;
        case 0x154d44u: goto label_154d44;
        case 0x154d48u: goto label_154d48;
        case 0x154d4cu: goto label_154d4c;
        case 0x154d50u: goto label_154d50;
        case 0x154d54u: goto label_154d54;
        case 0x154d58u: goto label_154d58;
        case 0x154d5cu: goto label_154d5c;
        case 0x154d60u: goto label_154d60;
        case 0x154d64u: goto label_154d64;
        case 0x154d68u: goto label_154d68;
        case 0x154d6cu: goto label_154d6c;
        case 0x154d70u: goto label_154d70;
        case 0x154d74u: goto label_154d74;
        case 0x154d78u: goto label_154d78;
        case 0x154d7cu: goto label_154d7c;
        case 0x154d80u: goto label_154d80;
        case 0x154d84u: goto label_154d84;
        case 0x154d88u: goto label_154d88;
        case 0x154d8cu: goto label_154d8c;
        case 0x154d90u: goto label_154d90;
        case 0x154d94u: goto label_154d94;
        case 0x154d98u: goto label_154d98;
        case 0x154d9cu: goto label_154d9c;
        case 0x154da0u: goto label_154da0;
        case 0x154da4u: goto label_154da4;
        case 0x154da8u: goto label_154da8;
        case 0x154dacu: goto label_154dac;
        case 0x154db0u: goto label_154db0;
        case 0x154db4u: goto label_154db4;
        case 0x154db8u: goto label_154db8;
        case 0x154dbcu: goto label_154dbc;
        case 0x154dc0u: goto label_154dc0;
        case 0x154dc4u: goto label_154dc4;
        case 0x154dc8u: goto label_154dc8;
        case 0x154dccu: goto label_154dcc;
        case 0x154dd0u: goto label_154dd0;
        case 0x154dd4u: goto label_154dd4;
        case 0x154dd8u: goto label_154dd8;
        case 0x154ddcu: goto label_154ddc;
        case 0x154de0u: goto label_154de0;
        case 0x154de4u: goto label_154de4;
        case 0x154de8u: goto label_154de8;
        case 0x154decu: goto label_154dec;
        case 0x154df0u: goto label_154df0;
        case 0x154df4u: goto label_154df4;
        case 0x154df8u: goto label_154df8;
        case 0x154dfcu: goto label_154dfc;
        case 0x154e00u: goto label_154e00;
        case 0x154e04u: goto label_154e04;
        case 0x154e08u: goto label_154e08;
        case 0x154e0cu: goto label_154e0c;
        case 0x154e10u: goto label_154e10;
        case 0x154e14u: goto label_154e14;
        case 0x154e18u: goto label_154e18;
        case 0x154e1cu: goto label_154e1c;
        case 0x154e20u: goto label_154e20;
        case 0x154e24u: goto label_154e24;
        case 0x154e28u: goto label_154e28;
        case 0x154e2cu: goto label_154e2c;
        case 0x154e30u: goto label_154e30;
        case 0x154e34u: goto label_154e34;
        case 0x154e38u: goto label_154e38;
        case 0x154e3cu: goto label_154e3c;
        case 0x154e40u: goto label_154e40;
        case 0x154e44u: goto label_154e44;
        case 0x154e48u: goto label_154e48;
        case 0x154e4cu: goto label_154e4c;
        case 0x154e50u: goto label_154e50;
        case 0x154e54u: goto label_154e54;
        case 0x154e58u: goto label_154e58;
        case 0x154e5cu: goto label_154e5c;
        case 0x154e60u: goto label_154e60;
        case 0x154e64u: goto label_154e64;
        case 0x154e68u: goto label_154e68;
        case 0x154e6cu: goto label_154e6c;
        case 0x154e70u: goto label_154e70;
        case 0x154e74u: goto label_154e74;
        case 0x154e78u: goto label_154e78;
        case 0x154e7cu: goto label_154e7c;
        case 0x154e80u: goto label_154e80;
        case 0x154e84u: goto label_154e84;
        case 0x154e88u: goto label_154e88;
        case 0x154e8cu: goto label_154e8c;
        case 0x154e90u: goto label_154e90;
        case 0x154e94u: goto label_154e94;
        case 0x154e98u: goto label_154e98;
        case 0x154e9cu: goto label_154e9c;
        case 0x154ea0u: goto label_154ea0;
        case 0x154ea4u: goto label_154ea4;
        case 0x154ea8u: goto label_154ea8;
        case 0x154eacu: goto label_154eac;
        case 0x154eb0u: goto label_154eb0;
        case 0x154eb4u: goto label_154eb4;
        case 0x154eb8u: goto label_154eb8;
        case 0x154ebcu: goto label_154ebc;
        case 0x154ec0u: goto label_154ec0;
        case 0x154ec4u: goto label_154ec4;
        case 0x154ec8u: goto label_154ec8;
        case 0x154eccu: goto label_154ecc;
        case 0x154ed0u: goto label_154ed0;
        case 0x154ed4u: goto label_154ed4;
        case 0x154ed8u: goto label_154ed8;
        case 0x154edcu: goto label_154edc;
        case 0x154ee0u: goto label_154ee0;
        case 0x154ee4u: goto label_154ee4;
        case 0x154ee8u: goto label_154ee8;
        case 0x154eecu: goto label_154eec;
        case 0x154ef0u: goto label_154ef0;
        case 0x154ef4u: goto label_154ef4;
        case 0x154ef8u: goto label_154ef8;
        case 0x154efcu: goto label_154efc;
        case 0x154f00u: goto label_154f00;
        case 0x154f04u: goto label_154f04;
        case 0x154f08u: goto label_154f08;
        case 0x154f0cu: goto label_154f0c;
        case 0x154f10u: goto label_154f10;
        case 0x154f14u: goto label_154f14;
        case 0x154f18u: goto label_154f18;
        case 0x154f1cu: goto label_154f1c;
        case 0x154f20u: goto label_154f20;
        case 0x154f24u: goto label_154f24;
        case 0x154f28u: goto label_154f28;
        case 0x154f2cu: goto label_154f2c;
        case 0x154f30u: goto label_154f30;
        case 0x154f34u: goto label_154f34;
        case 0x154f38u: goto label_154f38;
        case 0x154f3cu: goto label_154f3c;
        case 0x154f40u: goto label_154f40;
        case 0x154f44u: goto label_154f44;
        case 0x154f48u: goto label_154f48;
        case 0x154f4cu: goto label_154f4c;
        case 0x154f50u: goto label_154f50;
        case 0x154f54u: goto label_154f54;
        case 0x154f58u: goto label_154f58;
        case 0x154f5cu: goto label_154f5c;
        case 0x154f60u: goto label_154f60;
        case 0x154f64u: goto label_154f64;
        case 0x154f68u: goto label_154f68;
        case 0x154f6cu: goto label_154f6c;
        case 0x154f70u: goto label_154f70;
        case 0x154f74u: goto label_154f74;
        case 0x154f78u: goto label_154f78;
        case 0x154f7cu: goto label_154f7c;
        case 0x154f80u: goto label_154f80;
        case 0x154f84u: goto label_154f84;
        case 0x154f88u: goto label_154f88;
        case 0x154f8cu: goto label_154f8c;
        case 0x154f90u: goto label_154f90;
        case 0x154f94u: goto label_154f94;
        case 0x154f98u: goto label_154f98;
        case 0x154f9cu: goto label_154f9c;
        case 0x154fa0u: goto label_154fa0;
        case 0x154fa4u: goto label_154fa4;
        case 0x154fa8u: goto label_154fa8;
        case 0x154facu: goto label_154fac;
        case 0x154fb0u: goto label_154fb0;
        case 0x154fb4u: goto label_154fb4;
        case 0x154fb8u: goto label_154fb8;
        case 0x154fbcu: goto label_154fbc;
        case 0x154fc0u: goto label_154fc0;
        case 0x154fc4u: goto label_154fc4;
        case 0x154fc8u: goto label_154fc8;
        case 0x154fccu: goto label_154fcc;
        case 0x154fd0u: goto label_154fd0;
        case 0x154fd4u: goto label_154fd4;
        case 0x154fd8u: goto label_154fd8;
        case 0x154fdcu: goto label_154fdc;
        case 0x154fe0u: goto label_154fe0;
        case 0x154fe4u: goto label_154fe4;
        case 0x154fe8u: goto label_154fe8;
        case 0x154fecu: goto label_154fec;
        case 0x154ff0u: goto label_154ff0;
        case 0x154ff4u: goto label_154ff4;
        case 0x154ff8u: goto label_154ff8;
        case 0x154ffcu: goto label_154ffc;
        case 0x155000u: goto label_155000;
        case 0x155004u: goto label_155004;
        case 0x155008u: goto label_155008;
        case 0x15500cu: goto label_15500c;
        case 0x155010u: goto label_155010;
        case 0x155014u: goto label_155014;
        case 0x155018u: goto label_155018;
        case 0x15501cu: goto label_15501c;
        case 0x155020u: goto label_155020;
        case 0x155024u: goto label_155024;
        case 0x155028u: goto label_155028;
        case 0x15502cu: goto label_15502c;
        case 0x155030u: goto label_155030;
        case 0x155034u: goto label_155034;
        case 0x155038u: goto label_155038;
        case 0x15503cu: goto label_15503c;
        case 0x155040u: goto label_155040;
        case 0x155044u: goto label_155044;
        case 0x155048u: goto label_155048;
        case 0x15504cu: goto label_15504c;
        case 0x155050u: goto label_155050;
        case 0x155054u: goto label_155054;
        case 0x155058u: goto label_155058;
        case 0x15505cu: goto label_15505c;
        case 0x155060u: goto label_155060;
        case 0x155064u: goto label_155064;
        case 0x155068u: goto label_155068;
        case 0x15506cu: goto label_15506c;
        case 0x155070u: goto label_155070;
        case 0x155074u: goto label_155074;
        case 0x155078u: goto label_155078;
        case 0x15507cu: goto label_15507c;
        case 0x155080u: goto label_155080;
        case 0x155084u: goto label_155084;
        case 0x155088u: goto label_155088;
        case 0x15508cu: goto label_15508c;
        case 0x155090u: goto label_155090;
        case 0x155094u: goto label_155094;
        case 0x155098u: goto label_155098;
        case 0x15509cu: goto label_15509c;
        case 0x1550a0u: goto label_1550a0;
        case 0x1550a4u: goto label_1550a4;
        case 0x1550a8u: goto label_1550a8;
        case 0x1550acu: goto label_1550ac;
        case 0x1550b0u: goto label_1550b0;
        case 0x1550b4u: goto label_1550b4;
        case 0x1550b8u: goto label_1550b8;
        case 0x1550bcu: goto label_1550bc;
        case 0x1550c0u: goto label_1550c0;
        case 0x1550c4u: goto label_1550c4;
        case 0x1550c8u: goto label_1550c8;
        case 0x1550ccu: goto label_1550cc;
        case 0x1550d0u: goto label_1550d0;
        case 0x1550d4u: goto label_1550d4;
        case 0x1550d8u: goto label_1550d8;
        case 0x1550dcu: goto label_1550dc;
        case 0x1550e0u: goto label_1550e0;
        case 0x1550e4u: goto label_1550e4;
        case 0x1550e8u: goto label_1550e8;
        case 0x1550ecu: goto label_1550ec;
        case 0x1550f0u: goto label_1550f0;
        case 0x1550f4u: goto label_1550f4;
        case 0x1550f8u: goto label_1550f8;
        case 0x1550fcu: goto label_1550fc;
        case 0x155100u: goto label_155100;
        case 0x155104u: goto label_155104;
        case 0x155108u: goto label_155108;
        case 0x15510cu: goto label_15510c;
        case 0x155110u: goto label_155110;
        case 0x155114u: goto label_155114;
        case 0x155118u: goto label_155118;
        case 0x15511cu: goto label_15511c;
        case 0x155120u: goto label_155120;
        case 0x155124u: goto label_155124;
        case 0x155128u: goto label_155128;
        case 0x15512cu: goto label_15512c;
        case 0x155130u: goto label_155130;
        case 0x155134u: goto label_155134;
        case 0x155138u: goto label_155138;
        case 0x15513cu: goto label_15513c;
        case 0x155140u: goto label_155140;
        case 0x155144u: goto label_155144;
        case 0x155148u: goto label_155148;
        case 0x15514cu: goto label_15514c;
        case 0x155150u: goto label_155150;
        case 0x155154u: goto label_155154;
        case 0x155158u: goto label_155158;
        case 0x15515cu: goto label_15515c;
        case 0x155160u: goto label_155160;
        case 0x155164u: goto label_155164;
        case 0x155168u: goto label_155168;
        case 0x15516cu: goto label_15516c;
        case 0x155170u: goto label_155170;
        case 0x155174u: goto label_155174;
        case 0x155178u: goto label_155178;
        case 0x15517cu: goto label_15517c;
        case 0x155180u: goto label_155180;
        case 0x155184u: goto label_155184;
        case 0x155188u: goto label_155188;
        case 0x15518cu: goto label_15518c;
        case 0x155190u: goto label_155190;
        case 0x155194u: goto label_155194;
        case 0x155198u: goto label_155198;
        case 0x15519cu: goto label_15519c;
        case 0x1551a0u: goto label_1551a0;
        case 0x1551a4u: goto label_1551a4;
        case 0x1551a8u: goto label_1551a8;
        case 0x1551acu: goto label_1551ac;
        case 0x1551b0u: goto label_1551b0;
        case 0x1551b4u: goto label_1551b4;
        case 0x1551b8u: goto label_1551b8;
        case 0x1551bcu: goto label_1551bc;
        case 0x1551c0u: goto label_1551c0;
        case 0x1551c4u: goto label_1551c4;
        case 0x1551c8u: goto label_1551c8;
        case 0x1551ccu: goto label_1551cc;
        case 0x1551d0u: goto label_1551d0;
        case 0x1551d4u: goto label_1551d4;
        case 0x1551d8u: goto label_1551d8;
        case 0x1551dcu: goto label_1551dc;
        case 0x1551e0u: goto label_1551e0;
        case 0x1551e4u: goto label_1551e4;
        case 0x1551e8u: goto label_1551e8;
        case 0x1551ecu: goto label_1551ec;
        case 0x1551f0u: goto label_1551f0;
        case 0x1551f4u: goto label_1551f4;
        case 0x1551f8u: goto label_1551f8;
        case 0x1551fcu: goto label_1551fc;
        case 0x155200u: goto label_155200;
        case 0x155204u: goto label_155204;
        case 0x155208u: goto label_155208;
        case 0x15520cu: goto label_15520c;
        case 0x155210u: goto label_155210;
        case 0x155214u: goto label_155214;
        case 0x155218u: goto label_155218;
        case 0x15521cu: goto label_15521c;
        case 0x155220u: goto label_155220;
        case 0x155224u: goto label_155224;
        case 0x155228u: goto label_155228;
        case 0x15522cu: goto label_15522c;
        case 0x155230u: goto label_155230;
        case 0x155234u: goto label_155234;
        case 0x155238u: goto label_155238;
        case 0x15523cu: goto label_15523c;
        case 0x155240u: goto label_155240;
        case 0x155244u: goto label_155244;
        case 0x155248u: goto label_155248;
        case 0x15524cu: goto label_15524c;
        case 0x155250u: goto label_155250;
        case 0x155254u: goto label_155254;
        case 0x155258u: goto label_155258;
        case 0x15525cu: goto label_15525c;
        case 0x155260u: goto label_155260;
        case 0x155264u: goto label_155264;
        case 0x155268u: goto label_155268;
        case 0x15526cu: goto label_15526c;
        case 0x155270u: goto label_155270;
        case 0x155274u: goto label_155274;
        case 0x155278u: goto label_155278;
        case 0x15527cu: goto label_15527c;
        case 0x155280u: goto label_155280;
        case 0x155284u: goto label_155284;
        case 0x155288u: goto label_155288;
        case 0x15528cu: goto label_15528c;
        case 0x155290u: goto label_155290;
        case 0x155294u: goto label_155294;
        case 0x155298u: goto label_155298;
        case 0x15529cu: goto label_15529c;
        case 0x1552a0u: goto label_1552a0;
        case 0x1552a4u: goto label_1552a4;
        case 0x1552a8u: goto label_1552a8;
        case 0x1552acu: goto label_1552ac;
        case 0x1552b0u: goto label_1552b0;
        case 0x1552b4u: goto label_1552b4;
        case 0x1552b8u: goto label_1552b8;
        case 0x1552bcu: goto label_1552bc;
        case 0x1552c0u: goto label_1552c0;
        case 0x1552c4u: goto label_1552c4;
        case 0x1552c8u: goto label_1552c8;
        case 0x1552ccu: goto label_1552cc;
        case 0x1552d0u: goto label_1552d0;
        case 0x1552d4u: goto label_1552d4;
        case 0x1552d8u: goto label_1552d8;
        case 0x1552dcu: goto label_1552dc;
        case 0x1552e0u: goto label_1552e0;
        case 0x1552e4u: goto label_1552e4;
        case 0x1552e8u: goto label_1552e8;
        case 0x1552ecu: goto label_1552ec;
        case 0x1552f0u: goto label_1552f0;
        case 0x1552f4u: goto label_1552f4;
        case 0x1552f8u: goto label_1552f8;
        case 0x1552fcu: goto label_1552fc;
        case 0x155300u: goto label_155300;
        case 0x155304u: goto label_155304;
        case 0x155308u: goto label_155308;
        case 0x15530cu: goto label_15530c;
        case 0x155310u: goto label_155310;
        case 0x155314u: goto label_155314;
        case 0x155318u: goto label_155318;
        case 0x15531cu: goto label_15531c;
        case 0x155320u: goto label_155320;
        case 0x155324u: goto label_155324;
        case 0x155328u: goto label_155328;
        case 0x15532cu: goto label_15532c;
        case 0x155330u: goto label_155330;
        case 0x155334u: goto label_155334;
        default: break;
    }

    ctx->pc = 0x154710u;

label_154710:
    // 0x154710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_154714:
    // 0x154714: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x154714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_154718:
    // 0x154718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x154718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15471c:
    // 0x15471c: 0x24051118  addiu       $a1, $zero, 0x1118
    ctx->pc = 0x15471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_154720:
    // 0x154720: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x154720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_154724:
    // 0x154724: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x154724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154728:
    // 0x154728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x154728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15472c:
    // 0x15472c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_154730:
    // 0x154730: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_154734:
    // 0x154734: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x154734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_154738:
    // 0x154738: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x154738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15473c:
    // 0x15473c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x15473cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_154740:
    // 0x154740: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
label_154744:
    if (ctx->pc == 0x154744u) {
        ctx->pc = 0x154744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154740u;
        // 0x154744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154748u;
        goto label_154748;
    }
    ctx->pc = 0x154740u;
    {
        const bool branch_taken_0x154740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x154744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154740u;
        // 0x154744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154740) {
            ctx->pc = 0x154758u;
            goto label_154758;
        }
    }
    ctx->pc = 0x154748u;
label_154748:
    // 0x154748: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15474c:
    // 0x15474c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x15474cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_154750:
    // 0x154750: 0xc068186  jal         func_1A0618
label_154754:
    if (ctx->pc == 0x154754u) {
        ctx->pc = 0x154754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154750u;
        // 0x154754: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154758u;
        goto label_154758;
    }
    ctx->pc = 0x154750u;
    SET_GPR_U32(ctx, 31, 0x154758u);
    ctx->pc = 0x154754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154750u;
    // 0x154754: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x154750u, 0x154758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154758u;
label_154758:
    // 0x154758: 0xc06a26e  jal         func_1A89B8
label_15475c:
    if (ctx->pc == 0x15475Cu) {
        ctx->pc = 0x15475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154758u;
        // 0x15475c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154760u;
        goto label_154760;
    }
    ctx->pc = 0x154758u;
    SET_GPR_U32(ctx, 31, 0x154760u);
    ctx->pc = 0x15475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154758u;
    // 0x15475c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154758u, 0x154760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154760u;
label_154760:
    // 0x154760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154764:
    // 0x154764: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x154764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_154768:
    // 0x154768: 0x2c83001d  sltiu       $v1, $a0, 0x1D
    ctx->pc = 0x154768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
label_15476c:
    // 0x15476c: 0x106002eb  beqz        $v1, . + 4 + (0x2EB << 2)
label_154770:
    if (ctx->pc == 0x154770u) {
        ctx->pc = 0x154770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15476Cu;
        // 0x154770: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154774u;
        goto label_154774;
    }
    ctx->pc = 0x15476Cu;
    {
        const bool branch_taken_0x15476c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15476Cu;
        // 0x154770: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15476c) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154774u;
label_154774:
    // 0x154774: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x154774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_154778:
    // 0x154778: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x154778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15477c:
    // 0x15477c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_154780:
    // 0x154780: 0x8c636d70  lw          $v1, 0x6D70($v1)
    ctx->pc = 0x154780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28016)));
label_154784:
    // 0x154784: 0x600008  jr          $v1
label_154788:
    if (ctx->pc == 0x154788u) {
        ctx->pc = 0x15478Cu;
        goto label_15478c;
    }
    ctx->pc = 0x154784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154790u: goto label_154790;
            case 0x1547F0u: goto label_1547f0;
            case 0x154810u: goto label_154810;
            case 0x154898u: goto label_154898;
            case 0x1548D8u: goto label_1548d8;
            case 0x154918u: goto label_154918;
            case 0x154938u: goto label_154938;
            case 0x154A40u: goto label_154a40;
            case 0x154B88u: goto label_154b88;
            case 0x154BB0u: goto label_154bb0;
            case 0x154BC0u: goto label_154bc0;
            case 0x154D18u: goto label_154d18;
            case 0x154DE0u: goto label_154de0;
            case 0x154E08u: goto label_154e08;
            case 0x154E18u: goto label_154e18;
            case 0x154EA0u: goto label_154ea0;
            case 0x154F28u: goto label_154f28;
            case 0x154F58u: goto label_154f58;
            case 0x154F88u: goto label_154f88;
            case 0x154FC0u: goto label_154fc0;
            case 0x154FF0u: goto label_154ff0;
            case 0x155098u: goto label_155098;
            case 0x155100u: goto label_155100;
            case 0x1551E0u: goto label_1551e0;
            case 0x1551F0u: goto label_1551f0;
            case 0x155200u: goto label_155200;
            case 0x155230u: goto label_155230;
            case 0x155260u: goto label_155260;
            case 0x1552C0u: goto label_1552c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154784u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15478Cu;
label_15478c:
    // 0x15478c: 0x0  nop
    ctx->pc = 0x15478cu;
    // NOP
label_154790:
    // 0x154790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154794:
    // 0x154794: 0xc06a26e  jal         func_1A89B8
label_154798:
    if (ctx->pc == 0x154798u) {
        ctx->pc = 0x154798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154794u;
        // 0x154798: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15479Cu;
        goto label_15479c;
    }
    ctx->pc = 0x154794u;
    SET_GPR_U32(ctx, 31, 0x15479Cu);
    ctx->pc = 0x154798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154794u;
    // 0x154798: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154794u, 0x15479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15479Cu;
label_15479c:
    // 0x15479c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15479cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1547a0:
    // 0x1547a0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1547a4:
    if (ctx->pc == 0x1547A4u) {
        ctx->pc = 0x1547A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547A0u;
        // 0x1547a4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547A8u;
        goto label_1547a8;
    }
    ctx->pc = 0x1547A0u;
    {
        const bool branch_taken_0x1547a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547A0u;
        // 0x1547a4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547a0) {
            ctx->pc = 0x1547B8u;
            goto label_1547b8;
        }
    }
    ctx->pc = 0x1547A8u;
label_1547a8:
    // 0x1547a8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1547a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_1547ac:
    // 0x1547ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1547acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1547b0:
    // 0x1547b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1547b4:
    if (ctx->pc == 0x1547B4u) {
        ctx->pc = 0x1547B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547B0u;
        // 0x1547b4: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547B8u;
        goto label_1547b8;
    }
    ctx->pc = 0x1547B0u;
    {
        const bool branch_taken_0x1547b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547B0u;
        // 0x1547b4: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547b0) {
            ctx->pc = 0x1547CCu;
            goto label_1547cc;
        }
    }
    ctx->pc = 0x1547B8u;
label_1547b8:
    // 0x1547b8: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x1547b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_1547bc:
    // 0x1547bc: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1547bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_1547c0:
    // 0x1547c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1547c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1547c4:
    // 0x1547c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1547c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1547c8:
    // 0x1547c8: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x1547c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
label_1547cc:
    // 0x1547cc: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1547ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1547d0:
    // 0x1547d0: 0x108002d3  beqz        $a0, . + 4 + (0x2D3 << 2)
label_1547d4:
    if (ctx->pc == 0x1547D4u) {
        ctx->pc = 0x1547D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547D0u;
        // 0x1547d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547D8u;
        goto label_1547d8;
    }
    ctx->pc = 0x1547D0u;
    {
        const bool branch_taken_0x1547d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547D0u;
        // 0x1547d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547d0) {
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x1547D8u;
label_1547d8:
    // 0x1547d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1547d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1547dc:
    // 0x1547dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1547dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1547e0:
    // 0x1547e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1547e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1547e4:
    // 0x1547e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1547e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1547e8:
    // 0x1547e8: 0x8058ab0  j           func_162AC0
label_1547ec:
    if (ctx->pc == 0x1547ECu) {
        ctx->pc = 0x1547ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547E8u;
        // 0x1547ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547F0u;
        goto label_1547f0;
    }
    ctx->pc = 0x1547E8u;
    ctx->pc = 0x1547ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547E8u;
    // 0x1547ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162AC0u;
    FarTrackChange__9ApcCqtanki_0x162ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1547F0u;
label_1547f0:
    // 0x1547f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1547f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1547f4:
    // 0x1547f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1547f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1547f8:
    // 0x1547f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1547f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1547fc:
    // 0x1547fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1547fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154800:
    // 0x154800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_154804:
    // 0x154804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154808:
    // 0x154808: 0x8053a86  j           func_14EA18
label_15480c:
    if (ctx->pc == 0x15480Cu) {
        ctx->pc = 0x15480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154808u;
        // 0x15480c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154810u;
        goto label_154810;
    }
    ctx->pc = 0x154808u;
    ctx->pc = 0x15480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154808u;
    // 0x15480c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA18u;
    ApTankBoneMarker__FP7ApcTank_0x14ea18(rdram, ctx, runtime); return;
    ctx->pc = 0x154810u;
label_154810:
    // 0x154810: 0xc06a26e  jal         func_1A89B8
label_154814:
    if (ctx->pc == 0x154814u) {
        ctx->pc = 0x154814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154810u;
        // 0x154814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154818u;
        goto label_154818;
    }
    ctx->pc = 0x154810u;
    SET_GPR_U32(ctx, 31, 0x154818u);
    ctx->pc = 0x154814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154810u;
    // 0x154814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154810u, 0x154818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154818u;
label_154818:
    // 0x154818: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x154818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
label_15481c:
    // 0x15481c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15481cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154820:
    // 0x154820: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x154820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154824:
    // 0x154824: 0x24651180  addiu       $a1, $v1, 0x1180
    ctx->pc = 0x154824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
label_154828:
    // 0x154828: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x154828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15482c:
    // 0x15482c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_154830:
    // 0x154830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154834:
    // 0x154834: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_154838:
    if (ctx->pc == 0x154838u) {
        ctx->pc = 0x154838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154834u;
        // 0x154838: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15483Cu;
        goto label_15483c;
    }
    ctx->pc = 0x154834u;
    {
        const bool branch_taken_0x154834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x154838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154834u;
        // 0x154838: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154834) {
            ctx->pc = 0x154848u;
            goto label_154848;
        }
    }
    ctx->pc = 0x15483Cu;
label_15483c:
    // 0x15483c: 0x10000003  b           . + 4 + (0x3 << 2)
label_154840:
    if (ctx->pc == 0x154840u) {
        ctx->pc = 0x154840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15483Cu;
        // 0x154840: 0xacb10028  sw          $s1, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154844u;
        goto label_154844;
    }
    ctx->pc = 0x15483Cu;
    {
        const bool branch_taken_0x15483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15483Cu;
        // 0x154840: 0xacb10028  sw          $s1, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15483c) {
            ctx->pc = 0x15484Cu;
            goto label_15484c;
        }
    }
    ctx->pc = 0x154844u;
label_154844:
    // 0x154844: 0x0  nop
    ctx->pc = 0x154844u;
    // NOP
label_154848:
    // 0x154848: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x154848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15484c:
    // 0x15484c: 0xc04171a  jal         func_105C68
label_154850:
    if (ctx->pc == 0x154850u) {
        ctx->pc = 0x154850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15484Cu;
        // 0x154850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154854u;
        goto label_154854;
    }
    ctx->pc = 0x15484Cu;
    SET_GPR_U32(ctx, 31, 0x154854u);
    ctx->pc = 0x154850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15484Cu;
    // 0x154850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x15484Cu, 0x154854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154854u;
label_154854:
    // 0x154854: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x154854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_154858:
    // 0x154858: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_15485c:
    if (ctx->pc == 0x15485Cu) {
        ctx->pc = 0x15485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154858u;
        // 0x15485c: 0x24646d58  addiu       $a0, $v1, 0x6D58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154860u;
        goto label_154860;
    }
    ctx->pc = 0x154858u;
    {
        const bool branch_taken_0x154858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154858u;
        // 0x15485c: 0x24646d58  addiu       $a0, $v1, 0x6D58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154858) {
            ctx->pc = 0x154870u;
            goto label_154870;
        }
    }
    ctx->pc = 0x154860u;
label_154860:
    // 0x154860: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x154860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_154864:
    // 0x154864: 0x10000004  b           . + 4 + (0x4 << 2)
label_154868:
    if (ctx->pc == 0x154868u) {
        ctx->pc = 0x154868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154864u;
        // 0x154868: 0x2446d390  addiu       $a2, $v0, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15486Cu;
        goto label_15486c;
    }
    ctx->pc = 0x154864u;
    {
        const bool branch_taken_0x154864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154864u;
        // 0x154868: 0x2446d390  addiu       $a2, $v0, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154864) {
            ctx->pc = 0x154878u;
            goto label_154878;
        }
    }
    ctx->pc = 0x15486Cu;
label_15486c:
    // 0x15486c: 0x0  nop
    ctx->pc = 0x15486cu;
    // NOP
label_154870:
    // 0x154870: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_154874:
    // 0x154874: 0x2446d398  addiu       $a2, $v0, -0x2C68
    ctx->pc = 0x154874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955928));
label_154878:
    // 0x154878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15487c:
    // 0x15487c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15487cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_154880:
    // 0x154880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x154880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154884:
    // 0x154884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x154884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154888:
    // 0x154888: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15488c:
    // 0x15488c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15488cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154890:
    // 0x154890: 0x80740b2  j           func_1D02C8
label_154894:
    if (ctx->pc == 0x154894u) {
        ctx->pc = 0x154894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154890u;
        // 0x154894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154898u;
        goto label_154898;
    }
    ctx->pc = 0x154890u;
    ctx->pc = 0x154894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154890u;
    // 0x154894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    printf_0x1d02c8(rdram, ctx, runtime); return;
    ctx->pc = 0x154898u;
label_154898:
    // 0x154898: 0x8e100690  lw          $s0, 0x690($s0)
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
label_15489c:
    // 0x15489c: 0x520002a0  beql        $s0, $zero, . + 4 + (0x2A0 << 2)
label_1548a0:
    if (ctx->pc == 0x1548A0u) {
        ctx->pc = 0x1548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15489Cu;
        // 0x1548a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548A4u;
        goto label_1548a4;
    }
    ctx->pc = 0x15489Cu;
    {
        const bool branch_taken_0x15489c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15489c) {
            ctx->pc = 0x1548A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15489Cu;
            // 0x1548a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x1548A4u;
label_1548a4:
    // 0x1548a4: 0xc06a26e  jal         func_1A89B8
label_1548a8:
    if (ctx->pc == 0x1548A8u) {
        ctx->pc = 0x1548A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548A4u;
        // 0x1548a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548ACu;
        goto label_1548ac;
    }
    ctx->pc = 0x1548A4u;
    SET_GPR_U32(ctx, 31, 0x1548ACu);
    ctx->pc = 0x1548A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548A4u;
    // 0x1548a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1548A4u, 0x1548ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548ACu;
label_1548ac:
    // 0x1548ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1548acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1548b0:
    // 0x1548b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1548b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1548b4:
    // 0x1548b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1548b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1548b8:
    // 0x1548b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1548b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1548bc:
    // 0x1548bc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1548bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1548c0:
    // 0x1548c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1548c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1548c4:
    // 0x1548c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1548c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1548c8:
    // 0x1548c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1548c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1548cc:
    // 0x1548cc: 0x80592b2  j           func_164AC8
label_1548d0:
    if (ctx->pc == 0x1548D0u) {
        ctx->pc = 0x1548D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548CCu;
        // 0x1548d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548D4u;
        goto label_1548d4;
    }
    ctx->pc = 0x1548CCu;
    ctx->pc = 0x1548D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548CCu;
    // 0x1548d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AC8u;
    TankOptionDispChange__9ApcCqtanki_0x164ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x1548D4u;
label_1548d4:
    // 0x1548d4: 0x0  nop
    ctx->pc = 0x1548d4u;
    // NOP
label_1548d8:
    // 0x1548d8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1548d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1548dc:
    // 0x1548dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1548e0:
    // 0x1548e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1548e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1548e4:
    // 0x1548e4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_1548e8:
    if (ctx->pc == 0x1548E8u) {
        ctx->pc = 0x1548E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548E4u;
        // 0x1548e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548ECu;
        goto label_1548ec;
    }
    ctx->pc = 0x1548E4u;
    {
        const bool branch_taken_0x1548e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1548E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548E4u;
        // 0x1548e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548e4) {
            ctx->pc = 0x1548F8u;
            goto label_1548f8;
        }
    }
    ctx->pc = 0x1548ECu;
label_1548ec:
    // 0x1548ec: 0xc06a26e  jal         func_1A89B8
label_1548f0:
    if (ctx->pc == 0x1548F0u) {
        ctx->pc = 0x1548F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548ECu;
        // 0x1548f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548F4u;
        goto label_1548f4;
    }
    ctx->pc = 0x1548ECu;
    SET_GPR_U32(ctx, 31, 0x1548F4u);
    ctx->pc = 0x1548F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548ECu;
    // 0x1548f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1548ECu, 0x1548F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548F4u;
label_1548f4:
    // 0x1548f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1548f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548f8:
    // 0x1548f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1548f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1548fc:
    // 0x1548fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1548fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154900:
    // 0x154900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_154904:
    // 0x154904: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x154904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154908:
    // 0x154908: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15490c:
    // 0x15490c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15490cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154910:
    // 0x154910: 0x80549fa  j           func_1527E8
label_154914:
    if (ctx->pc == 0x154914u) {
        ctx->pc = 0x154914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154910u;
        // 0x154914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154918u;
        goto label_154918;
    }
    ctx->pc = 0x154910u;
    ctx->pc = 0x154914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154910u;
    // 0x154914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    TankWeaponFire__7ApcTanki_0x1527e8(rdram, ctx, runtime); return;
    ctx->pc = 0x154918u;
label_154918:
    // 0x154918: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15491c:
    // 0x15491c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x15491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_154920:
    // 0x154920: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x154920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_154924:
    // 0x154924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x154924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154928:
    // 0x154928: 0x60f809  jalr        $v1
label_15492c:
    if (ctx->pc == 0x15492Cu) {
        ctx->pc = 0x15492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154928u;
        // 0x15492c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154930u;
        goto label_154930;
    }
    ctx->pc = 0x154928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154930u);
        ctx->pc = 0x15492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154928u;
        // 0x15492c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154928u, 0x154930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154930u;
label_154930:
    // 0x154930: 0x1000027b  b           . + 4 + (0x27B << 2)
label_154934:
    if (ctx->pc == 0x154934u) {
        ctx->pc = 0x154934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154930u;
        // 0x154934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154938u;
        goto label_154938;
    }
    ctx->pc = 0x154930u;
    {
        const bool branch_taken_0x154930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154930u;
        // 0x154934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154930) {
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x154938u;
label_154938:
    // 0x154938: 0x2605079c  addiu       $a1, $s0, 0x79C
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
label_15493c:
    // 0x15493c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_154940:
    // 0x154940: 0x50400277  beql        $v0, $zero, . + 4 + (0x277 << 2)
label_154944:
    if (ctx->pc == 0x154944u) {
        ctx->pc = 0x154944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154940u;
        // 0x154944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154948u;
        goto label_154948;
    }
    ctx->pc = 0x154940u;
    {
        const bool branch_taken_0x154940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154940) {
            ctx->pc = 0x154944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154940u;
            // 0x154944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x154948u;
label_154948:
    // 0x154948: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_15494c:
    // 0x15494c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x15494cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154950:
    // 0x154950: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x154950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_154954:
    // 0x154954: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_154958:
    // 0x154958: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15495c:
    if (ctx->pc == 0x15495Cu) {
        ctx->pc = 0x15495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154958u;
        // 0x15495c: 0x8cb20010  lw          $s2, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154960u;
        goto label_154960;
    }
    ctx->pc = 0x154958u;
    {
        const bool branch_taken_0x154958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154958u;
        // 0x15495c: 0x8cb20010  lw          $s2, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154958) {
            ctx->pc = 0x154978u;
            goto label_154978;
        }
    }
    ctx->pc = 0x154960u;
label_154960:
    // 0x154960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154964:
    // 0x154964: 0xc054016  jal         func_150058
label_154968:
    if (ctx->pc == 0x154968u) {
        ctx->pc = 0x154968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154964u;
        // 0x154968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15496Cu;
        goto label_15496c;
    }
    ctx->pc = 0x154964u;
    SET_GPR_U32(ctx, 31, 0x15496Cu);
    ctx->pc = 0x154968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154964u;
    // 0x154968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x154964u, 0x15496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15496Cu;
label_15496c:
    // 0x15496c: 0x10000011  b           . + 4 + (0x11 << 2)
label_154970:
    if (ctx->pc == 0x154970u) {
        ctx->pc = 0x154970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15496Cu;
        // 0x154970: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154974u;
        goto label_154974;
    }
    ctx->pc = 0x15496Cu;
    {
        const bool branch_taken_0x15496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15496Cu;
        // 0x154970: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15496c) {
            ctx->pc = 0x1549B4u;
            goto label_1549b4;
        }
    }
    ctx->pc = 0x154974u;
label_154974:
    // 0x154974: 0x0  nop
    ctx->pc = 0x154974u;
    // NOP
label_154978:
    // 0x154978: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_15497c:
    // 0x15497c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15497cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_154980:
    // 0x154980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154984:
    if (ctx->pc == 0x154984u) {
        ctx->pc = 0x154984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154980u;
        // 0x154984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154988u;
        goto label_154988;
    }
    ctx->pc = 0x154980u;
    {
        const bool branch_taken_0x154980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154980u;
        // 0x154984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154980) {
            ctx->pc = 0x154998u;
            goto label_154998;
        }
    }
    ctx->pc = 0x154988u;
label_154988:
    // 0x154988: 0xc053fe6  jal         func_14FF98
label_15498c:
    if (ctx->pc == 0x15498Cu) {
        ctx->pc = 0x15498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154988u;
        // 0x15498c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154990u;
        goto label_154990;
    }
    ctx->pc = 0x154988u;
    SET_GPR_U32(ctx, 31, 0x154990u);
    ctx->pc = 0x15498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154988u;
    // 0x15498c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154988u, 0x154990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154990u;
label_154990:
    // 0x154990: 0x10000008  b           . + 4 + (0x8 << 2)
label_154994:
    if (ctx->pc == 0x154994u) {
        ctx->pc = 0x154994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154990u;
        // 0x154994: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154998u;
        goto label_154998;
    }
    ctx->pc = 0x154990u;
    {
        const bool branch_taken_0x154990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154990u;
        // 0x154994: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154990) {
            ctx->pc = 0x1549B4u;
            goto label_1549b4;
        }
    }
    ctx->pc = 0x154998u;
label_154998:
    // 0x154998: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x154998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_15499c:
    // 0x15499c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1549a0:
    // 0x1549a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1549a4:
    if (ctx->pc == 0x1549A4u) {
        ctx->pc = 0x1549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549A0u;
        // 0x1549a4: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549A8u;
        goto label_1549a8;
    }
    ctx->pc = 0x1549A0u;
    {
        const bool branch_taken_0x1549a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1549a0) {
            ctx->pc = 0x1549A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1549A0u;
            // 0x1549a4: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1549B4u;
            goto label_1549b4;
        }
    }
    ctx->pc = 0x1549A8u;
label_1549a8:
    // 0x1549a8: 0xc053fe6  jal         func_14FF98
label_1549ac:
    if (ctx->pc == 0x1549ACu) {
        ctx->pc = 0x1549ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549A8u;
        // 0x1549ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549B0u;
        goto label_1549b0;
    }
    ctx->pc = 0x1549A8u;
    SET_GPR_U32(ctx, 31, 0x1549B0u);
    ctx->pc = 0x1549ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549A8u;
    // 0x1549ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x1549A8u, 0x1549B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549B0u;
label_1549b0:
    // 0x1549b0: 0x8e22037c  lw          $v0, 0x37C($s1)
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
label_1549b4:
    // 0x1549b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1549b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1549b8:
    // 0x1549b8: 0x2605079c  addiu       $a1, $s0, 0x79C
    ctx->pc = 0x1549b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
label_1549bc:
    // 0x1549bc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1549bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1549c0:
    // 0x1549c0: 0xae421244  sw          $v0, 0x1244($s2)
    ctx->pc = 0x1549c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4676), GPR_U32(ctx, 2));
label_1549c4:
    // 0x1549c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1549c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1549c8:
    // 0x1549c8: 0xae030844  sw          $v1, 0x844($s0)
    ctx->pc = 0x1549c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 3));
label_1549cc:
    // 0x1549cc: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1549d0:
    // 0x1549d0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1549d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_1549d4:
    // 0x1549d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1549d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1549d8:
    // 0x1549d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1549dc:
    if (ctx->pc == 0x1549DCu) {
        ctx->pc = 0x1549DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549D8u;
        // 0x1549dc: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549E0u;
        goto label_1549e0;
    }
    ctx->pc = 0x1549D8u;
    {
        const bool branch_taken_0x1549d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549D8u;
        // 0x1549dc: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549d8) {
            ctx->pc = 0x1549F8u;
            goto label_1549f8;
        }
    }
    ctx->pc = 0x1549E0u;
label_1549e0:
    // 0x1549e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1549e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1549e4:
    // 0x1549e4: 0xc054016  jal         func_150058
label_1549e8:
    if (ctx->pc == 0x1549E8u) {
        ctx->pc = 0x1549E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549E4u;
        // 0x1549e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549ECu;
        goto label_1549ec;
    }
    ctx->pc = 0x1549E4u;
    SET_GPR_U32(ctx, 31, 0x1549ECu);
    ctx->pc = 0x1549E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549E4u;
    // 0x1549e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x1549E4u, 0x1549ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549ECu;
label_1549ec:
    // 0x1549ec: 0x10000012  b           . + 4 + (0x12 << 2)
label_1549f0:
    if (ctx->pc == 0x1549F0u) {
        ctx->pc = 0x1549F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549ECu;
        // 0x1549f0: 0x8e62037c  lw          $v0, 0x37C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549F4u;
        goto label_1549f4;
    }
    ctx->pc = 0x1549ECu;
    {
        const bool branch_taken_0x1549ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549ECu;
        // 0x1549f0: 0x8e62037c  lw          $v0, 0x37C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549ec) {
            ctx->pc = 0x154A38u;
            goto label_154a38;
        }
    }
    ctx->pc = 0x1549F4u;
label_1549f4:
    // 0x1549f4: 0x0  nop
    ctx->pc = 0x1549f4u;
    // NOP
label_1549f8:
    // 0x1549f8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_1549fc:
    // 0x1549fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1549fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_154a00:
    // 0x154a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154a04:
    if (ctx->pc == 0x154A04u) {
        ctx->pc = 0x154A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A00u;
        // 0x154a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A08u;
        goto label_154a08;
    }
    ctx->pc = 0x154A00u;
    {
        const bool branch_taken_0x154a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A00u;
        // 0x154a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a00) {
            ctx->pc = 0x154A18u;
            goto label_154a18;
        }
    }
    ctx->pc = 0x154A08u;
label_154a08:
    // 0x154a08: 0xc053fe6  jal         func_14FF98
label_154a0c:
    if (ctx->pc == 0x154A0Cu) {
        ctx->pc = 0x154A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A08u;
        // 0x154a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A10u;
        goto label_154a10;
    }
    ctx->pc = 0x154A08u;
    SET_GPR_U32(ctx, 31, 0x154A10u);
    ctx->pc = 0x154A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A08u;
    // 0x154a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154A08u, 0x154A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A10u;
label_154a10:
    // 0x154a10: 0x10000009  b           . + 4 + (0x9 << 2)
label_154a14:
    if (ctx->pc == 0x154A14u) {
        ctx->pc = 0x154A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A10u;
        // 0x154a14: 0x8e62037c  lw          $v0, 0x37C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A18u;
        goto label_154a18;
    }
    ctx->pc = 0x154A10u;
    {
        const bool branch_taken_0x154a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A10u;
        // 0x154a14: 0x8e62037c  lw          $v0, 0x37C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a10) {
            ctx->pc = 0x154A38u;
            goto label_154a38;
        }
    }
    ctx->pc = 0x154A18u;
label_154a18:
    // 0x154a18: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x154a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_154a1c:
    // 0x154a1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_154a20:
    // 0x154a20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_154a24:
    if (ctx->pc == 0x154A24u) {
        ctx->pc = 0x154A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A20u;
        // 0x154a24: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A28u;
        goto label_154a28;
    }
    ctx->pc = 0x154A20u;
    {
        const bool branch_taken_0x154a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A20u;
        // 0x154a24: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a20) {
            ctx->pc = 0x154A34u;
            goto label_154a34;
        }
    }
    ctx->pc = 0x154A28u;
label_154a28:
    // 0x154a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154a2c:
    // 0x154a2c: 0xc053fe6  jal         func_14FF98
label_154a30:
    if (ctx->pc == 0x154A30u) {
        ctx->pc = 0x154A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A2Cu;
        // 0x154a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A34u;
        goto label_154a34;
    }
    ctx->pc = 0x154A2Cu;
    SET_GPR_U32(ctx, 31, 0x154A34u);
    ctx->pc = 0x154A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A2Cu;
    // 0x154a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154A2Cu, 0x154A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A34u;
label_154a34:
    // 0x154a34: 0x8e62037c  lw          $v0, 0x37C($s3)
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
label_154a38:
    // 0x154a38: 0x10000238  b           . + 4 + (0x238 << 2)
label_154a3c:
    if (ctx->pc == 0x154A3Cu) {
        ctx->pc = 0x154A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A38u;
        // 0x154a3c: 0xae221244  sw          $v0, 0x1244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A40u;
        goto label_154a40;
    }
    ctx->pc = 0x154A38u;
    {
        const bool branch_taken_0x154a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A38u;
        // 0x154a3c: 0xae221244  sw          $v0, 0x1244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a38) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154A40u;
label_154a40:
    // 0x154a40: 0x8e02079c  lw          $v0, 0x79C($s0)
    ctx->pc = 0x154a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1948)));
label_154a44:
    // 0x154a44: 0x50400236  beql        $v0, $zero, . + 4 + (0x236 << 2)
label_154a48:
    if (ctx->pc == 0x154A48u) {
        ctx->pc = 0x154A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A44u;
        // 0x154a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A4Cu;
        goto label_154a4c;
    }
    ctx->pc = 0x154A44u;
    {
        const bool branch_taken_0x154a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a44) {
            ctx->pc = 0x154A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154A44u;
            // 0x154a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x154A4Cu;
label_154a4c:
    // 0x154a4c: 0xc06a26e  jal         func_1A89B8
label_154a50:
    if (ctx->pc == 0x154A50u) {
        ctx->pc = 0x154A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A4Cu;
        // 0x154a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A54u;
        goto label_154a54;
    }
    ctx->pc = 0x154A4Cu;
    SET_GPR_U32(ctx, 31, 0x154A54u);
    ctx->pc = 0x154A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A4Cu;
    // 0x154a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154A4Cu, 0x154A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A54u;
label_154a54:
    // 0x154a54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x154a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154a58:
    // 0x154a58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154a5c:
    // 0x154a5c: 0x56220016  bnel        $s1, $v0, . + 4 + (0x16 << 2)
label_154a60:
    if (ctx->pc == 0x154A60u) {
        ctx->pc = 0x154A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A5Cu;
        // 0x154a60: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A64u;
        goto label_154a64;
    }
    ctx->pc = 0x154A5Cu;
    {
        const bool branch_taken_0x154a5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x154a5c) {
            ctx->pc = 0x154A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154A5Cu;
            // 0x154a60: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154AB8u;
            goto label_154ab8;
        }
    }
    ctx->pc = 0x154A64u;
label_154a64:
    // 0x154a64: 0xc06a250  jal         func_1A8940
label_154a68:
    if (ctx->pc == 0x154A68u) {
        ctx->pc = 0x154A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A64u;
        // 0x154a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A6Cu;
        goto label_154a6c;
    }
    ctx->pc = 0x154A64u;
    SET_GPR_U32(ctx, 31, 0x154A6Cu);
    ctx->pc = 0x154A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A64u;
    // 0x154a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x154A64u, 0x154A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A6Cu;
label_154a6c:
    // 0x154a6c: 0xc6000634  lwc1        $f0, 0x634($s0)
    ctx->pc = 0x154a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154a70:
    // 0x154a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154a74:
    // 0x154a74: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x154a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_154a78:
    // 0x154a78: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x154a78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_154a7c:
    // 0x154a7c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x154a7cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_154a80:
    // 0x154a80: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x154a80u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_154a84:
    // 0x154a84: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x154a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_154a88:
    // 0x154a88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x154a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_154a8c:
    // 0x154a8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_154a90:
    // 0x154a90: 0x8e0403b0  lw          $a0, 0x3B0($s0)
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
label_154a94:
    // 0x154a94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x154a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154a98:
    // 0x154a98: 0x30841000  andi        $a0, $a0, 0x1000
    ctx->pc = 0x154a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
label_154a9c:
    // 0x154a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x154a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154aa0:
    // 0x154aa0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_154aa4:
    // 0x154aa4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x154aa4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_154aa8:
    // 0x154aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154aac:
    // 0x154aac: 0x804171a  j           func_105C68
label_154ab0:
    if (ctx->pc == 0x154AB0u) {
        ctx->pc = 0x154AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AACu;
        // 0x154ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AB4u;
        goto label_154ab4;
    }
    ctx->pc = 0x154AACu;
    ctx->pc = 0x154AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AACu;
    // 0x154ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    ApSCDEntSetSystemStatus__Fi_0x105c68(rdram, ctx, runtime); return;
    ctx->pc = 0x154AB4u;
label_154ab4:
    // 0x154ab4: 0x0  nop
    ctx->pc = 0x154ab4u;
    // NOP
label_154ab8:
    // 0x154ab8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x154ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_154abc:
    // 0x154abc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_154ac0:
    if (ctx->pc == 0x154AC0u) {
        ctx->pc = 0x154AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ABCu;
        // 0x154ac0: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AC4u;
        goto label_154ac4;
    }
    ctx->pc = 0x154ABCu;
    {
        const bool branch_taken_0x154abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154abc) {
            ctx->pc = 0x154AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154ABCu;
            // 0x154ac0: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154B10u;
            goto label_154b10;
        }
    }
    ctx->pc = 0x154AC4u;
label_154ac4:
    // 0x154ac4: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_154ac8:
    // 0x154ac8: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x154ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_154acc:
    // 0x154acc: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_154ad0:
    // 0x154ad0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_154ad4:
    // 0x154ad4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x154ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154ad8:
    // 0x154ad8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_154adc:
    if (ctx->pc == 0x154ADCu) {
        ctx->pc = 0x154ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AD8u;
        // 0x154adc: 0xb3300a  movz        $a2, $a1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AE0u;
        goto label_154ae0;
    }
    ctx->pc = 0x154AD8u;
    {
        const bool branch_taken_0x154ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x154ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AD8u;
        // 0x154adc: 0xb3300a  movz        $a2, $a1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ad8) {
            ctx->pc = 0x154AF4u;
            goto label_154af4;
        }
    }
    ctx->pc = 0x154AE0u;
label_154ae0:
    // 0x154ae0: 0xc06a26e  jal         func_1A89B8
label_154ae4:
    if (ctx->pc == 0x154AE4u) {
        ctx->pc = 0x154AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AE0u;
        // 0x154ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AE8u;
        goto label_154ae8;
    }
    ctx->pc = 0x154AE0u;
    SET_GPR_U32(ctx, 31, 0x154AE8u);
    ctx->pc = 0x154AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AE0u;
    // 0x154ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154AE0u, 0x154AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AE8u;
label_154ae8:
    // 0x154ae8: 0xc06a298  jal         func_1A8A60
label_154aec:
    if (ctx->pc == 0x154AECu) {
        ctx->pc = 0x154AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AE8u;
        // 0x154aec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AF0u;
        goto label_154af0;
    }
    ctx->pc = 0x154AE8u;
    SET_GPR_U32(ctx, 31, 0x154AF0u);
    ctx->pc = 0x154AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AE8u;
    // 0x154aec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x154AE8u, 0x154AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AF0u;
label_154af0:
    // 0x154af0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x154af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154af4:
    // 0x154af4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x154af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_154af8:
    // 0x154af8: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_154afc:
    // 0x154afc: 0xc067b88  jal         func_19EE20
label_154b00:
    if (ctx->pc == 0x154B00u) {
        ctx->pc = 0x154B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AFCu;
        // 0x154b00: 0x2604037c  addiu       $a0, $s0, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 892));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B04u;
        goto label_154b04;
    }
    ctx->pc = 0x154AFCu;
    SET_GPR_U32(ctx, 31, 0x154B04u);
    ctx->pc = 0x154B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AFCu;
    // 0x154b00: 0x2604037c  addiu       $a0, $s0, 0x37C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x154AFCu, 0x154B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B04u;
label_154b04:
    // 0x154b04: 0xc600034c  lwc1        $f0, 0x34C($s0)
    ctx->pc = 0x154b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154b08:
    // 0x154b08: 0xe6000380  swc1        $f0, 0x380($s0)
    ctx->pc = 0x154b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
label_154b0c:
    // 0x154b0c: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x154b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_154b10:
    // 0x154b10: 0x2605079c  addiu       $a1, $s0, 0x79C
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
label_154b14:
    // 0x154b14: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x154b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_154b18:
    // 0x154b18: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x154b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154b1c:
    // 0x154b1c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x154b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_154b20:
    // 0x154b20: 0x13300a  movz        $a2, $zero, $s3
    ctx->pc = 0x154b20u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_154b24:
    // 0x154b24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_154b28:
    // 0x154b28: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x154b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_154b2c:
    // 0x154b2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_154b30:
    if (ctx->pc == 0x154B30u) {
        ctx->pc = 0x154B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B2Cu;
        // 0x154b30: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B34u;
        goto label_154b34;
    }
    ctx->pc = 0x154B2Cu;
    {
        const bool branch_taken_0x154b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B2Cu;
        // 0x154b30: 0x8cb10010  lw          $s1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b2c) {
            ctx->pc = 0x154B48u;
            goto label_154b48;
        }
    }
    ctx->pc = 0x154B34u;
label_154b34:
    // 0x154b34: 0xc054016  jal         func_150058
label_154b38:
    if (ctx->pc == 0x154B38u) {
        ctx->pc = 0x154B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B34u;
        // 0x154b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B3Cu;
        goto label_154b3c;
    }
    ctx->pc = 0x154B34u;
    SET_GPR_U32(ctx, 31, 0x154B3Cu);
    ctx->pc = 0x154B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B34u;
    // 0x154b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x154B34u, 0x154B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B3Cu;
label_154b3c:
    // 0x154b3c: 0x10000010  b           . + 4 + (0x10 << 2)
label_154b40:
    if (ctx->pc == 0x154B40u) {
        ctx->pc = 0x154B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B3Cu;
        // 0x154b40: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B44u;
        goto label_154b44;
    }
    ctx->pc = 0x154B3Cu;
    {
        const bool branch_taken_0x154b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B3Cu;
        // 0x154b40: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b3c) {
            ctx->pc = 0x154B80u;
            goto label_154b80;
        }
    }
    ctx->pc = 0x154B44u;
label_154b44:
    // 0x154b44: 0x0  nop
    ctx->pc = 0x154b44u;
    // NOP
label_154b48:
    // 0x154b48: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_154b4c:
    // 0x154b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_154b50:
    // 0x154b50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_154b54:
    if (ctx->pc == 0x154B54u) {
        ctx->pc = 0x154B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B50u;
        // 0x154b54: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B58u;
        goto label_154b58;
    }
    ctx->pc = 0x154B50u;
    {
        const bool branch_taken_0x154b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b50) {
            ctx->pc = 0x154B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154B50u;
            // 0x154b54: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154B68u;
            goto label_154b68;
        }
    }
    ctx->pc = 0x154B58u;
label_154b58:
    // 0x154b58: 0xc053fe6  jal         func_14FF98
label_154b5c:
    if (ctx->pc == 0x154B5Cu) {
        ctx->pc = 0x154B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B58u;
        // 0x154b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B60u;
        goto label_154b60;
    }
    ctx->pc = 0x154B58u;
    SET_GPR_U32(ctx, 31, 0x154B60u);
    ctx->pc = 0x154B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B58u;
    // 0x154b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154B58u, 0x154B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B60u;
label_154b60:
    // 0x154b60: 0x10000007  b           . + 4 + (0x7 << 2)
label_154b64:
    if (ctx->pc == 0x154B64u) {
        ctx->pc = 0x154B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B60u;
        // 0x154b64: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B68u;
        goto label_154b68;
    }
    ctx->pc = 0x154B60u;
    {
        const bool branch_taken_0x154b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B60u;
        // 0x154b64: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b60) {
            ctx->pc = 0x154B80u;
            goto label_154b80;
        }
    }
    ctx->pc = 0x154B68u;
label_154b68:
    // 0x154b68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_154b6c:
    // 0x154b6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_154b70:
    if (ctx->pc == 0x154B70u) {
        ctx->pc = 0x154B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B6Cu;
        // 0x154b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B74u;
        goto label_154b74;
    }
    ctx->pc = 0x154B6Cu;
    {
        const bool branch_taken_0x154b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B6Cu;
        // 0x154b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b6c) {
            ctx->pc = 0x154B7Cu;
            goto label_154b7c;
        }
    }
    ctx->pc = 0x154B74u;
label_154b74:
    // 0x154b74: 0xc053fe6  jal         func_14FF98
label_154b78:
    if (ctx->pc == 0x154B78u) {
        ctx->pc = 0x154B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B74u;
        // 0x154b78: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B7Cu;
        goto label_154b7c;
    }
    ctx->pc = 0x154B74u;
    SET_GPR_U32(ctx, 31, 0x154B7Cu);
    ctx->pc = 0x154B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B74u;
    // 0x154b78: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154B74u, 0x154B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B7Cu;
label_154b7c:
    // 0x154b7c: 0x8e42037c  lw          $v0, 0x37C($s2)
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
label_154b80:
    // 0x154b80: 0x100001e6  b           . + 4 + (0x1E6 << 2)
label_154b84:
    if (ctx->pc == 0x154B84u) {
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B80u;
        // 0x154b84: 0xae221244  sw          $v0, 0x1244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B88u;
        goto label_154b88;
    }
    ctx->pc = 0x154B80u;
    {
        const bool branch_taken_0x154b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B80u;
        // 0x154b84: 0xae221244  sw          $v0, 0x1244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b80) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154B88u;
label_154b88:
    // 0x154b88: 0xc06a26e  jal         func_1A89B8
label_154b8c:
    if (ctx->pc == 0x154B8Cu) {
        ctx->pc = 0x154B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B88u;
        // 0x154b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B90u;
        goto label_154b90;
    }
    ctx->pc = 0x154B88u;
    SET_GPR_U32(ctx, 31, 0x154B90u);
    ctx->pc = 0x154B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B88u;
    // 0x154b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154B88u, 0x154B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B90u;
label_154b90:
    // 0x154b90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154b94:
    if (ctx->pc == 0x154B94u) {
        ctx->pc = 0x154B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B90u;
        // 0x154b94: 0x8e020184  lw          $v0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B98u;
        goto label_154b98;
    }
    ctx->pc = 0x154B90u;
    {
        const bool branch_taken_0x154b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B90u;
        // 0x154b94: 0x8e020184  lw          $v0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b90) {
            ctx->pc = 0x154BA8u;
            goto label_154ba8;
        }
    }
    ctx->pc = 0x154B98u;
label_154b98:
    // 0x154b98: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x154b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_154b9c:
    // 0x154b9c: 0x100001df  b           . + 4 + (0x1DF << 2)
label_154ba0:
    if (ctx->pc == 0x154BA0u) {
        ctx->pc = 0x154BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B9Cu;
        // 0x154ba0: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BA4u;
        goto label_154ba4;
    }
    ctx->pc = 0x154B9Cu;
    {
        const bool branch_taken_0x154b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B9Cu;
        // 0x154ba0: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b9c) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154BA4u;
label_154ba4:
    // 0x154ba4: 0x0  nop
    ctx->pc = 0x154ba4u;
    // NOP
label_154ba8:
    // 0x154ba8: 0x10000086  b           . + 4 + (0x86 << 2)
label_154bac:
    if (ctx->pc == 0x154BACu) {
        ctx->pc = 0x154BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BA8u;
        // 0x154bac: 0x2403fdff  addiu       $v1, $zero, -0x201 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BB0u;
        goto label_154bb0;
    }
    ctx->pc = 0x154BA8u;
    {
        const bool branch_taken_0x154ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BA8u;
        // 0x154bac: 0x2403fdff  addiu       $v1, $zero, -0x201 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ba8) {
            ctx->pc = 0x154DC4u;
            goto label_154dc4;
        }
    }
    ctx->pc = 0x154BB0u;
label_154bb0:
    // 0x154bb0: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_154bb4:
    // 0x154bb4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x154bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_154bb8:
    // 0x154bb8: 0x100001d8  b           . + 4 + (0x1D8 << 2)
label_154bbc:
    if (ctx->pc == 0x154BBCu) {
        ctx->pc = 0x154BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BB8u;
        // 0x154bbc: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BC0u;
        goto label_154bc0;
    }
    ctx->pc = 0x154BB8u;
    {
        const bool branch_taken_0x154bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BB8u;
        // 0x154bbc: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bb8) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154BC0u;
label_154bc0:
    // 0x154bc0: 0xc06a26e  jal         func_1A89B8
label_154bc4:
    if (ctx->pc == 0x154BC4u) {
        ctx->pc = 0x154BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BC0u;
        // 0x154bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BC8u;
        goto label_154bc8;
    }
    ctx->pc = 0x154BC0u;
    SET_GPR_U32(ctx, 31, 0x154BC8u);
    ctx->pc = 0x154BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BC0u;
    // 0x154bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154BC0u, 0x154BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BC8u;
label_154bc8:
    // 0x154bc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x154bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154bcc:
    // 0x154bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154bd0:
    // 0x154bd0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_154bd4:
    if (ctx->pc == 0x154BD4u) {
        ctx->pc = 0x154BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BD0u;
        // 0x154bd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BD8u;
        goto label_154bd8;
    }
    ctx->pc = 0x154BD0u;
    {
        const bool branch_taken_0x154bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BD0u;
        // 0x154bd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bd0) {
            ctx->pc = 0x154C08u;
            goto label_154c08;
        }
    }
    ctx->pc = 0x154BD8u;
label_154bd8:
    // 0x154bd8: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_154bdc:
    // 0x154bdc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_154be0:
    // 0x154be0: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_154be4:
    // 0x154be4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_154be8:
    // 0x154be8: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x154be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_154bec:
    // 0x154bec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154bf0:
    // 0x154bf0: 0x50650019  beql        $v1, $a1, . + 4 + (0x19 << 2)
label_154bf4:
    if (ctx->pc == 0x154BF4u) {
        ctx->pc = 0x154BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BF0u;
        // 0x154bf4: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BF8u;
        goto label_154bf8;
    }
    ctx->pc = 0x154BF0u;
    {
        const bool branch_taken_0x154bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x154bf0) {
            ctx->pc = 0x154BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154BF0u;
            // 0x154bf4: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154C58u;
            goto label_154c58;
        }
    }
    ctx->pc = 0x154BF8u;
label_154bf8:
    // 0x154bf8: 0xc06a26e  jal         func_1A89B8
label_154bfc:
    if (ctx->pc == 0x154BFCu) {
        ctx->pc = 0x154BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BF8u;
        // 0x154bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C00u;
        goto label_154c00;
    }
    ctx->pc = 0x154BF8u;
    SET_GPR_U32(ctx, 31, 0x154C00u);
    ctx->pc = 0x154BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BF8u;
    // 0x154bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154BF8u, 0x154C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C00u;
label_154c00:
    // 0x154c00: 0x10000016  b           . + 4 + (0x16 << 2)
label_154c04:
    if (ctx->pc == 0x154C04u) {
        ctx->pc = 0x154C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C00u;
        // 0x154c04: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C08u;
        goto label_154c08;
    }
    ctx->pc = 0x154C00u;
    {
        const bool branch_taken_0x154c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C00u;
        // 0x154c04: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c00) {
            ctx->pc = 0x154C5Cu;
            goto label_154c5c;
        }
    }
    ctx->pc = 0x154C08u;
label_154c08:
    // 0x154c08: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_154c0c:
    if (ctx->pc == 0x154C0Cu) {
        ctx->pc = 0x154C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C08u;
        // 0x154c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C10u;
        goto label_154c10;
    }
    ctx->pc = 0x154C08u;
    {
        const bool branch_taken_0x154c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C08u;
        // 0x154c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c08) {
            ctx->pc = 0x154C20u;
            goto label_154c20;
        }
    }
    ctx->pc = 0x154C10u;
label_154c10:
    // 0x154c10: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_154c14:
    // 0x154c14: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x154c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_154c18:
    // 0x154c18: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_154c1c:
    if (ctx->pc == 0x154C1Cu) {
        ctx->pc = 0x154C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C18u;
        // 0x154c1c: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C20u;
        goto label_154c20;
    }
    ctx->pc = 0x154C18u;
    {
        const bool branch_taken_0x154c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C18u;
        // 0x154c1c: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c18) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154C20u;
label_154c20:
    // 0x154c20: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_154c24:
    if (ctx->pc == 0x154C24u) {
        ctx->pc = 0x154C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C20u;
        // 0x154c24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C28u;
        goto label_154c28;
    }
    ctx->pc = 0x154C20u;
    {
        const bool branch_taken_0x154c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C20u;
        // 0x154c24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c20) {
            ctx->pc = 0x154C68u;
            goto label_154c68;
        }
    }
    ctx->pc = 0x154C28u;
label_154c28:
    // 0x154c28: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_154c2c:
    // 0x154c2c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_154c30:
    // 0x154c30: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_154c34:
    // 0x154c34: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x154c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_154c38:
    // 0x154c38: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x154c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_154c3c:
    // 0x154c3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154c40:
    // 0x154c40: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
label_154c44:
    if (ctx->pc == 0x154C44u) {
        ctx->pc = 0x154C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C40u;
        // 0x154c44: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C48u;
        goto label_154c48;
    }
    ctx->pc = 0x154C40u;
    {
        const bool branch_taken_0x154c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x154c40) {
            ctx->pc = 0x154C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154C40u;
            // 0x154c44: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154C58u;
            goto label_154c58;
        }
    }
    ctx->pc = 0x154C48u;
label_154c48:
    // 0x154c48: 0xc06a26e  jal         func_1A89B8
label_154c4c:
    if (ctx->pc == 0x154C4Cu) {
        ctx->pc = 0x154C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C48u;
        // 0x154c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C50u;
        goto label_154c50;
    }
    ctx->pc = 0x154C48u;
    SET_GPR_U32(ctx, 31, 0x154C50u);
    ctx->pc = 0x154C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C48u;
    // 0x154c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154C48u, 0x154C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C50u;
label_154c50:
    // 0x154c50: 0x10000002  b           . + 4 + (0x2 << 2)
label_154c54:
    if (ctx->pc == 0x154C54u) {
        ctx->pc = 0x154C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C50u;
        // 0x154c54: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C58u;
        goto label_154c58;
    }
    ctx->pc = 0x154C50u;
    {
        const bool branch_taken_0x154c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C50u;
        // 0x154c54: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c50) {
            ctx->pc = 0x154C5Cu;
            goto label_154c5c;
        }
    }
    ctx->pc = 0x154C58u;
label_154c58:
    // 0x154c58: 0xae020680  sw          $v0, 0x680($s0)
    ctx->pc = 0x154c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
label_154c5c:
    // 0x154c5c: 0x100001af  b           . + 4 + (0x1AF << 2)
label_154c60:
    if (ctx->pc == 0x154C60u) {
        ctx->pc = 0x154C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C5Cu;
        // 0x154c60: 0xae000684  sw          $zero, 0x684($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C64u;
        goto label_154c64;
    }
    ctx->pc = 0x154C5Cu;
    {
        const bool branch_taken_0x154c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C5Cu;
        // 0x154c60: 0xae000684  sw          $zero, 0x684($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c5c) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154C64u;
label_154c64:
    // 0x154c64: 0x0  nop
    ctx->pc = 0x154c64u;
    // NOP
label_154c68:
    // 0x154c68: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_154c6c:
    if (ctx->pc == 0x154C6Cu) {
        ctx->pc = 0x154C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C68u;
        // 0x154c6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C70u;
        goto label_154c70;
    }
    ctx->pc = 0x154C68u;
    {
        const bool branch_taken_0x154c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C68u;
        // 0x154c6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c68) {
            ctx->pc = 0x154CB8u;
            goto label_154cb8;
        }
    }
    ctx->pc = 0x154C70u;
label_154c70:
    // 0x154c70: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x154c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_154c74:
    // 0x154c74: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x154c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_154c78:
    // 0x154c78: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_154c7c:
    // 0x154c7c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_154c80:
    // 0x154c80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x154c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_154c84:
    // 0x154c84: 0xae030264  sw          $v1, 0x264($s0)
    ctx->pc = 0x154c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 3));
label_154c88:
    // 0x154c88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x154c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154c8c:
    // 0x154c8c: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
label_154c90:
    if (ctx->pc == 0x154C90u) {
        ctx->pc = 0x154C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C8Cu;
        // 0x154c90: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C94u;
        goto label_154c94;
    }
    ctx->pc = 0x154C8Cu;
    {
        const bool branch_taken_0x154c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x154c8c) {
            ctx->pc = 0x154C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154C8Cu;
            // 0x154c90: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CA8u;
            goto label_154ca8;
        }
    }
    ctx->pc = 0x154C94u;
label_154c94:
    // 0x154c94: 0xc06a26e  jal         func_1A89B8
label_154c98:
    if (ctx->pc == 0x154C98u) {
        ctx->pc = 0x154C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C94u;
        // 0x154c98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C9Cu;
        goto label_154c9c;
    }
    ctx->pc = 0x154C94u;
    SET_GPR_U32(ctx, 31, 0x154C9Cu);
    ctx->pc = 0x154C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C94u;
    // 0x154c98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154C94u, 0x154C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C9Cu;
label_154c9c:
    // 0x154c9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_154ca0:
    if (ctx->pc == 0x154CA0u) {
        ctx->pc = 0x154CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C9Cu;
        // 0x154ca0: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CA4u;
        goto label_154ca4;
    }
    ctx->pc = 0x154C9Cu;
    {
        const bool branch_taken_0x154c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C9Cu;
        // 0x154ca0: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c9c) {
            ctx->pc = 0x154CACu;
            goto label_154cac;
        }
    }
    ctx->pc = 0x154CA4u;
label_154ca4:
    // 0x154ca4: 0x0  nop
    ctx->pc = 0x154ca4u;
    // NOP
label_154ca8:
    // 0x154ca8: 0xae020680  sw          $v0, 0x680($s0)
    ctx->pc = 0x154ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
label_154cac:
    // 0x154cac: 0xc78082f0  lwc1        $f0, -0x7D10($gp)
    ctx->pc = 0x154cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154cb0:
    // 0x154cb0: 0x1000019a  b           . + 4 + (0x19A << 2)
label_154cb4:
    if (ctx->pc == 0x154CB4u) {
        ctx->pc = 0x154CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CB0u;
        // 0x154cb4: 0xe6000684  swc1        $f0, 0x684($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1668), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CB8u;
        goto label_154cb8;
    }
    ctx->pc = 0x154CB0u;
    {
        const bool branch_taken_0x154cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CB0u;
        // 0x154cb4: 0xe6000684  swc1        $f0, 0x684($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cb0) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154CB8u;
label_154cb8:
    // 0x154cb8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_154cbc:
    if (ctx->pc == 0x154CBCu) {
        ctx->pc = 0x154CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CB8u;
        // 0x154cbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CC0u;
        goto label_154cc0;
    }
    ctx->pc = 0x154CB8u;
    {
        const bool branch_taken_0x154cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154cb8) {
            ctx->pc = 0x154CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154CB8u;
            // 0x154cbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CD8u;
            goto label_154cd8;
        }
    }
    ctx->pc = 0x154CC0u;
label_154cc0:
    // 0x154cc0: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_154cc4:
    // 0x154cc4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_154cc8:
    // 0x154cc8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_154ccc:
    // 0x154ccc: 0x10000008  b           . + 4 + (0x8 << 2)
label_154cd0:
    if (ctx->pc == 0x154CD0u) {
        ctx->pc = 0x154CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CCCu;
        // 0x154cd0: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CD4u;
        goto label_154cd4;
    }
    ctx->pc = 0x154CCCu;
    {
        const bool branch_taken_0x154ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CCCu;
        // 0x154cd0: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ccc) {
            ctx->pc = 0x154CF0u;
            goto label_154cf0;
        }
    }
    ctx->pc = 0x154CD4u;
label_154cd4:
    // 0x154cd4: 0x0  nop
    ctx->pc = 0x154cd4u;
    // NOP
label_154cd8:
    // 0x154cd8: 0x54620191  bnel        $v1, $v0, . + 4 + (0x191 << 2)
label_154cdc:
    if (ctx->pc == 0x154CDCu) {
        ctx->pc = 0x154CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CD8u;
        // 0x154cdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CE0u;
        goto label_154ce0;
    }
    ctx->pc = 0x154CD8u;
    {
        const bool branch_taken_0x154cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154cd8) {
            ctx->pc = 0x154CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154CD8u;
            // 0x154cdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x154CE0u;
label_154ce0:
    // 0x154ce0: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_154ce4:
    // 0x154ce4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_154ce8:
    // 0x154ce8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_154cec:
    // 0x154cec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x154cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_154cf0:
    // 0x154cf0: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x154cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_154cf4:
    // 0x154cf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154cf8:
    // 0x154cf8: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
label_154cfc:
    if (ctx->pc == 0x154CFCu) {
        ctx->pc = 0x154CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CF8u;
        // 0x154cfc: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D00u;
        goto label_154d00;
    }
    ctx->pc = 0x154CF8u;
    {
        const bool branch_taken_0x154cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x154cf8) {
            ctx->pc = 0x154CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154CF8u;
            // 0x154cfc: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154D10u;
            goto label_154d10;
        }
    }
    ctx->pc = 0x154D00u;
label_154d00:
    // 0x154d00: 0xc06a26e  jal         func_1A89B8
label_154d04:
    if (ctx->pc == 0x154D04u) {
        ctx->pc = 0x154D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D00u;
        // 0x154d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D08u;
        goto label_154d08;
    }
    ctx->pc = 0x154D00u;
    SET_GPR_U32(ctx, 31, 0x154D08u);
    ctx->pc = 0x154D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D00u;
    // 0x154d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154D00u, 0x154D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D08u;
label_154d08:
    // 0x154d08: 0x10000184  b           . + 4 + (0x184 << 2)
label_154d0c:
    if (ctx->pc == 0x154D0Cu) {
        ctx->pc = 0x154D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D08u;
        // 0x154d0c: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D10u;
        goto label_154d10;
    }
    ctx->pc = 0x154D08u;
    {
        const bool branch_taken_0x154d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D08u;
        // 0x154d0c: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d08) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154D10u;
label_154d10:
    // 0x154d10: 0x10000182  b           . + 4 + (0x182 << 2)
label_154d14:
    if (ctx->pc == 0x154D14u) {
        ctx->pc = 0x154D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D10u;
        // 0x154d14: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D18u;
        goto label_154d18;
    }
    ctx->pc = 0x154D10u;
    {
        const bool branch_taken_0x154d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D10u;
        // 0x154d14: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d10) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154D18u;
label_154d18:
    // 0x154d18: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_154d1c:
    // 0x154d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154d20:
    // 0x154d20: 0xc06a282  jal         func_1A8A08
label_154d24:
    if (ctx->pc == 0x154D24u) {
        ctx->pc = 0x154D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D20u;
        // 0x154d24: 0x8c51b830  lw          $s1, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D28u;
        goto label_154d28;
    }
    ctx->pc = 0x154D20u;
    SET_GPR_U32(ctx, 31, 0x154D28u);
    ctx->pc = 0x154D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D20u;
    // 0x154d24: 0x8c51b830  lw          $s1, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x154D20u, 0x154D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D28u;
label_154d28:
    // 0x154d28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154d2c:
    // 0x154d2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x154d2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_154d30:
    // 0x154d30: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_154d34:
    if (ctx->pc == 0x154D34u) {
        ctx->pc = 0x154D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D30u;
        // 0x154d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D38u;
        goto label_154d38;
    }
    ctx->pc = 0x154D30u;
    {
        const bool branch_taken_0x154d30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D30u;
        // 0x154d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d30) {
            ctx->pc = 0x154D90u;
            goto label_154d90;
        }
    }
    ctx->pc = 0x154D38u;
label_154d38:
    // 0x154d38: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x154d38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_154d3c:
    // 0x154d3c: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x154d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_154d40:
    // 0x154d40: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x154d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_154d44:
    // 0x154d44: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x154d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_154d48:
    // 0x154d48: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x154d48u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_154d4c:
    // 0x154d4c: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x154d4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_154d50:
    // 0x154d50: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x154d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_154d54:
    // 0x154d54: 0x4a0003bf  vwaitq
    ctx->pc = 0x154d54u;
    // VWAITQ (Q already resolved in this runtime)
label_154d58:
    // 0x154d58: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x154d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_154d5c:
    // 0x154d5c: 0xfa260000  sqc2        $vf6, 0x0($s1)
    ctx->pc = 0x154d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_154d60:
    // 0x154d60: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x154d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_154d64:
    // 0x154d64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x154d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_154d68:
    // 0x154d68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x154d68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_154d6c:
    // 0x154d6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x154d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_154d70:
    // 0x154d70: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x154d70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_154d74:
    // 0x154d74: 0x26030820  addiu       $v1, $s0, 0x820
    ctx->pc = 0x154d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
label_154d78:
    // 0x154d78: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x154d78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_154d7c:
    // 0x154d7c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x154d7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_154d80:
    // 0x154d80: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x154d80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_154d84:
    // 0x154d84: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x154d84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_154d88:
    // 0x154d88: 0x10000165  b           . + 4 + (0x165 << 2)
label_154d8c:
    if (ctx->pc == 0x154D8Cu) {
        ctx->pc = 0x154D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D88u;
        // 0x154d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D90u;
        goto label_154d90;
    }
    ctx->pc = 0x154D88u;
    {
        const bool branch_taken_0x154d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D88u;
        // 0x154d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d88) {
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x154D90u;
label_154d90:
    // 0x154d90: 0x26020820  addiu       $v0, $s0, 0x820
    ctx->pc = 0x154d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
label_154d94:
    // 0x154d94: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x154d94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_154d98:
    // 0x154d98: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_154d9c:
    // 0x154d9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x154d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_154da0:
    // 0x154da0: 0xe6010414  swc1        $f1, 0x414($s0)
    ctx->pc = 0x154da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
label_154da4:
    // 0x154da4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x154da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_154da8:
    // 0x154da8: 0x1044015c  beq         $v0, $a0, . + 4 + (0x15C << 2)
label_154dac:
    if (ctx->pc == 0x154DACu) {
        ctx->pc = 0x154DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DA8u;
        // 0x154dac: 0xe6010634  swc1        $f1, 0x634($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DB0u;
        goto label_154db0;
    }
    ctx->pc = 0x154DA8u;
    {
        const bool branch_taken_0x154da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x154DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DA8u;
        // 0x154dac: 0xe6010634  swc1        $f1, 0x634($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154da8) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154DB0u;
label_154db0:
    // 0x154db0: 0xc06a26e  jal         func_1A89B8
label_154db4:
    if (ctx->pc == 0x154DB4u) {
        ctx->pc = 0x154DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DB0u;
        // 0x154db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DB8u;
        goto label_154db8;
    }
    ctx->pc = 0x154DB0u;
    SET_GPR_U32(ctx, 31, 0x154DB8u);
    ctx->pc = 0x154DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DB0u;
    // 0x154db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154DB0u, 0x154DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DB8u;
label_154db8:
    // 0x154db8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154dbc:
    if (ctx->pc == 0x154DBCu) {
        ctx->pc = 0x154DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DB8u;
        // 0x154dbc: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DC0u;
        goto label_154dc0;
    }
    ctx->pc = 0x154DB8u;
    {
        const bool branch_taken_0x154db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DB8u;
        // 0x154dbc: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154db8) {
            ctx->pc = 0x154DD0u;
            goto label_154dd0;
        }
    }
    ctx->pc = 0x154DC0u;
label_154dc0:
    // 0x154dc0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_154dc4:
    // 0x154dc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_154dc8:
    // 0x154dc8: 0x10000154  b           . + 4 + (0x154 << 2)
label_154dcc:
    if (ctx->pc == 0x154DCCu) {
        ctx->pc = 0x154DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DC8u;
        // 0x154dcc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DD0u;
        goto label_154dd0;
    }
    ctx->pc = 0x154DC8u;
    {
        const bool branch_taken_0x154dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DC8u;
        // 0x154dcc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dc8) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154DD0u;
label_154dd0:
    // 0x154dd0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_154dd4:
    // 0x154dd4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x154dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_154dd8:
    // 0x154dd8: 0x10000150  b           . + 4 + (0x150 << 2)
label_154ddc:
    if (ctx->pc == 0x154DDCu) {
        ctx->pc = 0x154DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DD8u;
        // 0x154ddc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154DE0u;
        goto label_154de0;
    }
    ctx->pc = 0x154DD8u;
    {
        const bool branch_taken_0x154dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DD8u;
        // 0x154ddc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dd8) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154DE0u;
label_154de0:
    // 0x154de0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x154de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_154de4:
    // 0x154de4: 0x26030830  addiu       $v1, $s0, 0x830
    ctx->pc = 0x154de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
label_154de8:
    // 0x154de8: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x154de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_154dec:
    // 0x154dec: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x154decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_154df0:
    // 0x154df0: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x154df0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_154df4:
    // 0x154df4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x154df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_154df8:
    // 0x154df8: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x154df8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_154dfc:
    // 0x154dfc: 0x10000148  b           . + 4 + (0x148 << 2)
label_154e00:
    if (ctx->pc == 0x154E00u) {
        ctx->pc = 0x154E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DFCu;
        // 0x154e00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E04u;
        goto label_154e04;
    }
    ctx->pc = 0x154DFCu;
    {
        const bool branch_taken_0x154dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DFCu;
        // 0x154e00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dfc) {
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x154E04u;
label_154e04:
    // 0x154e04: 0x0  nop
    ctx->pc = 0x154e04u;
    // NOP
label_154e08:
    // 0x154e08: 0x8f829144  lw          $v0, -0x6EBC($gp)
    ctx->pc = 0x154e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
label_154e0c:
    // 0x154e0c: 0x10000143  b           . + 4 + (0x143 << 2)
label_154e10:
    if (ctx->pc == 0x154E10u) {
        ctx->pc = 0x154E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E0Cu;
        // 0x154e10: 0xaf828a30  sw          $v0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E14u;
        goto label_154e14;
    }
    ctx->pc = 0x154E0Cu;
    {
        const bool branch_taken_0x154e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E0Cu;
        // 0x154e10: 0xaf828a30  sw          $v0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e0c) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154E14u;
label_154e14:
    // 0x154e14: 0x0  nop
    ctx->pc = 0x154e14u;
    // NOP
label_154e18:
    // 0x154e18: 0xc06a26e  jal         func_1A89B8
label_154e1c:
    if (ctx->pc == 0x154E1Cu) {
        ctx->pc = 0x154E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E18u;
        // 0x154e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E20u;
        goto label_154e20;
    }
    ctx->pc = 0x154E18u;
    SET_GPR_U32(ctx, 31, 0x154E20u);
    ctx->pc = 0x154E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E18u;
    // 0x154e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154E18u, 0x154E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E20u;
label_154e20:
    // 0x154e20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154e24:
    // 0x154e24: 0xc06a298  jal         func_1A8A60
label_154e28:
    if (ctx->pc == 0x154E28u) {
        ctx->pc = 0x154E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E24u;
        // 0x154e28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E2Cu;
        goto label_154e2c;
    }
    ctx->pc = 0x154E24u;
    SET_GPR_U32(ctx, 31, 0x154E2Cu);
    ctx->pc = 0x154E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E24u;
    // 0x154e28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x154E24u, 0x154E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E2Cu;
label_154e2c:
    // 0x154e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154e30:
    // 0x154e30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_154e34:
    if (ctx->pc == 0x154E34u) {
        ctx->pc = 0x154E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E30u;
        // 0x154e34: 0x8e030690  lw          $v1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E38u;
        goto label_154e38;
    }
    ctx->pc = 0x154E30u;
    {
        const bool branch_taken_0x154e30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x154E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E30u;
        // 0x154e34: 0x8e030690  lw          $v1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e30) {
            ctx->pc = 0x154E40u;
            goto label_154e40;
        }
    }
    ctx->pc = 0x154E38u;
label_154e38:
    // 0x154e38: 0x10000011  b           . + 4 + (0x11 << 2)
label_154e3c:
    if (ctx->pc == 0x154E3Cu) {
        ctx->pc = 0x154E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E38u;
        // 0x154e3c: 0x8c6401b4  lw          $a0, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E40u;
        goto label_154e40;
    }
    ctx->pc = 0x154E38u;
    {
        const bool branch_taken_0x154e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E38u;
        // 0x154e3c: 0x8c6401b4  lw          $a0, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e38) {
            ctx->pc = 0x154E80u;
            goto label_154e80;
        }
    }
    ctx->pc = 0x154E40u;
label_154e40:
    // 0x154e40: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_154e44:
    if (ctx->pc == 0x154E44u) {
        ctx->pc = 0x154E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E40u;
        // 0x154e44: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E48u;
        goto label_154e48;
    }
    ctx->pc = 0x154E40u;
    {
        const bool branch_taken_0x154e40 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x154E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E40u;
        // 0x154e44: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e40) {
            ctx->pc = 0x154E58u;
            goto label_154e58;
        }
    }
    ctx->pc = 0x154E48u;
label_154e48:
    // 0x154e48: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x154e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
label_154e4c:
    // 0x154e4c: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x154e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_154e50:
    // 0x154e50: 0x1000000b  b           . + 4 + (0xB << 2)
label_154e54:
    if (ctx->pc == 0x154E54u) {
        ctx->pc = 0x154E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E50u;
        // 0x154e54: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E58u;
        goto label_154e58;
    }
    ctx->pc = 0x154E50u;
    {
        const bool branch_taken_0x154e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E50u;
        // 0x154e54: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e50) {
            ctx->pc = 0x154E80u;
            goto label_154e80;
        }
    }
    ctx->pc = 0x154E58u;
label_154e58:
    // 0x154e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154e5c:
    // 0x154e5c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x154e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_154e60:
    // 0x154e60: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_154e64:
    if (ctx->pc == 0x154E64u) {
        ctx->pc = 0x154E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E60u;
        // 0x154e64: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E68u;
        goto label_154e68;
    }
    ctx->pc = 0x154E60u;
    {
        const bool branch_taken_0x154e60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x154E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E60u;
        // 0x154e64: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e60) {
            ctx->pc = 0x154E78u;
            goto label_154e78;
        }
    }
    ctx->pc = 0x154E68u;
label_154e68:
    // 0x154e68: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x154e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
label_154e6c:
    // 0x154e6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_154e70:
    if (ctx->pc == 0x154E70u) {
        ctx->pc = 0x154E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E6Cu;
        // 0x154e70: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E74u;
        goto label_154e74;
    }
    ctx->pc = 0x154E6Cu;
    {
        const bool branch_taken_0x154e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E6Cu;
        // 0x154e70: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e6c) {
            ctx->pc = 0x154E7Cu;
            goto label_154e7c;
        }
    }
    ctx->pc = 0x154E74u;
label_154e74:
    // 0x154e74: 0x0  nop
    ctx->pc = 0x154e74u;
    // NOP
label_154e78:
    // 0x154e78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x154e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154e7c:
    // 0x154e7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154e80:
    // 0x154e80: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x154e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
label_154e84:
    // 0x154e84: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x154e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_154e88:
    // 0x154e88: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x154e88u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_154e8c:
    // 0x154e8c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154e8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_154e90:
    // 0x154e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154e94:
    // 0x154e94: 0x10000121  b           . + 4 + (0x121 << 2)
label_154e98:
    if (ctx->pc == 0x154E98u) {
        ctx->pc = 0x154E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E94u;
        // 0x154e98: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E9Cu;
        goto label_154e9c;
    }
    ctx->pc = 0x154E94u;
    {
        const bool branch_taken_0x154e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E94u;
        // 0x154e98: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e94) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154E9Cu;
label_154e9c:
    // 0x154e9c: 0x0  nop
    ctx->pc = 0x154e9cu;
    // NOP
label_154ea0:
    // 0x154ea0: 0xc06a26e  jal         func_1A89B8
label_154ea4:
    if (ctx->pc == 0x154EA4u) {
        ctx->pc = 0x154EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EA0u;
        // 0x154ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EA8u;
        goto label_154ea8;
    }
    ctx->pc = 0x154EA0u;
    SET_GPR_U32(ctx, 31, 0x154EA8u);
    ctx->pc = 0x154EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EA0u;
    // 0x154ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154EA0u, 0x154EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EA8u;
label_154ea8:
    // 0x154ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154eac:
    // 0x154eac: 0xc06a298  jal         func_1A8A60
label_154eb0:
    if (ctx->pc == 0x154EB0u) {
        ctx->pc = 0x154EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EACu;
        // 0x154eb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EB4u;
        goto label_154eb4;
    }
    ctx->pc = 0x154EACu;
    SET_GPR_U32(ctx, 31, 0x154EB4u);
    ctx->pc = 0x154EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EACu;
    // 0x154eb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x154EACu, 0x154EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EB4u;
label_154eb4:
    // 0x154eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154eb8:
    // 0x154eb8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_154ebc:
    if (ctx->pc == 0x154EBCu) {
        ctx->pc = 0x154EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EB8u;
        // 0x154ebc: 0x8e030690  lw          $v1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EC0u;
        goto label_154ec0;
    }
    ctx->pc = 0x154EB8u;
    {
        const bool branch_taken_0x154eb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x154EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EB8u;
        // 0x154ebc: 0x8e030690  lw          $v1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154eb8) {
            ctx->pc = 0x154EC8u;
            goto label_154ec8;
        }
    }
    ctx->pc = 0x154EC0u;
label_154ec0:
    // 0x154ec0: 0x10000011  b           . + 4 + (0x11 << 2)
label_154ec4:
    if (ctx->pc == 0x154EC4u) {
        ctx->pc = 0x154EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EC0u;
        // 0x154ec4: 0x8c6401b4  lw          $a0, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EC8u;
        goto label_154ec8;
    }
    ctx->pc = 0x154EC0u;
    {
        const bool branch_taken_0x154ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EC0u;
        // 0x154ec4: 0x8c6401b4  lw          $a0, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ec0) {
            ctx->pc = 0x154F08u;
            goto label_154f08;
        }
    }
    ctx->pc = 0x154EC8u;
label_154ec8:
    // 0x154ec8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_154ecc:
    if (ctx->pc == 0x154ECCu) {
        ctx->pc = 0x154ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EC8u;
        // 0x154ecc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154ED0u;
        goto label_154ed0;
    }
    ctx->pc = 0x154EC8u;
    {
        const bool branch_taken_0x154ec8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x154ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EC8u;
        // 0x154ecc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ec8) {
            ctx->pc = 0x154EE0u;
            goto label_154ee0;
        }
    }
    ctx->pc = 0x154ED0u;
label_154ed0:
    // 0x154ed0: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x154ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
label_154ed4:
    // 0x154ed4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x154ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_154ed8:
    // 0x154ed8: 0x1000000b  b           . + 4 + (0xB << 2)
label_154edc:
    if (ctx->pc == 0x154EDCu) {
        ctx->pc = 0x154EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ED8u;
        // 0x154edc: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EE0u;
        goto label_154ee0;
    }
    ctx->pc = 0x154ED8u;
    {
        const bool branch_taken_0x154ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ED8u;
        // 0x154edc: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ed8) {
            ctx->pc = 0x154F08u;
            goto label_154f08;
        }
    }
    ctx->pc = 0x154EE0u;
label_154ee0:
    // 0x154ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154ee4:
    // 0x154ee4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x154ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_154ee8:
    // 0x154ee8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_154eec:
    if (ctx->pc == 0x154EECu) {
        ctx->pc = 0x154EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EE8u;
        // 0x154eec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EF0u;
        goto label_154ef0;
    }
    ctx->pc = 0x154EE8u;
    {
        const bool branch_taken_0x154ee8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x154EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EE8u;
        // 0x154eec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ee8) {
            ctx->pc = 0x154F00u;
            goto label_154f00;
        }
    }
    ctx->pc = 0x154EF0u;
label_154ef0:
    // 0x154ef0: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
label_154ef4:
    // 0x154ef4: 0x10000003  b           . + 4 + (0x3 << 2)
label_154ef8:
    if (ctx->pc == 0x154EF8u) {
        ctx->pc = 0x154EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EF4u;
        // 0x154ef8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EFCu;
        goto label_154efc;
    }
    ctx->pc = 0x154EF4u;
    {
        const bool branch_taken_0x154ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EF4u;
        // 0x154ef8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ef4) {
            ctx->pc = 0x154F04u;
            goto label_154f04;
        }
    }
    ctx->pc = 0x154EFCu;
label_154efc:
    // 0x154efc: 0x0  nop
    ctx->pc = 0x154efcu;
    // NOP
label_154f00:
    // 0x154f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x154f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154f04:
    // 0x154f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154f08:
    // 0x154f08: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x154f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
label_154f0c:
    // 0x154f0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x154f0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_154f10:
    // 0x154f10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x154f10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_154f14:
    // 0x154f14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x154f14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_154f18:
    // 0x154f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154f1c:
    // 0x154f1c: 0x100000ff  b           . + 4 + (0xFF << 2)
label_154f20:
    if (ctx->pc == 0x154F20u) {
        ctx->pc = 0x154F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F1Cu;
        // 0x154f20: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F24u;
        goto label_154f24;
    }
    ctx->pc = 0x154F1Cu;
    {
        const bool branch_taken_0x154f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F1Cu;
        // 0x154f20: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f1c) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154F24u;
label_154f24:
    // 0x154f24: 0x0  nop
    ctx->pc = 0x154f24u;
    // NOP
label_154f28:
    // 0x154f28: 0xc06a26e  jal         func_1A89B8
label_154f2c:
    if (ctx->pc == 0x154F2Cu) {
        ctx->pc = 0x154F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F28u;
        // 0x154f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F30u;
        goto label_154f30;
    }
    ctx->pc = 0x154F28u;
    SET_GPR_U32(ctx, 31, 0x154F30u);
    ctx->pc = 0x154F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F28u;
    // 0x154f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154F28u, 0x154F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F30u;
label_154f30:
    // 0x154f30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154f34:
    if (ctx->pc == 0x154F34u) {
        ctx->pc = 0x154F38u;
        goto label_154f38;
    }
    ctx->pc = 0x154F30u;
    {
        const bool branch_taken_0x154f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f30) {
            ctx->pc = 0x154F48u;
            goto label_154f48;
        }
    }
    ctx->pc = 0x154F38u;
label_154f38:
    // 0x154f38: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_154f3c:
    // 0x154f3c: 0x10000017  b           . + 4 + (0x17 << 2)
label_154f40:
    if (ctx->pc == 0x154F40u) {
        ctx->pc = 0x154F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F3Cu;
        // 0x154f40: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F44u;
        goto label_154f44;
    }
    ctx->pc = 0x154F3Cu;
    {
        const bool branch_taken_0x154f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F3Cu;
        // 0x154f40: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f3c) {
            ctx->pc = 0x154F9Cu;
            goto label_154f9c;
        }
    }
    ctx->pc = 0x154F44u;
label_154f44:
    // 0x154f44: 0x0  nop
    ctx->pc = 0x154f44u;
    // NOP
label_154f48:
    // 0x154f48: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x154f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_154f4c:
    // 0x154f4c: 0x10000018  b           . + 4 + (0x18 << 2)
label_154f50:
    if (ctx->pc == 0x154F50u) {
        ctx->pc = 0x154F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F4Cu;
        // 0x154f50: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F54u;
        goto label_154f54;
    }
    ctx->pc = 0x154F4Cu;
    {
        const bool branch_taken_0x154f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F4Cu;
        // 0x154f50: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f4c) {
            ctx->pc = 0x154FB0u;
            goto label_154fb0;
        }
    }
    ctx->pc = 0x154F54u;
label_154f54:
    // 0x154f54: 0x0  nop
    ctx->pc = 0x154f54u;
    // NOP
label_154f58:
    // 0x154f58: 0xc06a26e  jal         func_1A89B8
label_154f5c:
    if (ctx->pc == 0x154F5Cu) {
        ctx->pc = 0x154F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F58u;
        // 0x154f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F60u;
        goto label_154f60;
    }
    ctx->pc = 0x154F58u;
    SET_GPR_U32(ctx, 31, 0x154F60u);
    ctx->pc = 0x154F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F58u;
    // 0x154f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154F58u, 0x154F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F60u;
label_154f60:
    // 0x154f60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154f64:
    if (ctx->pc == 0x154F64u) {
        ctx->pc = 0x154F68u;
        goto label_154f68;
    }
    ctx->pc = 0x154F60u;
    {
        const bool branch_taken_0x154f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f60) {
            ctx->pc = 0x154F78u;
            goto label_154f78;
        }
    }
    ctx->pc = 0x154F68u;
label_154f68:
    // 0x154f68: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_154f6c:
    // 0x154f6c: 0x1000000b  b           . + 4 + (0xB << 2)
label_154f70:
    if (ctx->pc == 0x154F70u) {
        ctx->pc = 0x154F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F6Cu;
        // 0x154f70: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F74u;
        goto label_154f74;
    }
    ctx->pc = 0x154F6Cu;
    {
        const bool branch_taken_0x154f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F6Cu;
        // 0x154f70: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f6c) {
            ctx->pc = 0x154F9Cu;
            goto label_154f9c;
        }
    }
    ctx->pc = 0x154F74u;
label_154f74:
    // 0x154f74: 0x0  nop
    ctx->pc = 0x154f74u;
    // NOP
label_154f78:
    // 0x154f78: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x154f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_154f7c:
    // 0x154f7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_154f80:
    if (ctx->pc == 0x154F80u) {
        ctx->pc = 0x154F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F7Cu;
        // 0x154f80: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F84u;
        goto label_154f84;
    }
    ctx->pc = 0x154F7Cu;
    {
        const bool branch_taken_0x154f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F7Cu;
        // 0x154f80: 0x8e030184  lw          $v1, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f7c) {
            ctx->pc = 0x154FB0u;
            goto label_154fb0;
        }
    }
    ctx->pc = 0x154F84u;
label_154f84:
    // 0x154f84: 0x0  nop
    ctx->pc = 0x154f84u;
    // NOP
label_154f88:
    // 0x154f88: 0xc06a26e  jal         func_1A89B8
label_154f8c:
    if (ctx->pc == 0x154F8Cu) {
        ctx->pc = 0x154F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F88u;
        // 0x154f8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F90u;
        goto label_154f90;
    }
    ctx->pc = 0x154F88u;
    SET_GPR_U32(ctx, 31, 0x154F90u);
    ctx->pc = 0x154F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F88u;
    // 0x154f8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154F88u, 0x154F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F90u;
label_154f90:
    // 0x154f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154f94:
    if (ctx->pc == 0x154F94u) {
        ctx->pc = 0x154F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F90u;
        // 0x154f94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F98u;
        goto label_154f98;
    }
    ctx->pc = 0x154F90u;
    {
        const bool branch_taken_0x154f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F90u;
        // 0x154f94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f90) {
            ctx->pc = 0x154FA8u;
            goto label_154fa8;
        }
    }
    ctx->pc = 0x154F98u;
label_154f98:
    // 0x154f98: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_154f9c:
    // 0x154f9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x154f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_154fa0:
    // 0x154fa0: 0x100000de  b           . + 4 + (0xDE << 2)
label_154fa4:
    if (ctx->pc == 0x154FA4u) {
        ctx->pc = 0x154FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FA0u;
        // 0x154fa4: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FA8u;
        goto label_154fa8;
    }
    ctx->pc = 0x154FA0u;
    {
        const bool branch_taken_0x154fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FA0u;
        // 0x154fa4: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fa0) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154FA8u;
label_154fa8:
    // 0x154fa8: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x154fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_154fac:
    // 0x154fac: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x154facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_154fb0:
    // 0x154fb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x154fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_154fb4:
    // 0x154fb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x154fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_154fb8:
    // 0x154fb8: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_154fbc:
    if (ctx->pc == 0x154FBCu) {
        ctx->pc = 0x154FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FB8u;
        // 0x154fbc: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FC0u;
        goto label_154fc0;
    }
    ctx->pc = 0x154FB8u;
    {
        const bool branch_taken_0x154fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FB8u;
        // 0x154fbc: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fb8) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154FC0u;
label_154fc0:
    // 0x154fc0: 0xc06a26e  jal         func_1A89B8
label_154fc4:
    if (ctx->pc == 0x154FC4u) {
        ctx->pc = 0x154FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FC0u;
        // 0x154fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FC8u;
        goto label_154fc8;
    }
    ctx->pc = 0x154FC0u;
    SET_GPR_U32(ctx, 31, 0x154FC8u);
    ctx->pc = 0x154FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FC0u;
    // 0x154fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154FC0u, 0x154FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FC8u;
label_154fc8:
    // 0x154fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154fcc:
    if (ctx->pc == 0x154FCCu) {
        ctx->pc = 0x154FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FC8u;
        // 0x154fcc: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FD0u;
        goto label_154fd0;
    }
    ctx->pc = 0x154FC8u;
    {
        const bool branch_taken_0x154fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FC8u;
        // 0x154fcc: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fc8) {
            ctx->pc = 0x154FE0u;
            goto label_154fe0;
        }
    }
    ctx->pc = 0x154FD0u;
label_154fd0:
    // 0x154fd0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x154fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_154fd4:
    // 0x154fd4: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_154fd8:
    if (ctx->pc == 0x154FD8u) {
        ctx->pc = 0x154FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FD4u;
        // 0x154fd8: 0xae0203b0  sw          $v0, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FDCu;
        goto label_154fdc;
    }
    ctx->pc = 0x154FD4u;
    {
        const bool branch_taken_0x154fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FD4u;
        // 0x154fd8: 0xae0203b0  sw          $v0, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fd4) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154FDCu;
label_154fdc:
    // 0x154fdc: 0x0  nop
    ctx->pc = 0x154fdcu;
    // NOP
label_154fe0:
    // 0x154fe0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x154fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_154fe4:
    // 0x154fe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_154fe8:
    // 0x154fe8: 0x100000cc  b           . + 4 + (0xCC << 2)
label_154fec:
    if (ctx->pc == 0x154FECu) {
        ctx->pc = 0x154FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FE8u;
        // 0x154fec: 0xae0203b0  sw          $v0, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FF0u;
        goto label_154ff0;
    }
    ctx->pc = 0x154FE8u;
    {
        const bool branch_taken_0x154fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FE8u;
        // 0x154fec: 0xae0203b0  sw          $v0, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fe8) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x154FF0u;
label_154ff0:
    // 0x154ff0: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x154ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
label_154ff4:
    // 0x154ff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x154ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154ff8:
    // 0x154ff8: 0xc041da8  jal         func_1076A0
label_154ffc:
    if (ctx->pc == 0x154FFCu) {
        ctx->pc = 0x154FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FF8u;
        // 0x154ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155000u;
        goto label_155000;
    }
    ctx->pc = 0x154FF8u;
    SET_GPR_U32(ctx, 31, 0x155000u);
    ctx->pc = 0x154FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FF8u;
    // 0x154ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x154FF8u, 0x155000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155000u;
label_155000:
    // 0x155000: 0x2603071c  addiu       $v1, $s0, 0x71C
    ctx->pc = 0x155000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
label_155004:
    // 0x155004: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_155008:
    // 0x155008: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_15500c:
    if (ctx->pc == 0x15500Cu) {
        ctx->pc = 0x15500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155008u;
        // 0x15500c: 0x2603075c  addiu       $v1, $s0, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155010u;
        goto label_155010;
    }
    ctx->pc = 0x155008u;
    {
        const bool branch_taken_0x155008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155008) {
            ctx->pc = 0x15500Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155008u;
            // 0x15500c: 0x2603075c  addiu       $v1, $s0, 0x75C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155030u;
            goto label_155030;
        }
    }
    ctx->pc = 0x155010u;
label_155010:
    // 0x155010: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x155010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_155014:
    // 0x155014: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155018:
    // 0x155018: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x155018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_15501c:
    // 0x15501c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15501cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155020:
    // 0x155020: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x155020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_155024:
    // 0x155024: 0xc041da8  jal         func_1076A0
label_155028:
    if (ctx->pc == 0x155028u) {
        ctx->pc = 0x155028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155024u;
        // 0x155028: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15502Cu;
        goto label_15502c;
    }
    ctx->pc = 0x155024u;
    SET_GPR_U32(ctx, 31, 0x15502Cu);
    ctx->pc = 0x155028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155024u;
    // 0x155028: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x155024u, 0x15502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15502Cu;
label_15502c:
    // 0x15502c: 0x2603075c  addiu       $v1, $s0, 0x75C
    ctx->pc = 0x15502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
label_155030:
    // 0x155030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_155034:
    // 0x155034: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_155038:
    if (ctx->pc == 0x155038u) {
        ctx->pc = 0x155038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155034u;
        // 0x155038: 0x2603079c  addiu       $v1, $s0, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15503Cu;
        goto label_15503c;
    }
    ctx->pc = 0x155034u;
    {
        const bool branch_taken_0x155034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155034) {
            ctx->pc = 0x155038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155034u;
            // 0x155038: 0x2603079c  addiu       $v1, $s0, 0x79C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15505Cu;
            goto label_15505c;
        }
    }
    ctx->pc = 0x15503Cu;
label_15503c:
    // 0x15503c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x15503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_155040:
    // 0x155040: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155044:
    // 0x155044: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x155044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_155048:
    // 0x155048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15504c:
    // 0x15504c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_155050:
    // 0x155050: 0xc041da8  jal         func_1076A0
label_155054:
    if (ctx->pc == 0x155054u) {
        ctx->pc = 0x155054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155050u;
        // 0x155054: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155058u;
        goto label_155058;
    }
    ctx->pc = 0x155050u;
    SET_GPR_U32(ctx, 31, 0x155058u);
    ctx->pc = 0x155054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155050u;
    // 0x155054: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x155050u, 0x155058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155058u;
label_155058:
    // 0x155058: 0x2603079c  addiu       $v1, $s0, 0x79C
    ctx->pc = 0x155058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
label_15505c:
    // 0x15505c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_155060:
    // 0x155060: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
label_155064:
    if (ctx->pc == 0x155064u) {
        ctx->pc = 0x155064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155060u;
        // 0x155064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155068u;
        goto label_155068;
    }
    ctx->pc = 0x155060u;
    {
        const bool branch_taken_0x155060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155060u;
        // 0x155064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155060) {
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x155068u;
label_155068:
    // 0x155068: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x155068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_15506c:
    // 0x15506c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15506cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155070:
    // 0x155070: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_155074:
    // 0x155074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155078:
    // 0x155078: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x155078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_15507c:
    // 0x15507c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x15507cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_155080:
    // 0x155080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_155084:
    // 0x155084: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_155088:
    // 0x155088: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15508c:
    // 0x15508c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_155090:
    // 0x155090: 0x8041da8  j           func_1076A0
label_155094:
    if (ctx->pc == 0x155094u) {
        ctx->pc = 0x155094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155090u;
        // 0x155094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155098u;
        goto label_155098;
    }
    ctx->pc = 0x155090u;
    ctx->pc = 0x155094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155090u;
    // 0x155094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    Ap2DPanel_TRANS_Param__FP8WcEntityP15BsSCDEntControlb_0x1076a0(rdram, ctx, runtime); return;
    ctx->pc = 0x155098u;
label_155098:
    // 0x155098: 0xc06a26e  jal         func_1A89B8
label_15509c:
    if (ctx->pc == 0x15509Cu) {
        ctx->pc = 0x15509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155098u;
        // 0x15509c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550A0u;
        goto label_1550a0;
    }
    ctx->pc = 0x155098u;
    SET_GPR_U32(ctx, 31, 0x1550A0u);
    ctx->pc = 0x15509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155098u;
    // 0x15509c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155098u, 0x1550A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1550A0u;
label_1550a0:
    // 0x1550a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1550a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1550a4:
    // 0x1550a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1550a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1550a8:
    // 0x1550a8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1550ac:
    if (ctx->pc == 0x1550ACu) {
        ctx->pc = 0x1550ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550A8u;
        // 0x1550ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550B0u;
        goto label_1550b0;
    }
    ctx->pc = 0x1550A8u;
    {
        const bool branch_taken_0x1550a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1550ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550A8u;
        // 0x1550ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550a8) {
            ctx->pc = 0x1550E0u;
            goto label_1550e0;
        }
    }
    ctx->pc = 0x1550B0u;
label_1550b0:
    // 0x1550b0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1550b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1550b4:
    // 0x1550b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1550b8:
    if (ctx->pc == 0x1550B8u) {
        ctx->pc = 0x1550B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550B4u;
        // 0x1550b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550BCu;
        goto label_1550bc;
    }
    ctx->pc = 0x1550B4u;
    {
        const bool branch_taken_0x1550b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550B4u;
        // 0x1550b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550b4) {
            ctx->pc = 0x1550D0u;
            goto label_1550d0;
        }
    }
    ctx->pc = 0x1550BCu;
label_1550bc:
    // 0x1550bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1550bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1550c0:
    // 0x1550c0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1550c4:
    if (ctx->pc == 0x1550C4u) {
        ctx->pc = 0x1550C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550C0u;
        // 0x1550c4: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550C8u;
        goto label_1550c8;
    }
    ctx->pc = 0x1550C0u;
    {
        const bool branch_taken_0x1550c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1550c0) {
            ctx->pc = 0x1550C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1550C0u;
            // 0x1550c4: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1550E4u;
            goto label_1550e4;
        }
    }
    ctx->pc = 0x1550C8u;
label_1550c8:
    // 0x1550c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1550cc:
    if (ctx->pc == 0x1550CCu) {
        ctx->pc = 0x1550D0u;
        goto label_1550d0;
    }
    ctx->pc = 0x1550C8u;
    {
        const bool branch_taken_0x1550c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550c8) {
            ctx->pc = 0x1550E4u;
            goto label_1550e4;
        }
    }
    ctx->pc = 0x1550D0u;
label_1550d0:
    // 0x1550d0: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_1550d4:
    if (ctx->pc == 0x1550D4u) {
        ctx->pc = 0x1550D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550D0u;
        // 0x1550d4: 0x2604075c  addiu       $a0, $s0, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550D8u;
        goto label_1550d8;
    }
    ctx->pc = 0x1550D0u;
    {
        const bool branch_taken_0x1550d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1550d0) {
            ctx->pc = 0x1550D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1550D0u;
            // 0x1550d4: 0x2604075c  addiu       $a0, $s0, 0x75C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1550E4u;
            goto label_1550e4;
        }
    }
    ctx->pc = 0x1550D8u;
label_1550d8:
    // 0x1550d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1550dc:
    if (ctx->pc == 0x1550DCu) {
        ctx->pc = 0x1550E0u;
        goto label_1550e0;
    }
    ctx->pc = 0x1550D8u;
    {
        const bool branch_taken_0x1550d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550d8) {
            ctx->pc = 0x1550E4u;
            goto label_1550e4;
        }
    }
    ctx->pc = 0x1550E0u;
label_1550e0:
    // 0x1550e0: 0x2604071c  addiu       $a0, $s0, 0x71C
    ctx->pc = 0x1550e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
label_1550e4:
    // 0x1550e4: 0x1080008d  beqz        $a0, . + 4 + (0x8D << 2)
label_1550e8:
    if (ctx->pc == 0x1550E8u) {
        ctx->pc = 0x1550E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550E4u;
        // 0x1550e8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550ECu;
        goto label_1550ec;
    }
    ctx->pc = 0x1550E4u;
    {
        const bool branch_taken_0x1550e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550E4u;
        // 0x1550e8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550e4) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x1550ECu;
label_1550ec:
    // 0x1550ec: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1550ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1550f0:
    // 0x1550f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1550f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1550f4:
    // 0x1550f4: 0x10000089  b           . + 4 + (0x89 << 2)
label_1550f8:
    if (ctx->pc == 0x1550F8u) {
        ctx->pc = 0x1550F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550F4u;
        // 0x1550f8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550FCu;
        goto label_1550fc;
    }
    ctx->pc = 0x1550F4u;
    {
        const bool branch_taken_0x1550f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550F4u;
        // 0x1550f8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550f4) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x1550FCu;
label_1550fc:
    // 0x1550fc: 0x0  nop
    ctx->pc = 0x1550fcu;
    // NOP
label_155100:
    // 0x155100: 0xc06a26e  jal         func_1A89B8
label_155104:
    if (ctx->pc == 0x155104u) {
        ctx->pc = 0x155104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155100u;
        // 0x155104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155108u;
        goto label_155108;
    }
    ctx->pc = 0x155100u;
    SET_GPR_U32(ctx, 31, 0x155108u);
    ctx->pc = 0x155104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155100u;
    // 0x155104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155100u, 0x155108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155108u;
label_155108:
    // 0x155108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15510c:
    // 0x15510c: 0xc06a26e  jal         func_1A89B8
label_155110:
    if (ctx->pc == 0x155110u) {
        ctx->pc = 0x155110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15510Cu;
        // 0x155110: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155114u;
        goto label_155114;
    }
    ctx->pc = 0x15510Cu;
    SET_GPR_U32(ctx, 31, 0x155114u);
    ctx->pc = 0x155110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15510Cu;
    // 0x155110: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15510Cu, 0x155114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155114u;
label_155114:
    // 0x155114: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155118:
    // 0x155118: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15511c:
    // 0x15511c: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
label_155120:
    if (ctx->pc == 0x155120u) {
        ctx->pc = 0x155120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15511Cu;
        // 0x155120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155124u;
        goto label_155124;
    }
    ctx->pc = 0x15511Cu;
    {
        const bool branch_taken_0x15511c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x155120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15511Cu;
        // 0x155120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15511c) {
            ctx->pc = 0x155160u;
            goto label_155160;
        }
    }
    ctx->pc = 0x155124u;
label_155124:
    // 0x155124: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x155124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_155128:
    // 0x155128: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15512c:
    if (ctx->pc == 0x15512Cu) {
        ctx->pc = 0x15512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155128u;
        // 0x15512c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155130u;
        goto label_155130;
    }
    ctx->pc = 0x155128u;
    {
        const bool branch_taken_0x155128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155128u;
        // 0x15512c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155128) {
            ctx->pc = 0x155148u;
            goto label_155148;
        }
    }
    ctx->pc = 0x155130u;
label_155130:
    // 0x155130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155134:
    // 0x155134: 0x52220010  beql        $s1, $v0, . + 4 + (0x10 << 2)
label_155138:
    if (ctx->pc == 0x155138u) {
        ctx->pc = 0x155138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155134u;
        // 0x155138: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15513Cu;
        goto label_15513c;
    }
    ctx->pc = 0x155134u;
    {
        const bool branch_taken_0x155134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x155134) {
            ctx->pc = 0x155138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155134u;
            // 0x155138: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x15513Cu;
label_15513c:
    // 0x15513c: 0x1000000e  b           . + 4 + (0xE << 2)
label_155140:
    if (ctx->pc == 0x155140u) {
        ctx->pc = 0x155144u;
        goto label_155144;
    }
    ctx->pc = 0x15513Cu;
    {
        const bool branch_taken_0x15513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15513c) {
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x155144u;
label_155144:
    // 0x155144: 0x0  nop
    ctx->pc = 0x155144u;
    // NOP
label_155148:
    // 0x155148: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_15514c:
    if (ctx->pc == 0x15514Cu) {
        ctx->pc = 0x15514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155148u;
        // 0x15514c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155150u;
        goto label_155150;
    }
    ctx->pc = 0x155148u;
    {
        const bool branch_taken_0x155148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x15514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155148u;
        // 0x15514c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155148) {
            ctx->pc = 0x155168u;
            goto label_155168;
        }
    }
    ctx->pc = 0x155150u;
label_155150:
    // 0x155150: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_155154:
    if (ctx->pc == 0x155154u) {
        ctx->pc = 0x155154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155150u;
        // 0x155154: 0x2603079c  addiu       $v1, $s0, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155158u;
        goto label_155158;
    }
    ctx->pc = 0x155150u;
    {
        const bool branch_taken_0x155150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x155154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155150u;
        // 0x155154: 0x2603079c  addiu       $v1, $s0, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155150) {
            ctx->pc = 0x155170u;
            goto label_155170;
        }
    }
    ctx->pc = 0x155158u;
label_155158:
    // 0x155158: 0x10000007  b           . + 4 + (0x7 << 2)
label_15515c:
    if (ctx->pc == 0x15515Cu) {
        ctx->pc = 0x155160u;
        goto label_155160;
    }
    ctx->pc = 0x155158u;
    {
        const bool branch_taken_0x155158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155158) {
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x155160u;
label_155160:
    // 0x155160: 0x10000005  b           . + 4 + (0x5 << 2)
label_155164:
    if (ctx->pc == 0x155164u) {
        ctx->pc = 0x155164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155160u;
        // 0x155164: 0x2604071c  addiu       $a0, $s0, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155168u;
        goto label_155168;
    }
    ctx->pc = 0x155160u;
    {
        const bool branch_taken_0x155160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155160u;
        // 0x155164: 0x2604071c  addiu       $a0, $s0, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155160) {
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x155168u;
label_155168:
    // 0x155168: 0x10000003  b           . + 4 + (0x3 << 2)
label_15516c:
    if (ctx->pc == 0x15516Cu) {
        ctx->pc = 0x15516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155168u;
        // 0x15516c: 0x2604075c  addiu       $a0, $s0, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155170u;
        goto label_155170;
    }
    ctx->pc = 0x155168u;
    {
        const bool branch_taken_0x155168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155168u;
        // 0x15516c: 0x2604075c  addiu       $a0, $s0, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155168) {
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x155170u;
label_155170:
    // 0x155170: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_155174:
    // 0x155174: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x155174u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_155178:
    // 0x155178: 0x50800069  beql        $a0, $zero, . + 4 + (0x69 << 2)
label_15517c:
    if (ctx->pc == 0x15517Cu) {
        ctx->pc = 0x15517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155178u;
        // 0x15517c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155180u;
        goto label_155180;
    }
    ctx->pc = 0x155178u;
    {
        const bool branch_taken_0x155178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155178) {
            ctx->pc = 0x15517Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155178u;
            // 0x15517c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x155180u;
label_155180:
    // 0x155180: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
label_155184:
    if (ctx->pc == 0x155184u) {
        ctx->pc = 0x155184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155180u;
        // 0x155184: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155188u;
        goto label_155188;
    }
    ctx->pc = 0x155180u;
    {
        const bool branch_taken_0x155180 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x155184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155180u;
        // 0x155184: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155180) {
            ctx->pc = 0x1551C0u;
            goto label_1551c0;
        }
    }
    ctx->pc = 0x155188u;
label_155188:
    // 0x155188: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x155188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15518c:
    // 0x15518c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_155190:
    // 0x155190: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x155190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_155194:
    // 0x155194: 0x8c420c0c  lw          $v0, 0xC0C($v0)
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3084)));
label_155198:
    // 0x155198: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_15519c:
    if (ctx->pc == 0x15519Cu) {
        ctx->pc = 0x15519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155198u;
        // 0x15519c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551A0u;
        goto label_1551a0;
    }
    ctx->pc = 0x155198u;
    {
        const bool branch_taken_0x155198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x15519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155198u;
        // 0x15519c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155198) {
            ctx->pc = 0x1551B0u;
            goto label_1551b0;
        }
    }
    ctx->pc = 0x1551A0u;
label_1551a0:
    // 0x1551a0: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x1551a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
label_1551a4:
    // 0x1551a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1551a8:
    if (ctx->pc == 0x1551A8u) {
        ctx->pc = 0x1551A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551A4u;
        // 0x1551a8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551ACu;
        goto label_1551ac;
    }
    ctx->pc = 0x1551A4u;
    {
        const bool branch_taken_0x1551a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551A4u;
        // 0x1551a8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551a4) {
            ctx->pc = 0x1551B4u;
            goto label_1551b4;
        }
    }
    ctx->pc = 0x1551ACu;
label_1551ac:
    // 0x1551ac: 0x0  nop
    ctx->pc = 0x1551acu;
    // NOP
label_1551b0:
    // 0x1551b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1551b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1551b4:
    // 0x1551b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1551b8:
    if (ctx->pc == 0x1551B8u) {
        ctx->pc = 0x1551B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551B4u;
        // 0x1551b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551BCu;
        goto label_1551bc;
    }
    ctx->pc = 0x1551B4u;
    {
        const bool branch_taken_0x1551b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551B4u;
        // 0x1551b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551b4) {
            ctx->pc = 0x1551CCu;
            goto label_1551cc;
        }
    }
    ctx->pc = 0x1551BCu;
label_1551bc:
    // 0x1551bc: 0x0  nop
    ctx->pc = 0x1551bcu;
    // NOP
label_1551c0:
    // 0x1551c0: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x1551c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
label_1551c4:
    // 0x1551c4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1551c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_1551c8:
    // 0x1551c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1551c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1551cc:
    // 0x1551cc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1551ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1551d0:
    // 0x1551d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1551d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1551d4:
    // 0x1551d4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1551d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_1551d8:
    // 0x1551d8: 0x10000050  b           . + 4 + (0x50 << 2)
label_1551dc:
    if (ctx->pc == 0x1551DCu) {
        ctx->pc = 0x1551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551D8u;
        // 0x1551dc: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551E0u;
        goto label_1551e0;
    }
    ctx->pc = 0x1551D8u;
    {
        const bool branch_taken_0x1551d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551D8u;
        // 0x1551dc: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551d8) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x1551E0u;
label_1551e0:
    // 0x1551e0: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1551e4:
    // 0x1551e4: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1551e8:
    if (ctx->pc == 0x1551E8u) {
        ctx->pc = 0x1551E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551E4u;
        // 0x1551e8: 0xae020688  sw          $v0, 0x688($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551ECu;
        goto label_1551ec;
    }
    ctx->pc = 0x1551E4u;
    {
        const bool branch_taken_0x1551e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551E4u;
        // 0x1551e8: 0xae020688  sw          $v0, 0x688($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551e4) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x1551ECu;
label_1551ec:
    // 0x1551ec: 0x0  nop
    ctx->pc = 0x1551ecu;
    // NOP
label_1551f0:
    // 0x1551f0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1551f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1551f4:
    // 0x1551f4: 0x10000049  b           . + 4 + (0x49 << 2)
label_1551f8:
    if (ctx->pc == 0x1551F8u) {
        ctx->pc = 0x1551F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551F4u;
        // 0x1551f8: 0xae02068c  sw          $v0, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551FCu;
        goto label_1551fc;
    }
    ctx->pc = 0x1551F4u;
    {
        const bool branch_taken_0x1551f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551F4u;
        // 0x1551f8: 0xae02068c  sw          $v0, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551f4) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x1551FCu;
label_1551fc:
    // 0x1551fc: 0x0  nop
    ctx->pc = 0x1551fcu;
    // NOP
label_155200:
    // 0x155200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x155200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155204:
    // 0x155204: 0x26020370  addiu       $v0, $s0, 0x370
    ctx->pc = 0x155204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_155208:
    // 0x155208: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x155208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_15520c:
    // 0x15520c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x15520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_155210:
    // 0x155210: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x155210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_155214:
    // 0x155214: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x155214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_155218:
    // 0x155218: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x155218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_15521c:
    // 0x15521c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x15521cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_155220:
    // 0x155220: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x155220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_155224:
    // 0x155224: 0x1000003d  b           . + 4 + (0x3D << 2)
label_155228:
    if (ctx->pc == 0x155228u) {
        ctx->pc = 0x155228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155224u;
        // 0x155228: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15522Cu;
        goto label_15522c;
    }
    ctx->pc = 0x155224u;
    {
        const bool branch_taken_0x155224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155224u;
        // 0x155228: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155224) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x15522Cu;
label_15522c:
    // 0x15522c: 0x0  nop
    ctx->pc = 0x15522cu;
    // NOP
label_155230:
    // 0x155230: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_155234:
    // 0x155234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155238:
    // 0x155238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15523c:
    // 0x15523c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_155240:
    // 0x155240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_155244:
    // 0x155244: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x155244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_155248:
    // 0x155248: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15524c:
    // 0x15524c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15524cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155250:
    // 0x155250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x155250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_155254:
    // 0x155254: 0x8054b5a  j           func_152D68
label_155258:
    if (ctx->pc == 0x155258u) {
        ctx->pc = 0x155258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155254u;
        // 0x155258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15525Cu;
        goto label_15525c;
    }
    ctx->pc = 0x155254u;
    ctx->pc = 0x155258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155254u;
    // 0x155258: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152D68u;
    MainWeaponReaction__7ApcTank_0x152d68(rdram, ctx, runtime); return;
    ctx->pc = 0x15525Cu;
label_15525c:
    // 0x15525c: 0x0  nop
    ctx->pc = 0x15525cu;
    // NOP
label_155260:
    // 0x155260: 0xc06a26e  jal         func_1A89B8
label_155264:
    if (ctx->pc == 0x155264u) {
        ctx->pc = 0x155264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155260u;
        // 0x155264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155268u;
        goto label_155268;
    }
    ctx->pc = 0x155260u;
    SET_GPR_U32(ctx, 31, 0x155268u);
    ctx->pc = 0x155264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155260u;
    // 0x155264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155260u, 0x155268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155268u;
label_155268:
    // 0x155268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x155268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15526c:
    // 0x15526c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155270:
    // 0x155270: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_155274:
    if (ctx->pc == 0x155274u) {
        ctx->pc = 0x155274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155270u;
        // 0x155274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155278u;
        goto label_155278;
    }
    ctx->pc = 0x155270u;
    {
        const bool branch_taken_0x155270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155270u;
        // 0x155274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155270) {
            ctx->pc = 0x1552A8u;
            goto label_1552a8;
        }
    }
    ctx->pc = 0x155278u;
label_155278:
    // 0x155278: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x155278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_15527c:
    // 0x15527c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_155280:
    if (ctx->pc == 0x155280u) {
        ctx->pc = 0x155280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15527Cu;
        // 0x155280: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155284u;
        goto label_155284;
    }
    ctx->pc = 0x15527Cu;
    {
        const bool branch_taken_0x15527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15527Cu;
        // 0x155280: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15527c) {
            ctx->pc = 0x155298u;
            goto label_155298;
        }
    }
    ctx->pc = 0x155284u;
label_155284:
    // 0x155284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155288:
    // 0x155288: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_15528c:
    if (ctx->pc == 0x15528Cu) {
        ctx->pc = 0x15528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155288u;
        // 0x15528c: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155290u;
        goto label_155290;
    }
    ctx->pc = 0x155288u;
    {
        const bool branch_taken_0x155288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155288) {
            ctx->pc = 0x15528Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155288u;
            // 0x15528c: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552ACu;
            goto label_1552ac;
        }
    }
    ctx->pc = 0x155290u;
label_155290:
    // 0x155290: 0x10000006  b           . + 4 + (0x6 << 2)
label_155294:
    if (ctx->pc == 0x155294u) {
        ctx->pc = 0x155298u;
        goto label_155298;
    }
    ctx->pc = 0x155290u;
    {
        const bool branch_taken_0x155290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155290) {
            ctx->pc = 0x1552ACu;
            goto label_1552ac;
        }
    }
    ctx->pc = 0x155298u;
label_155298:
    // 0x155298: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_15529c:
    if (ctx->pc == 0x15529Cu) {
        ctx->pc = 0x15529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155298u;
        // 0x15529c: 0x2604075c  addiu       $a0, $s0, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552A0u;
        goto label_1552a0;
    }
    ctx->pc = 0x155298u;
    {
        const bool branch_taken_0x155298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155298) {
            ctx->pc = 0x15529Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155298u;
            // 0x15529c: 0x2604075c  addiu       $a0, $s0, 0x75C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552ACu;
            goto label_1552ac;
        }
    }
    ctx->pc = 0x1552A0u;
label_1552a0:
    // 0x1552a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1552a4:
    if (ctx->pc == 0x1552A4u) {
        ctx->pc = 0x1552A8u;
        goto label_1552a8;
    }
    ctx->pc = 0x1552A0u;
    {
        const bool branch_taken_0x1552a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1552a0) {
            ctx->pc = 0x1552ACu;
            goto label_1552ac;
        }
    }
    ctx->pc = 0x1552A8u;
label_1552a8:
    // 0x1552a8: 0x2604071c  addiu       $a0, $s0, 0x71C
    ctx->pc = 0x1552a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
label_1552ac:
    // 0x1552ac: 0x5480001b  bnel        $a0, $zero, . + 4 + (0x1B << 2)
label_1552b0:
    if (ctx->pc == 0x1552B0u) {
        ctx->pc = 0x1552B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552ACu;
        // 0x1552b0: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552B4u;
        goto label_1552b4;
    }
    ctx->pc = 0x1552ACu;
    {
        const bool branch_taken_0x1552ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1552ac) {
            ctx->pc = 0x1552B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1552ACu;
            // 0x1552b0: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x1552B4u;
label_1552b4:
    // 0x1552b4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1552b8:
    if (ctx->pc == 0x1552B8u) {
        ctx->pc = 0x1552B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552B4u;
        // 0x1552b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552BCu;
        goto label_1552bc;
    }
    ctx->pc = 0x1552B4u;
    {
        const bool branch_taken_0x1552b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552B4u;
        // 0x1552b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552b4) {
            ctx->pc = 0x155320u;
            goto label_155320;
        }
    }
    ctx->pc = 0x1552BCu;
label_1552bc:
    // 0x1552bc: 0x0  nop
    ctx->pc = 0x1552bcu;
    // NOP
label_1552c0:
    // 0x1552c0: 0xc06a250  jal         func_1A8940
label_1552c4:
    if (ctx->pc == 0x1552C4u) {
        ctx->pc = 0x1552C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552C0u;
        // 0x1552c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552C8u;
        goto label_1552c8;
    }
    ctx->pc = 0x1552C0u;
    SET_GPR_U32(ctx, 31, 0x1552C8u);
    ctx->pc = 0x1552C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552C0u;
    // 0x1552c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1552C0u, 0x1552C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552C8u;
label_1552c8:
    // 0x1552c8: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1552cc:
    // 0x1552cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1552ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1552d0:
    // 0x1552d0: 0x312c3  sra         $v0, $v1, 11
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
label_1552d4:
    // 0x1552d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1552d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1552d8:
    // 0x1552d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1552dc:
    if (ctx->pc == 0x1552DCu) {
        ctx->pc = 0x1552DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552D8u;
        // 0x1552dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552E0u;
        goto label_1552e0;
    }
    ctx->pc = 0x1552D8u;
    {
        const bool branch_taken_0x1552d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552D8u;
        // 0x1552dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552d8) {
            ctx->pc = 0x1552E8u;
            goto label_1552e8;
        }
    }
    ctx->pc = 0x1552E0u;
label_1552e0:
    // 0x1552e0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1552e4:
    if (ctx->pc == 0x1552E4u) {
        ctx->pc = 0x1552E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552E0u;
        // 0x1552e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552E8u;
        goto label_1552e8;
    }
    ctx->pc = 0x1552E0u;
    {
        const bool branch_taken_0x1552e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552E0u;
        // 0x1552e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552e0) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x1552E8u;
label_1552e8:
    // 0x1552e8: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_1552ec:
    // 0x1552ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1552ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1552f0:
    // 0x1552f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1552f4:
    if (ctx->pc == 0x1552F4u) {
        ctx->pc = 0x1552F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F0u;
        // 0x1552f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552F8u;
        goto label_1552f8;
    }
    ctx->pc = 0x1552F0u;
    {
        const bool branch_taken_0x1552f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F0u;
        // 0x1552f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552f0) {
            ctx->pc = 0x155300u;
            goto label_155300;
        }
    }
    ctx->pc = 0x1552F8u;
label_1552f8:
    // 0x1552f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1552fc:
    if (ctx->pc == 0x1552FCu) {
        ctx->pc = 0x1552FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F8u;
        // 0x1552fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155300u;
        goto label_155300;
    }
    ctx->pc = 0x1552F8u;
    {
        const bool branch_taken_0x1552f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F8u;
        // 0x1552fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552f8) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x155300u;
label_155300:
    // 0x155300: 0x314c3  sra         $v0, $v1, 19
    ctx->pc = 0x155300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 19));
label_155304:
    // 0x155304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x155304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_155308:
    // 0x155308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15530c:
    if (ctx->pc == 0x15530Cu) {
        ctx->pc = 0x15530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155308u;
        // 0x15530c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155310u;
        goto label_155310;
    }
    ctx->pc = 0x155308u;
    {
        const bool branch_taken_0x155308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155308u;
        // 0x15530c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155308) {
            ctx->pc = 0x155318u;
            goto label_155318;
        }
    }
    ctx->pc = 0x155310u;
label_155310:
    // 0x155310: 0x10000002  b           . + 4 + (0x2 << 2)
label_155314:
    if (ctx->pc == 0x155314u) {
        ctx->pc = 0x155314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155310u;
        // 0x155314: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155318u;
        goto label_155318;
    }
    ctx->pc = 0x155310u;
    {
        const bool branch_taken_0x155310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155310u;
        // 0x155314: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155310) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x155318u;
label_155318:
    // 0x155318: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x155318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_15531c:
    // 0x15531c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15531cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155320:
    // 0x155320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_155324:
    // 0x155324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_155328:
    // 0x155328: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15532c:
    // 0x15532c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_155330:
    // 0x155330: 0x3e00008  jr          $ra
label_155334:
    if (ctx->pc == 0x155334u) {
        ctx->pc = 0x155334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155330u;
        // 0x155334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155338u;
        goto label_fallthrough_0x155330;
    }
    ctx->pc = 0x155330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155330u;
        // 0x155334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155330:
    ctx->pc = 0x155338u;
}

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

// Function: DoWorldProjection__7WcWorld
// Address: 0x187ad0 - 0x188214
void DoWorldProjection__7WcWorld_0x187ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoWorldProjection__7WcWorld_0x187ad0");
#endif

    switch (ctx->pc) {
        case 0x187ad0u: goto label_187ad0;
        case 0x187ad4u: goto label_187ad4;
        case 0x187ad8u: goto label_187ad8;
        case 0x187adcu: goto label_187adc;
        case 0x187ae0u: goto label_187ae0;
        case 0x187ae4u: goto label_187ae4;
        case 0x187ae8u: goto label_187ae8;
        case 0x187aecu: goto label_187aec;
        case 0x187af0u: goto label_187af0;
        case 0x187af4u: goto label_187af4;
        case 0x187af8u: goto label_187af8;
        case 0x187afcu: goto label_187afc;
        case 0x187b00u: goto label_187b00;
        case 0x187b04u: goto label_187b04;
        case 0x187b08u: goto label_187b08;
        case 0x187b0cu: goto label_187b0c;
        case 0x187b10u: goto label_187b10;
        case 0x187b14u: goto label_187b14;
        case 0x187b18u: goto label_187b18;
        case 0x187b1cu: goto label_187b1c;
        case 0x187b20u: goto label_187b20;
        case 0x187b24u: goto label_187b24;
        case 0x187b28u: goto label_187b28;
        case 0x187b2cu: goto label_187b2c;
        case 0x187b30u: goto label_187b30;
        case 0x187b34u: goto label_187b34;
        case 0x187b38u: goto label_187b38;
        case 0x187b3cu: goto label_187b3c;
        case 0x187b40u: goto label_187b40;
        case 0x187b44u: goto label_187b44;
        case 0x187b48u: goto label_187b48;
        case 0x187b4cu: goto label_187b4c;
        case 0x187b50u: goto label_187b50;
        case 0x187b54u: goto label_187b54;
        case 0x187b58u: goto label_187b58;
        case 0x187b5cu: goto label_187b5c;
        case 0x187b60u: goto label_187b60;
        case 0x187b64u: goto label_187b64;
        case 0x187b68u: goto label_187b68;
        case 0x187b6cu: goto label_187b6c;
        case 0x187b70u: goto label_187b70;
        case 0x187b74u: goto label_187b74;
        case 0x187b78u: goto label_187b78;
        case 0x187b7cu: goto label_187b7c;
        case 0x187b80u: goto label_187b80;
        case 0x187b84u: goto label_187b84;
        case 0x187b88u: goto label_187b88;
        case 0x187b8cu: goto label_187b8c;
        case 0x187b90u: goto label_187b90;
        case 0x187b94u: goto label_187b94;
        case 0x187b98u: goto label_187b98;
        case 0x187b9cu: goto label_187b9c;
        case 0x187ba0u: goto label_187ba0;
        case 0x187ba4u: goto label_187ba4;
        case 0x187ba8u: goto label_187ba8;
        case 0x187bacu: goto label_187bac;
        case 0x187bb0u: goto label_187bb0;
        case 0x187bb4u: goto label_187bb4;
        case 0x187bb8u: goto label_187bb8;
        case 0x187bbcu: goto label_187bbc;
        case 0x187bc0u: goto label_187bc0;
        case 0x187bc4u: goto label_187bc4;
        case 0x187bc8u: goto label_187bc8;
        case 0x187bccu: goto label_187bcc;
        case 0x187bd0u: goto label_187bd0;
        case 0x187bd4u: goto label_187bd4;
        case 0x187bd8u: goto label_187bd8;
        case 0x187bdcu: goto label_187bdc;
        case 0x187be0u: goto label_187be0;
        case 0x187be4u: goto label_187be4;
        case 0x187be8u: goto label_187be8;
        case 0x187becu: goto label_187bec;
        case 0x187bf0u: goto label_187bf0;
        case 0x187bf4u: goto label_187bf4;
        case 0x187bf8u: goto label_187bf8;
        case 0x187bfcu: goto label_187bfc;
        case 0x187c00u: goto label_187c00;
        case 0x187c04u: goto label_187c04;
        case 0x187c08u: goto label_187c08;
        case 0x187c0cu: goto label_187c0c;
        case 0x187c10u: goto label_187c10;
        case 0x187c14u: goto label_187c14;
        case 0x187c18u: goto label_187c18;
        case 0x187c1cu: goto label_187c1c;
        case 0x187c20u: goto label_187c20;
        case 0x187c24u: goto label_187c24;
        case 0x187c28u: goto label_187c28;
        case 0x187c2cu: goto label_187c2c;
        case 0x187c30u: goto label_187c30;
        case 0x187c34u: goto label_187c34;
        case 0x187c38u: goto label_187c38;
        case 0x187c3cu: goto label_187c3c;
        case 0x187c40u: goto label_187c40;
        case 0x187c44u: goto label_187c44;
        case 0x187c48u: goto label_187c48;
        case 0x187c4cu: goto label_187c4c;
        case 0x187c50u: goto label_187c50;
        case 0x187c54u: goto label_187c54;
        case 0x187c58u: goto label_187c58;
        case 0x187c5cu: goto label_187c5c;
        case 0x187c60u: goto label_187c60;
        case 0x187c64u: goto label_187c64;
        case 0x187c68u: goto label_187c68;
        case 0x187c6cu: goto label_187c6c;
        case 0x187c70u: goto label_187c70;
        case 0x187c74u: goto label_187c74;
        case 0x187c78u: goto label_187c78;
        case 0x187c7cu: goto label_187c7c;
        case 0x187c80u: goto label_187c80;
        case 0x187c84u: goto label_187c84;
        case 0x187c88u: goto label_187c88;
        case 0x187c8cu: goto label_187c8c;
        case 0x187c90u: goto label_187c90;
        case 0x187c94u: goto label_187c94;
        case 0x187c98u: goto label_187c98;
        case 0x187c9cu: goto label_187c9c;
        case 0x187ca0u: goto label_187ca0;
        case 0x187ca4u: goto label_187ca4;
        case 0x187ca8u: goto label_187ca8;
        case 0x187cacu: goto label_187cac;
        case 0x187cb0u: goto label_187cb0;
        case 0x187cb4u: goto label_187cb4;
        case 0x187cb8u: goto label_187cb8;
        case 0x187cbcu: goto label_187cbc;
        case 0x187cc0u: goto label_187cc0;
        case 0x187cc4u: goto label_187cc4;
        case 0x187cc8u: goto label_187cc8;
        case 0x187cccu: goto label_187ccc;
        case 0x187cd0u: goto label_187cd0;
        case 0x187cd4u: goto label_187cd4;
        case 0x187cd8u: goto label_187cd8;
        case 0x187cdcu: goto label_187cdc;
        case 0x187ce0u: goto label_187ce0;
        case 0x187ce4u: goto label_187ce4;
        case 0x187ce8u: goto label_187ce8;
        case 0x187cecu: goto label_187cec;
        case 0x187cf0u: goto label_187cf0;
        case 0x187cf4u: goto label_187cf4;
        case 0x187cf8u: goto label_187cf8;
        case 0x187cfcu: goto label_187cfc;
        case 0x187d00u: goto label_187d00;
        case 0x187d04u: goto label_187d04;
        case 0x187d08u: goto label_187d08;
        case 0x187d0cu: goto label_187d0c;
        case 0x187d10u: goto label_187d10;
        case 0x187d14u: goto label_187d14;
        case 0x187d18u: goto label_187d18;
        case 0x187d1cu: goto label_187d1c;
        case 0x187d20u: goto label_187d20;
        case 0x187d24u: goto label_187d24;
        case 0x187d28u: goto label_187d28;
        case 0x187d2cu: goto label_187d2c;
        case 0x187d30u: goto label_187d30;
        case 0x187d34u: goto label_187d34;
        case 0x187d38u: goto label_187d38;
        case 0x187d3cu: goto label_187d3c;
        case 0x187d40u: goto label_187d40;
        case 0x187d44u: goto label_187d44;
        case 0x187d48u: goto label_187d48;
        case 0x187d4cu: goto label_187d4c;
        case 0x187d50u: goto label_187d50;
        case 0x187d54u: goto label_187d54;
        case 0x187d58u: goto label_187d58;
        case 0x187d5cu: goto label_187d5c;
        case 0x187d60u: goto label_187d60;
        case 0x187d64u: goto label_187d64;
        case 0x187d68u: goto label_187d68;
        case 0x187d6cu: goto label_187d6c;
        case 0x187d70u: goto label_187d70;
        case 0x187d74u: goto label_187d74;
        case 0x187d78u: goto label_187d78;
        case 0x187d7cu: goto label_187d7c;
        case 0x187d80u: goto label_187d80;
        case 0x187d84u: goto label_187d84;
        case 0x187d88u: goto label_187d88;
        case 0x187d8cu: goto label_187d8c;
        case 0x187d90u: goto label_187d90;
        case 0x187d94u: goto label_187d94;
        case 0x187d98u: goto label_187d98;
        case 0x187d9cu: goto label_187d9c;
        case 0x187da0u: goto label_187da0;
        case 0x187da4u: goto label_187da4;
        case 0x187da8u: goto label_187da8;
        case 0x187dacu: goto label_187dac;
        case 0x187db0u: goto label_187db0;
        case 0x187db4u: goto label_187db4;
        case 0x187db8u: goto label_187db8;
        case 0x187dbcu: goto label_187dbc;
        case 0x187dc0u: goto label_187dc0;
        case 0x187dc4u: goto label_187dc4;
        case 0x187dc8u: goto label_187dc8;
        case 0x187dccu: goto label_187dcc;
        case 0x187dd0u: goto label_187dd0;
        case 0x187dd4u: goto label_187dd4;
        case 0x187dd8u: goto label_187dd8;
        case 0x187ddcu: goto label_187ddc;
        case 0x187de0u: goto label_187de0;
        case 0x187de4u: goto label_187de4;
        case 0x187de8u: goto label_187de8;
        case 0x187decu: goto label_187dec;
        case 0x187df0u: goto label_187df0;
        case 0x187df4u: goto label_187df4;
        case 0x187df8u: goto label_187df8;
        case 0x187dfcu: goto label_187dfc;
        case 0x187e00u: goto label_187e00;
        case 0x187e04u: goto label_187e04;
        case 0x187e08u: goto label_187e08;
        case 0x187e0cu: goto label_187e0c;
        case 0x187e10u: goto label_187e10;
        case 0x187e14u: goto label_187e14;
        case 0x187e18u: goto label_187e18;
        case 0x187e1cu: goto label_187e1c;
        case 0x187e20u: goto label_187e20;
        case 0x187e24u: goto label_187e24;
        case 0x187e28u: goto label_187e28;
        case 0x187e2cu: goto label_187e2c;
        case 0x187e30u: goto label_187e30;
        case 0x187e34u: goto label_187e34;
        case 0x187e38u: goto label_187e38;
        case 0x187e3cu: goto label_187e3c;
        case 0x187e40u: goto label_187e40;
        case 0x187e44u: goto label_187e44;
        case 0x187e48u: goto label_187e48;
        case 0x187e4cu: goto label_187e4c;
        case 0x187e50u: goto label_187e50;
        case 0x187e54u: goto label_187e54;
        case 0x187e58u: goto label_187e58;
        case 0x187e5cu: goto label_187e5c;
        case 0x187e60u: goto label_187e60;
        case 0x187e64u: goto label_187e64;
        case 0x187e68u: goto label_187e68;
        case 0x187e6cu: goto label_187e6c;
        case 0x187e70u: goto label_187e70;
        case 0x187e74u: goto label_187e74;
        case 0x187e78u: goto label_187e78;
        case 0x187e7cu: goto label_187e7c;
        case 0x187e80u: goto label_187e80;
        case 0x187e84u: goto label_187e84;
        case 0x187e88u: goto label_187e88;
        case 0x187e8cu: goto label_187e8c;
        case 0x187e90u: goto label_187e90;
        case 0x187e94u: goto label_187e94;
        case 0x187e98u: goto label_187e98;
        case 0x187e9cu: goto label_187e9c;
        case 0x187ea0u: goto label_187ea0;
        case 0x187ea4u: goto label_187ea4;
        case 0x187ea8u: goto label_187ea8;
        case 0x187eacu: goto label_187eac;
        case 0x187eb0u: goto label_187eb0;
        case 0x187eb4u: goto label_187eb4;
        case 0x187eb8u: goto label_187eb8;
        case 0x187ebcu: goto label_187ebc;
        case 0x187ec0u: goto label_187ec0;
        case 0x187ec4u: goto label_187ec4;
        case 0x187ec8u: goto label_187ec8;
        case 0x187eccu: goto label_187ecc;
        case 0x187ed0u: goto label_187ed0;
        case 0x187ed4u: goto label_187ed4;
        case 0x187ed8u: goto label_187ed8;
        case 0x187edcu: goto label_187edc;
        case 0x187ee0u: goto label_187ee0;
        case 0x187ee4u: goto label_187ee4;
        case 0x187ee8u: goto label_187ee8;
        case 0x187eecu: goto label_187eec;
        case 0x187ef0u: goto label_187ef0;
        case 0x187ef4u: goto label_187ef4;
        case 0x187ef8u: goto label_187ef8;
        case 0x187efcu: goto label_187efc;
        case 0x187f00u: goto label_187f00;
        case 0x187f04u: goto label_187f04;
        case 0x187f08u: goto label_187f08;
        case 0x187f0cu: goto label_187f0c;
        case 0x187f10u: goto label_187f10;
        case 0x187f14u: goto label_187f14;
        case 0x187f18u: goto label_187f18;
        case 0x187f1cu: goto label_187f1c;
        case 0x187f20u: goto label_187f20;
        case 0x187f24u: goto label_187f24;
        case 0x187f28u: goto label_187f28;
        case 0x187f2cu: goto label_187f2c;
        case 0x187f30u: goto label_187f30;
        case 0x187f34u: goto label_187f34;
        case 0x187f38u: goto label_187f38;
        case 0x187f3cu: goto label_187f3c;
        case 0x187f40u: goto label_187f40;
        case 0x187f44u: goto label_187f44;
        case 0x187f48u: goto label_187f48;
        case 0x187f4cu: goto label_187f4c;
        case 0x187f50u: goto label_187f50;
        case 0x187f54u: goto label_187f54;
        case 0x187f58u: goto label_187f58;
        case 0x187f5cu: goto label_187f5c;
        case 0x187f60u: goto label_187f60;
        case 0x187f64u: goto label_187f64;
        case 0x187f68u: goto label_187f68;
        case 0x187f6cu: goto label_187f6c;
        case 0x187f70u: goto label_187f70;
        case 0x187f74u: goto label_187f74;
        case 0x187f78u: goto label_187f78;
        case 0x187f7cu: goto label_187f7c;
        case 0x187f80u: goto label_187f80;
        case 0x187f84u: goto label_187f84;
        case 0x187f88u: goto label_187f88;
        case 0x187f8cu: goto label_187f8c;
        case 0x187f90u: goto label_187f90;
        case 0x187f94u: goto label_187f94;
        case 0x187f98u: goto label_187f98;
        case 0x187f9cu: goto label_187f9c;
        case 0x187fa0u: goto label_187fa0;
        case 0x187fa4u: goto label_187fa4;
        case 0x187fa8u: goto label_187fa8;
        case 0x187facu: goto label_187fac;
        case 0x187fb0u: goto label_187fb0;
        case 0x187fb4u: goto label_187fb4;
        case 0x187fb8u: goto label_187fb8;
        case 0x187fbcu: goto label_187fbc;
        case 0x187fc0u: goto label_187fc0;
        case 0x187fc4u: goto label_187fc4;
        case 0x187fc8u: goto label_187fc8;
        case 0x187fccu: goto label_187fcc;
        case 0x187fd0u: goto label_187fd0;
        case 0x187fd4u: goto label_187fd4;
        case 0x187fd8u: goto label_187fd8;
        case 0x187fdcu: goto label_187fdc;
        case 0x187fe0u: goto label_187fe0;
        case 0x187fe4u: goto label_187fe4;
        case 0x187fe8u: goto label_187fe8;
        case 0x187fecu: goto label_187fec;
        case 0x187ff0u: goto label_187ff0;
        case 0x187ff4u: goto label_187ff4;
        case 0x187ff8u: goto label_187ff8;
        case 0x187ffcu: goto label_187ffc;
        case 0x188000u: goto label_188000;
        case 0x188004u: goto label_188004;
        case 0x188008u: goto label_188008;
        case 0x18800cu: goto label_18800c;
        case 0x188010u: goto label_188010;
        case 0x188014u: goto label_188014;
        case 0x188018u: goto label_188018;
        case 0x18801cu: goto label_18801c;
        case 0x188020u: goto label_188020;
        case 0x188024u: goto label_188024;
        case 0x188028u: goto label_188028;
        case 0x18802cu: goto label_18802c;
        case 0x188030u: goto label_188030;
        case 0x188034u: goto label_188034;
        case 0x188038u: goto label_188038;
        case 0x18803cu: goto label_18803c;
        case 0x188040u: goto label_188040;
        case 0x188044u: goto label_188044;
        case 0x188048u: goto label_188048;
        case 0x18804cu: goto label_18804c;
        case 0x188050u: goto label_188050;
        case 0x188054u: goto label_188054;
        case 0x188058u: goto label_188058;
        case 0x18805cu: goto label_18805c;
        case 0x188060u: goto label_188060;
        case 0x188064u: goto label_188064;
        case 0x188068u: goto label_188068;
        case 0x18806cu: goto label_18806c;
        case 0x188070u: goto label_188070;
        case 0x188074u: goto label_188074;
        case 0x188078u: goto label_188078;
        case 0x18807cu: goto label_18807c;
        case 0x188080u: goto label_188080;
        case 0x188084u: goto label_188084;
        case 0x188088u: goto label_188088;
        case 0x18808cu: goto label_18808c;
        case 0x188090u: goto label_188090;
        case 0x188094u: goto label_188094;
        case 0x188098u: goto label_188098;
        case 0x18809cu: goto label_18809c;
        case 0x1880a0u: goto label_1880a0;
        case 0x1880a4u: goto label_1880a4;
        case 0x1880a8u: goto label_1880a8;
        case 0x1880acu: goto label_1880ac;
        case 0x1880b0u: goto label_1880b0;
        case 0x1880b4u: goto label_1880b4;
        case 0x1880b8u: goto label_1880b8;
        case 0x1880bcu: goto label_1880bc;
        case 0x1880c0u: goto label_1880c0;
        case 0x1880c4u: goto label_1880c4;
        case 0x1880c8u: goto label_1880c8;
        case 0x1880ccu: goto label_1880cc;
        case 0x1880d0u: goto label_1880d0;
        case 0x1880d4u: goto label_1880d4;
        case 0x1880d8u: goto label_1880d8;
        case 0x1880dcu: goto label_1880dc;
        case 0x1880e0u: goto label_1880e0;
        case 0x1880e4u: goto label_1880e4;
        case 0x1880e8u: goto label_1880e8;
        case 0x1880ecu: goto label_1880ec;
        case 0x1880f0u: goto label_1880f0;
        case 0x1880f4u: goto label_1880f4;
        case 0x1880f8u: goto label_1880f8;
        case 0x1880fcu: goto label_1880fc;
        case 0x188100u: goto label_188100;
        case 0x188104u: goto label_188104;
        case 0x188108u: goto label_188108;
        case 0x18810cu: goto label_18810c;
        case 0x188110u: goto label_188110;
        case 0x188114u: goto label_188114;
        case 0x188118u: goto label_188118;
        case 0x18811cu: goto label_18811c;
        case 0x188120u: goto label_188120;
        case 0x188124u: goto label_188124;
        case 0x188128u: goto label_188128;
        case 0x18812cu: goto label_18812c;
        case 0x188130u: goto label_188130;
        case 0x188134u: goto label_188134;
        case 0x188138u: goto label_188138;
        case 0x18813cu: goto label_18813c;
        case 0x188140u: goto label_188140;
        case 0x188144u: goto label_188144;
        case 0x188148u: goto label_188148;
        case 0x18814cu: goto label_18814c;
        case 0x188150u: goto label_188150;
        case 0x188154u: goto label_188154;
        case 0x188158u: goto label_188158;
        case 0x18815cu: goto label_18815c;
        case 0x188160u: goto label_188160;
        case 0x188164u: goto label_188164;
        case 0x188168u: goto label_188168;
        case 0x18816cu: goto label_18816c;
        case 0x188170u: goto label_188170;
        case 0x188174u: goto label_188174;
        case 0x188178u: goto label_188178;
        case 0x18817cu: goto label_18817c;
        case 0x188180u: goto label_188180;
        case 0x188184u: goto label_188184;
        case 0x188188u: goto label_188188;
        case 0x18818cu: goto label_18818c;
        case 0x188190u: goto label_188190;
        case 0x188194u: goto label_188194;
        case 0x188198u: goto label_188198;
        case 0x18819cu: goto label_18819c;
        case 0x1881a0u: goto label_1881a0;
        case 0x1881a4u: goto label_1881a4;
        case 0x1881a8u: goto label_1881a8;
        case 0x1881acu: goto label_1881ac;
        case 0x1881b0u: goto label_1881b0;
        case 0x1881b4u: goto label_1881b4;
        case 0x1881b8u: goto label_1881b8;
        case 0x1881bcu: goto label_1881bc;
        case 0x1881c0u: goto label_1881c0;
        case 0x1881c4u: goto label_1881c4;
        case 0x1881c8u: goto label_1881c8;
        case 0x1881ccu: goto label_1881cc;
        case 0x1881d0u: goto label_1881d0;
        case 0x1881d4u: goto label_1881d4;
        case 0x1881d8u: goto label_1881d8;
        case 0x1881dcu: goto label_1881dc;
        case 0x1881e0u: goto label_1881e0;
        case 0x1881e4u: goto label_1881e4;
        case 0x1881e8u: goto label_1881e8;
        case 0x1881ecu: goto label_1881ec;
        case 0x1881f0u: goto label_1881f0;
        case 0x1881f4u: goto label_1881f4;
        case 0x1881f8u: goto label_1881f8;
        case 0x1881fcu: goto label_1881fc;
        case 0x188200u: goto label_188200;
        case 0x188204u: goto label_188204;
        case 0x188208u: goto label_188208;
        case 0x18820cu: goto label_18820c;
        case 0x188210u: goto label_188210;
        default: break;
    }

    ctx->pc = 0x187ad0u;

label_187ad0:
    // 0x187ad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_187ad4:
    // 0x187ad4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x187ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_187ad8:
    // 0x187ad8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x187ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_187adc:
    // 0x187adc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x187adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187ae0:
    // 0x187ae0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x187ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_187ae4:
    // 0x187ae4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x187ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_187ae8:
    // 0x187ae8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x187ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_187aec:
    // 0x187aec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x187aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_187af0:
    // 0x187af0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x187af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_187af4:
    // 0x187af4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x187af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_187af8:
    // 0x187af8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x187af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_187afc:
    // 0x187afc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x187afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_187b00:
    // 0x187b00: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x187b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_187b04:
    // 0x187b04: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x187b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_187b08:
    // 0x187b08: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x187b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
label_187b0c:
    // 0x187b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x187b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_187b10:
    // 0x187b10: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_187b14:
    if (ctx->pc == 0x187B14u) {
        ctx->pc = 0x187B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B10u;
        // 0x187b14: 0x8e550164  lw          $s5, 0x164($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B18u;
        goto label_187b18;
    }
    ctx->pc = 0x187B10u;
    {
        const bool branch_taken_0x187b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B10u;
        // 0x187b14: 0x8e550164  lw          $s5, 0x164($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b10) {
            ctx->pc = 0x187D0Cu;
            goto label_187d0c;
        }
    }
    ctx->pc = 0x187B18u;
label_187b18:
    // 0x187b18: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x187b18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
label_187b1c:
    // 0x187b1c: 0x2610d640  addiu       $s0, $s0, -0x29C0
    ctx->pc = 0x187b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956608));
label_187b20:
    // 0x187b20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x187b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_187b24:
    // 0x187b24: 0xc06bd28  jal         func_1AF4A0
label_187b28:
    if (ctx->pc == 0x187B28u) {
        ctx->pc = 0x187B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B24u;
        // 0x187b28: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B2Cu;
        goto label_187b2c;
    }
    ctx->pc = 0x187B24u;
    SET_GPR_U32(ctx, 31, 0x187B2Cu);
    ctx->pc = 0x187B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B24u;
    // 0x187b28: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187B24u, 0x187B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B2Cu;
label_187b2c:
    // 0x187b2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x187b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_187b30:
    // 0x187b30: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x187b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_187b34:
    // 0x187b34: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x187b34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
label_187b38:
    // 0x187b38: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x187b38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
label_187b3c:
    // 0x187b3c: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x187b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
label_187b40:
    // 0x187b40: 0x35290020  ori         $t1, $t1, 0x20
    ctx->pc = 0x187b40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
label_187b44:
    // 0x187b44: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x187b44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_187b48:
    // 0x187b48: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x187b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_187b4c:
    // 0x187b4c: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x187b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_187b50:
    // 0x187b50: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x187b50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
label_187b54:
    // 0x187b54: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x187b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_187b58:
    // 0x187b58: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x187b58u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
label_187b5c:
    // 0x187b5c: 0xfd200000  sd          $zero, 0x0($t1)
    ctx->pc = 0x187b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 0));
label_187b60:
    // 0x187b60: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x187b60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
label_187b64:
    // 0x187b64: 0x35290050  ori         $t1, $t1, 0x50
    ctx->pc = 0x187b64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)80);
label_187b68:
    // 0x187b68: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x187b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_187b6c:
    // 0x187b6c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x187b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_187b70:
    // 0x187b70: 0x34a50030  ori         $a1, $a1, 0x30
    ctx->pc = 0x187b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
label_187b74:
    // 0x187b74: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x187b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_187b78:
    // 0x187b78: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x187b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_187b7c:
    // 0x187b7c: 0x34210040  ori         $at, $at, 0x40
    ctx->pc = 0x187b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64);
label_187b80:
    // 0x187b80: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_187b84:
    // 0x187b84: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x187b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_187b88:
    // 0x187b88: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x187b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_187b8c:
    // 0x187b8c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x187b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
label_187b90:
    // 0x187b90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x187b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_187b94:
    // 0x187b94: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x187b94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
label_187b98:
    // 0x187b98: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x187b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_187b9c:
    // 0x187b9c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x187b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_187ba0:
    // 0x187ba0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x187ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_187ba4:
    // 0x187ba4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x187ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_187ba8:
    // 0x187ba8: 0xdf888c80  ld          $t0, -0x7380($gp)
    ctx->pc = 0x187ba8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_187bac:
    // 0x187bac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x187bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_187bb0:
    // 0x187bb0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x187bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_187bb4:
    // 0x187bb4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x187bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
label_187bb8:
    // 0x187bb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x187bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_187bbc:
    // 0x187bbc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_187bc0:
    // 0x187bc0: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x187bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_187bc4:
    // 0x187bc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_187bc8:
    // 0x187bc8: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x187bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
label_187bcc:
    // 0x187bcc: 0x1222024  and         $a0, $t1, $v0
    ctx->pc = 0x187bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_187bd0:
    // 0x187bd0: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x187bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_187bd4:
    // 0x187bd4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x187bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_187bd8:
    // 0x187bd8: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x187bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
label_187bdc:
    // 0x187bdc: 0x2463d000  addiu       $v1, $v1, -0x3000
    ctx->pc = 0x187bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955008));
label_187be0:
    // 0x187be0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x187be0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_187be4:
    // 0x187be4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x187be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_187be8:
    // 0x187be8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_187bec:
    // 0x187bec: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x187becu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_187bf0:
    // 0x187bf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x187bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_187bf4:
    // 0x187bf4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_187bf8:
    if (ctx->pc == 0x187BF8u) {
        ctx->pc = 0x187BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BF4u;
        // 0x187bf8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187BFCu;
        goto label_187bfc;
    }
    ctx->pc = 0x187BF4u;
    {
        const bool branch_taken_0x187bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BF4u;
        // 0x187bf8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bf4) {
            ctx->pc = 0x187C20u;
            goto label_187c20;
        }
    }
    ctx->pc = 0x187BFCu;
label_187bfc:
    // 0x187bfc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x187bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_187c00:
    // 0x187c00: 0xc05bd26  jal         func_16F498
label_187c04:
    if (ctx->pc == 0x187C04u) {
        ctx->pc = 0x187C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C00u;
        // 0x187c04: 0x24847f18  addiu       $a0, $a0, 0x7F18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C08u;
        goto label_187c08;
    }
    ctx->pc = 0x187C00u;
    SET_GPR_U32(ctx, 31, 0x187C08u);
    ctx->pc = 0x187C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C00u;
    // 0x187c04: 0x24847f18  addiu       $a0, $a0, 0x7F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x187C00u, 0x187C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C08u;
label_187c08:
    // 0x187c08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187c0c:
    // 0x187c0c: 0xc06825c  jal         func_1A0970
label_187c10:
    if (ctx->pc == 0x187C10u) {
        ctx->pc = 0x187C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C0Cu;
        // 0x187c10: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C14u;
        goto label_187c14;
    }
    ctx->pc = 0x187C0Cu;
    SET_GPR_U32(ctx, 31, 0x187C14u);
    ctx->pc = 0x187C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C0Cu;
    // 0x187c10: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x187C0Cu, 0x187C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C14u;
label_187c14:
    // 0x187c14: 0x10000004  b           . + 4 + (0x4 << 2)
label_187c18:
    if (ctx->pc == 0x187C18u) {
        ctx->pc = 0x187C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C14u;
        // 0x187c18: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C1Cu;
        goto label_187c1c;
    }
    ctx->pc = 0x187C14u;
    {
        const bool branch_taken_0x187c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C14u;
        // 0x187c18: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c14) {
            ctx->pc = 0x187C28u;
            goto label_187c28;
        }
    }
    ctx->pc = 0x187C1Cu;
label_187c1c:
    // 0x187c1c: 0x0  nop
    ctx->pc = 0x187c1cu;
    // NOP
label_187c20:
    // 0x187c20: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x187c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_187c24:
    // 0x187c24: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_187c28:
    // 0x187c28: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x187c28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
label_187c2c:
    // 0x187c2c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x187c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_187c30:
    // 0x187c30: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x187c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_187c34:
    // 0x187c34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x187c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_187c38:
    // 0x187c38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x187c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_187c3c:
    // 0x187c3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x187c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_187c40:
    // 0x187c40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x187c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_187c44:
    // 0x187c44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x187c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187c48:
    // 0x187c48: 0xc06bd20  jal         func_1AF480
label_187c4c:
    if (ctx->pc == 0x187C4Cu) {
        ctx->pc = 0x187C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C48u;
        // 0x187c4c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C50u;
        goto label_187c50;
    }
    ctx->pc = 0x187C48u;
    SET_GPR_U32(ctx, 31, 0x187C50u);
    ctx->pc = 0x187C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C48u;
    // 0x187c4c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x187C48u, 0x187C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C50u;
label_187c50:
    // 0x187c50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_187c54:
    // 0x187c54: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x187c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
label_187c58:
    // 0x187c58: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x187c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_187c5c:
    // 0x187c5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_187c60:
    // 0x187c60: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
label_187c64:
    // 0x187c64: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x187c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_187c68:
    // 0x187c68: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x187c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_187c6c:
    // 0x187c6c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x187c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_187c70:
    // 0x187c70: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x187c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_187c74:
    // 0x187c74: 0xc06bd28  jal         func_1AF4A0
label_187c78:
    if (ctx->pc == 0x187C78u) {
        ctx->pc = 0x187C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C74u;
        // 0x187c78: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187C7Cu;
        goto label_187c7c;
    }
    ctx->pc = 0x187C74u;
    SET_GPR_U32(ctx, 31, 0x187C7Cu);
    ctx->pc = 0x187C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C74u;
    // 0x187c78: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187C74u, 0x187C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C7Cu;
label_187c7c:
    // 0x187c7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x187c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_187c80:
    // 0x187c80: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x187c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_187c84:
    // 0x187c84: 0x0  nop
    ctx->pc = 0x187c84u;
    // NOP
label_187c88:
    // 0x187c88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187c8c:
    // 0x187c8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x187c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_187c90:
    // 0x187c90: 0x0  nop
    ctx->pc = 0x187c90u;
    // NOP
label_187c94:
    // 0x187c94: 0x0  nop
    ctx->pc = 0x187c94u;
    // NOP
label_187c98:
    // 0x187c98: 0x0  nop
    ctx->pc = 0x187c98u;
    // NOP
label_187c9c:
    // 0x187c9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_187ca0:
    if (ctx->pc == 0x187CA0u) {
        ctx->pc = 0x187CA4u;
        goto label_187ca4;
    }
    ctx->pc = 0x187C9Cu;
    {
        const bool branch_taken_0x187c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187c9c) {
            ctx->pc = 0x187C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187c88;
        }
    }
    ctx->pc = 0x187CA4u;
label_187ca4:
    // 0x187ca4: 0x0  nop
    ctx->pc = 0x187ca4u;
    // NOP
label_187ca8:
    // 0x187ca8: 0xc06bd2c  jal         func_1AF4B0
label_187cac:
    if (ctx->pc == 0x187CACu) {
        ctx->pc = 0x187CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CA8u;
        // 0x187cac: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CB0u;
        goto label_187cb0;
    }
    ctx->pc = 0x187CA8u;
    SET_GPR_U32(ctx, 31, 0x187CB0u);
    ctx->pc = 0x187CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CA8u;
    // 0x187cac: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x187CA8u, 0x187CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CB0u;
label_187cb0:
    // 0x187cb0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x187cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_187cb4:
    // 0x187cb4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
label_187cb8:
    if (ctx->pc == 0x187CB8u) {
        ctx->pc = 0x187CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CB4u;
        // 0x187cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CBCu;
        goto label_187cbc;
    }
    ctx->pc = 0x187CB4u;
    {
        const bool branch_taken_0x187cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CB4u;
        // 0x187cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cb4) {
            ctx->pc = 0x187CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187ca8;
        }
    }
    ctx->pc = 0x187CBCu;
label_187cbc:
    // 0x187cbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x187cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_187cc0:
    // 0x187cc0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_187cc4:
    if (ctx->pc == 0x187CC4u) {
        ctx->pc = 0x187CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CC0u;
        // 0x187cc4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CC8u;
        goto label_187cc8;
    }
    ctx->pc = 0x187CC0u;
    {
        const bool branch_taken_0x187cc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CC0u;
        // 0x187cc4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cc0) {
            ctx->pc = 0x187CE0u;
            goto label_187ce0;
        }
    }
    ctx->pc = 0x187CC8u;
label_187cc8:
    // 0x187cc8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_187ccc:
    // 0x187ccc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x187cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_187cd0:
    // 0x187cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_187cd4:
    // 0x187cd4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x187cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_187cd8:
    // 0x187cd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_187cdc:
    if (ctx->pc == 0x187CDCu) {
        ctx->pc = 0x187CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CD8u;
        // 0x187cdc: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CE0u;
        goto label_187ce0;
    }
    ctx->pc = 0x187CD8u;
    {
        const bool branch_taken_0x187cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CD8u;
        // 0x187cdc: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cd8) {
            ctx->pc = 0x187CE8u;
            goto label_187ce8;
        }
    }
    ctx->pc = 0x187CE0u;
label_187ce0:
    // 0x187ce0: 0xc06bdb8  jal         func_1AF6E0
label_187ce4:
    if (ctx->pc == 0x187CE4u) {
        ctx->pc = 0x187CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CE0u;
        // 0x187ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187CE8u;
        goto label_187ce8;
    }
    ctx->pc = 0x187CE0u;
    SET_GPR_U32(ctx, 31, 0x187CE8u);
    ctx->pc = 0x187CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CE0u;
    // 0x187ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x187CE0u, 0x187CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CE8u;
label_187ce8:
    // 0x187ce8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x187ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_187cec:
    // 0x187cec: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x187cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_187cf0:
    // 0x187cf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_187cf4:
    // 0x187cf4: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x187cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_187cf8:
    // 0x187cf8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x187cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_187cfc:
    // 0x187cfc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x187cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_187d00:
    // 0x187d00: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x187d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
label_187d04:
    // 0x187d04: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x187d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_187d08:
    // 0x187d08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x187d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_187d0c:
    // 0x187d0c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_187d10:
    // 0x187d10: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_187d14:
    // 0x187d14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x187d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_187d18:
    // 0x187d18: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
label_187d1c:
    if (ctx->pc == 0x187D1Cu) {
        ctx->pc = 0x187D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D18u;
        // 0x187d1c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D20u;
        goto label_187d20;
    }
    ctx->pc = 0x187D18u;
    {
        const bool branch_taken_0x187d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D18u;
        // 0x187d1c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d18) {
            ctx->pc = 0x187F5Cu;
            goto label_187f5c;
        }
    }
    ctx->pc = 0x187D20u;
label_187d20:
    // 0x187d20: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x187d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_187d24:
    // 0x187d24: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x187d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_187d28:
    // 0x187d28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x187d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187d2c:
    // 0x187d2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187d30:
    // 0x187d30: 0x60f809  jalr        $v1
label_187d34:
    if (ctx->pc == 0x187D34u) {
        ctx->pc = 0x187D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D30u;
        // 0x187d34: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D38u;
        goto label_187d38;
    }
    ctx->pc = 0x187D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187D38u);
        ctx->pc = 0x187D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D30u;
        // 0x187d34: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187D30u, 0x187D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187D38u;
label_187d38:
    // 0x187d38: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x187d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_187d3c:
    // 0x187d3c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_187d40:
    if (ctx->pc == 0x187D40u) {
        ctx->pc = 0x187D44u;
        goto label_187d44;
    }
    ctx->pc = 0x187D3Cu;
    {
        const bool branch_taken_0x187d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d3c) {
            ctx->pc = 0x187E9Cu;
            goto label_187e9c;
        }
    }
    ctx->pc = 0x187D44u;
label_187d44:
    // 0x187d44: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
label_187d48:
    if (ctx->pc == 0x187D48u) {
        ctx->pc = 0x187D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D44u;
        // 0x187d48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D4Cu;
        goto label_187d4c;
    }
    ctx->pc = 0x187D44u;
    {
        const bool branch_taken_0x187d44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x187D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D44u;
        // 0x187d48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d44) {
            ctx->pc = 0x187E9Cu;
            goto label_187e9c;
        }
    }
    ctx->pc = 0x187D4Cu;
label_187d4c:
    // 0x187d4c: 0x3c14efff  lui         $s4, 0xEFFF
    ctx->pc = 0x187d4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61439 << 16));
label_187d50:
    // 0x187d50: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
label_187d54:
    // 0x187d54: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x187d54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187d58:
    // 0x187d58: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x187d58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_187d5c:
    // 0x187d5c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x187d5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_187d60:
    // 0x187d60: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x187d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_187d64:
    // 0x187d64: 0x0  nop
    ctx->pc = 0x187d64u;
    // NOP
label_187d68:
    // 0x187d68: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x187d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_187d6c:
    // 0x187d6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x187d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_187d70:
    // 0x187d70: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x187d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187d74:
    // 0x187d74: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_187d78:
    // 0x187d78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x187d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_187d7c:
    // 0x187d7c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x187d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_187d80:
    // 0x187d80: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
label_187d84:
    if (ctx->pc == 0x187D84u) {
        ctx->pc = 0x187D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D80u;
        // 0x187d84: 0x8e4201b8  lw          $v0, 0x1B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D88u;
        goto label_187d88;
    }
    ctx->pc = 0x187D80u;
    {
        const bool branch_taken_0x187d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d80) {
            ctx->pc = 0x187D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D80u;
            // 0x187d84: 0x8e4201b8  lw          $v0, 0x1B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E8Cu;
            goto label_187e8c;
        }
    }
    ctx->pc = 0x187D88u;
label_187d88:
    // 0x187d88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x187d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_187d8c:
    // 0x187d8c: 0x50570014  beql        $v0, $s7, . + 4 + (0x14 << 2)
label_187d90:
    if (ctx->pc == 0x187D90u) {
        ctx->pc = 0x187D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D8Cu;
        // 0x187d90: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D94u;
        goto label_187d94;
    }
    ctx->pc = 0x187D8Cu;
    {
        const bool branch_taken_0x187d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x187d8c) {
            ctx->pc = 0x187D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D8Cu;
            // 0x187d90: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187DE0u;
            goto label_187de0;
        }
    }
    ctx->pc = 0x187D94u;
label_187d94:
    // 0x187d94: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_187d98:
    if (ctx->pc == 0x187D98u) {
        ctx->pc = 0x187D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D94u;
        // 0x187d98: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D9Cu;
        goto label_187d9c;
    }
    ctx->pc = 0x187D94u;
    {
        const bool branch_taken_0x187d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d94) {
            ctx->pc = 0x187D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D94u;
            // 0x187d98: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187DB0u;
            goto label_187db0;
        }
    }
    ctx->pc = 0x187D9Cu;
label_187d9c:
    // 0x187d9c: 0x50560028  beql        $v0, $s6, . + 4 + (0x28 << 2)
label_187da0:
    if (ctx->pc == 0x187DA0u) {
        ctx->pc = 0x187DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D9Cu;
        // 0x187da0: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DA4u;
        goto label_187da4;
    }
    ctx->pc = 0x187D9Cu;
    {
        const bool branch_taken_0x187d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x187d9c) {
            ctx->pc = 0x187DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D9Cu;
            // 0x187da0: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E40u;
            goto label_187e40;
        }
    }
    ctx->pc = 0x187DA4u;
label_187da4:
    // 0x187da4: 0x10000036  b           . + 4 + (0x36 << 2)
label_187da8:
    if (ctx->pc == 0x187DA8u) {
        ctx->pc = 0x187DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DA4u;
        // 0x187da8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DACu;
        goto label_187dac;
    }
    ctx->pc = 0x187DA4u;
    {
        const bool branch_taken_0x187da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DA4u;
        // 0x187da8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187da4) {
            ctx->pc = 0x187E80u;
            goto label_187e80;
        }
    }
    ctx->pc = 0x187DACu;
label_187dac:
    // 0x187dac: 0x0  nop
    ctx->pc = 0x187dacu;
    // NOP
label_187db0:
    // 0x187db0: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x187db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_187db4:
    // 0x187db4: 0x26060230  addiu       $a2, $s0, 0x230
    ctx->pc = 0x187db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_187db8:
    // 0x187db8: 0x26070240  addiu       $a3, $s0, 0x240
    ctx->pc = 0x187db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_187dbc:
    // 0x187dbc: 0xc06f060  jal         func_1BC180
label_187dc0:
    if (ctx->pc == 0x187DC0u) {
        ctx->pc = 0x187DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DBCu;
        // 0x187dc0: 0x260801e0  addiu       $t0, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DC4u;
        goto label_187dc4;
    }
    ctx->pc = 0x187DBCu;
    SET_GPR_U32(ctx, 31, 0x187DC4u);
    ctx->pc = 0x187DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DBCu;
    // 0x187dc0: 0x260801e0  addiu       $t0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x187DBCu, 0x187DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DC4u;
label_187dc4:
    // 0x187dc4: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x187dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
label_187dc8:
    // 0x187dc8: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x187dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_187dcc:
    // 0x187dcc: 0x260501f0  addiu       $a1, $s0, 0x1F0
    ctx->pc = 0x187dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_187dd0:
    // 0x187dd0: 0xc06f030  jal         func_1BC0C0
label_187dd4:
    if (ctx->pc == 0x187DD4u) {
        ctx->pc = 0x187DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DD0u;
        // 0x187dd4: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DD8u;
        goto label_187dd8;
    }
    ctx->pc = 0x187DD0u;
    SET_GPR_U32(ctx, 31, 0x187DD8u);
    ctx->pc = 0x187DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DD0u;
    // 0x187dd4: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x187DD0u, 0x187DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DD8u;
label_187dd8:
    // 0x187dd8: 0x10000029  b           . + 4 + (0x29 << 2)
label_187ddc:
    if (ctx->pc == 0x187DDCu) {
        ctx->pc = 0x187DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DD8u;
        // 0x187ddc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187DE0u;
        goto label_187de0;
    }
    ctx->pc = 0x187DD8u;
    {
        const bool branch_taken_0x187dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DD8u;
        // 0x187ddc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187dd8) {
            ctx->pc = 0x187E80u;
            goto label_187e80;
        }
    }
    ctx->pc = 0x187DE0u;
label_187de0:
    // 0x187de0: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_187de4:
    // 0x187de4: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x187de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_187de8:
    // 0x187de8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x187de8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_187dec:
    // 0x187dec: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x187decu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_187df0:
    // 0x187df0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x187df0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_187df4:
    // 0x187df4: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x187df4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_187df8:
    // 0x187df8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x187df8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_187dfc:
    // 0x187dfc: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x187dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_187e00:
    // 0x187e00: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x187e00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_187e04:
    // 0x187e04: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x187e04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_187e08:
    // 0x187e08: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x187e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_187e0c:
    // 0x187e0c: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x187e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_187e10:
    // 0x187e10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x187e10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_187e14:
    // 0x187e14: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x187e14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_187e18:
    // 0x187e18: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x187e18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_187e1c:
    // 0x187e1c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x187e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_187e20:
    // 0x187e20: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x187e20u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_187e24:
    // 0x187e24: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x187e24u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_187e28:
    // 0x187e28: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x187e28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_187e2c:
    // 0x187e2c: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x187e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_187e30:
    // 0x187e30: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x187e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_187e34:
    // 0x187e34: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x187e34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_187e38:
    // 0x187e38: 0x10000011  b           . + 4 + (0x11 << 2)
label_187e3c:
    if (ctx->pc == 0x187E3Cu) {
        ctx->pc = 0x187E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E38u;
        // 0x187e3c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E40u;
        goto label_187e40;
    }
    ctx->pc = 0x187E38u;
    {
        const bool branch_taken_0x187e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E38u;
        // 0x187e3c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e38) {
            ctx->pc = 0x187E80u;
            goto label_187e80;
        }
    }
    ctx->pc = 0x187E40u;
label_187e40:
    // 0x187e40: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x187e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_187e44:
    // 0x187e44: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x187e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_187e48:
    // 0x187e48: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x187e48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_187e4c:
    // 0x187e4c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x187e4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_187e50:
    // 0x187e50: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x187e50u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_187e54:
    // 0x187e54: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x187e54u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_187e58:
    // 0x187e58: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x187e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_187e5c:
    // 0x187e5c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x187e5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_187e60:
    // 0x187e60: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x187e60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
label_187e64:
    // 0x187e64: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x187e64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_187e68:
    // 0x187e68: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x187e68u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
label_187e6c:
    // 0x187e6c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x187e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_187e70:
    // 0x187e70: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x187e70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_187e74:
    // 0x187e74: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x187e74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_187e78:
    // 0x187e78: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x187e78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_187e7c:
    // 0x187e7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_187e80:
    // 0x187e80: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x187e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_187e84:
    // 0x187e84: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x187e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_187e88:
    // 0x187e88: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x187e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_187e8c:
    // 0x187e8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x187e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_187e90:
    // 0x187e90: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x187e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_187e94:
    // 0x187e94: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
label_187e98:
    if (ctx->pc == 0x187E98u) {
        ctx->pc = 0x187E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E94u;
        // 0x187e98: 0x8e4201bc  lw          $v0, 0x1BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187E9Cu;
        goto label_187e9c;
    }
    ctx->pc = 0x187E94u;
    {
        const bool branch_taken_0x187e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187e94) {
            ctx->pc = 0x187E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E94u;
            // 0x187e98: 0x8e4201bc  lw          $v0, 0x1BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187d68;
        }
    }
    ctx->pc = 0x187E9Cu;
label_187e9c:
    // 0x187e9c: 0xc061e60  jal         func_187980
label_187ea0:
    if (ctx->pc == 0x187EA0u) {
        ctx->pc = 0x187EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E9Cu;
        // 0x187ea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EA4u;
        goto label_187ea4;
    }
    ctx->pc = 0x187E9Cu;
    SET_GPR_U32(ctx, 31, 0x187EA4u);
    ctx->pc = 0x187EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E9Cu;
    // 0x187ea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187980u, 0x187E9Cu, 0x187EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EA4u;
label_187ea4:
    // 0x187ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187ea8:
    // 0x187ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187eac:
    // 0x187eac: 0xc06ab98  jal         func_1AAE60
label_187eb0:
    if (ctx->pc == 0x187EB0u) {
        ctx->pc = 0x187EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EACu;
        // 0x187eb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EB4u;
        goto label_187eb4;
    }
    ctx->pc = 0x187EACu;
    SET_GPR_U32(ctx, 31, 0x187EB4u);
    ctx->pc = 0x187EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EACu;
    // 0x187eb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x187EACu, 0x187EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EB4u;
label_187eb4:
    // 0x187eb4: 0xc06bd28  jal         func_1AF4A0
label_187eb8:
    if (ctx->pc == 0x187EB8u) {
        ctx->pc = 0x187EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EB4u;
        // 0x187eb8: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EBCu;
        goto label_187ebc;
    }
    ctx->pc = 0x187EB4u;
    SET_GPR_U32(ctx, 31, 0x187EBCu);
    ctx->pc = 0x187EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EB4u;
    // 0x187eb8: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187EB4u, 0x187EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EBCu;
label_187ebc:
    // 0x187ebc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x187ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_187ec0:
    // 0x187ec0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x187ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_187ec4:
    // 0x187ec4: 0x0  nop
    ctx->pc = 0x187ec4u;
    // NOP
label_187ec8:
    // 0x187ec8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187ecc:
    // 0x187ecc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x187eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_187ed0:
    // 0x187ed0: 0x0  nop
    ctx->pc = 0x187ed0u;
    // NOP
label_187ed4:
    // 0x187ed4: 0x0  nop
    ctx->pc = 0x187ed4u;
    // NOP
label_187ed8:
    // 0x187ed8: 0x0  nop
    ctx->pc = 0x187ed8u;
    // NOP
label_187edc:
    // 0x187edc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_187ee0:
    if (ctx->pc == 0x187EE0u) {
        ctx->pc = 0x187EE4u;
        goto label_187ee4;
    }
    ctx->pc = 0x187EDCu;
    {
        const bool branch_taken_0x187edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187edc) {
            ctx->pc = 0x187EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187ec8;
        }
    }
    ctx->pc = 0x187EE4u;
label_187ee4:
    // 0x187ee4: 0x0  nop
    ctx->pc = 0x187ee4u;
    // NOP
label_187ee8:
    // 0x187ee8: 0xc06bd2c  jal         func_1AF4B0
label_187eec:
    if (ctx->pc == 0x187EECu) {
        ctx->pc = 0x187EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EE8u;
        // 0x187eec: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EF0u;
        goto label_187ef0;
    }
    ctx->pc = 0x187EE8u;
    SET_GPR_U32(ctx, 31, 0x187EF0u);
    ctx->pc = 0x187EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EE8u;
    // 0x187eec: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x187EE8u, 0x187EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EF0u;
label_187ef0:
    // 0x187ef0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_187ef4:
    // 0x187ef4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
label_187ef8:
    if (ctx->pc == 0x187EF8u) {
        ctx->pc = 0x187EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EF4u;
        // 0x187ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187EFCu;
        goto label_187efc;
    }
    ctx->pc = 0x187EF4u;
    {
        const bool branch_taken_0x187ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EF4u;
        // 0x187ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ef4) {
            ctx->pc = 0x187EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187ee8;
        }
    }
    ctx->pc = 0x187EFCu;
label_187efc:
    // 0x187efc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x187efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_187f00:
    // 0x187f00: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_187f04:
    if (ctx->pc == 0x187F04u) {
        ctx->pc = 0x187F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F00u;
        // 0x187f04: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F08u;
        goto label_187f08;
    }
    ctx->pc = 0x187F00u;
    {
        const bool branch_taken_0x187f00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F00u;
        // 0x187f04: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f00) {
            ctx->pc = 0x187F20u;
            goto label_187f20;
        }
    }
    ctx->pc = 0x187F08u;
label_187f08:
    // 0x187f08: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_187f0c:
    // 0x187f0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x187f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_187f10:
    // 0x187f10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_187f14:
    // 0x187f14: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x187f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_187f18:
    // 0x187f18: 0x10000003  b           . + 4 + (0x3 << 2)
label_187f1c:
    if (ctx->pc == 0x187F1Cu) {
        ctx->pc = 0x187F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F18u;
        // 0x187f1c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F20u;
        goto label_187f20;
    }
    ctx->pc = 0x187F18u;
    {
        const bool branch_taken_0x187f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F18u;
        // 0x187f1c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f18) {
            ctx->pc = 0x187F28u;
            goto label_187f28;
        }
    }
    ctx->pc = 0x187F20u;
label_187f20:
    // 0x187f20: 0xc06bdb8  jal         func_1AF6E0
label_187f24:
    if (ctx->pc == 0x187F24u) {
        ctx->pc = 0x187F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F20u;
        // 0x187f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F28u;
        goto label_187f28;
    }
    ctx->pc = 0x187F20u;
    SET_GPR_U32(ctx, 31, 0x187F28u);
    ctx->pc = 0x187F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F20u;
    // 0x187f24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x187F20u, 0x187F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F28u;
label_187f28:
    // 0x187f28: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x187f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_187f2c:
    // 0x187f2c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x187f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_187f30:
    // 0x187f30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_187f34:
    // 0x187f34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187f38:
    // 0x187f38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_187f3c:
    // 0x187f3c: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x187f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_187f40:
    // 0x187f40: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x187f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_187f44:
    // 0x187f44: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x187f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_187f48:
    // 0x187f48: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x187f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
label_187f4c:
    // 0x187f4c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x187f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_187f50:
    // 0x187f50: 0xc061b96  jal         func_186E58
label_187f54:
    if (ctx->pc == 0x187F54u) {
        ctx->pc = 0x187F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F50u;
        // 0x187f54: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F58u;
        goto label_187f58;
    }
    ctx->pc = 0x187F50u;
    SET_GPR_U32(ctx, 31, 0x187F58u);
    ctx->pc = 0x187F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F50u;
    // 0x187f54: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E58u, 0x187F50u, 0x187F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F58u;
label_187f58:
    // 0x187f58: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x187f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_187f5c:
    // 0x187f5c: 0x264201b4  addiu       $v0, $s2, 0x1B4
    ctx->pc = 0x187f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
label_187f60:
    // 0x187f60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x187f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_187f64:
    // 0x187f64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x187f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_187f68:
    // 0x187f68: 0x0  nop
    ctx->pc = 0x187f68u;
    // NOP
label_187f6c:
    // 0x187f6c: 0x0  nop
    ctx->pc = 0x187f6cu;
    // NOP
label_187f70:
    // 0x187f70: 0x0  nop
    ctx->pc = 0x187f70u;
    // NOP
label_187f74:
    // 0x187f74: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_187f78:
    if (ctx->pc == 0x187F78u) {
        ctx->pc = 0x187F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F74u;
        // 0x187f78: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F7Cu;
        goto label_187f7c;
    }
    ctx->pc = 0x187F74u;
    {
        const bool branch_taken_0x187f74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x187F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F74u;
        // 0x187f78: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f74) {
            ctx->pc = 0x187F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f60;
        }
    }
    ctx->pc = 0x187F7Cu;
label_187f7c:
    // 0x187f7c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x187f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_187f80:
    // 0x187f80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187f84:
    // 0x187f84: 0x244200b8  addiu       $v0, $v0, 0xB8
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_187f88:
    // 0x187f88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x187f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187f8c:
    // 0x187f8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187f90:
    // 0x187f90: 0x60f809  jalr        $v1
label_187f94:
    if (ctx->pc == 0x187F94u) {
        ctx->pc = 0x187F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F90u;
        // 0x187f94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F98u;
        goto label_187f98;
    }
    ctx->pc = 0x187F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187F98u);
        ctx->pc = 0x187F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F90u;
        // 0x187f94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F90u, 0x187F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187F98u;
label_187f98:
    // 0x187f98: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_187f9c:
    // 0x187f9c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x187f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_187fa0:
    // 0x187fa0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x187fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187fa4:
    // 0x187fa4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187fa8:
    // 0x187fa8: 0x60f809  jalr        $v1
label_187fac:
    if (ctx->pc == 0x187FACu) {
        ctx->pc = 0x187FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FA8u;
        // 0x187fac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FB0u;
        goto label_187fb0;
    }
    ctx->pc = 0x187FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187FB0u);
        ctx->pc = 0x187FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FA8u;
        // 0x187fac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FA8u, 0x187FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187FB0u;
label_187fb0:
    // 0x187fb0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x187fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_187fb4:
    // 0x187fb4: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x187fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
label_187fb8:
    // 0x187fb8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x187fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187fbc:
    // 0x187fbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187fc0:
    // 0x187fc0: 0x60f809  jalr        $v1
label_187fc4:
    if (ctx->pc == 0x187FC4u) {
        ctx->pc = 0x187FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FC0u;
        // 0x187fc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FC8u;
        goto label_187fc8;
    }
    ctx->pc = 0x187FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187FC8u);
        ctx->pc = 0x187FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FC0u;
        // 0x187fc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FC0u, 0x187FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187FC8u;
label_187fc8:
    // 0x187fc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187fcc:
    // 0x187fcc: 0xc06ab98  jal         func_1AAE60
label_187fd0:
    if (ctx->pc == 0x187FD0u) {
        ctx->pc = 0x187FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FCCu;
        // 0x187fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FD4u;
        goto label_187fd4;
    }
    ctx->pc = 0x187FCCu;
    SET_GPR_U32(ctx, 31, 0x187FD4u);
    ctx->pc = 0x187FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FCCu;
    // 0x187fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x187FCCu, 0x187FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FD4u;
label_187fd4:
    // 0x187fd4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x187fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_187fd8:
    // 0x187fd8: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x187fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_187fdc:
    // 0x187fdc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x187fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_187fe0:
    // 0x187fe0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_187fe4:
    if (ctx->pc == 0x187FE4u) {
        ctx->pc = 0x187FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FE0u;
        // 0x187fe4: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FE8u;
        goto label_187fe8;
    }
    ctx->pc = 0x187FE0u;
    {
        const bool branch_taken_0x187fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FE0u;
        // 0x187fe4: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fe0) {
            ctx->pc = 0x187FF8u;
            goto label_187ff8;
        }
    }
    ctx->pc = 0x187FE8u;
label_187fe8:
    // 0x187fe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_187fec:
    // 0x187fec: 0xc061c2c  jal         func_1870B0
label_187ff0:
    if (ctx->pc == 0x187FF0u) {
        ctx->pc = 0x187FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FECu;
        // 0x187ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FF4u;
        goto label_187ff4;
    }
    ctx->pc = 0x187FECu;
    SET_GPR_U32(ctx, 31, 0x187FF4u);
    ctx->pc = 0x187FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FECu;
    // 0x187ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1870B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1870B0u, 0x187FECu, 0x187FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FF4u;
label_187ff4:
    // 0x187ff4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x187ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
label_187ff8:
    // 0x187ff8: 0x2610d640  addiu       $s0, $s0, -0x29C0
    ctx->pc = 0x187ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956608));
label_187ffc:
    // 0x187ffc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x187ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_188000:
    // 0x188000: 0xc06bd28  jal         func_1AF4A0
label_188004:
    if (ctx->pc == 0x188004u) {
        ctx->pc = 0x188004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188000u;
        // 0x188004: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188008u;
        goto label_188008;
    }
    ctx->pc = 0x188000u;
    SET_GPR_U32(ctx, 31, 0x188008u);
    ctx->pc = 0x188004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188000u;
    // 0x188004: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x188000u, 0x188008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188008u;
label_188008:
    // 0x188008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x188008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18800c:
    // 0x18800c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x18800cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
label_188010:
    // 0x188010: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x188010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
label_188014:
    // 0x188014: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x188014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_188018:
    // 0x188018: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x188018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_18801c:
    // 0x18801c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_188020:
    // 0x188020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188024:
    // 0x188024: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x188024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_188028:
    // 0x188028: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x188028u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
label_18802c:
    // 0x18802c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x18802cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_188030:
    // 0x188030: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x188030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
label_188034:
    // 0x188034: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x188034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_188038:
    // 0x188038: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x188038u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
label_18803c:
    // 0x18803c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_188040:
    // 0x188040: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x188040u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
label_188044:
    // 0x188044: 0x354a0040  ori         $t2, $t2, 0x40
    ctx->pc = 0x188044u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
label_188048:
    // 0x188048: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x188048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_18804c:
    // 0x18804c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x18804cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_188050:
    // 0x188050: 0x34a50030  ori         $a1, $a1, 0x30
    ctx->pc = 0x188050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
label_188054:
    // 0x188054: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x188054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_188058:
    // 0x188058: 0xdf848c80  ld          $a0, -0x7380($gp)
    ctx->pc = 0x188058u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_18805c:
    // 0x18805c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x18805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_188060:
    // 0x188060: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x188060u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
label_188064:
    // 0x188064: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x188064u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_188068:
    // 0x188068: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x188068u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
label_18806c:
    // 0x18806c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_188070:
    // 0x188070: 0xfd470008  sd          $a3, 0x8($t2)
    ctx->pc = 0x188070u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 7));
label_188074:
    // 0x188074: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x188074u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_188078:
    // 0x188078: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x188078u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
label_18807c:
    // 0x18807c: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x18807cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
label_188080:
    // 0x188080: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x188080u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
label_188084:
    // 0x188084: 0x354a0050  ori         $t2, $t2, 0x50
    ctx->pc = 0x188084u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)80);
label_188088:
    // 0x188088: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x188088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_18808c:
    // 0x18808c: 0x1461023  subu        $v0, $t2, $a2
    ctx->pc = 0x18808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_188090:
    // 0x188090: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x188090u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
label_188094:
    // 0x188094: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_188098:
    // 0x188098: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x188098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_18809c:
    // 0x18809c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1880a0:
    // 0x1880a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1880a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1880a4:
    // 0x1880a4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1880a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_1880a8:
    // 0x1880a8: 0x1432024  and         $a0, $t2, $v1
    ctx->pc = 0x1880a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
label_1880ac:
    // 0x1880ac: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1880acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_1880b0:
    // 0x1880b0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1880b4:
    // 0x1880b4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1880b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_1880b8:
    // 0x1880b8: 0x2463d000  addiu       $v1, $v1, -0x3000
    ctx->pc = 0x1880b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955008));
label_1880bc:
    // 0x1880bc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1880bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1880c0:
    // 0x1880c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1880c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1880c4:
    // 0x1880c4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1880c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1880c8:
    // 0x1880c8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1880c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_1880cc:
    // 0x1880cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1880ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1880d0:
    // 0x1880d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1880d4:
    if (ctx->pc == 0x1880D4u) {
        ctx->pc = 0x1880D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D0u;
        // 0x1880d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880D8u;
        goto label_1880d8;
    }
    ctx->pc = 0x1880D0u;
    {
        const bool branch_taken_0x1880d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1880D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D0u;
        // 0x1880d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880d0) {
            ctx->pc = 0x1880F8u;
            goto label_1880f8;
        }
    }
    ctx->pc = 0x1880D8u;
label_1880d8:
    // 0x1880d8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1880d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1880dc:
    // 0x1880dc: 0xc05bd26  jal         func_16F498
label_1880e0:
    if (ctx->pc == 0x1880E0u) {
        ctx->pc = 0x1880E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880DCu;
        // 0x1880e0: 0x24847f18  addiu       $a0, $a0, 0x7F18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880E4u;
        goto label_1880e4;
    }
    ctx->pc = 0x1880DCu;
    SET_GPR_U32(ctx, 31, 0x1880E4u);
    ctx->pc = 0x1880E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1880DCu;
    // 0x1880e0: 0x24847f18  addiu       $a0, $a0, 0x7F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1880DCu, 0x1880E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1880E4u;
label_1880e4:
    // 0x1880e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1880e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1880e8:
    // 0x1880e8: 0xc06825c  jal         func_1A0970
label_1880ec:
    if (ctx->pc == 0x1880ECu) {
        ctx->pc = 0x1880ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880E8u;
        // 0x1880ec: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880F0u;
        goto label_1880f0;
    }
    ctx->pc = 0x1880E8u;
    SET_GPR_U32(ctx, 31, 0x1880F0u);
    ctx->pc = 0x1880ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1880E8u;
    // 0x1880ec: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1880E8u, 0x1880F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1880F0u;
label_1880f0:
    // 0x1880f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1880f4:
    if (ctx->pc == 0x1880F4u) {
        ctx->pc = 0x1880F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F0u;
        // 0x1880f4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880F8u;
        goto label_1880f8;
    }
    ctx->pc = 0x1880F0u;
    {
        const bool branch_taken_0x1880f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F0u;
        // 0x1880f4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f0) {
            ctx->pc = 0x188100u;
            goto label_188100;
        }
    }
    ctx->pc = 0x1880F8u;
label_1880f8:
    // 0x1880f8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1880f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1880fc:
    // 0x1880fc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1880fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_188100:
    // 0x188100: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x188100u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
label_188104:
    // 0x188104: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x188104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_188108:
    // 0x188108: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x188108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_18810c:
    // 0x18810c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_188110:
    // 0x188110: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x188110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_188114:
    // 0x188114: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x188114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_188118:
    // 0x188118: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x188118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_18811c:
    // 0x18811c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18811cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188120:
    // 0x188120: 0xc06bd20  jal         func_1AF480
label_188124:
    if (ctx->pc == 0x188124u) {
        ctx->pc = 0x188124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188120u;
        // 0x188124: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188128u;
        goto label_188128;
    }
    ctx->pc = 0x188120u;
    SET_GPR_U32(ctx, 31, 0x188128u);
    ctx->pc = 0x188124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188120u;
    // 0x188124: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x188120u, 0x188128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188128u;
label_188128:
    // 0x188128: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x188128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18812c:
    // 0x18812c: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x18812cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
label_188130:
    // 0x188130: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x188130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_188134:
    // 0x188134: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x188134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_188138:
    // 0x188138: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
label_18813c:
    // 0x18813c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x18813cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_188140:
    // 0x188140: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x188140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_188144:
    // 0x188144: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x188144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_188148:
    // 0x188148: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x188148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_18814c:
    // 0x18814c: 0xc06bd28  jal         func_1AF4A0
label_188150:
    if (ctx->pc == 0x188150u) {
        ctx->pc = 0x188150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18814Cu;
        // 0x188150: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188154u;
        goto label_188154;
    }
    ctx->pc = 0x18814Cu;
    SET_GPR_U32(ctx, 31, 0x188154u);
    ctx->pc = 0x188150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18814Cu;
    // 0x188150: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x18814Cu, 0x188154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188154u;
label_188154:
    // 0x188154: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_188158:
    // 0x188158: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x188158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_18815c:
    // 0x18815c: 0x0  nop
    ctx->pc = 0x18815cu;
    // NOP
label_188160:
    // 0x188160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_188164:
    // 0x188164: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x188164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_188168:
    // 0x188168: 0x0  nop
    ctx->pc = 0x188168u;
    // NOP
label_18816c:
    // 0x18816c: 0x0  nop
    ctx->pc = 0x18816cu;
    // NOP
label_188170:
    // 0x188170: 0x0  nop
    ctx->pc = 0x188170u;
    // NOP
label_188174:
    // 0x188174: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_188178:
    if (ctx->pc == 0x188178u) {
        ctx->pc = 0x18817Cu;
        goto label_18817c;
    }
    ctx->pc = 0x188174u;
    {
        const bool branch_taken_0x188174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188174) {
            ctx->pc = 0x188160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188160;
        }
    }
    ctx->pc = 0x18817Cu;
label_18817c:
    // 0x18817c: 0x0  nop
    ctx->pc = 0x18817cu;
    // NOP
label_188180:
    // 0x188180: 0xc06bd2c  jal         func_1AF4B0
label_188184:
    if (ctx->pc == 0x188184u) {
        ctx->pc = 0x188184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188180u;
        // 0x188184: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188188u;
        goto label_188188;
    }
    ctx->pc = 0x188180u;
    SET_GPR_U32(ctx, 31, 0x188188u);
    ctx->pc = 0x188184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188180u;
    // 0x188184: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x188180u, 0x188188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188188u;
label_188188:
    // 0x188188: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x188188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_18818c:
    // 0x18818c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
label_188190:
    if (ctx->pc == 0x188190u) {
        ctx->pc = 0x188190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18818Cu;
        // 0x188190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188194u;
        goto label_188194;
    }
    ctx->pc = 0x18818Cu;
    {
        const bool branch_taken_0x18818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x188190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18818Cu;
        // 0x188190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18818c) {
            ctx->pc = 0x188180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188180;
        }
    }
    ctx->pc = 0x188194u;
label_188194:
    // 0x188194: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_188198:
    // 0x188198: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_18819c:
    if (ctx->pc == 0x18819Cu) {
        ctx->pc = 0x18819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188198u;
        // 0x18819c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881A0u;
        goto label_1881a0;
    }
    ctx->pc = 0x188198u;
    {
        const bool branch_taken_0x188198 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188198u;
        // 0x18819c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188198) {
            ctx->pc = 0x1881B8u;
            goto label_1881b8;
        }
    }
    ctx->pc = 0x1881A0u;
label_1881a0:
    // 0x1881a0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1881a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1881a4:
    // 0x1881a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1881a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1881a8:
    // 0x1881a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1881a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1881ac:
    // 0x1881ac: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1881acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1881b0:
    // 0x1881b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1881b4:
    if (ctx->pc == 0x1881B4u) {
        ctx->pc = 0x1881B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881B0u;
        // 0x1881b4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881B8u;
        goto label_1881b8;
    }
    ctx->pc = 0x1881B0u;
    {
        const bool branch_taken_0x1881b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1881B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881B0u;
        // 0x1881b4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881b0) {
            ctx->pc = 0x1881C0u;
            goto label_1881c0;
        }
    }
    ctx->pc = 0x1881B8u;
label_1881b8:
    // 0x1881b8: 0xc06bdb8  jal         func_1AF6E0
label_1881bc:
    if (ctx->pc == 0x1881BCu) {
        ctx->pc = 0x1881BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881B8u;
        // 0x1881bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881C0u;
        goto label_1881c0;
    }
    ctx->pc = 0x1881B8u;
    SET_GPR_U32(ctx, 31, 0x1881C0u);
    ctx->pc = 0x1881BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881B8u;
    // 0x1881bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1881B8u, 0x1881C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881C0u;
label_1881c0:
    // 0x1881c0: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x1881c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_1881c4:
    // 0x1881c4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1881c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1881c8:
    // 0x1881c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1881c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1881cc:
    // 0x1881cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1881d0:
    // 0x1881d0: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x1881d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_1881d4:
    // 0x1881d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1881d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1881d8:
    // 0x1881d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1881d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1881dc:
    // 0x1881dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1881dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1881e0:
    // 0x1881e0: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1881e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
label_1881e4:
    // 0x1881e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1881e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1881e8:
    // 0x1881e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1881e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1881ec:
    // 0x1881ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1881ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1881f0:
    // 0x1881f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1881f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1881f4:
    // 0x1881f4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1881f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1881f8:
    // 0x1881f8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1881f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1881fc:
    // 0x1881fc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1881fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_188200:
    // 0x188200: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x188200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_188204:
    // 0x188204: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x188204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_188208:
    // 0x188208: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x188208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18820c:
    // 0x18820c: 0x3e00008  jr          $ra
label_188210:
    if (ctx->pc == 0x188210u) {
        ctx->pc = 0x188210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18820Cu;
        // 0x188210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188214u;
        goto label_fallthrough_0x18820c;
    }
    ctx->pc = 0x18820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18820Cu;
        // 0x188210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18820c:
    ctx->pc = 0x188214u;
}

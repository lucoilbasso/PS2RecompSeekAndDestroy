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

// Function: BMotionVectorDataLiner__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a3918 - 0x1a3ef4
void BMotionVectorDataLiner__FP11BMotionCtrlP11BMotionWorki_0x1a3918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionVectorDataLiner__FP11BMotionCtrlP11BMotionWorki_0x1a3918");
#endif

    switch (ctx->pc) {
        case 0x1a3918u: goto label_1a3918;
        case 0x1a391cu: goto label_1a391c;
        case 0x1a3920u: goto label_1a3920;
        case 0x1a3924u: goto label_1a3924;
        case 0x1a3928u: goto label_1a3928;
        case 0x1a392cu: goto label_1a392c;
        case 0x1a3930u: goto label_1a3930;
        case 0x1a3934u: goto label_1a3934;
        case 0x1a3938u: goto label_1a3938;
        case 0x1a393cu: goto label_1a393c;
        case 0x1a3940u: goto label_1a3940;
        case 0x1a3944u: goto label_1a3944;
        case 0x1a3948u: goto label_1a3948;
        case 0x1a394cu: goto label_1a394c;
        case 0x1a3950u: goto label_1a3950;
        case 0x1a3954u: goto label_1a3954;
        case 0x1a3958u: goto label_1a3958;
        case 0x1a395cu: goto label_1a395c;
        case 0x1a3960u: goto label_1a3960;
        case 0x1a3964u: goto label_1a3964;
        case 0x1a3968u: goto label_1a3968;
        case 0x1a396cu: goto label_1a396c;
        case 0x1a3970u: goto label_1a3970;
        case 0x1a3974u: goto label_1a3974;
        case 0x1a3978u: goto label_1a3978;
        case 0x1a397cu: goto label_1a397c;
        case 0x1a3980u: goto label_1a3980;
        case 0x1a3984u: goto label_1a3984;
        case 0x1a3988u: goto label_1a3988;
        case 0x1a398cu: goto label_1a398c;
        case 0x1a3990u: goto label_1a3990;
        case 0x1a3994u: goto label_1a3994;
        case 0x1a3998u: goto label_1a3998;
        case 0x1a399cu: goto label_1a399c;
        case 0x1a39a0u: goto label_1a39a0;
        case 0x1a39a4u: goto label_1a39a4;
        case 0x1a39a8u: goto label_1a39a8;
        case 0x1a39acu: goto label_1a39ac;
        case 0x1a39b0u: goto label_1a39b0;
        case 0x1a39b4u: goto label_1a39b4;
        case 0x1a39b8u: goto label_1a39b8;
        case 0x1a39bcu: goto label_1a39bc;
        case 0x1a39c0u: goto label_1a39c0;
        case 0x1a39c4u: goto label_1a39c4;
        case 0x1a39c8u: goto label_1a39c8;
        case 0x1a39ccu: goto label_1a39cc;
        case 0x1a39d0u: goto label_1a39d0;
        case 0x1a39d4u: goto label_1a39d4;
        case 0x1a39d8u: goto label_1a39d8;
        case 0x1a39dcu: goto label_1a39dc;
        case 0x1a39e0u: goto label_1a39e0;
        case 0x1a39e4u: goto label_1a39e4;
        case 0x1a39e8u: goto label_1a39e8;
        case 0x1a39ecu: goto label_1a39ec;
        case 0x1a39f0u: goto label_1a39f0;
        case 0x1a39f4u: goto label_1a39f4;
        case 0x1a39f8u: goto label_1a39f8;
        case 0x1a39fcu: goto label_1a39fc;
        case 0x1a3a00u: goto label_1a3a00;
        case 0x1a3a04u: goto label_1a3a04;
        case 0x1a3a08u: goto label_1a3a08;
        case 0x1a3a0cu: goto label_1a3a0c;
        case 0x1a3a10u: goto label_1a3a10;
        case 0x1a3a14u: goto label_1a3a14;
        case 0x1a3a18u: goto label_1a3a18;
        case 0x1a3a1cu: goto label_1a3a1c;
        case 0x1a3a20u: goto label_1a3a20;
        case 0x1a3a24u: goto label_1a3a24;
        case 0x1a3a28u: goto label_1a3a28;
        case 0x1a3a2cu: goto label_1a3a2c;
        case 0x1a3a30u: goto label_1a3a30;
        case 0x1a3a34u: goto label_1a3a34;
        case 0x1a3a38u: goto label_1a3a38;
        case 0x1a3a3cu: goto label_1a3a3c;
        case 0x1a3a40u: goto label_1a3a40;
        case 0x1a3a44u: goto label_1a3a44;
        case 0x1a3a48u: goto label_1a3a48;
        case 0x1a3a4cu: goto label_1a3a4c;
        case 0x1a3a50u: goto label_1a3a50;
        case 0x1a3a54u: goto label_1a3a54;
        case 0x1a3a58u: goto label_1a3a58;
        case 0x1a3a5cu: goto label_1a3a5c;
        case 0x1a3a60u: goto label_1a3a60;
        case 0x1a3a64u: goto label_1a3a64;
        case 0x1a3a68u: goto label_1a3a68;
        case 0x1a3a6cu: goto label_1a3a6c;
        case 0x1a3a70u: goto label_1a3a70;
        case 0x1a3a74u: goto label_1a3a74;
        case 0x1a3a78u: goto label_1a3a78;
        case 0x1a3a7cu: goto label_1a3a7c;
        case 0x1a3a80u: goto label_1a3a80;
        case 0x1a3a84u: goto label_1a3a84;
        case 0x1a3a88u: goto label_1a3a88;
        case 0x1a3a8cu: goto label_1a3a8c;
        case 0x1a3a90u: goto label_1a3a90;
        case 0x1a3a94u: goto label_1a3a94;
        case 0x1a3a98u: goto label_1a3a98;
        case 0x1a3a9cu: goto label_1a3a9c;
        case 0x1a3aa0u: goto label_1a3aa0;
        case 0x1a3aa4u: goto label_1a3aa4;
        case 0x1a3aa8u: goto label_1a3aa8;
        case 0x1a3aacu: goto label_1a3aac;
        case 0x1a3ab0u: goto label_1a3ab0;
        case 0x1a3ab4u: goto label_1a3ab4;
        case 0x1a3ab8u: goto label_1a3ab8;
        case 0x1a3abcu: goto label_1a3abc;
        case 0x1a3ac0u: goto label_1a3ac0;
        case 0x1a3ac4u: goto label_1a3ac4;
        case 0x1a3ac8u: goto label_1a3ac8;
        case 0x1a3accu: goto label_1a3acc;
        case 0x1a3ad0u: goto label_1a3ad0;
        case 0x1a3ad4u: goto label_1a3ad4;
        case 0x1a3ad8u: goto label_1a3ad8;
        case 0x1a3adcu: goto label_1a3adc;
        case 0x1a3ae0u: goto label_1a3ae0;
        case 0x1a3ae4u: goto label_1a3ae4;
        case 0x1a3ae8u: goto label_1a3ae8;
        case 0x1a3aecu: goto label_1a3aec;
        case 0x1a3af0u: goto label_1a3af0;
        case 0x1a3af4u: goto label_1a3af4;
        case 0x1a3af8u: goto label_1a3af8;
        case 0x1a3afcu: goto label_1a3afc;
        case 0x1a3b00u: goto label_1a3b00;
        case 0x1a3b04u: goto label_1a3b04;
        case 0x1a3b08u: goto label_1a3b08;
        case 0x1a3b0cu: goto label_1a3b0c;
        case 0x1a3b10u: goto label_1a3b10;
        case 0x1a3b14u: goto label_1a3b14;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b1cu: goto label_1a3b1c;
        case 0x1a3b20u: goto label_1a3b20;
        case 0x1a3b24u: goto label_1a3b24;
        case 0x1a3b28u: goto label_1a3b28;
        case 0x1a3b2cu: goto label_1a3b2c;
        case 0x1a3b30u: goto label_1a3b30;
        case 0x1a3b34u: goto label_1a3b34;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b3cu: goto label_1a3b3c;
        case 0x1a3b40u: goto label_1a3b40;
        case 0x1a3b44u: goto label_1a3b44;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b4cu: goto label_1a3b4c;
        case 0x1a3b50u: goto label_1a3b50;
        case 0x1a3b54u: goto label_1a3b54;
        case 0x1a3b58u: goto label_1a3b58;
        case 0x1a3b5cu: goto label_1a3b5c;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b64u: goto label_1a3b64;
        case 0x1a3b68u: goto label_1a3b68;
        case 0x1a3b6cu: goto label_1a3b6c;
        case 0x1a3b70u: goto label_1a3b70;
        case 0x1a3b74u: goto label_1a3b74;
        case 0x1a3b78u: goto label_1a3b78;
        case 0x1a3b7cu: goto label_1a3b7c;
        case 0x1a3b80u: goto label_1a3b80;
        case 0x1a3b84u: goto label_1a3b84;
        case 0x1a3b88u: goto label_1a3b88;
        case 0x1a3b8cu: goto label_1a3b8c;
        case 0x1a3b90u: goto label_1a3b90;
        case 0x1a3b94u: goto label_1a3b94;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3b9cu: goto label_1a3b9c;
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3ba4u: goto label_1a3ba4;
        case 0x1a3ba8u: goto label_1a3ba8;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        case 0x1a3c00u: goto label_1a3c00;
        case 0x1a3c04u: goto label_1a3c04;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c0cu: goto label_1a3c0c;
        case 0x1a3c10u: goto label_1a3c10;
        case 0x1a3c14u: goto label_1a3c14;
        case 0x1a3c18u: goto label_1a3c18;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c20u: goto label_1a3c20;
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c28u: goto label_1a3c28;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c30u: goto label_1a3c30;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c3cu: goto label_1a3c3c;
        case 0x1a3c40u: goto label_1a3c40;
        case 0x1a3c44u: goto label_1a3c44;
        case 0x1a3c48u: goto label_1a3c48;
        case 0x1a3c4cu: goto label_1a3c4c;
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c54u: goto label_1a3c54;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c60u: goto label_1a3c60;
        case 0x1a3c64u: goto label_1a3c64;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c6cu: goto label_1a3c6c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c74u: goto label_1a3c74;
        case 0x1a3c78u: goto label_1a3c78;
        case 0x1a3c7cu: goto label_1a3c7c;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c8cu: goto label_1a3c8c;
        case 0x1a3c90u: goto label_1a3c90;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3c9cu: goto label_1a3c9c;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca4u: goto label_1a3ca4;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cacu: goto label_1a3cac;
        case 0x1a3cb0u: goto label_1a3cb0;
        case 0x1a3cb4u: goto label_1a3cb4;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cbcu: goto label_1a3cbc;
        case 0x1a3cc0u: goto label_1a3cc0;
        case 0x1a3cc4u: goto label_1a3cc4;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cccu: goto label_1a3ccc;
        case 0x1a3cd0u: goto label_1a3cd0;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3cd8u: goto label_1a3cd8;
        case 0x1a3cdcu: goto label_1a3cdc;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cecu: goto label_1a3cec;
        case 0x1a3cf0u: goto label_1a3cf0;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3cf8u: goto label_1a3cf8;
        case 0x1a3cfcu: goto label_1a3cfc;
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d20u: goto label_1a3d20;
        case 0x1a3d24u: goto label_1a3d24;
        case 0x1a3d28u: goto label_1a3d28;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d30u: goto label_1a3d30;
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d38u: goto label_1a3d38;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d40u: goto label_1a3d40;
        case 0x1a3d44u: goto label_1a3d44;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d4cu: goto label_1a3d4c;
        case 0x1a3d50u: goto label_1a3d50;
        case 0x1a3d54u: goto label_1a3d54;
        case 0x1a3d58u: goto label_1a3d58;
        case 0x1a3d5cu: goto label_1a3d5c;
        case 0x1a3d60u: goto label_1a3d60;
        case 0x1a3d64u: goto label_1a3d64;
        case 0x1a3d68u: goto label_1a3d68;
        case 0x1a3d6cu: goto label_1a3d6c;
        case 0x1a3d70u: goto label_1a3d70;
        case 0x1a3d74u: goto label_1a3d74;
        case 0x1a3d78u: goto label_1a3d78;
        case 0x1a3d7cu: goto label_1a3d7c;
        case 0x1a3d80u: goto label_1a3d80;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d88u: goto label_1a3d88;
        case 0x1a3d8cu: goto label_1a3d8c;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3d94u: goto label_1a3d94;
        case 0x1a3d98u: goto label_1a3d98;
        case 0x1a3d9cu: goto label_1a3d9c;
        case 0x1a3da0u: goto label_1a3da0;
        case 0x1a3da4u: goto label_1a3da4;
        case 0x1a3da8u: goto label_1a3da8;
        case 0x1a3dacu: goto label_1a3dac;
        case 0x1a3db0u: goto label_1a3db0;
        case 0x1a3db4u: goto label_1a3db4;
        case 0x1a3db8u: goto label_1a3db8;
        case 0x1a3dbcu: goto label_1a3dbc;
        case 0x1a3dc0u: goto label_1a3dc0;
        case 0x1a3dc4u: goto label_1a3dc4;
        case 0x1a3dc8u: goto label_1a3dc8;
        case 0x1a3dccu: goto label_1a3dcc;
        case 0x1a3dd0u: goto label_1a3dd0;
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3dd8u: goto label_1a3dd8;
        case 0x1a3ddcu: goto label_1a3ddc;
        case 0x1a3de0u: goto label_1a3de0;
        case 0x1a3de4u: goto label_1a3de4;
        case 0x1a3de8u: goto label_1a3de8;
        case 0x1a3decu: goto label_1a3dec;
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3df4u: goto label_1a3df4;
        case 0x1a3df8u: goto label_1a3df8;
        case 0x1a3dfcu: goto label_1a3dfc;
        case 0x1a3e00u: goto label_1a3e00;
        case 0x1a3e04u: goto label_1a3e04;
        case 0x1a3e08u: goto label_1a3e08;
        case 0x1a3e0cu: goto label_1a3e0c;
        case 0x1a3e10u: goto label_1a3e10;
        case 0x1a3e14u: goto label_1a3e14;
        case 0x1a3e18u: goto label_1a3e18;
        case 0x1a3e1cu: goto label_1a3e1c;
        case 0x1a3e20u: goto label_1a3e20;
        case 0x1a3e24u: goto label_1a3e24;
        case 0x1a3e28u: goto label_1a3e28;
        case 0x1a3e2cu: goto label_1a3e2c;
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e34u: goto label_1a3e34;
        case 0x1a3e38u: goto label_1a3e38;
        case 0x1a3e3cu: goto label_1a3e3c;
        case 0x1a3e40u: goto label_1a3e40;
        case 0x1a3e44u: goto label_1a3e44;
        case 0x1a3e48u: goto label_1a3e48;
        case 0x1a3e4cu: goto label_1a3e4c;
        case 0x1a3e50u: goto label_1a3e50;
        case 0x1a3e54u: goto label_1a3e54;
        case 0x1a3e58u: goto label_1a3e58;
        case 0x1a3e5cu: goto label_1a3e5c;
        case 0x1a3e60u: goto label_1a3e60;
        case 0x1a3e64u: goto label_1a3e64;
        case 0x1a3e68u: goto label_1a3e68;
        case 0x1a3e6cu: goto label_1a3e6c;
        case 0x1a3e70u: goto label_1a3e70;
        case 0x1a3e74u: goto label_1a3e74;
        case 0x1a3e78u: goto label_1a3e78;
        case 0x1a3e7cu: goto label_1a3e7c;
        case 0x1a3e80u: goto label_1a3e80;
        case 0x1a3e84u: goto label_1a3e84;
        case 0x1a3e88u: goto label_1a3e88;
        case 0x1a3e8cu: goto label_1a3e8c;
        case 0x1a3e90u: goto label_1a3e90;
        case 0x1a3e94u: goto label_1a3e94;
        case 0x1a3e98u: goto label_1a3e98;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ea4u: goto label_1a3ea4;
        case 0x1a3ea8u: goto label_1a3ea8;
        case 0x1a3eacu: goto label_1a3eac;
        case 0x1a3eb0u: goto label_1a3eb0;
        case 0x1a3eb4u: goto label_1a3eb4;
        case 0x1a3eb8u: goto label_1a3eb8;
        case 0x1a3ebcu: goto label_1a3ebc;
        case 0x1a3ec0u: goto label_1a3ec0;
        case 0x1a3ec4u: goto label_1a3ec4;
        case 0x1a3ec8u: goto label_1a3ec8;
        case 0x1a3eccu: goto label_1a3ecc;
        case 0x1a3ed0u: goto label_1a3ed0;
        case 0x1a3ed4u: goto label_1a3ed4;
        case 0x1a3ed8u: goto label_1a3ed8;
        case 0x1a3edcu: goto label_1a3edc;
        case 0x1a3ee0u: goto label_1a3ee0;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3ee8u: goto label_1a3ee8;
        case 0x1a3eecu: goto label_1a3eec;
        case 0x1a3ef0u: goto label_1a3ef0;
        default: break;
    }

    ctx->pc = 0x1a3918u;

label_1a3918:
    // 0x1a3918: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a3918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a391c:
    // 0x1a391c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a3920:
    // 0x1a3920: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a3920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a3924:
    // 0x1a3924: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a3924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3928:
    // 0x1a3928: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1a3928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_1a392c:
    // 0x1a392c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a392cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3930:
    // 0x1a3930: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1a3930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_1a3934:
    // 0x1a3934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3938:
    // 0x1a3938: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1a3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_1a393c:
    // 0x1a393c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1a393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_1a3940:
    // 0x1a3940: 0x1682009d  bne         $s4, $v0, . + 4 + (0x9D << 2)
label_1a3944:
    if (ctx->pc == 0x1A3944u) {
        ctx->pc = 0x1A3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3940u;
        // 0x1a3944: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3948u;
        goto label_1a3948;
    }
    ctx->pc = 0x1A3940u;
    {
        const bool branch_taken_0x1a3940 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3940u;
        // 0x1a3944: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3940) {
            ctx->pc = 0x1A3BB8u;
            goto label_1a3bb8;
        }
    }
    ctx->pc = 0x1A3948u;
label_1a3948:
    // 0x1a3948: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1a3948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a394c:
    // 0x1a394c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3950:
    // 0x1a3950: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x1a3950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_1a3954:
    // 0x1a3954: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a3954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3958:
    // 0x1a3958: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1a3958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a395c:
    // 0x1a395c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1a395cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3960:
    // 0x1a3960: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1a3960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_1a3964:
    // 0x1a3964: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x1a3964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1a3968:
    // 0x1a3968: 0x38620010  xori        $v0, $v1, 0x10
    ctx->pc = 0x1a3968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_1a396c:
    // 0x1a396c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1a3970:
    if (ctx->pc == 0x1A3970u) {
        ctx->pc = 0x1A3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A396Cu;
        // 0x1a3970: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3974u;
        goto label_1a3974;
    }
    ctx->pc = 0x1A396Cu;
    {
        const bool branch_taken_0x1a396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A396Cu;
        // 0x1a3970: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a396c) {
            ctx->pc = 0x1A39C0u;
            goto label_1a39c0;
        }
    }
    ctx->pc = 0x1A3974u;
label_1a3974:
    // 0x1a3974: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x1a3974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1a3978:
    // 0x1a3978: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1a397c:
    if (ctx->pc == 0x1A397Cu) {
        ctx->pc = 0x1A397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3978u;
        // 0x1a397c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3980u;
        goto label_1a3980;
    }
    ctx->pc = 0x1A3978u;
    {
        const bool branch_taken_0x1a3978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3978) {
            ctx->pc = 0x1A397Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3978u;
            // 0x1a397c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A39A8u;
            goto label_1a39a8;
        }
    }
    ctx->pc = 0x1A3980u;
label_1a3980:
    // 0x1a3980: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a3980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3984:
    // 0x1a3984: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3988:
    // 0x1a3988: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a398c:
    // 0x1a398c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a398cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a3990:
    // 0x1a3990: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a3990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3994:
    // 0x1a3994: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a3994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a3998:
    // 0x1a3998: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1a3998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a399c:
    // 0x1a399c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1a399cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a39a0:
    // 0x1a39a0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1a39a4:
    if (ctx->pc == 0x1A39A4u) {
        ctx->pc = 0x1A39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39A0u;
        // 0x1a39a4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39A8u;
        goto label_1a39a8;
    }
    ctx->pc = 0x1A39A0u;
    {
        const bool branch_taken_0x1a39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39A0u;
        // 0x1a39a4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39a0) {
            ctx->pc = 0x1A3A34u;
            goto label_1a3a34;
        }
    }
    ctx->pc = 0x1A39A8u;
label_1a39a8:
    // 0x1a39a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a39ac:
    // 0x1a39ac: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a39acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a39b0:
    // 0x1a39b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1a39b4:
    // 0x1a39b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a39b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a39b8:
    // 0x1a39b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a39bc:
    if (ctx->pc == 0x1A39BCu) {
        ctx->pc = 0x1A39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39B8u;
        // 0x1a39bc: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39C0u;
        goto label_1a39c0;
    }
    ctx->pc = 0x1A39B8u;
    {
        const bool branch_taken_0x1a39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39B8u;
        // 0x1a39bc: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39b8) {
            ctx->pc = 0x1A3A20u;
            goto label_1a3a20;
        }
    }
    ctx->pc = 0x1A39C0u;
label_1a39c0:
    // 0x1a39c0: 0x38620011  xori        $v0, $v1, 0x11
    ctx->pc = 0x1a39c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
label_1a39c4:
    // 0x1a39c4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1a39c8:
    if (ctx->pc == 0x1A39C8u) {
        ctx->pc = 0x1A39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39C4u;
        // 0x1a39c8: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39CCu;
        goto label_1a39cc;
    }
    ctx->pc = 0x1A39C4u;
    {
        const bool branch_taken_0x1a39c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a39c4) {
            ctx->pc = 0x1A39C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A39C4u;
            // 0x1a39c8: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A00u;
            goto label_1a3a00;
        }
    }
    ctx->pc = 0x1A39CCu;
label_1a39cc:
    // 0x1a39cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a39d0:
    // 0x1a39d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a39d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a39d4:
    // 0x1a39d4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a39d8:
    // 0x1a39d8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1a39dc:
    // 0x1a39dc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a39dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a39e0:
    // 0x1a39e0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1a39e4:
    // 0x1a39e4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1a39e8:
    // 0x1a39e8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a39e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a39ec:
    // 0x1a39ec: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1a39ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a39f0:
    // 0x1a39f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a39f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a39f4:
    // 0x1a39f4: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a39f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a39f8:
    // 0x1a39f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a39fc:
    if (ctx->pc == 0x1A39FCu) {
        ctx->pc = 0x1A39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39F8u;
        // 0x1a39fc: 0x86620014  lh          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A00u;
        goto label_1a3a00;
    }
    ctx->pc = 0x1A39F8u;
    {
        const bool branch_taken_0x1a39f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39F8u;
        // 0x1a39fc: 0x86620014  lh          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39f8) {
            ctx->pc = 0x1A3A38u;
            goto label_1a3a38;
        }
    }
    ctx->pc = 0x1A3A00u;
label_1a3a00:
    // 0x1a3a00: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1a3a04:
    if (ctx->pc == 0x1A3A04u) {
        ctx->pc = 0x1A3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A00u;
        // 0x1a3a04: 0x86620014  lh          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A08u;
        goto label_1a3a08;
    }
    ctx->pc = 0x1A3A00u;
    {
        const bool branch_taken_0x1a3a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a00) {
            ctx->pc = 0x1A3A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3A00u;
            // 0x1a3a04: 0x86620014  lh          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A38u;
            goto label_1a3a38;
        }
    }
    ctx->pc = 0x1A3A08u;
label_1a3a08:
    // 0x1a3a08: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a3a0c:
    // 0x1a3a0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a3a10:
    // 0x1a3a10: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a3a14:
    // 0x1a3a14: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a3a18:
    // 0x1a3a18: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a3a1c:
    // 0x1a3a1c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a3a20:
    // 0x1a3a20: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a3a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1a3a24:
    // 0x1a3a24: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3a24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3a28:
    // 0x1a3a28: 0x4bc2113f  vitof15.xyz $vf2, $vf2
    ctx->pc = 0x1a3a28u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a3a2c:
    // 0x1a3a2c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a3a2cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3a30:
    // 0x1a3a30: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1a3a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3a34:
    // 0x1a3a34: 0x86620014  lh          $v0, 0x14($s3)
    ctx->pc = 0x1a3a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_1a3a38:
    // 0x1a3a38: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1a3a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1a3a3c:
    // 0x1a3a3c: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x1a3a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1a3a40:
    // 0x1a3a40: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x1a3a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1a3a44:
    // 0x1a3a44: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a3a44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3a48:
    // 0x1a3a48: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a3a48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3a4c:
    // 0x1a3a4c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1a3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3a50:
    // 0x1a3a50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a3a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a54:
    // 0x1a3a54: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_1a3a58:
    if (ctx->pc == 0x1A3A58u) {
        ctx->pc = 0x1A3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A54u;
        // 0x1a3a58: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A5Cu;
        goto label_1a3a5c;
    }
    ctx->pc = 0x1A3A54u;
    {
        const bool branch_taken_0x1a3a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A54u;
        // 0x1a3a58: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a54) {
            ctx->pc = 0x1A3AF0u;
            goto label_1a3af0;
        }
    }
    ctx->pc = 0x1A3A5Cu;
label_1a3a5c:
    // 0x1a3a5c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3a60:
    // 0x1a3a60: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a3a64:
    // 0x1a3a64: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1a3a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a3a68:
    // 0x1a3a68: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a3a6c:
    if (ctx->pc == 0x1A3A6Cu) {
        ctx->pc = 0x1A3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A68u;
        // 0x1a3a6c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3A70u;
        goto label_1a3a70;
    }
    ctx->pc = 0x1A3A68u;
    {
        const bool branch_taken_0x1a3a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A68u;
        // 0x1a3a6c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a68) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A3A70u;
label_1a3a70:
    // 0x1a3a70: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a3a74:
    // 0x1a3a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a3a78:
    // 0x1a3a78: 0x8c6392a0  lw          $v1, -0x6D60($v1)
    ctx->pc = 0x1a3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939296)));
label_1a3a7c:
    // 0x1a3a7c: 0x600008  jr          $v1
label_1a3a80:
    if (ctx->pc == 0x1A3A80u) {
        ctx->pc = 0x1A3A84u;
        goto label_1a3a84;
    }
    ctx->pc = 0x1A3A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3A88u: goto label_1a3a88;
            case 0x1A3A98u: goto label_1a3a98;
            case 0x1A3AA8u: goto label_1a3aa8;
            case 0x1A3AB8u: goto label_1a3ab8;
            case 0x1A3AC8u: goto label_1a3ac8;
            case 0x1A3AD8u: goto label_1a3ad8;
            case 0x1A3AE8u: goto label_1a3ae8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3A7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A3A84u;
label_1a3a84:
    // 0x1a3a84: 0x0  nop
    ctx->pc = 0x1a3a84u;
    // NOP
label_1a3a88:
    // 0x1a3a88: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a3a88u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3a8c:
    // 0x1a3a8c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a3a90:
    if (ctx->pc == 0x1A3A90u) {
        ctx->pc = 0x1A3A94u;
        goto label_1a3a94;
    }
    ctx->pc = 0x1A3A8Cu;
    {
        const bool branch_taken_0x1a3a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a8c) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A3A94u;
label_1a3a94:
    // 0x1a3a94: 0x0  nop
    ctx->pc = 0x1a3a94u;
    // NOP
label_1a3a98:
    // 0x1a3a98: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a3a98u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3a9c:
    // 0x1a3a9c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a3aa0:
    if (ctx->pc == 0x1A3AA0u) {
        ctx->pc = 0x1A3AA4u;
        goto label_1a3aa4;
    }
    ctx->pc = 0x1A3A9Cu;
    {
        const bool branch_taken_0x1a3a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a9c) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A3AA4u;
label_1a3aa4:
    // 0x1a3aa4: 0x0  nop
    ctx->pc = 0x1a3aa4u;
    // NOP
label_1a3aa8:
    // 0x1a3aa8: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a3aa8u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3aac:
    // 0x1a3aac: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a3ab0:
    if (ctx->pc == 0x1A3AB0u) {
        ctx->pc = 0x1A3AB4u;
        goto label_1a3ab4;
    }
    ctx->pc = 0x1A3AACu;
    {
        const bool branch_taken_0x1a3aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3aac) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A3AB4u;
label_1a3ab4:
    // 0x1a3ab4: 0x0  nop
    ctx->pc = 0x1a3ab4u;
    // NOP
label_1a3ab8:
    // 0x1a3ab8: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a3ab8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3abc:
    // 0x1a3abc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a3ac0:
    if (ctx->pc == 0x1A3AC0u) {
        ctx->pc = 0x1A3AC4u;
        goto label_1a3ac4;
    }
    ctx->pc = 0x1A3ABCu;
    {
        const bool branch_taken_0x1a3abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3abc) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A3AC4u;
label_1a3ac4:
    // 0x1a3ac4: 0x0  nop
    ctx->pc = 0x1a3ac4u;
    // NOP
label_1a3ac8:
    // 0x1a3ac8: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a3ac8u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3acc:
    // 0x1a3acc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3ad0:
    if (ctx->pc == 0x1A3AD0u) {
        ctx->pc = 0x1A3AD4u;
        goto label_1a3ad4;
    }
    ctx->pc = 0x1A3ACCu;
    {
        const bool branch_taken_0x1a3acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3acc) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A3AD4u;
label_1a3ad4:
    // 0x1a3ad4: 0x0  nop
    ctx->pc = 0x1a3ad4u;
    // NOP
label_1a3ad8:
    // 0x1a3ad8: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a3ad8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3adc:
    // 0x1a3adc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a3ae0:
    if (ctx->pc == 0x1A3AE0u) {
        ctx->pc = 0x1A3AE4u;
        goto label_1a3ae4;
    }
    ctx->pc = 0x1A3ADCu;
    {
        const bool branch_taken_0x1a3adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3adc) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A3AE4u;
label_1a3ae4:
    // 0x1a3ae4: 0x0  nop
    ctx->pc = 0x1a3ae4u;
    // NOP
label_1a3ae8:
    // 0x1a3ae8: 0x4bc2033c  vmove.xyz   $vf2, $vf0
    ctx->pc = 0x1a3ae8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3aec:
    // 0x1a3aec: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3aecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3af0:
    // 0x1a3af0: 0xa4a60030  sh          $a2, 0x30($a1)
    ctx->pc = 0x1a3af0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 6));
label_1a3af4:
    // 0x1a3af4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1a3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1a3af8:
    // 0x1a3af8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3afc:
    if (ctx->pc == 0x1A3AFCu) {
        ctx->pc = 0x1A3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AF8u;
        // 0x1a3afc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B00u;
        goto label_1a3b00;
    }
    ctx->pc = 0x1A3AF8u;
    {
        const bool branch_taken_0x1a3af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AF8u;
        // 0x1a3afc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3af8) {
            ctx->pc = 0x1A3B18u;
            goto label_1a3b18;
        }
    }
    ctx->pc = 0x1A3B00u;
label_1a3b00:
    // 0x1a3b00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b04:
    // 0x1a3b04: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a3b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b08:
    // 0x1a3b08: 0x40f809  jalr        $v0
label_1a3b0c:
    if (ctx->pc == 0x1A3B0Cu) {
        ctx->pc = 0x1A3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B08u;
        // 0x1a3b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B10u;
        goto label_1a3b10;
    }
    ctx->pc = 0x1A3B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3B10u);
        ctx->pc = 0x1A3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B08u;
        // 0x1a3b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B08u, 0x1A3B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3B10u;
label_1a3b10:
    // 0x1a3b10: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3b14:
    if (ctx->pc == 0x1A3B14u) {
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B10u;
        // 0x1a3b14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B18u;
        goto label_1a3b18;
    }
    ctx->pc = 0x1A3B10u;
    {
        const bool branch_taken_0x1a3b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B10u;
        // 0x1a3b14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3b10) {
            ctx->pc = 0x1A3B30u;
            goto label_1a3b30;
        }
    }
    ctx->pc = 0x1A3B18u;
label_1a3b18:
    // 0x1a3b18: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1a3b1c:
    // 0x1a3b1c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a3b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a3b20:
    // 0x1a3b20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a3b24:
    // 0x1a3b24: 0xc068186  jal         func_1A0618
label_1a3b28:
    if (ctx->pc == 0x1A3B28u) {
        ctx->pc = 0x1A3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B24u;
        // 0x1a3b28: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B2Cu;
        goto label_1a3b2c;
    }
    ctx->pc = 0x1A3B24u;
    SET_GPR_U32(ctx, 31, 0x1A3B2Cu);
    ctx->pc = 0x1A3B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B24u;
    // 0x1a3b28: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A3B24u, 0x1A3B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B2Cu;
label_1a3b2c:
    // 0x1a3b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b30:
    // 0x1a3b30: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1a3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1a3b34:
    // 0x1a3b34: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1a3b38:
    // 0x1a3b38: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1a3b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a3b3c:
    // 0x1a3b3c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a3b3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3b40:
    // 0x1a3b40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a3b40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3b44:
    // 0x1a3b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3b48:
    // 0x1a3b48: 0x94a20030  lhu         $v0, 0x30($a1)
    ctx->pc = 0x1a3b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1a3b4c:
    // 0x1a3b4c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a3b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a3b50:
    // 0x1a3b50: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a3b50u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1a3b54:
    // 0x1a3b54: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1a3b58:
    // 0x1a3b58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3b5c:
    // 0x1a3b5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3b60:
    // 0x1a3b60: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a3b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a3b64:
    // 0x1a3b64: 0xa4a20032  sh          $v0, 0x32($a1)
    ctx->pc = 0x1a3b64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 2));
label_1a3b68:
    // 0x1a3b68: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1a3b68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_1a3b6c:
    // 0x1a3b6c: 0x26630040  addiu       $v1, $s3, 0x40
    ctx->pc = 0x1a3b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1a3b70:
    // 0x1a3b70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a3b70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3b74:
    // 0x1a3b74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3b78:
    // 0x1a3b78: 0x0  nop
    ctx->pc = 0x1a3b78u;
    // NOP
label_1a3b7c:
    // 0x1a3b7c: 0x0  nop
    ctx->pc = 0x1a3b7cu;
    // NOP
label_1a3b80:
    // 0x1a3b80: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a3b80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a3b84:
    // 0x1a3b84: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3b84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3b88:
    // 0x1a3b88: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1a3b88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a3b8c:
    // 0x1a3b8c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a3b8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a3b90:
    // 0x1a3b90: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a3b90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3b94:
    // 0x1a3b94: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a3b98:
    // 0x1a3b98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a3b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a3b9c:
    // 0x1a3b9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a3b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1a3ba0:
    // 0x1a3ba0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a3ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a3ba4:
    // 0x1a3ba4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3ba8:
    // 0x1a3ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bac:
    // 0x1a3bac: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1a3bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1a3bb0:
    // 0x1a3bb0: 0xc068b62  jal         func_1A2D88
label_1a3bb4:
    if (ctx->pc == 0x1A3BB4u) {
        ctx->pc = 0x1A3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BB0u;
        // 0x1a3bb4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BB8u;
        goto label_1a3bb8;
    }
    ctx->pc = 0x1A3BB0u;
    SET_GPR_U32(ctx, 31, 0x1A3BB8u);
    ctx->pc = 0x1A3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BB0u;
    // 0x1a3bb4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D88u, 0x1A3BB0u, 0x1A3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BB8u;
label_1a3bb8:
    // 0x1a3bb8: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x1a3bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1a3bbc:
    // 0x1a3bbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a3bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a3bc0:
    // 0x1a3bc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a3bc4:
    if (ctx->pc == 0x1A3BC4u) {
        ctx->pc = 0x1A3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BC0u;
        // 0x1a3bc4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BC8u;
        goto label_1a3bc8;
    }
    ctx->pc = 0x1A3BC0u;
    {
        const bool branch_taken_0x1a3bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BC0u;
        // 0x1a3bc4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3bc0) {
            ctx->pc = 0x1A3BD4u;
            goto label_1a3bd4;
        }
    }
    ctx->pc = 0x1A3BC8u;
label_1a3bc8:
    // 0x1a3bc8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1a3bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1a3bcc:
    // 0x1a3bcc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a3bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a3bd0:
    // 0x1a3bd0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1a3bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a3bd4:
    // 0x1a3bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3bd8:
    // 0x1a3bd8: 0x68200bf  bltzl       $s4, . + 4 + (0xBF << 2)
label_1a3bdc:
    if (ctx->pc == 0x1A3BDCu) {
        ctx->pc = 0x1A3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BD8u;
        // 0x1a3bdc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BE0u;
        goto label_1a3be0;
    }
    ctx->pc = 0x1A3BD8u;
    {
        const bool branch_taken_0x1a3bd8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x1a3bd8) {
            ctx->pc = 0x1A3BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3BD8u;
            // 0x1a3bdc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3ED8u;
            goto label_1a3ed8;
        }
    }
    ctx->pc = 0x1A3BE0u;
label_1a3be0:
    // 0x1a3be0: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
label_1a3be4:
    if (ctx->pc == 0x1A3BE4u) {
        ctx->pc = 0x1A3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BE0u;
        // 0x1a3be4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BE8u;
        goto label_1a3be8;
    }
    ctx->pc = 0x1A3BE0u;
    {
        const bool branch_taken_0x1a3be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BE0u;
        // 0x1a3be4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3be0) {
            ctx->pc = 0x1A3EC8u;
            goto label_1a3ec8;
        }
    }
    ctx->pc = 0x1A3BE8u;
label_1a3be8:
    // 0x1a3be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bec:
    // 0x1a3bec: 0xc068b62  jal         func_1A2D88
label_1a3bf0:
    if (ctx->pc == 0x1A3BF0u) {
        ctx->pc = 0x1A3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BECu;
        // 0x1a3bf0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BF4u;
        goto label_1a3bf4;
    }
    ctx->pc = 0x1A3BECu;
    SET_GPR_U32(ctx, 31, 0x1A3BF4u);
    ctx->pc = 0x1A3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BECu;
    // 0x1a3bf0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D88u, 0x1A3BECu, 0x1A3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BF4u;
label_1a3bf4:
    // 0x1a3bf4: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1a3bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1a3bf8:
    // 0x1a3bf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a3bfc:
    // 0x1a3bfc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a3c00:
    // 0x1a3c00: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
label_1a3c04:
    if (ctx->pc == 0x1A3C04u) {
        ctx->pc = 0x1A3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C00u;
        // 0x1a3c04: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C08u;
        goto label_1a3c08;
    }
    ctx->pc = 0x1A3C00u;
    {
        const bool branch_taken_0x1a3c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C00u;
        // 0x1a3c04: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c00) {
            ctx->pc = 0x1A3ED0u;
            goto label_1a3ed0;
        }
    }
    ctx->pc = 0x1A3C08u;
label_1a3c08:
    // 0x1a3c08: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x1a3c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_1a3c0c:
    // 0x1a3c0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3c10:
    // 0x1a3c10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a3c14:
    // 0x1a3c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3c18:
    // 0x1a3c18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3c1c:
    // 0x1a3c1c: 0x4610010  bgez        $v1, . + 4 + (0x10 << 2)
label_1a3c20:
    if (ctx->pc == 0x1A3C20u) {
        ctx->pc = 0x1A3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C1Cu;
        // 0x1a3c20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C24u;
        goto label_1a3c24;
    }
    ctx->pc = 0x1A3C1Cu;
    {
        const bool branch_taken_0x1a3c1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C1Cu;
        // 0x1a3c20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c1c) {
            ctx->pc = 0x1A3C60u;
            goto label_1a3c60;
        }
    }
    ctx->pc = 0x1A3C24u;
label_1a3c24:
    // 0x1a3c24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3c28:
    // 0x1a3c28: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1a3c2c:
    if (ctx->pc == 0x1A3C2Cu) {
        ctx->pc = 0x1A3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C28u;
        // 0x1a3c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C30u;
        goto label_1a3c30;
    }
    ctx->pc = 0x1A3C28u;
    {
        const bool branch_taken_0x1a3c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C28u;
        // 0x1a3c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c28) {
            ctx->pc = 0x1A3C7Cu;
            goto label_1a3c7c;
        }
    }
    ctx->pc = 0x1A3C30u;
label_1a3c30:
    // 0x1a3c30: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a3c34:
    // 0x1a3c34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a3c38:
    if (ctx->pc == 0x1A3C38u) {
        ctx->pc = 0x1A3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C34u;
        // 0x1a3c38: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C3Cu;
        goto label_1a3c3c;
    }
    ctx->pc = 0x1A3C34u;
    {
        const bool branch_taken_0x1a3c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C34u;
        // 0x1a3c38: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c34) {
            ctx->pc = 0x1A3C48u;
            goto label_1a3c48;
        }
    }
    ctx->pc = 0x1A3C3Cu;
label_1a3c3c:
    // 0x1a3c3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a3c40:
    if (ctx->pc == 0x1A3C40u) {
        ctx->pc = 0x1A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C3Cu;
        // 0x1a3c40: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C44u;
        goto label_1a3c44;
    }
    ctx->pc = 0x1A3C3Cu;
    {
        const bool branch_taken_0x1a3c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C3Cu;
        // 0x1a3c40: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c3c) {
            ctx->pc = 0x1A3C60u;
            goto label_1a3c60;
        }
    }
    ctx->pc = 0x1A3C44u;
label_1a3c44:
    // 0x1a3c44: 0x0  nop
    ctx->pc = 0x1a3c44u;
    // NOP
label_1a3c48:
    // 0x1a3c48: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_1a3c4c:
    if (ctx->pc == 0x1A3C4Cu) {
        ctx->pc = 0x1A3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C48u;
        // 0x1a3c4c: 0x94a20016  lhu         $v0, 0x16($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C50u;
        goto label_1a3c50;
    }
    ctx->pc = 0x1A3C48u;
    {
        const bool branch_taken_0x1a3c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3c48) {
            ctx->pc = 0x1A3C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3C48u;
            // 0x1a3c4c: 0x94a20016  lhu         $v0, 0x16($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C50u;
label_1a3c50:
    // 0x1a3c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3c54:
    // 0x1a3c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c58:
    // 0x1a3c58: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a3c5c:
    if (ctx->pc == 0x1A3C5Cu) {
        ctx->pc = 0x1A3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C58u;
        // 0x1a3c5c: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C60u;
        goto label_1a3c60;
    }
    ctx->pc = 0x1A3C58u;
    {
        const bool branch_taken_0x1a3c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C58u;
        // 0x1a3c5c: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c58) {
            ctx->pc = 0x1A3C7Cu;
            goto label_1a3c7c;
        }
    }
    ctx->pc = 0x1A3C60u;
label_1a3c60:
    // 0x1a3c60: 0x94a20016  lhu         $v0, 0x16($a1)
    ctx->pc = 0x1a3c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
label_1a3c64:
    // 0x1a3c64: 0x84a30016  lh          $v1, 0x16($a1)
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
label_1a3c68:
    // 0x1a3c68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a3c6c:
    // 0x1a3c6c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1a3c70:
    // 0x1a3c70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a3c74:
    // 0x1a3c74: 0xa4a20016  sh          $v0, 0x16($a1)
    ctx->pc = 0x1a3c74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 2));
label_1a3c78:
    // 0x1a3c78: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a3c7c:
    // 0x1a3c7c: 0x10c00094  beqz        $a2, . + 4 + (0x94 << 2)
label_1a3c80:
    if (ctx->pc == 0x1A3C80u) {
        ctx->pc = 0x1A3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C7Cu;
        // 0x1a3c80: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C84u;
        goto label_1a3c84;
    }
    ctx->pc = 0x1A3C7Cu;
    {
        const bool branch_taken_0x1a3c7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C7Cu;
        // 0x1a3c80: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c7c) {
            ctx->pc = 0x1A3ED0u;
            goto label_1a3ed0;
        }
    }
    ctx->pc = 0x1A3C84u;
label_1a3c84:
    // 0x1a3c84: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1a3c84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1a3c88:
    // 0x1a3c88: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1a3c88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_1a3c8c:
    // 0x1a3c8c: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x1a3c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1a3c90:
    // 0x1a3c90: 0x38620010  xori        $v0, $v1, 0x10
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_1a3c94:
    // 0x1a3c94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a3c98:
    if (ctx->pc == 0x1A3C98u) {
        ctx->pc = 0x1A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C94u;
        // 0x1a3c98: 0x38620011  xori        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C9Cu;
        goto label_1a3c9c;
    }
    ctx->pc = 0x1A3C94u;
    {
        const bool branch_taken_0x1a3c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C94u;
        // 0x1a3c98: 0x38620011  xori        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c94) {
            ctx->pc = 0x1A3CD0u;
            goto label_1a3cd0;
        }
    }
    ctx->pc = 0x1A3C9Cu;
label_1a3c9c:
    // 0x1a3c9c: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x1a3c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_1a3ca0:
    // 0x1a3ca0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_1a3ca4:
    if (ctx->pc == 0x1A3CA4u) {
        ctx->pc = 0x1A3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CA0u;
        // 0x1a3ca4: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CA8u;
        goto label_1a3ca8;
    }
    ctx->pc = 0x1A3CA0u;
    {
        const bool branch_taken_0x1a3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ca0) {
            ctx->pc = 0x1A3CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3CA0u;
            // 0x1a3ca4: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3D1Cu;
            goto label_1a3d1c;
        }
    }
    ctx->pc = 0x1A3CA8u;
label_1a3ca8:
    // 0x1a3ca8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1a3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3cac:
    // 0x1a3cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3cb0:
    // 0x1a3cb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a3cb4:
    // 0x1a3cb4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a3cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a3cb8:
    // 0x1a3cb8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1a3cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3cbc:
    // 0x1a3cbc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1a3cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a3cc0:
    // 0x1a3cc0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1a3cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3cc4:
    // 0x1a3cc4: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x1a3cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1a3cc8:
    // 0x1a3cc8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1a3ccc:
    if (ctx->pc == 0x1A3CCCu) {
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CD0u;
        goto label_1a3cd0;
    }
    ctx->pc = 0x1A3CC8u;
    {
        const bool branch_taken_0x1a3cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cc8) {
            ctx->pc = 0x1A3D48u;
            goto label_1a3d48;
        }
    }
    ctx->pc = 0x1A3CD0u;
label_1a3cd0:
    // 0x1a3cd0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_1a3cd4:
    if (ctx->pc == 0x1A3CD4u) {
        ctx->pc = 0x1A3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CD0u;
        // 0x1a3cd4: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CD8u;
        goto label_1a3cd8;
    }
    ctx->pc = 0x1A3CD0u;
    {
        const bool branch_taken_0x1a3cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cd0) {
            ctx->pc = 0x1A3CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3CD0u;
            // 0x1a3cd4: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3D10u;
            goto label_1a3d10;
        }
    }
    ctx->pc = 0x1A3CD8u;
label_1a3cd8:
    // 0x1a3cd8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a3cdc:
    // 0x1a3cdc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1a3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a3ce0:
    // 0x1a3ce0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3ce4:
    // 0x1a3ce4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1a3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1a3ce8:
    // 0x1a3ce8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a3cec:
    // 0x1a3cec: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1a3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1a3cf0:
    // 0x1a3cf0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a3cf4:
    // 0x1a3cf4: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_1a3cf8:
    // 0x1a3cf8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3cf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3cfc:
    // 0x1a3cfc: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1a3cfcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a3d00:
    // 0x1a3d00: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a3d00u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3d04:
    // 0x1a3d04: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3d04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3d08:
    // 0x1a3d08: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a3d0c:
    if (ctx->pc == 0x1A3D0Cu) {
        ctx->pc = 0x1A3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D08u;
        // 0x1a3d0c: 0x86020014  lh          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D10u;
        goto label_1a3d10;
    }
    ctx->pc = 0x1A3D08u;
    {
        const bool branch_taken_0x1a3d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D08u;
        // 0x1a3d0c: 0x86020014  lh          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d08) {
            ctx->pc = 0x1A3D4Cu;
            goto label_1a3d4c;
        }
    }
    ctx->pc = 0x1A3D10u;
label_1a3d10:
    // 0x1a3d10: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1a3d14:
    if (ctx->pc == 0x1A3D14u) {
        ctx->pc = 0x1A3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D10u;
        // 0x1a3d14: 0x86020014  lh          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D18u;
        goto label_1a3d18;
    }
    ctx->pc = 0x1A3D10u;
    {
        const bool branch_taken_0x1a3d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d10) {
            ctx->pc = 0x1A3D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3D10u;
            // 0x1a3d14: 0x86020014  lh          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3D4Cu;
            goto label_1a3d4c;
        }
    }
    ctx->pc = 0x1A3D18u;
label_1a3d18:
    // 0x1a3d18: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a3d1c:
    // 0x1a3d1c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1a3d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a3d20:
    // 0x1a3d20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3d24:
    // 0x1a3d24: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1a3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1a3d28:
    // 0x1a3d28: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a3d2c:
    // 0x1a3d2c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1a3d30:
    // 0x1a3d30: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a3d34:
    // 0x1a3d34: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a3d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_1a3d38:
    // 0x1a3d38: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3d3c:
    // 0x1a3d3c: 0x4bc2113f  vitof15.xyz $vf2, $vf2
    ctx->pc = 0x1a3d3cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a3d40:
    // 0x1a3d40: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1a3d40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3d44:
    // 0x1a3d44: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a3d44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3d48:
    // 0x1a3d48: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x1a3d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1a3d4c:
    // 0x1a3d4c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1a3d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1a3d50:
    // 0x1a3d50: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x1a3d50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1a3d54:
    // 0x1a3d54: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a3d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3d58:
    // 0x1a3d58: 0x34488000  ori         $t0, $v0, 0x8000
    ctx->pc = 0x1a3d58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1a3d5c:
    // 0x1a3d5c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a3d60:
    // 0x1a3d60: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a3d60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3d64:
    // 0x1a3d64: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1a3d64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3d68:
    // 0x1a3d68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a3d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d6c:
    // 0x1a3d6c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_1a3d70:
    if (ctx->pc == 0x1A3D70u) {
        ctx->pc = 0x1A3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D6Cu;
        // 0x1a3d70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D74u;
        goto label_1a3d74;
    }
    ctx->pc = 0x1A3D6Cu;
    {
        const bool branch_taken_0x1a3d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D6Cu;
        // 0x1a3d70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d6c) {
            ctx->pc = 0x1A3E08u;
            goto label_1a3e08;
        }
    }
    ctx->pc = 0x1A3D74u;
label_1a3d74:
    // 0x1a3d74: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3d78:
    // 0x1a3d78: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1a3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a3d7c:
    // 0x1a3d7c: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x1a3d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a3d80:
    // 0x1a3d80: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1a3d84:
    if (ctx->pc == 0x1A3D84u) {
        ctx->pc = 0x1A3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D80u;
        // 0x1a3d84: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D88u;
        goto label_1a3d88;
    }
    ctx->pc = 0x1A3D80u;
    {
        const bool branch_taken_0x1a3d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D80u;
        // 0x1a3d84: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d80) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3D88u;
label_1a3d88:
    // 0x1a3d88: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a3d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a3d8c:
    // 0x1a3d8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a3d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a3d90:
    // 0x1a3d90: 0x8c6392c0  lw          $v1, -0x6D40($v1)
    ctx->pc = 0x1a3d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939328)));
label_1a3d94:
    // 0x1a3d94: 0x600008  jr          $v1
label_1a3d98:
    if (ctx->pc == 0x1A3D98u) {
        ctx->pc = 0x1A3D9Cu;
        goto label_1a3d9c;
    }
    ctx->pc = 0x1A3D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3DA0u: goto label_1a3da0;
            case 0x1A3DB0u: goto label_1a3db0;
            case 0x1A3DC0u: goto label_1a3dc0;
            case 0x1A3DD0u: goto label_1a3dd0;
            case 0x1A3DE0u: goto label_1a3de0;
            case 0x1A3DF0u: goto label_1a3df0;
            case 0x1A3E00u: goto label_1a3e00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A3D9Cu;
label_1a3d9c:
    // 0x1a3d9c: 0x0  nop
    ctx->pc = 0x1a3d9cu;
    // NOP
label_1a3da0:
    // 0x1a3da0: 0x4b02033c  vmove.x     $vf2, $vf0
    ctx->pc = 0x1a3da0u;
    { __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3da4:
    // 0x1a3da4: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a3da8:
    if (ctx->pc == 0x1A3DA8u) {
        ctx->pc = 0x1A3DACu;
        goto label_1a3dac;
    }
    ctx->pc = 0x1A3DA4u;
    {
        const bool branch_taken_0x1a3da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3da4) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3DACu;
label_1a3dac:
    // 0x1a3dac: 0x0  nop
    ctx->pc = 0x1a3dacu;
    // NOP
label_1a3db0:
    // 0x1a3db0: 0x4a82033c  vmove.y     $vf2, $vf0
    ctx->pc = 0x1a3db0u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3db4:
    // 0x1a3db4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a3db8:
    if (ctx->pc == 0x1A3DB8u) {
        ctx->pc = 0x1A3DBCu;
        goto label_1a3dbc;
    }
    ctx->pc = 0x1A3DB4u;
    {
        const bool branch_taken_0x1a3db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3db4) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3DBCu;
label_1a3dbc:
    // 0x1a3dbc: 0x0  nop
    ctx->pc = 0x1a3dbcu;
    // NOP
label_1a3dc0:
    // 0x1a3dc0: 0x4b82033c  vmove.xy    $vf2, $vf0
    ctx->pc = 0x1a3dc0u;
    { __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3dc4:
    // 0x1a3dc4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a3dc8:
    if (ctx->pc == 0x1A3DC8u) {
        ctx->pc = 0x1A3DCCu;
        goto label_1a3dcc;
    }
    ctx->pc = 0x1A3DC4u;
    {
        const bool branch_taken_0x1a3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3dc4) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3DCCu;
label_1a3dcc:
    // 0x1a3dcc: 0x0  nop
    ctx->pc = 0x1a3dccu;
    // NOP
label_1a3dd0:
    // 0x1a3dd0: 0x4a42033c  vmove.z     $vf2, $vf0
    ctx->pc = 0x1a3dd0u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3dd4:
    // 0x1a3dd4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a3dd8:
    if (ctx->pc == 0x1A3DD8u) {
        ctx->pc = 0x1A3DDCu;
        goto label_1a3ddc;
    }
    ctx->pc = 0x1A3DD4u;
    {
        const bool branch_taken_0x1a3dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3dd4) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3DDCu;
label_1a3ddc:
    // 0x1a3ddc: 0x0  nop
    ctx->pc = 0x1a3ddcu;
    // NOP
label_1a3de0:
    // 0x1a3de0: 0x4b42033c  vmove.xz    $vf2, $vf0
    ctx->pc = 0x1a3de0u;
    { __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3de4:
    // 0x1a3de4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3de8:
    if (ctx->pc == 0x1A3DE8u) {
        ctx->pc = 0x1A3DECu;
        goto label_1a3dec;
    }
    ctx->pc = 0x1A3DE4u;
    {
        const bool branch_taken_0x1a3de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3de4) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3DECu;
label_1a3dec:
    // 0x1a3dec: 0x0  nop
    ctx->pc = 0x1a3decu;
    // NOP
label_1a3df0:
    // 0x1a3df0: 0x4ac2033c  vmove.yz    $vf2, $vf0
    ctx->pc = 0x1a3df0u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3df4:
    // 0x1a3df4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a3df8:
    if (ctx->pc == 0x1A3DF8u) {
        ctx->pc = 0x1A3DFCu;
        goto label_1a3dfc;
    }
    ctx->pc = 0x1A3DF4u;
    {
        const bool branch_taken_0x1a3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3df4) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3DFCu;
label_1a3dfc:
    // 0x1a3dfc: 0x0  nop
    ctx->pc = 0x1a3dfcu;
    // NOP
label_1a3e00:
    // 0x1a3e00: 0x4bc2033c  vmove.xyz   $vf2, $vf0
    ctx->pc = 0x1a3e00u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3e04:
    // 0x1a3e04: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3e04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3e08:
    // 0x1a3e08: 0xa4c80030  sh          $t0, 0x30($a2)
    ctx->pc = 0x1a3e08u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 8));
label_1a3e0c:
    // 0x1a3e0c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1a3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1a3e10:
    // 0x1a3e10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3e14:
    if (ctx->pc == 0x1A3E14u) {
        ctx->pc = 0x1A3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E10u;
        // 0x1a3e14: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E18u;
        goto label_1a3e18;
    }
    ctx->pc = 0x1A3E10u;
    {
        const bool branch_taken_0x1a3e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E10u;
        // 0x1a3e14: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e10) {
            ctx->pc = 0x1A3E30u;
            goto label_1a3e30;
        }
    }
    ctx->pc = 0x1A3E18u;
label_1a3e18:
    // 0x1a3e18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e1c:
    // 0x1a3e1c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a3e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e20:
    // 0x1a3e20: 0x40f809  jalr        $v0
label_1a3e24:
    if (ctx->pc == 0x1A3E24u) {
        ctx->pc = 0x1A3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E20u;
        // 0x1a3e24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E28u;
        goto label_1a3e28;
    }
    ctx->pc = 0x1A3E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3E28u);
        ctx->pc = 0x1A3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E20u;
        // 0x1a3e24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3E20u, 0x1A3E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3E28u;
label_1a3e28:
    // 0x1a3e28: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3e2c:
    if (ctx->pc == 0x1A3E2Cu) {
        ctx->pc = 0x1A3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E28u;
        // 0x1a3e2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E30u;
        goto label_1a3e30;
    }
    ctx->pc = 0x1A3E28u;
    {
        const bool branch_taken_0x1a3e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E28u;
        // 0x1a3e2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e28) {
            ctx->pc = 0x1A3E48u;
            goto label_1a3e48;
        }
    }
    ctx->pc = 0x1A3E30u;
label_1a3e30:
    // 0x1a3e30: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1a3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1a3e34:
    // 0x1a3e34: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a3e38:
    // 0x1a3e38: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a3e3c:
    // 0x1a3e3c: 0xc068186  jal         func_1A0618
label_1a3e40:
    if (ctx->pc == 0x1A3E40u) {
        ctx->pc = 0x1A3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E3Cu;
        // 0x1a3e40: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E44u;
        goto label_1a3e44;
    }
    ctx->pc = 0x1A3E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A3E44u);
    ctx->pc = 0x1A3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E3Cu;
    // 0x1a3e40: 0x24a59250  addiu       $a1, $a1, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A3E3Cu, 0x1A3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E44u;
label_1a3e44:
    // 0x1a3e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e48:
    // 0x1a3e48: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1a3e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1a3e4c:
    // 0x1a3e4c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1a3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1a3e50:
    // 0x1a3e50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1a3e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a3e54:
    // 0x1a3e54: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1a3e54u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1a3e58:
    // 0x1a3e58: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a3e58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3e5c:
    // 0x1a3e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3e60:
    // 0x1a3e60: 0x94a20030  lhu         $v0, 0x30($a1)
    ctx->pc = 0x1a3e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1a3e64:
    // 0x1a3e64: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a3e68:
    // 0x1a3e68: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a3e68u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1a3e6c:
    // 0x1a3e6c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1a3e70:
    // 0x1a3e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3e74:
    // 0x1a3e74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3e78:
    // 0x1a3e78: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a3e7c:
    // 0x1a3e7c: 0xa4a20032  sh          $v0, 0x32($a1)
    ctx->pc = 0x1a3e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 2));
label_1a3e80:
    // 0x1a3e80: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1a3e80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_1a3e84:
    // 0x1a3e84: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1a3e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a3e88:
    // 0x1a3e88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a3e88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3e8c:
    // 0x1a3e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3e90:
    // 0x1a3e90: 0x0  nop
    ctx->pc = 0x1a3e90u;
    // NOP
label_1a3e94:
    // 0x1a3e94: 0x0  nop
    ctx->pc = 0x1a3e94u;
    // NOP
label_1a3e98:
    // 0x1a3e98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a3e98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a3e9c:
    // 0x1a3e9c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3e9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3ea0:
    // 0x1a3ea0: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1a3ea0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a3ea4:
    // 0x1a3ea4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a3ea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a3ea8:
    // 0x1a3ea8: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a3ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1a3eac:
    // 0x1a3eac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3eacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a3eb0:
    // 0x1a3eb0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a3eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a3eb4:
    // 0x1a3eb4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a3eb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1a3eb8:
    // 0x1a3eb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a3eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a3ebc:
    // 0x1a3ebc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a3ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a3ec0:
    // 0x1a3ec0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a3ec4:
    if (ctx->pc == 0x1A3EC4u) {
        ctx->pc = 0x1A3EC8u;
        goto label_1a3ec8;
    }
    ctx->pc = 0x1A3EC0u;
    {
        const bool branch_taken_0x1a3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ec0) {
            ctx->pc = 0x1A3ED0u;
            goto label_1a3ed0;
        }
    }
    ctx->pc = 0x1A3EC8u;
label_1a3ec8:
    // 0x1a3ec8: 0xc06881e  jal         func_1A2078
label_1a3ecc:
    if (ctx->pc == 0x1A3ECCu) {
        ctx->pc = 0x1A3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EC8u;
        // 0x1a3ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3ED0u;
        goto label_1a3ed0;
    }
    ctx->pc = 0x1A3EC8u;
    SET_GPR_U32(ctx, 31, 0x1A3ED0u);
    ctx->pc = 0x1A3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EC8u;
    // 0x1a3ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A3EC8u, 0x1A3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3ED0u;
label_1a3ed0:
    // 0x1a3ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3ed4:
    // 0x1a3ed4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1a3ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a3ed8:
    // 0x1a3ed8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1a3ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1a3edc:
    // 0x1a3edc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1a3edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a3ee0:
    // 0x1a3ee0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1a3ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1a3ee4:
    // 0x1a3ee4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a3ee4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a3ee8:
    // 0x1a3ee8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1a3ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1a3eec:
    // 0x1a3eec: 0x3e00008  jr          $ra
label_1a3ef0:
    if (ctx->pc == 0x1A3EF0u) {
        ctx->pc = 0x1A3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EECu;
        // 0x1a3ef0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EF4u;
        goto label_fallthrough_0x1a3eec;
    }
    ctx->pc = 0x1A3EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EECu;
        // 0x1a3ef0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3eec:
    ctx->pc = 0x1A3EF4u;
}

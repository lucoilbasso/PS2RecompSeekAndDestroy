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

// Function: TankFrameJobProc__7ApcTank
// Address: 0x1538e8 - 0x15426c
void TankFrameJobProc__7ApcTank_0x1538e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankFrameJobProc__7ApcTank_0x1538e8");
#endif

    switch (ctx->pc) {
        case 0x1538e8u: goto label_1538e8;
        case 0x1538ecu: goto label_1538ec;
        case 0x1538f0u: goto label_1538f0;
        case 0x1538f4u: goto label_1538f4;
        case 0x1538f8u: goto label_1538f8;
        case 0x1538fcu: goto label_1538fc;
        case 0x153900u: goto label_153900;
        case 0x153904u: goto label_153904;
        case 0x153908u: goto label_153908;
        case 0x15390cu: goto label_15390c;
        case 0x153910u: goto label_153910;
        case 0x153914u: goto label_153914;
        case 0x153918u: goto label_153918;
        case 0x15391cu: goto label_15391c;
        case 0x153920u: goto label_153920;
        case 0x153924u: goto label_153924;
        case 0x153928u: goto label_153928;
        case 0x15392cu: goto label_15392c;
        case 0x153930u: goto label_153930;
        case 0x153934u: goto label_153934;
        case 0x153938u: goto label_153938;
        case 0x15393cu: goto label_15393c;
        case 0x153940u: goto label_153940;
        case 0x153944u: goto label_153944;
        case 0x153948u: goto label_153948;
        case 0x15394cu: goto label_15394c;
        case 0x153950u: goto label_153950;
        case 0x153954u: goto label_153954;
        case 0x153958u: goto label_153958;
        case 0x15395cu: goto label_15395c;
        case 0x153960u: goto label_153960;
        case 0x153964u: goto label_153964;
        case 0x153968u: goto label_153968;
        case 0x15396cu: goto label_15396c;
        case 0x153970u: goto label_153970;
        case 0x153974u: goto label_153974;
        case 0x153978u: goto label_153978;
        case 0x15397cu: goto label_15397c;
        case 0x153980u: goto label_153980;
        case 0x153984u: goto label_153984;
        case 0x153988u: goto label_153988;
        case 0x15398cu: goto label_15398c;
        case 0x153990u: goto label_153990;
        case 0x153994u: goto label_153994;
        case 0x153998u: goto label_153998;
        case 0x15399cu: goto label_15399c;
        case 0x1539a0u: goto label_1539a0;
        case 0x1539a4u: goto label_1539a4;
        case 0x1539a8u: goto label_1539a8;
        case 0x1539acu: goto label_1539ac;
        case 0x1539b0u: goto label_1539b0;
        case 0x1539b4u: goto label_1539b4;
        case 0x1539b8u: goto label_1539b8;
        case 0x1539bcu: goto label_1539bc;
        case 0x1539c0u: goto label_1539c0;
        case 0x1539c4u: goto label_1539c4;
        case 0x1539c8u: goto label_1539c8;
        case 0x1539ccu: goto label_1539cc;
        case 0x1539d0u: goto label_1539d0;
        case 0x1539d4u: goto label_1539d4;
        case 0x1539d8u: goto label_1539d8;
        case 0x1539dcu: goto label_1539dc;
        case 0x1539e0u: goto label_1539e0;
        case 0x1539e4u: goto label_1539e4;
        case 0x1539e8u: goto label_1539e8;
        case 0x1539ecu: goto label_1539ec;
        case 0x1539f0u: goto label_1539f0;
        case 0x1539f4u: goto label_1539f4;
        case 0x1539f8u: goto label_1539f8;
        case 0x1539fcu: goto label_1539fc;
        case 0x153a00u: goto label_153a00;
        case 0x153a04u: goto label_153a04;
        case 0x153a08u: goto label_153a08;
        case 0x153a0cu: goto label_153a0c;
        case 0x153a10u: goto label_153a10;
        case 0x153a14u: goto label_153a14;
        case 0x153a18u: goto label_153a18;
        case 0x153a1cu: goto label_153a1c;
        case 0x153a20u: goto label_153a20;
        case 0x153a24u: goto label_153a24;
        case 0x153a28u: goto label_153a28;
        case 0x153a2cu: goto label_153a2c;
        case 0x153a30u: goto label_153a30;
        case 0x153a34u: goto label_153a34;
        case 0x153a38u: goto label_153a38;
        case 0x153a3cu: goto label_153a3c;
        case 0x153a40u: goto label_153a40;
        case 0x153a44u: goto label_153a44;
        case 0x153a48u: goto label_153a48;
        case 0x153a4cu: goto label_153a4c;
        case 0x153a50u: goto label_153a50;
        case 0x153a54u: goto label_153a54;
        case 0x153a58u: goto label_153a58;
        case 0x153a5cu: goto label_153a5c;
        case 0x153a60u: goto label_153a60;
        case 0x153a64u: goto label_153a64;
        case 0x153a68u: goto label_153a68;
        case 0x153a6cu: goto label_153a6c;
        case 0x153a70u: goto label_153a70;
        case 0x153a74u: goto label_153a74;
        case 0x153a78u: goto label_153a78;
        case 0x153a7cu: goto label_153a7c;
        case 0x153a80u: goto label_153a80;
        case 0x153a84u: goto label_153a84;
        case 0x153a88u: goto label_153a88;
        case 0x153a8cu: goto label_153a8c;
        case 0x153a90u: goto label_153a90;
        case 0x153a94u: goto label_153a94;
        case 0x153a98u: goto label_153a98;
        case 0x153a9cu: goto label_153a9c;
        case 0x153aa0u: goto label_153aa0;
        case 0x153aa4u: goto label_153aa4;
        case 0x153aa8u: goto label_153aa8;
        case 0x153aacu: goto label_153aac;
        case 0x153ab0u: goto label_153ab0;
        case 0x153ab4u: goto label_153ab4;
        case 0x153ab8u: goto label_153ab8;
        case 0x153abcu: goto label_153abc;
        case 0x153ac0u: goto label_153ac0;
        case 0x153ac4u: goto label_153ac4;
        case 0x153ac8u: goto label_153ac8;
        case 0x153accu: goto label_153acc;
        case 0x153ad0u: goto label_153ad0;
        case 0x153ad4u: goto label_153ad4;
        case 0x153ad8u: goto label_153ad8;
        case 0x153adcu: goto label_153adc;
        case 0x153ae0u: goto label_153ae0;
        case 0x153ae4u: goto label_153ae4;
        case 0x153ae8u: goto label_153ae8;
        case 0x153aecu: goto label_153aec;
        case 0x153af0u: goto label_153af0;
        case 0x153af4u: goto label_153af4;
        case 0x153af8u: goto label_153af8;
        case 0x153afcu: goto label_153afc;
        case 0x153b00u: goto label_153b00;
        case 0x153b04u: goto label_153b04;
        case 0x153b08u: goto label_153b08;
        case 0x153b0cu: goto label_153b0c;
        case 0x153b10u: goto label_153b10;
        case 0x153b14u: goto label_153b14;
        case 0x153b18u: goto label_153b18;
        case 0x153b1cu: goto label_153b1c;
        case 0x153b20u: goto label_153b20;
        case 0x153b24u: goto label_153b24;
        case 0x153b28u: goto label_153b28;
        case 0x153b2cu: goto label_153b2c;
        case 0x153b30u: goto label_153b30;
        case 0x153b34u: goto label_153b34;
        case 0x153b38u: goto label_153b38;
        case 0x153b3cu: goto label_153b3c;
        case 0x153b40u: goto label_153b40;
        case 0x153b44u: goto label_153b44;
        case 0x153b48u: goto label_153b48;
        case 0x153b4cu: goto label_153b4c;
        case 0x153b50u: goto label_153b50;
        case 0x153b54u: goto label_153b54;
        case 0x153b58u: goto label_153b58;
        case 0x153b5cu: goto label_153b5c;
        case 0x153b60u: goto label_153b60;
        case 0x153b64u: goto label_153b64;
        case 0x153b68u: goto label_153b68;
        case 0x153b6cu: goto label_153b6c;
        case 0x153b70u: goto label_153b70;
        case 0x153b74u: goto label_153b74;
        case 0x153b78u: goto label_153b78;
        case 0x153b7cu: goto label_153b7c;
        case 0x153b80u: goto label_153b80;
        case 0x153b84u: goto label_153b84;
        case 0x153b88u: goto label_153b88;
        case 0x153b8cu: goto label_153b8c;
        case 0x153b90u: goto label_153b90;
        case 0x153b94u: goto label_153b94;
        case 0x153b98u: goto label_153b98;
        case 0x153b9cu: goto label_153b9c;
        case 0x153ba0u: goto label_153ba0;
        case 0x153ba4u: goto label_153ba4;
        case 0x153ba8u: goto label_153ba8;
        case 0x153bacu: goto label_153bac;
        case 0x153bb0u: goto label_153bb0;
        case 0x153bb4u: goto label_153bb4;
        case 0x153bb8u: goto label_153bb8;
        case 0x153bbcu: goto label_153bbc;
        case 0x153bc0u: goto label_153bc0;
        case 0x153bc4u: goto label_153bc4;
        case 0x153bc8u: goto label_153bc8;
        case 0x153bccu: goto label_153bcc;
        case 0x153bd0u: goto label_153bd0;
        case 0x153bd4u: goto label_153bd4;
        case 0x153bd8u: goto label_153bd8;
        case 0x153bdcu: goto label_153bdc;
        case 0x153be0u: goto label_153be0;
        case 0x153be4u: goto label_153be4;
        case 0x153be8u: goto label_153be8;
        case 0x153becu: goto label_153bec;
        case 0x153bf0u: goto label_153bf0;
        case 0x153bf4u: goto label_153bf4;
        case 0x153bf8u: goto label_153bf8;
        case 0x153bfcu: goto label_153bfc;
        case 0x153c00u: goto label_153c00;
        case 0x153c04u: goto label_153c04;
        case 0x153c08u: goto label_153c08;
        case 0x153c0cu: goto label_153c0c;
        case 0x153c10u: goto label_153c10;
        case 0x153c14u: goto label_153c14;
        case 0x153c18u: goto label_153c18;
        case 0x153c1cu: goto label_153c1c;
        case 0x153c20u: goto label_153c20;
        case 0x153c24u: goto label_153c24;
        case 0x153c28u: goto label_153c28;
        case 0x153c2cu: goto label_153c2c;
        case 0x153c30u: goto label_153c30;
        case 0x153c34u: goto label_153c34;
        case 0x153c38u: goto label_153c38;
        case 0x153c3cu: goto label_153c3c;
        case 0x153c40u: goto label_153c40;
        case 0x153c44u: goto label_153c44;
        case 0x153c48u: goto label_153c48;
        case 0x153c4cu: goto label_153c4c;
        case 0x153c50u: goto label_153c50;
        case 0x153c54u: goto label_153c54;
        case 0x153c58u: goto label_153c58;
        case 0x153c5cu: goto label_153c5c;
        case 0x153c60u: goto label_153c60;
        case 0x153c64u: goto label_153c64;
        case 0x153c68u: goto label_153c68;
        case 0x153c6cu: goto label_153c6c;
        case 0x153c70u: goto label_153c70;
        case 0x153c74u: goto label_153c74;
        case 0x153c78u: goto label_153c78;
        case 0x153c7cu: goto label_153c7c;
        case 0x153c80u: goto label_153c80;
        case 0x153c84u: goto label_153c84;
        case 0x153c88u: goto label_153c88;
        case 0x153c8cu: goto label_153c8c;
        case 0x153c90u: goto label_153c90;
        case 0x153c94u: goto label_153c94;
        case 0x153c98u: goto label_153c98;
        case 0x153c9cu: goto label_153c9c;
        case 0x153ca0u: goto label_153ca0;
        case 0x153ca4u: goto label_153ca4;
        case 0x153ca8u: goto label_153ca8;
        case 0x153cacu: goto label_153cac;
        case 0x153cb0u: goto label_153cb0;
        case 0x153cb4u: goto label_153cb4;
        case 0x153cb8u: goto label_153cb8;
        case 0x153cbcu: goto label_153cbc;
        case 0x153cc0u: goto label_153cc0;
        case 0x153cc4u: goto label_153cc4;
        case 0x153cc8u: goto label_153cc8;
        case 0x153cccu: goto label_153ccc;
        case 0x153cd0u: goto label_153cd0;
        case 0x153cd4u: goto label_153cd4;
        case 0x153cd8u: goto label_153cd8;
        case 0x153cdcu: goto label_153cdc;
        case 0x153ce0u: goto label_153ce0;
        case 0x153ce4u: goto label_153ce4;
        case 0x153ce8u: goto label_153ce8;
        case 0x153cecu: goto label_153cec;
        case 0x153cf0u: goto label_153cf0;
        case 0x153cf4u: goto label_153cf4;
        case 0x153cf8u: goto label_153cf8;
        case 0x153cfcu: goto label_153cfc;
        case 0x153d00u: goto label_153d00;
        case 0x153d04u: goto label_153d04;
        case 0x153d08u: goto label_153d08;
        case 0x153d0cu: goto label_153d0c;
        case 0x153d10u: goto label_153d10;
        case 0x153d14u: goto label_153d14;
        case 0x153d18u: goto label_153d18;
        case 0x153d1cu: goto label_153d1c;
        case 0x153d20u: goto label_153d20;
        case 0x153d24u: goto label_153d24;
        case 0x153d28u: goto label_153d28;
        case 0x153d2cu: goto label_153d2c;
        case 0x153d30u: goto label_153d30;
        case 0x153d34u: goto label_153d34;
        case 0x153d38u: goto label_153d38;
        case 0x153d3cu: goto label_153d3c;
        case 0x153d40u: goto label_153d40;
        case 0x153d44u: goto label_153d44;
        case 0x153d48u: goto label_153d48;
        case 0x153d4cu: goto label_153d4c;
        case 0x153d50u: goto label_153d50;
        case 0x153d54u: goto label_153d54;
        case 0x153d58u: goto label_153d58;
        case 0x153d5cu: goto label_153d5c;
        case 0x153d60u: goto label_153d60;
        case 0x153d64u: goto label_153d64;
        case 0x153d68u: goto label_153d68;
        case 0x153d6cu: goto label_153d6c;
        case 0x153d70u: goto label_153d70;
        case 0x153d74u: goto label_153d74;
        case 0x153d78u: goto label_153d78;
        case 0x153d7cu: goto label_153d7c;
        case 0x153d80u: goto label_153d80;
        case 0x153d84u: goto label_153d84;
        case 0x153d88u: goto label_153d88;
        case 0x153d8cu: goto label_153d8c;
        case 0x153d90u: goto label_153d90;
        case 0x153d94u: goto label_153d94;
        case 0x153d98u: goto label_153d98;
        case 0x153d9cu: goto label_153d9c;
        case 0x153da0u: goto label_153da0;
        case 0x153da4u: goto label_153da4;
        case 0x153da8u: goto label_153da8;
        case 0x153dacu: goto label_153dac;
        case 0x153db0u: goto label_153db0;
        case 0x153db4u: goto label_153db4;
        case 0x153db8u: goto label_153db8;
        case 0x153dbcu: goto label_153dbc;
        case 0x153dc0u: goto label_153dc0;
        case 0x153dc4u: goto label_153dc4;
        case 0x153dc8u: goto label_153dc8;
        case 0x153dccu: goto label_153dcc;
        case 0x153dd0u: goto label_153dd0;
        case 0x153dd4u: goto label_153dd4;
        case 0x153dd8u: goto label_153dd8;
        case 0x153ddcu: goto label_153ddc;
        case 0x153de0u: goto label_153de0;
        case 0x153de4u: goto label_153de4;
        case 0x153de8u: goto label_153de8;
        case 0x153decu: goto label_153dec;
        case 0x153df0u: goto label_153df0;
        case 0x153df4u: goto label_153df4;
        case 0x153df8u: goto label_153df8;
        case 0x153dfcu: goto label_153dfc;
        case 0x153e00u: goto label_153e00;
        case 0x153e04u: goto label_153e04;
        case 0x153e08u: goto label_153e08;
        case 0x153e0cu: goto label_153e0c;
        case 0x153e10u: goto label_153e10;
        case 0x153e14u: goto label_153e14;
        case 0x153e18u: goto label_153e18;
        case 0x153e1cu: goto label_153e1c;
        case 0x153e20u: goto label_153e20;
        case 0x153e24u: goto label_153e24;
        case 0x153e28u: goto label_153e28;
        case 0x153e2cu: goto label_153e2c;
        case 0x153e30u: goto label_153e30;
        case 0x153e34u: goto label_153e34;
        case 0x153e38u: goto label_153e38;
        case 0x153e3cu: goto label_153e3c;
        case 0x153e40u: goto label_153e40;
        case 0x153e44u: goto label_153e44;
        case 0x153e48u: goto label_153e48;
        case 0x153e4cu: goto label_153e4c;
        case 0x153e50u: goto label_153e50;
        case 0x153e54u: goto label_153e54;
        case 0x153e58u: goto label_153e58;
        case 0x153e5cu: goto label_153e5c;
        case 0x153e60u: goto label_153e60;
        case 0x153e64u: goto label_153e64;
        case 0x153e68u: goto label_153e68;
        case 0x153e6cu: goto label_153e6c;
        case 0x153e70u: goto label_153e70;
        case 0x153e74u: goto label_153e74;
        case 0x153e78u: goto label_153e78;
        case 0x153e7cu: goto label_153e7c;
        case 0x153e80u: goto label_153e80;
        case 0x153e84u: goto label_153e84;
        case 0x153e88u: goto label_153e88;
        case 0x153e8cu: goto label_153e8c;
        case 0x153e90u: goto label_153e90;
        case 0x153e94u: goto label_153e94;
        case 0x153e98u: goto label_153e98;
        case 0x153e9cu: goto label_153e9c;
        case 0x153ea0u: goto label_153ea0;
        case 0x153ea4u: goto label_153ea4;
        case 0x153ea8u: goto label_153ea8;
        case 0x153eacu: goto label_153eac;
        case 0x153eb0u: goto label_153eb0;
        case 0x153eb4u: goto label_153eb4;
        case 0x153eb8u: goto label_153eb8;
        case 0x153ebcu: goto label_153ebc;
        case 0x153ec0u: goto label_153ec0;
        case 0x153ec4u: goto label_153ec4;
        case 0x153ec8u: goto label_153ec8;
        case 0x153eccu: goto label_153ecc;
        case 0x153ed0u: goto label_153ed0;
        case 0x153ed4u: goto label_153ed4;
        case 0x153ed8u: goto label_153ed8;
        case 0x153edcu: goto label_153edc;
        case 0x153ee0u: goto label_153ee0;
        case 0x153ee4u: goto label_153ee4;
        case 0x153ee8u: goto label_153ee8;
        case 0x153eecu: goto label_153eec;
        case 0x153ef0u: goto label_153ef0;
        case 0x153ef4u: goto label_153ef4;
        case 0x153ef8u: goto label_153ef8;
        case 0x153efcu: goto label_153efc;
        case 0x153f00u: goto label_153f00;
        case 0x153f04u: goto label_153f04;
        case 0x153f08u: goto label_153f08;
        case 0x153f0cu: goto label_153f0c;
        case 0x153f10u: goto label_153f10;
        case 0x153f14u: goto label_153f14;
        case 0x153f18u: goto label_153f18;
        case 0x153f1cu: goto label_153f1c;
        case 0x153f20u: goto label_153f20;
        case 0x153f24u: goto label_153f24;
        case 0x153f28u: goto label_153f28;
        case 0x153f2cu: goto label_153f2c;
        case 0x153f30u: goto label_153f30;
        case 0x153f34u: goto label_153f34;
        case 0x153f38u: goto label_153f38;
        case 0x153f3cu: goto label_153f3c;
        case 0x153f40u: goto label_153f40;
        case 0x153f44u: goto label_153f44;
        case 0x153f48u: goto label_153f48;
        case 0x153f4cu: goto label_153f4c;
        case 0x153f50u: goto label_153f50;
        case 0x153f54u: goto label_153f54;
        case 0x153f58u: goto label_153f58;
        case 0x153f5cu: goto label_153f5c;
        case 0x153f60u: goto label_153f60;
        case 0x153f64u: goto label_153f64;
        case 0x153f68u: goto label_153f68;
        case 0x153f6cu: goto label_153f6c;
        case 0x153f70u: goto label_153f70;
        case 0x153f74u: goto label_153f74;
        case 0x153f78u: goto label_153f78;
        case 0x153f7cu: goto label_153f7c;
        case 0x153f80u: goto label_153f80;
        case 0x153f84u: goto label_153f84;
        case 0x153f88u: goto label_153f88;
        case 0x153f8cu: goto label_153f8c;
        case 0x153f90u: goto label_153f90;
        case 0x153f94u: goto label_153f94;
        case 0x153f98u: goto label_153f98;
        case 0x153f9cu: goto label_153f9c;
        case 0x153fa0u: goto label_153fa0;
        case 0x153fa4u: goto label_153fa4;
        case 0x153fa8u: goto label_153fa8;
        case 0x153facu: goto label_153fac;
        case 0x153fb0u: goto label_153fb0;
        case 0x153fb4u: goto label_153fb4;
        case 0x153fb8u: goto label_153fb8;
        case 0x153fbcu: goto label_153fbc;
        case 0x153fc0u: goto label_153fc0;
        case 0x153fc4u: goto label_153fc4;
        case 0x153fc8u: goto label_153fc8;
        case 0x153fccu: goto label_153fcc;
        case 0x153fd0u: goto label_153fd0;
        case 0x153fd4u: goto label_153fd4;
        case 0x153fd8u: goto label_153fd8;
        case 0x153fdcu: goto label_153fdc;
        case 0x153fe0u: goto label_153fe0;
        case 0x153fe4u: goto label_153fe4;
        case 0x153fe8u: goto label_153fe8;
        case 0x153fecu: goto label_153fec;
        case 0x153ff0u: goto label_153ff0;
        case 0x153ff4u: goto label_153ff4;
        case 0x153ff8u: goto label_153ff8;
        case 0x153ffcu: goto label_153ffc;
        case 0x154000u: goto label_154000;
        case 0x154004u: goto label_154004;
        case 0x154008u: goto label_154008;
        case 0x15400cu: goto label_15400c;
        case 0x154010u: goto label_154010;
        case 0x154014u: goto label_154014;
        case 0x154018u: goto label_154018;
        case 0x15401cu: goto label_15401c;
        case 0x154020u: goto label_154020;
        case 0x154024u: goto label_154024;
        case 0x154028u: goto label_154028;
        case 0x15402cu: goto label_15402c;
        case 0x154030u: goto label_154030;
        case 0x154034u: goto label_154034;
        case 0x154038u: goto label_154038;
        case 0x15403cu: goto label_15403c;
        case 0x154040u: goto label_154040;
        case 0x154044u: goto label_154044;
        case 0x154048u: goto label_154048;
        case 0x15404cu: goto label_15404c;
        case 0x154050u: goto label_154050;
        case 0x154054u: goto label_154054;
        case 0x154058u: goto label_154058;
        case 0x15405cu: goto label_15405c;
        case 0x154060u: goto label_154060;
        case 0x154064u: goto label_154064;
        case 0x154068u: goto label_154068;
        case 0x15406cu: goto label_15406c;
        case 0x154070u: goto label_154070;
        case 0x154074u: goto label_154074;
        case 0x154078u: goto label_154078;
        case 0x15407cu: goto label_15407c;
        case 0x154080u: goto label_154080;
        case 0x154084u: goto label_154084;
        case 0x154088u: goto label_154088;
        case 0x15408cu: goto label_15408c;
        case 0x154090u: goto label_154090;
        case 0x154094u: goto label_154094;
        case 0x154098u: goto label_154098;
        case 0x15409cu: goto label_15409c;
        case 0x1540a0u: goto label_1540a0;
        case 0x1540a4u: goto label_1540a4;
        case 0x1540a8u: goto label_1540a8;
        case 0x1540acu: goto label_1540ac;
        case 0x1540b0u: goto label_1540b0;
        case 0x1540b4u: goto label_1540b4;
        case 0x1540b8u: goto label_1540b8;
        case 0x1540bcu: goto label_1540bc;
        case 0x1540c0u: goto label_1540c0;
        case 0x1540c4u: goto label_1540c4;
        case 0x1540c8u: goto label_1540c8;
        case 0x1540ccu: goto label_1540cc;
        case 0x1540d0u: goto label_1540d0;
        case 0x1540d4u: goto label_1540d4;
        case 0x1540d8u: goto label_1540d8;
        case 0x1540dcu: goto label_1540dc;
        case 0x1540e0u: goto label_1540e0;
        case 0x1540e4u: goto label_1540e4;
        case 0x1540e8u: goto label_1540e8;
        case 0x1540ecu: goto label_1540ec;
        case 0x1540f0u: goto label_1540f0;
        case 0x1540f4u: goto label_1540f4;
        case 0x1540f8u: goto label_1540f8;
        case 0x1540fcu: goto label_1540fc;
        case 0x154100u: goto label_154100;
        case 0x154104u: goto label_154104;
        case 0x154108u: goto label_154108;
        case 0x15410cu: goto label_15410c;
        case 0x154110u: goto label_154110;
        case 0x154114u: goto label_154114;
        case 0x154118u: goto label_154118;
        case 0x15411cu: goto label_15411c;
        case 0x154120u: goto label_154120;
        case 0x154124u: goto label_154124;
        case 0x154128u: goto label_154128;
        case 0x15412cu: goto label_15412c;
        case 0x154130u: goto label_154130;
        case 0x154134u: goto label_154134;
        case 0x154138u: goto label_154138;
        case 0x15413cu: goto label_15413c;
        case 0x154140u: goto label_154140;
        case 0x154144u: goto label_154144;
        case 0x154148u: goto label_154148;
        case 0x15414cu: goto label_15414c;
        case 0x154150u: goto label_154150;
        case 0x154154u: goto label_154154;
        case 0x154158u: goto label_154158;
        case 0x15415cu: goto label_15415c;
        case 0x154160u: goto label_154160;
        case 0x154164u: goto label_154164;
        case 0x154168u: goto label_154168;
        case 0x15416cu: goto label_15416c;
        case 0x154170u: goto label_154170;
        case 0x154174u: goto label_154174;
        case 0x154178u: goto label_154178;
        case 0x15417cu: goto label_15417c;
        case 0x154180u: goto label_154180;
        case 0x154184u: goto label_154184;
        case 0x154188u: goto label_154188;
        case 0x15418cu: goto label_15418c;
        case 0x154190u: goto label_154190;
        case 0x154194u: goto label_154194;
        case 0x154198u: goto label_154198;
        case 0x15419cu: goto label_15419c;
        case 0x1541a0u: goto label_1541a0;
        case 0x1541a4u: goto label_1541a4;
        case 0x1541a8u: goto label_1541a8;
        case 0x1541acu: goto label_1541ac;
        case 0x1541b0u: goto label_1541b0;
        case 0x1541b4u: goto label_1541b4;
        case 0x1541b8u: goto label_1541b8;
        case 0x1541bcu: goto label_1541bc;
        case 0x1541c0u: goto label_1541c0;
        case 0x1541c4u: goto label_1541c4;
        case 0x1541c8u: goto label_1541c8;
        case 0x1541ccu: goto label_1541cc;
        case 0x1541d0u: goto label_1541d0;
        case 0x1541d4u: goto label_1541d4;
        case 0x1541d8u: goto label_1541d8;
        case 0x1541dcu: goto label_1541dc;
        case 0x1541e0u: goto label_1541e0;
        case 0x1541e4u: goto label_1541e4;
        case 0x1541e8u: goto label_1541e8;
        case 0x1541ecu: goto label_1541ec;
        case 0x1541f0u: goto label_1541f0;
        case 0x1541f4u: goto label_1541f4;
        case 0x1541f8u: goto label_1541f8;
        case 0x1541fcu: goto label_1541fc;
        case 0x154200u: goto label_154200;
        case 0x154204u: goto label_154204;
        case 0x154208u: goto label_154208;
        case 0x15420cu: goto label_15420c;
        case 0x154210u: goto label_154210;
        case 0x154214u: goto label_154214;
        case 0x154218u: goto label_154218;
        case 0x15421cu: goto label_15421c;
        case 0x154220u: goto label_154220;
        case 0x154224u: goto label_154224;
        case 0x154228u: goto label_154228;
        case 0x15422cu: goto label_15422c;
        case 0x154230u: goto label_154230;
        case 0x154234u: goto label_154234;
        case 0x154238u: goto label_154238;
        case 0x15423cu: goto label_15423c;
        case 0x154240u: goto label_154240;
        case 0x154244u: goto label_154244;
        case 0x154248u: goto label_154248;
        case 0x15424cu: goto label_15424c;
        case 0x154250u: goto label_154250;
        case 0x154254u: goto label_154254;
        case 0x154258u: goto label_154258;
        case 0x15425cu: goto label_15425c;
        case 0x154260u: goto label_154260;
        case 0x154264u: goto label_154264;
        case 0x154268u: goto label_154268;
        default: break;
    }

    ctx->pc = 0x1538e8u;

label_1538e8:
    // 0x1538e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1538e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1538ec:
    // 0x1538ec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1538ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1538f0:
    // 0x1538f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1538f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1538f4:
    // 0x1538f4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1538f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1538f8:
    // 0x1538f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1538f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1538fc:
    // 0x1538fc: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x1538fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_153900:
    // 0x153900: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x153900u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_153904:
    // 0x153904: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x153904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_153908:
    // 0x153908: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x153908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_15390c:
    // 0x15390c: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x15390cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
label_153910:
    // 0x153910: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_153914:
    if (ctx->pc == 0x153914u) {
        ctx->pc = 0x153914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153910u;
        // 0x153914: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153918u;
        goto label_153918;
    }
    ctx->pc = 0x153910u;
    {
        const bool branch_taken_0x153910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153910) {
            ctx->pc = 0x153914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153910u;
            // 0x153914: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15395Cu;
            goto label_15395c;
        }
    }
    ctx->pc = 0x153918u;
label_153918:
    // 0x153918: 0xc0532f2  jal         func_14CBC8
label_15391c:
    if (ctx->pc == 0x15391Cu) {
        ctx->pc = 0x15391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153918u;
        // 0x15391c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153920u;
        goto label_153920;
    }
    ctx->pc = 0x153918u;
    SET_GPR_U32(ctx, 31, 0x153920u);
    ctx->pc = 0x15391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153918u;
    // 0x15391c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153918u, 0x153920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153920u;
label_153920:
    // 0x153920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153924:
    // 0x153924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_153928:
    // 0x153928: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_15392c:
    if (ctx->pc == 0x15392Cu) {
        ctx->pc = 0x15392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153928u;
        // 0x15392c: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153930u;
        goto label_153930;
    }
    ctx->pc = 0x153928u;
    {
        const bool branch_taken_0x153928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153928) {
            ctx->pc = 0x15392Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153928u;
            // 0x15392c: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15395Cu;
            goto label_15395c;
        }
    }
    ctx->pc = 0x153930u;
label_153930:
    // 0x153930: 0xc06a202  jal         func_1A8808
label_153934:
    if (ctx->pc == 0x153934u) {
        ctx->pc = 0x153934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153930u;
        // 0x153934: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153938u;
        goto label_153938;
    }
    ctx->pc = 0x153930u;
    SET_GPR_U32(ctx, 31, 0x153938u);
    ctx->pc = 0x153934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153930u;
    // 0x153934: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x153930u, 0x153938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153938u;
label_153938:
    // 0x153938: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x153938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_15393c:
    // 0x15393c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x15393cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_153940:
    // 0x153940: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x153940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_153944:
    // 0x153944: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153944u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_153948:
    // 0x153948: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153948u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15394c:
    // 0x15394c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15394cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_153950:
    // 0x153950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153954:
    // 0x153954: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x153954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_153958:
    // 0x153958: 0x8e220170  lw          $v0, 0x170($s1)
    ctx->pc = 0x153958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_15395c:
    // 0x15395c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x15395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_153960:
    // 0x153960: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x153960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_153964:
    // 0x153964: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x153964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_153968:
    // 0x153968: 0x1460023a  bnez        $v1, . + 4 + (0x23A << 2)
label_15396c:
    if (ctx->pc == 0x15396Cu) {
        ctx->pc = 0x15396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153968u;
        // 0x15396c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153970u;
        goto label_153970;
    }
    ctx->pc = 0x153968u;
    {
        const bool branch_taken_0x153968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153968u;
        // 0x15396c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153968) {
            ctx->pc = 0x154254u;
            goto label_154254;
        }
    }
    ctx->pc = 0x153970u;
label_153970:
    // 0x153970: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x153970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_153974:
    // 0x153974: 0x50400238  beql        $v0, $zero, . + 4 + (0x238 << 2)
label_153978:
    if (ctx->pc == 0x153978u) {
        ctx->pc = 0x153978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153974u;
        // 0x153978: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15397Cu;
        goto label_15397c;
    }
    ctx->pc = 0x153974u;
    {
        const bool branch_taken_0x153974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153974) {
            ctx->pc = 0x153978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153974u;
            // 0x153978: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154258u;
            goto label_154258;
        }
    }
    ctx->pc = 0x15397Cu;
label_15397c:
    // 0x15397c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x15397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_153980:
    // 0x153980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153984:
    // 0x153984: 0x50600234  beql        $v1, $zero, . + 4 + (0x234 << 2)
label_153988:
    if (ctx->pc == 0x153988u) {
        ctx->pc = 0x153988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153984u;
        // 0x153988: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15398Cu;
        goto label_15398c;
    }
    ctx->pc = 0x153984u;
    {
        const bool branch_taken_0x153984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153984) {
            ctx->pc = 0x153988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153984u;
            // 0x153988: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154258u;
            goto label_154258;
        }
    }
    ctx->pc = 0x15398Cu;
label_15398c:
    // 0x15398c: 0x8e220680  lw          $v0, 0x680($s1)
    ctx->pc = 0x15398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
label_153990:
    // 0x153990: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_153994:
    if (ctx->pc == 0x153994u) {
        ctx->pc = 0x153994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153990u;
        // 0x153994: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153998u;
        goto label_153998;
    }
    ctx->pc = 0x153990u;
    {
        const bool branch_taken_0x153990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153990u;
        // 0x153994: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153990) {
            ctx->pc = 0x1539DCu;
            goto label_1539dc;
        }
    }
    ctx->pc = 0x153998u;
label_153998:
    // 0x153998: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_15399c:
    if (ctx->pc == 0x15399Cu) {
        ctx->pc = 0x15399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153998u;
        // 0x15399c: 0xae220680  sw          $v0, 0x680($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1539A0u;
        goto label_1539a0;
    }
    ctx->pc = 0x153998u;
    {
        const bool branch_taken_0x153998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153998u;
        // 0x15399c: 0xae220680  sw          $v0, 0x680($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153998) {
            ctx->pc = 0x1539DCu;
            goto label_1539dc;
        }
    }
    ctx->pc = 0x1539A0u;
label_1539a0:
    // 0x1539a0: 0x26240260  addiu       $a0, $s1, 0x260
    ctx->pc = 0x1539a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_1539a4:
    // 0x1539a4: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1539a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
label_1539a8:
    // 0x1539a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1539a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1539ac:
    // 0x1539ac: 0x344277ff  ori         $v0, $v0, 0x77FF
    ctx->pc = 0x1539acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30719);
label_1539b0:
    // 0x1539b0: 0x262503b0  addiu       $a1, $s1, 0x3B0
    ctx->pc = 0x1539b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
label_1539b4:
    // 0x1539b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1539b8:
    // 0x1539b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1539b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1539bc:
    // 0x1539bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1539bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1539c0:
    // 0x1539c0: 0x2406dfff  addiu       $a2, $zero, -0x2001
    ctx->pc = 0x1539c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_1539c4:
    // 0x1539c4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1539c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1539c8:
    // 0x1539c8: 0xaca002d0  sw          $zero, 0x2D0($a1)
    ctx->pc = 0x1539c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 720), GPR_U32(ctx, 0));
label_1539cc:
    // 0x1539cc: 0xe4a002d4  swc1        $f0, 0x2D4($a1)
    ctx->pc = 0x1539ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 724), bits); }
label_1539d0:
    // 0x1539d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1539d4:
    // 0x1539d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1539d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1539d8:
    // 0x1539d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1539d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1539dc:
    // 0x1539dc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1539dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1539e0:
    // 0x1539e0: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x1539e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_1539e4:
    // 0x1539e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1539e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1539e8:
    // 0x1539e8: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_1539ec:
    if (ctx->pc == 0x1539ECu) {
        ctx->pc = 0x1539ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539E8u;
        // 0x1539ec: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1539F0u;
        goto label_1539f0;
    }
    ctx->pc = 0x1539E8u;
    {
        const bool branch_taken_0x1539e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1539e8) {
            ctx->pc = 0x1539ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1539E8u;
            // 0x1539ec: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153A64u;
            goto label_153a64;
        }
    }
    ctx->pc = 0x1539F0u;
label_1539f0:
    // 0x1539f0: 0x8e220688  lw          $v0, 0x688($s1)
    ctx->pc = 0x1539f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
label_1539f4:
    // 0x1539f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1539f8:
    if (ctx->pc == 0x1539F8u) {
        ctx->pc = 0x1539F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539F4u;
        // 0x1539f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1539FCu;
        goto label_1539fc;
    }
    ctx->pc = 0x1539F4u;
    {
        const bool branch_taken_0x1539f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1539F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539F4u;
        // 0x1539f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539f4) {
            ctx->pc = 0x153A00u;
            goto label_153a00;
        }
    }
    ctx->pc = 0x1539FCu;
label_1539fc:
    // 0x1539fc: 0xae220688  sw          $v0, 0x688($s1)
    ctx->pc = 0x1539fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 2));
label_153a00:
    // 0x153a00: 0x8e22068c  lw          $v0, 0x68C($s1)
    ctx->pc = 0x153a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_153a04:
    // 0x153a04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_153a08:
    if (ctx->pc == 0x153A08u) {
        ctx->pc = 0x153A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A04u;
        // 0x153a08: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A0Cu;
        goto label_153a0c;
    }
    ctx->pc = 0x153A04u;
    {
        const bool branch_taken_0x153a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A04u;
        // 0x153a08: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a04) {
            ctx->pc = 0x153A10u;
            goto label_153a10;
        }
    }
    ctx->pc = 0x153A0Cu;
label_153a0c:
    // 0x153a0c: 0xae22068c  sw          $v0, 0x68C($s1)
    ctx->pc = 0x153a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 2));
label_153a10:
    // 0x153a10: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_153a14:
    // 0x153a14: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x153a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_153a18:
    // 0x153a18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x153a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_153a1c:
    // 0x153a1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_153a20:
    if (ctx->pc == 0x153A20u) {
        ctx->pc = 0x153A24u;
        goto label_153a24;
    }
    ctx->pc = 0x153A1Cu;
    {
        const bool branch_taken_0x153a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153a1c) {
            ctx->pc = 0x153A2Cu;
            goto label_153a2c;
        }
    }
    ctx->pc = 0x153A24u;
label_153a24:
    // 0x153a24: 0xc054368  jal         func_150DA0
label_153a28:
    if (ctx->pc == 0x153A28u) {
        ctx->pc = 0x153A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A24u;
        // 0x153a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A2Cu;
        goto label_153a2c;
    }
    ctx->pc = 0x153A24u;
    SET_GPR_U32(ctx, 31, 0x153A2Cu);
    ctx->pc = 0x153A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A24u;
    // 0x153a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150DA0u, 0x153A24u, 0x153A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A2Cu;
label_153a2c:
    // 0x153a2c: 0xc054628  jal         func_1518A0
label_153a30:
    if (ctx->pc == 0x153A30u) {
        ctx->pc = 0x153A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A2Cu;
        // 0x153a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A34u;
        goto label_153a34;
    }
    ctx->pc = 0x153A2Cu;
    SET_GPR_U32(ctx, 31, 0x153A34u);
    ctx->pc = 0x153A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A2Cu;
    // 0x153a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x153A2Cu, 0x153A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A34u;
label_153a34:
    // 0x153a34: 0xc053c08  jal         func_14F020
label_153a38:
    if (ctx->pc == 0x153A38u) {
        ctx->pc = 0x153A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A34u;
        // 0x153a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A3Cu;
        goto label_153a3c;
    }
    ctx->pc = 0x153A34u;
    SET_GPR_U32(ctx, 31, 0x153A3Cu);
    ctx->pc = 0x153A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A34u;
    // 0x153a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F020u, 0x153A34u, 0x153A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A3Cu;
label_153a3c:
    // 0x153a3c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x153a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_153a40:
    // 0x153a40: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x153a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_153a44:
    // 0x153a44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x153a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_153a48:
    // 0x153a48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_153a4c:
    if (ctx->pc == 0x153A4Cu) {
        ctx->pc = 0x153A50u;
        goto label_153a50;
    }
    ctx->pc = 0x153A48u;
    {
        const bool branch_taken_0x153a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153a48) {
            ctx->pc = 0x153A58u;
            goto label_153a58;
        }
    }
    ctx->pc = 0x153A50u;
label_153a50:
    // 0x153a50: 0xc0540a4  jal         func_150290
label_153a54:
    if (ctx->pc == 0x153A54u) {
        ctx->pc = 0x153A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A50u;
        // 0x153a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A58u;
        goto label_153a58;
    }
    ctx->pc = 0x153A50u;
    SET_GPR_U32(ctx, 31, 0x153A58u);
    ctx->pc = 0x153A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A50u;
    // 0x153a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150290u, 0x153A50u, 0x153A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A58u;
label_153a58:
    // 0x153a58: 0xc054962  jal         func_152588
label_153a5c:
    if (ctx->pc == 0x153A5Cu) {
        ctx->pc = 0x153A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A58u;
        // 0x153a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A60u;
        goto label_153a60;
    }
    ctx->pc = 0x153A58u;
    SET_GPR_U32(ctx, 31, 0x153A60u);
    ctx->pc = 0x153A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A58u;
    // 0x153a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152588u, 0x153A58u, 0x153A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A60u;
label_153a60:
    // 0x153a60: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x153a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_153a64:
    // 0x153a64: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x153a64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_153a68:
    // 0x153a68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_153a6c:
    // 0x153a6c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_153a70:
    if (ctx->pc == 0x153A70u) {
        ctx->pc = 0x153A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A6Cu;
        // 0x153a70: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A74u;
        goto label_153a74;
    }
    ctx->pc = 0x153A6Cu;
    {
        const bool branch_taken_0x153a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A6Cu;
        // 0x153a70: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a6c) {
            ctx->pc = 0x153AD8u;
            goto label_153ad8;
        }
    }
    ctx->pc = 0x153A74u;
label_153a74:
    // 0x153a74: 0x8e220680  lw          $v0, 0x680($s1)
    ctx->pc = 0x153a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
label_153a78:
    // 0x153a78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x153a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_153a7c:
    // 0x153a7c: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
label_153a80:
    if (ctx->pc == 0x153A80u) {
        ctx->pc = 0x153A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A7Cu;
        // 0x153a80: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A84u;
        goto label_153a84;
    }
    ctx->pc = 0x153A7Cu;
    {
        const bool branch_taken_0x153a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x153a7c) {
            ctx->pc = 0x153A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153A7Cu;
            // 0x153a80: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153ADCu;
            goto label_153adc;
        }
    }
    ctx->pc = 0x153A84u;
label_153a84:
    // 0x153a84: 0xc066fb4  jal         func_19BED0
label_153a88:
    if (ctx->pc == 0x153A88u) {
        ctx->pc = 0x153A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A84u;
        // 0x153a88: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A8Cu;
        goto label_153a8c;
    }
    ctx->pc = 0x153A84u;
    SET_GPR_U32(ctx, 31, 0x153A8Cu);
    ctx->pc = 0x153A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A84u;
    // 0x153a88: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x153A84u, 0x153A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A8Cu;
label_153a8c:
    // 0x153a8c: 0xc78182cc  lwc1        $f1, -0x7D34($gp)
    ctx->pc = 0x153a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153a90:
    // 0x153a90: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x153a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_153a94:
    // 0x153a94: 0xc066fb4  jal         func_19BED0
label_153a98:
    if (ctx->pc == 0x153A98u) {
        ctx->pc = 0x153A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A94u;
        // 0x153a98: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A9Cu;
        goto label_153a9c;
    }
    ctx->pc = 0x153A94u;
    SET_GPR_U32(ctx, 31, 0x153A9Cu);
    ctx->pc = 0x153A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A94u;
    // 0x153a98: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x153A94u, 0x153A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A9Cu;
label_153a9c:
    // 0x153a9c: 0xc78182d0  lwc1        $f1, -0x7D30($gp)
    ctx->pc = 0x153a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153aa0:
    // 0x153aa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x153aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_153aa4:
    // 0x153aa4: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x153aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_153aa8:
    // 0x153aa8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x153aa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_153aac:
    // 0x153aac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x153aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_153ab0:
    // 0x153ab0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x153ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_153ab4:
    // 0x153ab4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x153ab4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_153ab8:
    // 0x153ab8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x153ab8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_153abc:
    // 0x153abc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x153abcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_153ac0:
    // 0x153ac0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x153ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_153ac4:
    // 0x153ac4: 0x26260830  addiu       $a2, $s1, 0x830
    ctx->pc = 0x153ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
label_153ac8:
    // 0x153ac8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x153ac8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_153acc:
    // 0x153acc: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x153accu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_153ad0:
    // 0x153ad0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x153ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_153ad4:
    // 0x153ad4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x153ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_153ad8:
    // 0x153ad8: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x153ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_153adc:
    // 0x153adc: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x153adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_153ae0:
    // 0x153ae0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_153ae4:
    if (ctx->pc == 0x153AE4u) {
        ctx->pc = 0x153AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AE0u;
        // 0x153ae4: 0x8e2406d8  lw          $a0, 0x6D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153AE8u;
        goto label_153ae8;
    }
    ctx->pc = 0x153AE0u;
    {
        const bool branch_taken_0x153ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ae0) {
            ctx->pc = 0x153AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153AE0u;
            // 0x153ae4: 0x8e2406d8  lw          $a0, 0x6D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153B10u;
            goto label_153b10;
        }
    }
    ctx->pc = 0x153AE8u;
label_153ae8:
    // 0x153ae8: 0xc62103cc  lwc1        $f1, 0x3CC($s1)
    ctx->pc = 0x153ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153aec:
    // 0x153aec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x153aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_153af0:
    // 0x153af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153af4:
    // 0x153af4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_153af8:
    // 0x153af8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_153afc:
    if (ctx->pc == 0x153AFCu) {
        ctx->pc = 0x153AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AF8u;
        // 0x153afc: 0x8e2406d8  lw          $a0, 0x6D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B00u;
        goto label_153b00;
    }
    ctx->pc = 0x153AF8u;
    {
        const bool branch_taken_0x153af8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153af8) {
            ctx->pc = 0x153AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153AF8u;
            // 0x153afc: 0x8e2406d8  lw          $a0, 0x6D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153B10u;
            goto label_153b10;
        }
    }
    ctx->pc = 0x153B00u;
label_153b00:
    // 0x153b00: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_153b04:
    // 0x153b04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x153b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_153b08:
    // 0x153b08: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x153b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
label_153b0c:
    // 0x153b0c: 0x8e2406d8  lw          $a0, 0x6D8($s1)
    ctx->pc = 0x153b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
label_153b10:
    // 0x153b10: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
label_153b14:
    if (ctx->pc == 0x153B14u) {
        ctx->pc = 0x153B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B10u;
        // 0x153b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B18u;
        goto label_153b18;
    }
    ctx->pc = 0x153B10u;
    {
        const bool branch_taken_0x153b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b10) {
            ctx->pc = 0x153B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153B10u;
            // 0x153b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153BA4u;
            goto label_153ba4;
        }
    }
    ctx->pc = 0x153B18u;
label_153b18:
    // 0x153b18: 0x8e2303b0  lw          $v1, 0x3B0($s1)
    ctx->pc = 0x153b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
label_153b1c:
    // 0x153b1c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x153b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_153b20:
    // 0x153b20: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_153b24:
    if (ctx->pc == 0x153B24u) {
        ctx->pc = 0x153B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B20u;
        // 0x153b24: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B28u;
        goto label_153b28;
    }
    ctx->pc = 0x153B20u;
    {
        const bool branch_taken_0x153b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b20) {
            ctx->pc = 0x153B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153B20u;
            // 0x153b24: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153B48u;
            goto label_153b48;
        }
    }
    ctx->pc = 0x153B28u;
label_153b28:
    // 0x153b28: 0xc62c03c0  lwc1        $f12, 0x3C0($s1)
    ctx->pc = 0x153b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_153b2c:
    // 0x153b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153b30:
    // 0x153b30: 0xc62d03bc  lwc1        $f13, 0x3BC($s1)
    ctx->pc = 0x153b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_153b34:
    // 0x153b34: 0xc04c288  jal         func_130A20
label_153b38:
    if (ctx->pc == 0x153B38u) {
        ctx->pc = 0x153B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B34u;
        // 0x153b38: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B3Cu;
        goto label_153b3c;
    }
    ctx->pc = 0x153B34u;
    SET_GPR_U32(ctx, 31, 0x153B3Cu);
    ctx->pc = 0x153B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B34u;
    // 0x153b38: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x153B34u, 0x153B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B3Cu;
label_153b3c:
    // 0x153b3c: 0x10000019  b           . + 4 + (0x19 << 2)
label_153b40:
    if (ctx->pc == 0x153B40u) {
        ctx->pc = 0x153B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B3Cu;
        // 0x153b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B44u;
        goto label_153b44;
    }
    ctx->pc = 0x153B3Cu;
    {
        const bool branch_taken_0x153b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B3Cu;
        // 0x153b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b3c) {
            ctx->pc = 0x153BA4u;
            goto label_153ba4;
        }
    }
    ctx->pc = 0x153B44u;
label_153b44:
    // 0x153b44: 0x0  nop
    ctx->pc = 0x153b44u;
    // NOP
label_153b48:
    // 0x153b48: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_153b4c:
    if (ctx->pc == 0x153B4Cu) {
        ctx->pc = 0x153B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B48u;
        // 0x153b4c: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B50u;
        goto label_153b50;
    }
    ctx->pc = 0x153B48u;
    {
        const bool branch_taken_0x153b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b48) {
            ctx->pc = 0x153B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153B48u;
            // 0x153b4c: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153B70u;
            goto label_153b70;
        }
    }
    ctx->pc = 0x153B50u;
label_153b50:
    // 0x153b50: 0xc62c03c0  lwc1        $f12, 0x3C0($s1)
    ctx->pc = 0x153b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_153b54:
    // 0x153b54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153b58:
    // 0x153b58: 0xc62d03bc  lwc1        $f13, 0x3BC($s1)
    ctx->pc = 0x153b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_153b5c:
    // 0x153b5c: 0xc04c288  jal         func_130A20
label_153b60:
    if (ctx->pc == 0x153B60u) {
        ctx->pc = 0x153B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B5Cu;
        // 0x153b60: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B64u;
        goto label_153b64;
    }
    ctx->pc = 0x153B5Cu;
    SET_GPR_U32(ctx, 31, 0x153B64u);
    ctx->pc = 0x153B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B5Cu;
    // 0x153b60: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x153B5Cu, 0x153B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B64u;
label_153b64:
    // 0x153b64: 0x1000000f  b           . + 4 + (0xF << 2)
label_153b68:
    if (ctx->pc == 0x153B68u) {
        ctx->pc = 0x153B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B64u;
        // 0x153b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B6Cu;
        goto label_153b6c;
    }
    ctx->pc = 0x153B64u;
    {
        const bool branch_taken_0x153b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B64u;
        // 0x153b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b64) {
            ctx->pc = 0x153BA4u;
            goto label_153ba4;
        }
    }
    ctx->pc = 0x153B6Cu;
label_153b6c:
    // 0x153b6c: 0x0  nop
    ctx->pc = 0x153b6cu;
    // NOP
label_153b70:
    // 0x153b70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_153b74:
    if (ctx->pc == 0x153B74u) {
        ctx->pc = 0x153B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B70u;
        // 0x153b74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B78u;
        goto label_153b78;
    }
    ctx->pc = 0x153B70u;
    {
        const bool branch_taken_0x153b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B70u;
        // 0x153b74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b70) {
            ctx->pc = 0x153B90u;
            goto label_153b90;
        }
    }
    ctx->pc = 0x153B78u;
label_153b78:
    // 0x153b78: 0x92260575  lbu         $a2, 0x575($s1)
    ctx->pc = 0x153b78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1397)));
label_153b7c:
    // 0x153b7c: 0xc62c03c0  lwc1        $f12, 0x3C0($s1)
    ctx->pc = 0x153b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_153b80:
    // 0x153b80: 0xc04c288  jal         func_130A20
label_153b84:
    if (ctx->pc == 0x153B84u) {
        ctx->pc = 0x153B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B80u;
        // 0x153b84: 0xc62d03bc  lwc1        $f13, 0x3BC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B88u;
        goto label_153b88;
    }
    ctx->pc = 0x153B80u;
    SET_GPR_U32(ctx, 31, 0x153B88u);
    ctx->pc = 0x153B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B80u;
    // 0x153b84: 0xc62d03bc  lwc1        $f13, 0x3BC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x153B80u, 0x153B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B88u;
label_153b88:
    // 0x153b88: 0x10000006  b           . + 4 + (0x6 << 2)
label_153b8c:
    if (ctx->pc == 0x153B8Cu) {
        ctx->pc = 0x153B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B88u;
        // 0x153b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B90u;
        goto label_153b90;
    }
    ctx->pc = 0x153B88u;
    {
        const bool branch_taken_0x153b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B88u;
        // 0x153b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b88) {
            ctx->pc = 0x153BA4u;
            goto label_153ba4;
        }
    }
    ctx->pc = 0x153B90u;
label_153b90:
    // 0x153b90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x153b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_153b94:
    // 0x153b94: 0x92260575  lbu         $a2, 0x575($s1)
    ctx->pc = 0x153b94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1397)));
label_153b98:
    // 0x153b98: 0xc04c288  jal         func_130A20
label_153b9c:
    if (ctx->pc == 0x153B9Cu) {
        ctx->pc = 0x153B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B98u;
        // 0x153b9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x153BA0u;
        goto label_153ba0;
    }
    ctx->pc = 0x153B98u;
    SET_GPR_U32(ctx, 31, 0x153BA0u);
    ctx->pc = 0x153B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B98u;
    // 0x153b9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A20u, 0x153B98u, 0x153BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153BA0u;
label_153ba0:
    // 0x153ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153ba4:
    // 0x153ba4: 0xc0532f2  jal         func_14CBC8
label_153ba8:
    if (ctx->pc == 0x153BA8u) {
        ctx->pc = 0x153BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BA4u;
        // 0x153ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153BACu;
        goto label_153bac;
    }
    ctx->pc = 0x153BA4u;
    SET_GPR_U32(ctx, 31, 0x153BACu);
    ctx->pc = 0x153BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153BA4u;
    // 0x153ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153BA4u, 0x153BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153BACu;
label_153bac:
    // 0x153bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x153bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153bb0:
    // 0x153bb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x153bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_153bb4:
    // 0x153bb4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x153bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_153bb8:
    // 0x153bb8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_153bbc:
    if (ctx->pc == 0x153BBCu) {
        ctx->pc = 0x153BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB8u;
        // 0x153bbc: 0xc62203c4  lwc1        $f2, 0x3C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x153BC0u;
        goto label_153bc0;
    }
    ctx->pc = 0x153BB8u;
    {
        const bool branch_taken_0x153bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB8u;
        // 0x153bbc: 0xc62203c4  lwc1        $f2, 0x3C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb8) {
            ctx->pc = 0x153BD0u;
            goto label_153bd0;
        }
    }
    ctx->pc = 0x153BC0u;
label_153bc0:
    // 0x153bc0: 0x3c013ec0  lui         $at, 0x3EC0
    ctx->pc = 0x153bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16064 << 16));
label_153bc4:
    // 0x153bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153bc8:
    // 0x153bc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_153bcc:
    if (ctx->pc == 0x153BCCu) {
        ctx->pc = 0x153BD0u;
        goto label_153bd0;
    }
    ctx->pc = 0x153BC8u;
    {
        const bool branch_taken_0x153bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153bc8) {
            ctx->pc = 0x153BD8u;
            goto label_153bd8;
        }
    }
    ctx->pc = 0x153BD0u;
label_153bd0:
    // 0x153bd0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x153bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_153bd4:
    // 0x153bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153bd8:
    // 0x153bd8: 0xc78182d4  lwc1        $f1, -0x7D2C($gp)
    ctx->pc = 0x153bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153bdc:
    // 0x153bdc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x153bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_153be0:
    // 0x153be0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_153be4:
    // 0x153be4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x153be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_153be8:
    // 0x153be8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x153be8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_153bec:
    // 0x153bec: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x153becu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_153bf0:
    // 0x153bf0: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x153bf0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
label_153bf4:
    // 0x153bf4: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x153bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_153bf8:
    // 0x153bf8: 0xc056854  jal         func_15A150
label_153bfc:
    if (ctx->pc == 0x153BFCu) {
        ctx->pc = 0x153C00u;
        goto label_153c00;
    }
    ctx->pc = 0x153BF8u;
    SET_GPR_U32(ctx, 31, 0x153C00u);
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x153BF8u, 0x153C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C00u;
label_153c00:
    // 0x153c00: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x153c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
label_153c04:
    // 0x153c04: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_153c08:
    if (ctx->pc == 0x153C08u) {
        ctx->pc = 0x153C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C04u;
        // 0x153c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153C0Cu;
        goto label_153c0c;
    }
    ctx->pc = 0x153C04u;
    {
        const bool branch_taken_0x153c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C04u;
        // 0x153c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c04) {
            ctx->pc = 0x153CE0u;
            goto label_153ce0;
        }
    }
    ctx->pc = 0x153C0Cu;
label_153c0c:
    // 0x153c0c: 0xc0532f2  jal         func_14CBC8
label_153c10:
    if (ctx->pc == 0x153C10u) {
        ctx->pc = 0x153C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C0Cu;
        // 0x153c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153C14u;
        goto label_153c14;
    }
    ctx->pc = 0x153C0Cu;
    SET_GPR_U32(ctx, 31, 0x153C14u);
    ctx->pc = 0x153C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C0Cu;
    // 0x153c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153C0Cu, 0x153C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C14u;
label_153c14:
    // 0x153c14: 0xc62003bc  lwc1        $f0, 0x3BC($s1)
    ctx->pc = 0x153c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153c18:
    // 0x153c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153c1c:
    // 0x153c1c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x153c1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_153c20:
    // 0x153c20: 0xc62103c0  lwc1        $f1, 0x3C0($s1)
    ctx->pc = 0x153c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153c24:
    // 0x153c24: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x153c24u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_153c28:
    // 0x153c28: 0x460100e8  max.s       $f3, $f0, $f1
    ctx->pc = 0x153c28u;
    ctx->f[3] = std::max(ctx->f[0], ctx->f[1]);
label_153c2c:
    // 0x153c2c: 0x8e2203b0  lw          $v0, 0x3B0($s1)
    ctx->pc = 0x153c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
label_153c30:
    // 0x153c30: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x153c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_153c34:
    // 0x153c34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_153c38:
    if (ctx->pc == 0x153C38u) {
        ctx->pc = 0x153C3Cu;
        goto label_153c3c;
    }
    ctx->pc = 0x153C34u;
    {
        const bool branch_taken_0x153c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153c34) {
            ctx->pc = 0x153C40u;
            goto label_153c40;
        }
    }
    ctx->pc = 0x153C3Cu;
label_153c3c:
    // 0x153c3c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x153c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_153c40:
    // 0x153c40: 0xc78282d8  lwc1        $f2, -0x7D28($gp)
    ctx->pc = 0x153c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_153c44:
    // 0x153c44: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x153c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_153c48:
    // 0x153c48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_153c4c:
    if (ctx->pc == 0x153C4Cu) {
        ctx->pc = 0x153C50u;
        goto label_153c50;
    }
    ctx->pc = 0x153C48u;
    {
        const bool branch_taken_0x153c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153c48) {
            ctx->pc = 0x153C60u;
            goto label_153c60;
        }
    }
    ctx->pc = 0x153C50u;
label_153c50:
    // 0x153c50: 0xc056832  jal         func_15A0C8
label_153c54:
    if (ctx->pc == 0x153C54u) {
        ctx->pc = 0x153C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C50u;
        // 0x153c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153C58u;
        goto label_153c58;
    }
    ctx->pc = 0x153C50u;
    SET_GPR_U32(ctx, 31, 0x153C58u);
    ctx->pc = 0x153C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C50u;
    // 0x153c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x153C50u, 0x153C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C58u;
label_153c58:
    // 0x153c58: 0x10000021  b           . + 4 + (0x21 << 2)
label_153c5c:
    if (ctx->pc == 0x153C5Cu) {
        ctx->pc = 0x153C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C58u;
        // 0x153c5c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153C60u;
        goto label_153c60;
    }
    ctx->pc = 0x153C58u;
    {
        const bool branch_taken_0x153c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C58u;
        // 0x153c5c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c58) {
            ctx->pc = 0x153CE0u;
            goto label_153ce0;
        }
    }
    ctx->pc = 0x153C60u;
label_153c60:
    // 0x153c60: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x153c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_153c64:
    // 0x153c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153c68:
    // 0x153c68: 0xc78182dc  lwc1        $f1, -0x7D24($gp)
    ctx->pc = 0x153c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153c6c:
    // 0x153c6c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x153c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_153c70:
    // 0x153c70: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x153c70u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_153c74:
    // 0x153c74: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x153c74u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_153c78:
    // 0x153c78: 0x8e230848  lw          $v1, 0x848($s1)
    ctx->pc = 0x153c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
label_153c7c:
    // 0x153c7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x153c7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_153c80:
    // 0x153c80: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x153c80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_153c84:
    // 0x153c84: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x153c84u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_153c88:
    // 0x153c88: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x153c88u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
label_153c8c:
    // 0x153c8c: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x153c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_153c90:
    // 0x153c90: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x153c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_153c94:
    // 0x153c94: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x153c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_153c98:
    // 0x153c98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x153c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_153c9c:
    // 0x153c9c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x153c9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_153ca0:
    // 0x153ca0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153ca0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_153ca4:
    // 0x153ca4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153ca4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_153ca8:
    // 0x153ca8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x153ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_153cac:
    // 0x153cac: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x153cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_153cb0:
    // 0x153cb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153cb4:
    // 0x153cb4: 0xc78182e0  lwc1        $f1, -0x7D20($gp)
    ctx->pc = 0x153cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153cb8:
    // 0x153cb8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x153cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_153cbc:
    // 0x153cbc: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x153cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_153cc0:
    // 0x153cc0: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x153cc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_153cc4:
    // 0x153cc4: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x153cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_153cc8:
    // 0x153cc8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x153cc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_153ccc:
    // 0x153ccc: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x153cccu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_153cd0:
    // 0x153cd0: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x153cd0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
label_153cd4:
    // 0x153cd4: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x153cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_153cd8:
    // 0x153cd8: 0xc056854  jal         func_15A150
label_153cdc:
    if (ctx->pc == 0x153CDCu) {
        ctx->pc = 0x153CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CD8u;
        // 0x153cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153CE0u;
        goto label_153ce0;
    }
    ctx->pc = 0x153CD8u;
    SET_GPR_U32(ctx, 31, 0x153CE0u);
    ctx->pc = 0x153CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CD8u;
    // 0x153cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x153CD8u, 0x153CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CE0u;
label_153ce0:
    // 0x153ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153ce4:
    // 0x153ce4: 0xc0532f2  jal         func_14CBC8
label_153ce8:
    if (ctx->pc == 0x153CE8u) {
        ctx->pc = 0x153CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CE4u;
        // 0x153ce8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153CECu;
        goto label_153cec;
    }
    ctx->pc = 0x153CE4u;
    SET_GPR_U32(ctx, 31, 0x153CECu);
    ctx->pc = 0x153CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CE4u;
    // 0x153ce8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153CE4u, 0x153CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CECu;
label_153cec:
    // 0x153cec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153cf0:
    // 0x153cf0: 0x8e220850  lw          $v0, 0x850($s1)
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2128)));
label_153cf4:
    // 0x153cf4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_153cf8:
    if (ctx->pc == 0x153CF8u) {
        ctx->pc = 0x153CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CF4u;
        // 0x153cf8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153CFCu;
        goto label_153cfc;
    }
    ctx->pc = 0x153CF4u;
    {
        const bool branch_taken_0x153cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CF4u;
        // 0x153cf8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cf4) {
            ctx->pc = 0x153D60u;
            goto label_153d60;
        }
    }
    ctx->pc = 0x153CFCu;
label_153cfc:
    // 0x153cfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_153d00:
    if (ctx->pc == 0x153D00u) {
        ctx->pc = 0x153D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CFCu;
        // 0x153d00: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D04u;
        goto label_153d04;
    }
    ctx->pc = 0x153CFCu;
    {
        const bool branch_taken_0x153cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CFCu;
        // 0x153d00: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cfc) {
            ctx->pc = 0x153D18u;
            goto label_153d18;
        }
    }
    ctx->pc = 0x153D04u;
label_153d04:
    // 0x153d04: 0xc056832  jal         func_15A0C8
label_153d08:
    if (ctx->pc == 0x153D08u) {
        ctx->pc = 0x153D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D04u;
        // 0x153d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D0Cu;
        goto label_153d0c;
    }
    ctx->pc = 0x153D04u;
    SET_GPR_U32(ctx, 31, 0x153D0Cu);
    ctx->pc = 0x153D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D04u;
    // 0x153d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x153D04u, 0x153D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D0Cu;
label_153d0c:
    // 0x153d0c: 0x10000014  b           . + 4 + (0x14 << 2)
label_153d10:
    if (ctx->pc == 0x153D10u) {
        ctx->pc = 0x153D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D0Cu;
        // 0x153d10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D14u;
        goto label_153d14;
    }
    ctx->pc = 0x153D0Cu;
    {
        const bool branch_taken_0x153d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D0Cu;
        // 0x153d10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d0c) {
            ctx->pc = 0x153D60u;
            goto label_153d60;
        }
    }
    ctx->pc = 0x153D14u;
label_153d14:
    // 0x153d14: 0x0  nop
    ctx->pc = 0x153d14u;
    // NOP
label_153d18:
    // 0x153d18: 0x8e23084c  lw          $v1, 0x84C($s1)
    ctx->pc = 0x153d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
label_153d1c:
    // 0x153d1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x153d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153d20:
    // 0x153d20: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x153d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_153d24:
    // 0x153d24: 0x24219aa8  addiu       $at, $at, -0x6558
    ctx->pc = 0x153d24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294941352));
label_153d28:
    // 0x153d28: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x153d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_153d2c:
    // 0x153d2c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x153d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_153d30:
    // 0x153d30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_153d34:
    // 0x153d34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x153d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_153d38:
    // 0x153d38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x153d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_153d3c:
    // 0x153d3c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x153d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_153d40:
    // 0x153d40: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x153d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_153d44:
    // 0x153d44: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153d44u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_153d48:
    // 0x153d48: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153d48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_153d4c:
    // 0x153d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153d50:
    // 0x153d50: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x153d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_153d54:
    // 0x153d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153d58:
    // 0x153d58: 0xc056854  jal         func_15A150
label_153d5c:
    if (ctx->pc == 0x153D5Cu) {
        ctx->pc = 0x153D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D58u;
        // 0x153d5c: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D60u;
        goto label_153d60;
    }
    ctx->pc = 0x153D58u;
    SET_GPR_U32(ctx, 31, 0x153D60u);
    ctx->pc = 0x153D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D58u;
    // 0x153d5c: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x153D58u, 0x153D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D60u;
label_153d60:
    // 0x153d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153d64:
    // 0x153d64: 0xc0532f2  jal         func_14CBC8
label_153d68:
    if (ctx->pc == 0x153D68u) {
        ctx->pc = 0x153D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D64u;
        // 0x153d68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D6Cu;
        goto label_153d6c;
    }
    ctx->pc = 0x153D64u;
    SET_GPR_U32(ctx, 31, 0x153D6Cu);
    ctx->pc = 0x153D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D64u;
    // 0x153d68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153D64u, 0x153D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D6Cu;
label_153d6c:
    // 0x153d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153d70:
    // 0x153d70: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_153d74:
    // 0x153d74: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_153d78:
    if (ctx->pc == 0x153D78u) {
        ctx->pc = 0x153D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D74u;
        // 0x153d78: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D7Cu;
        goto label_153d7c;
    }
    ctx->pc = 0x153D74u;
    {
        const bool branch_taken_0x153d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D74u;
        // 0x153d78: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d74) {
            ctx->pc = 0x153DCCu;
            goto label_153dcc;
        }
    }
    ctx->pc = 0x153D7Cu;
label_153d7c:
    // 0x153d7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_153d80:
    if (ctx->pc == 0x153D80u) {
        ctx->pc = 0x153D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D7Cu;
        // 0x153d80: 0xae220858  sw          $v0, 0x858($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D84u;
        goto label_153d84;
    }
    ctx->pc = 0x153D7Cu;
    {
        const bool branch_taken_0x153d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D7Cu;
        // 0x153d80: 0xae220858  sw          $v0, 0x858($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d7c) {
            ctx->pc = 0x153D98u;
            goto label_153d98;
        }
    }
    ctx->pc = 0x153D84u;
label_153d84:
    // 0x153d84: 0xc056832  jal         func_15A0C8
label_153d88:
    if (ctx->pc == 0x153D88u) {
        ctx->pc = 0x153D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D84u;
        // 0x153d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D8Cu;
        goto label_153d8c;
    }
    ctx->pc = 0x153D84u;
    SET_GPR_U32(ctx, 31, 0x153D8Cu);
    ctx->pc = 0x153D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D84u;
    // 0x153d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x153D84u, 0x153D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D8Cu;
label_153d8c:
    // 0x153d8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x153d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_153d90:
    // 0x153d90: 0x1000000e  b           . + 4 + (0xE << 2)
label_153d94:
    if (ctx->pc == 0x153D94u) {
        ctx->pc = 0x153D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D90u;
        // 0x153d94: 0xae200854  sw          $zero, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D98u;
        goto label_153d98;
    }
    ctx->pc = 0x153D90u;
    {
        const bool branch_taken_0x153d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D90u;
        // 0x153d94: 0xae200854  sw          $zero, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d90) {
            ctx->pc = 0x153DCCu;
            goto label_153dcc;
        }
    }
    ctx->pc = 0x153D98u;
label_153d98:
    // 0x153d98: 0x8e220854  lw          $v0, 0x854($s1)
    ctx->pc = 0x153d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2132)));
label_153d9c:
    // 0x153d9c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x153d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_153da0:
    // 0x153da0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x153da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_153da4:
    // 0x153da4: 0x3844001e  xori        $a0, $v0, 0x1E
    ctx->pc = 0x153da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)30);
label_153da8:
    // 0x153da8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x153da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_153dac:
    // 0x153dac: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x153dacu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_153db0:
    // 0x153db0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x153db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_153db4:
    // 0x153db4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x153db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_153db8:
    // 0x153db8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153db8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_153dbc:
    // 0x153dbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153dbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_153dc0:
    // 0x153dc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153dc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_153dc4:
    // 0x153dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153dc8:
    // 0x153dc8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x153dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_153dcc:
    // 0x153dcc: 0x8e2607ac  lw          $a2, 0x7AC($s1)
    ctx->pc = 0x153dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1964)));
label_153dd0:
    // 0x153dd0: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
label_153dd4:
    if (ctx->pc == 0x153DD4u) {
        ctx->pc = 0x153DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DD0u;
        // 0x153dd4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153DD8u;
        goto label_153dd8;
    }
    ctx->pc = 0x153DD0u;
    {
        const bool branch_taken_0x153dd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DD0u;
        // 0x153dd4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dd0) {
            ctx->pc = 0x153EA0u;
            goto label_153ea0;
        }
    }
    ctx->pc = 0x153DD8u;
label_153dd8:
    // 0x153dd8: 0x8c471248  lw          $a3, 0x1248($v0)
    ctx->pc = 0x153dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4680)));
label_153ddc:
    // 0x153ddc: 0x50e00031  beql        $a3, $zero, . + 4 + (0x31 << 2)
label_153de0:
    if (ctx->pc == 0x153DE0u) {
        ctx->pc = 0x153DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DDCu;
        // 0x153de0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153DE4u;
        goto label_153de4;
    }
    ctx->pc = 0x153DDCu;
    {
        const bool branch_taken_0x153ddc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ddc) {
            ctx->pc = 0x153DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153DDCu;
            // 0x153de0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153EA4u;
            goto label_153ea4;
        }
    }
    ctx->pc = 0x153DE4u;
label_153de4:
    // 0x153de4: 0x8c451250  lw          $a1, 0x1250($v0)
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4688)));
label_153de8:
    // 0x153de8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_153dec:
    if (ctx->pc == 0x153DECu) {
        ctx->pc = 0x153DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DE8u;
        // 0x153dec: 0x8c50124c  lw          $s0, 0x124C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4684)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153DF0u;
        goto label_153df0;
    }
    ctx->pc = 0x153DE8u;
    {
        const bool branch_taken_0x153de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DE8u;
        // 0x153dec: 0x8c50124c  lw          $s0, 0x124C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153de8) {
            ctx->pc = 0x153E08u;
            goto label_153e08;
        }
    }
    ctx->pc = 0x153DF0u;
label_153df0:
    // 0x153df0: 0x8c421244  lw          $v0, 0x1244($v0)
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
label_153df4:
    // 0x153df4: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_153df8:
    // 0x153df8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x153df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_153dfc:
    // 0x153dfc: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x153dfcu;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_153e00:
    // 0x153e00: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x153e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
label_153e04:
    // 0x153e04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_153e08:
    // 0x153e08: 0x8cc41254  lw          $a0, 0x1254($a2)
    ctx->pc = 0x153e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4692)));
label_153e0c:
    // 0x153e0c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_153e10:
    // 0x153e10: 0x24027c00  addiu       $v0, $zero, 0x7C00
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
label_153e14:
    // 0x153e14: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x153e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_153e18:
    // 0x153e18: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x153e18u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_153e1c:
    // 0x153e1c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x153e1cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_153e20:
    // 0x153e20: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x153e20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
label_153e24:
    // 0x153e24: 0x2865599a  slti        $a1, $v1, 0x599A
    ctx->pc = 0x153e24u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22938) ? 1 : 0);
label_153e28:
    // 0x153e28: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_153e2c:
    if (ctx->pc == 0x153E2Cu) {
        ctx->pc = 0x153E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E28u;
        // 0x153e2c: 0xacc31254  sw          $v1, 0x1254($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153E30u;
        goto label_153e30;
    }
    ctx->pc = 0x153E28u;
    {
        const bool branch_taken_0x153e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E28u;
        // 0x153e2c: 0xacc31254  sw          $v1, 0x1254($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e28) {
            ctx->pc = 0x153E40u;
            goto label_153e40;
        }
    }
    ctx->pc = 0x153E30u;
label_153e30:
    // 0x153e30: 0xc056832  jal         func_15A0C8
label_153e34:
    if (ctx->pc == 0x153E34u) {
        ctx->pc = 0x153E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E30u;
        // 0x153e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153E38u;
        goto label_153e38;
    }
    ctx->pc = 0x153E30u;
    SET_GPR_U32(ctx, 31, 0x153E38u);
    ctx->pc = 0x153E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E30u;
    // 0x153e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x153E30u, 0x153E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E38u;
label_153e38:
    // 0x153e38: 0x10000019  b           . + 4 + (0x19 << 2)
label_153e3c:
    if (ctx->pc == 0x153E3Cu) {
        ctx->pc = 0x153E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E38u;
        // 0x153e3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153E40u;
        goto label_153e40;
    }
    ctx->pc = 0x153E38u;
    {
        const bool branch_taken_0x153e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E38u;
        // 0x153e3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e38) {
            ctx->pc = 0x153EA0u;
            goto label_153ea0;
        }
    }
    ctx->pc = 0x153E40u;
label_153e40:
    // 0x153e40: 0x24052666  addiu       $a1, $zero, 0x2666
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9830));
label_153e44:
    // 0x153e44: 0x706528c8  pmaxw       $a1, $v1, $a1
    ctx->pc = 0x153e44u;
    SET_GPR_VEC(ctx, 5, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_153e48:
    // 0x153e48: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x153e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_153e4c:
    // 0x153e4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x153e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_153e50:
    // 0x153e50: 0x2463a667  addiu       $v1, $v1, -0x5999
    ctx->pc = 0x153e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944359));
label_153e54:
    // 0x153e54: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x153e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_153e58:
    // 0x153e58: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x153e58u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_153e5c:
    // 0x153e5c: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x153e5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
label_153e60:
    // 0x153e60: 0x2404028f  addiu       $a0, $zero, 0x28F
    ctx->pc = 0x153e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
label_153e64:
    // 0x153e64: 0x24025999  addiu       $v0, $zero, 0x5999
    ctx->pc = 0x153e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22937));
label_153e68:
    // 0x153e68: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x153e68u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_153e6c:
    // 0x153e6c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x153e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_153e70:
    // 0x153e70: 0x706218e8  pminw       $v1, $v1, $v0
    ctx->pc = 0x153e70u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_153e74:
    // 0x153e74: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x153e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_153e78:
    // 0x153e78: 0x34e44000  ori         $a0, $a3, 0x4000
    ctx->pc = 0x153e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
label_153e7c:
    // 0x153e7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x153e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_153e80:
    // 0x153e80: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x153e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_153e84:
    // 0x153e84: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_153e88:
    // 0x153e88: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153e88u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_153e8c:
    // 0x153e8c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153e8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_153e90:
    // 0x153e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153e94:
    // 0x153e94: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x153e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_153e98:
    // 0x153e98: 0xc056854  jal         func_15A150
label_153e9c:
    if (ctx->pc == 0x153E9Cu) {
        ctx->pc = 0x153E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E98u;
        // 0x153e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153EA0u;
        goto label_153ea0;
    }
    ctx->pc = 0x153E98u;
    SET_GPR_U32(ctx, 31, 0x153EA0u);
    ctx->pc = 0x153E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E98u;
    // 0x153e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x153E98u, 0x153EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153EA0u;
label_153ea0:
    // 0x153ea0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x153ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_153ea4:
    // 0x153ea4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x153ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
label_153ea8:
    // 0x153ea8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_153eac:
    // 0x153eac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153eb0:
    // 0x153eb0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_153eb4:
    // 0x153eb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x153eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_153eb8:
    // 0x153eb8: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_153ebc:
    // 0x153ebc: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x153ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_153ec0:
    // 0x153ec0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x153ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153ec4:
    // 0x153ec4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x153ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_153ec8:
    // 0x153ec8: 0x92220575  lbu         $v0, 0x575($s1)
    ctx->pc = 0x153ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1397)));
label_153ecc:
    // 0x153ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_153ed0:
    // 0x153ed0: 0x8c850328  lw          $a1, 0x328($a0)
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
label_153ed4:
    // 0x153ed4: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x153ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
label_153ed8:
    // 0x153ed8: 0x2c490002  sltiu       $t1, $v0, 0x2
    ctx->pc = 0x153ed8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_153edc:
    // 0x153edc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_153ee0:
    // 0x153ee0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_153ee4:
    // 0x153ee4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x153ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_153ee8:
    // 0x153ee8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_153eec:
    if (ctx->pc == 0x153EECu) {
        ctx->pc = 0x153EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EE8u;
        // 0x153eec: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153EF0u;
        goto label_153ef0;
    }
    ctx->pc = 0x153EE8u;
    {
        const bool branch_taken_0x153ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EE8u;
        // 0x153eec: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ee8) {
            ctx->pc = 0x153F04u;
            goto label_153f04;
        }
    }
    ctx->pc = 0x153EF0u;
label_153ef0:
    // 0x153ef0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x153ef0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_153ef4:
    // 0x153ef4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x153ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_153ef8:
    // 0x153ef8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_153efc:
    // 0x153efc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x153efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_153f00:
    // 0x153f00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x153f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_153f04:
    // 0x153f04: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x153f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153f08:
    // 0x153f08: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x153f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_153f0c:
    // 0x153f0c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x153f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
label_153f10:
    // 0x153f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_153f14:
    // 0x153f14: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x153f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_153f18:
    // 0x153f18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x153f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_153f1c:
    // 0x153f1c: 0x2446ffc0  addiu       $a2, $v0, -0x40
    ctx->pc = 0x153f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_153f20:
    // 0x153f20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_153f24:
    // 0x153f24: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_153f28:
    // 0x153f28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153f28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_153f2c:
    // 0x153f2c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x153f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_153f30:
    // 0x153f30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_153f34:
    if (ctx->pc == 0x153F34u) {
        ctx->pc = 0x153F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F30u;
        // 0x153f34: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153F38u;
        goto label_153f38;
    }
    ctx->pc = 0x153F30u;
    {
        const bool branch_taken_0x153f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F30u;
        // 0x153f34: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f30) {
            ctx->pc = 0x153F50u;
            goto label_153f50;
        }
    }
    ctx->pc = 0x153F38u;
label_153f38:
    // 0x153f38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x153f38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_153f3c:
    // 0x153f3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x153f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_153f40:
    // 0x153f40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_153f44:
    // 0x153f44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x153f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_153f48:
    // 0x153f48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x153f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_153f4c:
    // 0x153f4c: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x153f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_153f50:
    // 0x153f50: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x153f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_153f54:
    // 0x153f54: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x153f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_153f58:
    // 0x153f58: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x153f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_153f5c:
    // 0x153f5c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x153f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_153f60:
    // 0x153f60: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x153f60u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_153f64:
    // 0x153f64: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x153f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_153f68:
    // 0x153f68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x153f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_153f6c:
    // 0x153f6c: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x153f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_153f70:
    // 0x153f70: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_153f74:
    if (ctx->pc == 0x153F74u) {
        ctx->pc = 0x153F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F70u;
        // 0x153f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153F78u;
        goto label_153f78;
    }
    ctx->pc = 0x153F70u;
    {
        const bool branch_taken_0x153f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f70) {
            ctx->pc = 0x153F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153F70u;
            // 0x153f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153F88u;
            goto label_153f88;
        }
    }
    ctx->pc = 0x153F78u;
label_153f78:
    // 0x153f78: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x153f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_153f7c:
    // 0x153f7c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x153f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_153f80:
    // 0x153f80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x153f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153f84:
    // 0x153f84: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x153f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
label_153f88:
    // 0x153f88: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x153f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_153f8c:
    // 0x153f8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_153f90:
    if (ctx->pc == 0x153F90u) {
        ctx->pc = 0x153F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F8Cu;
        // 0x153f90: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153F94u;
        goto label_153f94;
    }
    ctx->pc = 0x153F8Cu;
    {
        const bool branch_taken_0x153f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F8Cu;
        // 0x153f90: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f8c) {
            ctx->pc = 0x153FA0u;
            goto label_153fa0;
        }
    }
    ctx->pc = 0x153F94u;
label_153f94:
    // 0x153f94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x153f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_153f98:
    // 0x153f98: 0x10000002  b           . + 4 + (0x2 << 2)
label_153f9c:
    if (ctx->pc == 0x153F9Cu) {
        ctx->pc = 0x153F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F98u;
        // 0x153f9c: 0xc4424000  lwc1        $f2, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x153FA0u;
        goto label_153fa0;
    }
    ctx->pc = 0x153F98u;
    {
        const bool branch_taken_0x153f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F98u;
        // 0x153f9c: 0xc4424000  lwc1        $f2, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f98) {
            ctx->pc = 0x153FA4u;
            goto label_153fa4;
        }
    }
    ctx->pc = 0x153FA0u;
label_153fa0:
    // 0x153fa0: 0xc4a24004  lwc1        $f2, 0x4004($a1)
    ctx->pc = 0x153fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_153fa4:
    // 0x153fa4: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x153fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_153fa8:
    // 0x153fa8: 0xe622085c  swc1        $f2, 0x85C($s1)
    ctx->pc = 0x153fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2140), bits); }
label_153fac:
    // 0x153fac: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x153facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_153fb0:
    // 0x153fb0: 0xc78182e4  lwc1        $f1, -0x7D1C($gp)
    ctx->pc = 0x153fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153fb4:
    // 0x153fb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153fb8:
    // 0x153fb8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x153fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_153fbc:
    // 0x153fbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153fc0:
    // 0x153fc0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x153fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_153fc4:
    // 0x153fc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x153fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_153fc8:
    // 0x153fc8: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x153fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
label_153fcc:
    // 0x153fcc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x153fccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_153fd0:
    // 0x153fd0: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x153fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153fd4:
    // 0x153fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x153fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_153fd8:
    // 0x153fd8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x153fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_153fdc:
    // 0x153fdc: 0xe620085c  swc1        $f0, 0x85C($s1)
    ctx->pc = 0x153fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2140), bits); }
label_153fe0:
    // 0x153fe0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x153fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153fe4:
    // 0x153fe4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x153fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_153fe8:
    // 0x153fe8: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
label_153fec:
    if (ctx->pc == 0x153FECu) {
        ctx->pc = 0x153FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FE8u;
        // 0x153fec: 0xe6200860  swc1        $f0, 0x860($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x153FF0u;
        goto label_153ff0;
    }
    ctx->pc = 0x153FE8u;
    {
        const bool branch_taken_0x153fe8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x153FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FE8u;
        // 0x153fec: 0xe6200860  swc1        $f0, 0x860($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153fe8) {
            ctx->pc = 0x153FF4u;
            goto label_153ff4;
        }
    }
    ctx->pc = 0x153FF0u;
label_153ff0:
    // 0x153ff0: 0xc62001e0  lwc1        $f0, 0x1E0($s1)
    ctx->pc = 0x153ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_153ff4:
    // 0x153ff4: 0xe62001e4  swc1        $f0, 0x1E4($s1)
    ctx->pc = 0x153ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
label_153ff8:
    // 0x153ff8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x153ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_153ffc:
    // 0x153ffc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x153ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_154000:
    // 0x154000: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_154004:
    // 0x154004: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_154008:
    if (ctx->pc == 0x154008u) {
        ctx->pc = 0x154008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154004u;
        // 0x154008: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15400Cu;
        goto label_15400c;
    }
    ctx->pc = 0x154004u;
    {
        const bool branch_taken_0x154004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154004) {
            ctx->pc = 0x154008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154004u;
            // 0x154008: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1540D4u;
            goto label_1540d4;
        }
    }
    ctx->pc = 0x15400Cu;
label_15400c:
    // 0x15400c: 0x51200031  beql        $t1, $zero, . + 4 + (0x31 << 2)
label_154010:
    if (ctx->pc == 0x154010u) {
        ctx->pc = 0x154010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15400Cu;
        // 0x154010: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154014u;
        goto label_154014;
    }
    ctx->pc = 0x15400Cu;
    {
        const bool branch_taken_0x15400c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x15400c) {
            ctx->pc = 0x154010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15400Cu;
            // 0x154010: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1540D4u;
            goto label_1540d4;
        }
    }
    ctx->pc = 0x154014u;
label_154014:
    // 0x154014: 0xc6220860  lwc1        $f2, 0x860($s1)
    ctx->pc = 0x154014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_154018:
    // 0x154018: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x154018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15401c:
    // 0x15401c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15401cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_154020:
    // 0x154020: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_154024:
    if (ctx->pc == 0x154024u) {
        ctx->pc = 0x154028u;
        goto label_154028;
    }
    ctx->pc = 0x154020u;
    {
        const bool branch_taken_0x154020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x154020) {
            ctx->pc = 0x154038u;
            goto label_154038;
        }
    }
    ctx->pc = 0x154028u;
label_154028:
    // 0x154028: 0xc6200864  lwc1        $f0, 0x864($s1)
    ctx->pc = 0x154028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15402c:
    // 0x15402c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15402cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_154030:
    // 0x154030: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_154034:
    if (ctx->pc == 0x154034u) {
        ctx->pc = 0x154034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154030u;
        // 0x154034: 0xc6210860  lwc1        $f1, 0x860($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154038u;
        goto label_154038;
    }
    ctx->pc = 0x154030u;
    {
        const bool branch_taken_0x154030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x154030) {
            ctx->pc = 0x154034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154030u;
            // 0x154034: 0xc6210860  lwc1        $f1, 0x860($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15405Cu;
            goto label_15405c;
        }
    }
    ctx->pc = 0x154038u;
label_154038:
    // 0x154038: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x154038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15403c:
    // 0x15403c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_154040:
    if (ctx->pc == 0x154040u) {
        ctx->pc = 0x154040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15403Cu;
        // 0x154040: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154044u;
        goto label_154044;
    }
    ctx->pc = 0x15403Cu;
    {
        const bool branch_taken_0x15403c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15403c) {
            ctx->pc = 0x154040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15403Cu;
            // 0x154040: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1540D4u;
            goto label_1540d4;
        }
    }
    ctx->pc = 0x154044u;
label_154044:
    // 0x154044: 0xc6200864  lwc1        $f0, 0x864($s1)
    ctx->pc = 0x154044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154048:
    // 0x154048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x154048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15404c:
    // 0x15404c: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
label_154050:
    if (ctx->pc == 0x154050u) {
        ctx->pc = 0x154050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15404Cu;
        // 0x154050: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154054u;
        goto label_154054;
    }
    ctx->pc = 0x15404Cu;
    {
        const bool branch_taken_0x15404c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15404c) {
            ctx->pc = 0x154050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15404Cu;
            // 0x154050: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1540D4u;
            goto label_1540d4;
        }
    }
    ctx->pc = 0x154054u;
label_154054:
    // 0x154054: 0xc6200864  lwc1        $f0, 0x864($s1)
    ctx->pc = 0x154054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154058:
    // 0x154058: 0xc6210860  lwc1        $f1, 0x860($s1)
    ctx->pc = 0x154058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15405c:
    // 0x15405c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15405cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_154060:
    // 0x154060: 0x46000505  abs.s       $f20, $f0
    ctx->pc = 0x154060u;
    ctx->f[20] = FPU_ABS_S(ctx->f[0]);
label_154064:
    // 0x154064: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x154064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_154068:
    // 0x154068: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x154068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15406c:
    // 0x15406c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x15406cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_154070:
    // 0x154070: 0xc620085c  lwc1        $f0, 0x85C($s1)
    ctx->pc = 0x154070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154074:
    // 0x154074: 0xc04c99a  jal         func_132668
label_154078:
    if (ctx->pc == 0x154078u) {
        ctx->pc = 0x154078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154074u;
        // 0x154078: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15407Cu;
        goto label_15407c;
    }
    ctx->pc = 0x154074u;
    SET_GPR_U32(ctx, 31, 0x15407Cu);
    ctx->pc = 0x154078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154074u;
    // 0x154078: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x154074u, 0x15407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15407Cu;
label_15407c:
    // 0x15407c: 0xc04c9a6  jal         func_132698
label_154080:
    if (ctx->pc == 0x154080u) {
        ctx->pc = 0x154080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15407Cu;
        // 0x154080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154084u;
        goto label_154084;
    }
    ctx->pc = 0x15407Cu;
    SET_GPR_U32(ctx, 31, 0x154084u);
    ctx->pc = 0x154080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15407Cu;
    // 0x154080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x15407Cu, 0x154084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154084u;
label_154084:
    // 0x154084: 0xc78082e8  lwc1        $f0, -0x7D18($gp)
    ctx->pc = 0x154084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154088:
    // 0x154088: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x154088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15408c:
    // 0x15408c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_154090:
    if (ctx->pc == 0x154090u) {
        ctx->pc = 0x154090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15408Cu;
        // 0x154090: 0x240400af  addiu       $a0, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154094u;
        goto label_154094;
    }
    ctx->pc = 0x15408Cu;
    {
        const bool branch_taken_0x15408c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15408Cu;
        // 0x154090: 0x240400af  addiu       $a0, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15408c) {
            ctx->pc = 0x1540A8u;
            goto label_1540a8;
        }
    }
    ctx->pc = 0x154094u;
label_154094:
    // 0x154094: 0xc78082ec  lwc1        $f0, -0x7D14($gp)
    ctx->pc = 0x154094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154098:
    // 0x154098: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x154098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15409c:
    // 0x15409c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1540a0:
    if (ctx->pc == 0x1540A0u) {
        ctx->pc = 0x1540A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15409Cu;
        // 0x1540a0: 0x240400ad  addiu       $a0, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540A4u;
        goto label_1540a4;
    }
    ctx->pc = 0x15409Cu;
    {
        const bool branch_taken_0x15409c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1540A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15409Cu;
        // 0x1540a0: 0x240400ad  addiu       $a0, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15409c) {
            ctx->pc = 0x1540C0u;
            goto label_1540c0;
        }
    }
    ctx->pc = 0x1540A4u;
label_1540a4:
    // 0x1540a4: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1540a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
label_1540a8:
    // 0x1540a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1540a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1540ac:
    // 0x1540ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1540acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1540b0:
    // 0x1540b0: 0xc04c5ac  jal         func_1316B0
label_1540b4:
    if (ctx->pc == 0x1540B4u) {
        ctx->pc = 0x1540B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540B0u;
        // 0x1540b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540B8u;
        goto label_1540b8;
    }
    ctx->pc = 0x1540B0u;
    SET_GPR_U32(ctx, 31, 0x1540B8u);
    ctx->pc = 0x1540B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540B0u;
    // 0x1540b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1540B0u, 0x1540B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540B8u;
label_1540b8:
    // 0x1540b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1540bc:
    if (ctx->pc == 0x1540BCu) {
        ctx->pc = 0x1540BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540B8u;
        // 0x1540bc: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540C0u;
        goto label_1540c0;
    }
    ctx->pc = 0x1540B8u;
    {
        const bool branch_taken_0x1540b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540B8u;
        // 0x1540bc: 0x8e220170  lw          $v0, 0x170($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540b8) {
            ctx->pc = 0x1540D4u;
            goto label_1540d4;
        }
    }
    ctx->pc = 0x1540C0u;
label_1540c0:
    // 0x1540c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1540c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1540c4:
    // 0x1540c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1540c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1540c8:
    // 0x1540c8: 0xc04c5ac  jal         func_1316B0
label_1540cc:
    if (ctx->pc == 0x1540CCu) {
        ctx->pc = 0x1540CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540C8u;
        // 0x1540cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540D0u;
        goto label_1540d0;
    }
    ctx->pc = 0x1540C8u;
    SET_GPR_U32(ctx, 31, 0x1540D0u);
    ctx->pc = 0x1540CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540C8u;
    // 0x1540cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1540C8u, 0x1540D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540D0u;
label_1540d0:
    // 0x1540d0: 0x8e220170  lw          $v0, 0x170($s1)
    ctx->pc = 0x1540d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_1540d4:
    // 0x1540d4: 0xc6200860  lwc1        $f0, 0x860($s1)
    ctx->pc = 0x1540d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1540d8:
    // 0x1540d8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1540d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1540dc:
    // 0x1540dc: 0xe6200864  swc1        $f0, 0x864($s1)
    ctx->pc = 0x1540dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2148), bits); }
label_1540e0:
    // 0x1540e0: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
label_1540e4:
    // 0x1540e4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1540e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1540e8:
    // 0x1540e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1540e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1540ec:
    // 0x1540ec: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_1540f0:
    if (ctx->pc == 0x1540F0u) {
        ctx->pc = 0x1540F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540ECu;
        // 0x1540f0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540F4u;
        goto label_1540f4;
    }
    ctx->pc = 0x1540ECu;
    {
        const bool branch_taken_0x1540ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1540F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540ECu;
        // 0x1540f0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540ec) {
            ctx->pc = 0x154254u;
            goto label_154254;
        }
    }
    ctx->pc = 0x1540F4u;
label_1540f4:
    // 0x1540f4: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x1540f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_1540f8:
    // 0x1540f8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1540f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_1540fc:
    // 0x1540fc: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
label_154100:
    if (ctx->pc == 0x154100u) {
        ctx->pc = 0x154100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540FCu;
        // 0x154100: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154104u;
        goto label_154104;
    }
    ctx->pc = 0x1540FCu;
    {
        const bool branch_taken_0x1540fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1540fc) {
            ctx->pc = 0x154100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1540FCu;
            // 0x154100: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154258u;
            goto label_154258;
        }
    }
    ctx->pc = 0x154104u;
label_154104:
    // 0x154104: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x154104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_154108:
    // 0x154108: 0x8c840164  lw          $a0, 0x164($a0)
    ctx->pc = 0x154108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
label_15410c:
    // 0x15410c: 0x246301d0  addiu       $v1, $v1, 0x1D0
    ctx->pc = 0x15410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
label_154110:
    // 0x154110: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154110u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_154114:
    // 0x154114: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x154114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_154118:
    // 0x154118: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x154118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_15411c:
    // 0x15411c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x15411cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_154120:
    // 0x154120: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x154120u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_154124:
    // 0x154124: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_154128:
    // 0x154128: 0xc481015c  lwc1        $f1, 0x15C($a0)
    ctx->pc = 0x154128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15412c:
    // 0x15412c: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x15412cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_154130:
    // 0x154130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154134:
    // 0x154134: 0x46011502  mul.s       $f20, $f2, $f1
    ctx->pc = 0x154134u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_154138:
    // 0x154138: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x154138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15413c:
    // 0x15413c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_154140:
    if (ctx->pc == 0x154140u) {
        ctx->pc = 0x154140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15413Cu;
        // 0x154140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154144u;
        goto label_154144;
    }
    ctx->pc = 0x15413Cu;
    {
        const bool branch_taken_0x15413c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15413Cu;
        // 0x154140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15413c) {
            ctx->pc = 0x154148u;
            goto label_154148;
        }
    }
    ctx->pc = 0x154144u;
label_154144:
    // 0x154144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154148:
    // 0x154148: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_15414c:
    if (ctx->pc == 0x15414Cu) {
        ctx->pc = 0x15414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154148u;
        // 0x15414c: 0x8e220690  lw          $v0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154150u;
        goto label_154150;
    }
    ctx->pc = 0x154148u;
    {
        const bool branch_taken_0x154148 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154148u;
        // 0x15414c: 0x8e220690  lw          $v0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154148) {
            ctx->pc = 0x154168u;
            goto label_154168;
        }
    }
    ctx->pc = 0x154150u;
label_154150:
    // 0x154150: 0x8c431a2c  lw          $v1, 0x1A2C($v0)
    ctx->pc = 0x154150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6700)));
label_154154:
    // 0x154154: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_154158:
    if (ctx->pc == 0x154158u) {
        ctx->pc = 0x15415Cu;
        goto label_15415c;
    }
    ctx->pc = 0x154154u;
    {
        const bool branch_taken_0x154154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154154) {
            ctx->pc = 0x154174u;
            goto label_154174;
        }
    }
    ctx->pc = 0x15415Cu;
label_15415c:
    // 0x15415c: 0x10000016  b           . + 4 + (0x16 << 2)
label_154160:
    if (ctx->pc == 0x154160u) {
        ctx->pc = 0x154164u;
        goto label_154164;
    }
    ctx->pc = 0x15415Cu;
    {
        const bool branch_taken_0x15415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15415c) {
            ctx->pc = 0x1541B8u;
            goto label_1541b8;
        }
    }
    ctx->pc = 0x154164u;
label_154164:
    // 0x154164: 0x0  nop
    ctx->pc = 0x154164u;
    // NOP
label_154168:
    // 0x154168: 0x8c431a2c  lw          $v1, 0x1A2C($v0)
    ctx->pc = 0x154168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6700)));
label_15416c:
    // 0x15416c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_154170:
    if (ctx->pc == 0x154170u) {
        ctx->pc = 0x154174u;
        goto label_154174;
    }
    ctx->pc = 0x15416Cu;
    {
        const bool branch_taken_0x15416c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15416c) {
            ctx->pc = 0x1541B8u;
            goto label_1541b8;
        }
    }
    ctx->pc = 0x154174u;
label_154174:
    // 0x154174: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_154178:
    if (ctx->pc == 0x154178u) {
        ctx->pc = 0x154178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154174u;
        // 0x154178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15417Cu;
        goto label_15417c;
    }
    ctx->pc = 0x154174u;
    {
        const bool branch_taken_0x154174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x154178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154174u;
        // 0x154178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154174) {
            ctx->pc = 0x154190u;
            goto label_154190;
        }
    }
    ctx->pc = 0x15417Cu;
label_15417c:
    // 0x15417c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x15417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_154180:
    // 0x154180: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x154180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_154184:
    // 0x154184: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x154184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_154188:
    // 0x154188: 0x10000006  b           . + 4 + (0x6 << 2)
label_15418c:
    if (ctx->pc == 0x15418Cu) {
        ctx->pc = 0x15418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154188u;
        // 0x15418c: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154190u;
        goto label_154190;
    }
    ctx->pc = 0x154188u;
    {
        const bool branch_taken_0x154188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154188u;
        // 0x15418c: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154188) {
            ctx->pc = 0x1541A4u;
            goto label_1541a4;
        }
    }
    ctx->pc = 0x154190u;
label_154190:
    // 0x154190: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_154194:
    // 0x154194: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x154194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_154198:
    // 0x154198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x154198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_15419c:
    // 0x15419c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15419cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1541a0:
    // 0x1541a0: 0xae230184  sw          $v1, 0x184($s1)
    ctx->pc = 0x1541a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
label_1541a4:
    // 0x1541a4: 0x8c840690  lw          $a0, 0x690($a0)
    ctx->pc = 0x1541a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1680)));
label_1541a8:
    // 0x1541a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1541ac:
    if (ctx->pc == 0x1541ACu) {
        ctx->pc = 0x1541B0u;
        goto label_1541b0;
    }
    ctx->pc = 0x1541A8u;
    {
        const bool branch_taken_0x1541a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1541a8) {
            ctx->pc = 0x1541B8u;
            goto label_1541b8;
        }
    }
    ctx->pc = 0x1541B0u;
label_1541b0:
    // 0x1541b0: 0xc058ab0  jal         func_162AC0
label_1541b4:
    if (ctx->pc == 0x1541B4u) {
        ctx->pc = 0x1541B8u;
        goto label_1541b8;
    }
    ctx->pc = 0x1541B0u;
    SET_GPR_U32(ctx, 31, 0x1541B8u);
    ctx->pc = 0x162AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162AC0u, 0x1541B0u, 0x1541B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541B8u;
label_1541b8:
    // 0x1541b8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_1541bc:
    // 0x1541bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1541bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1541c0:
    // 0x1541c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1541c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1541c4:
    // 0x1541c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1541c8:
    if (ctx->pc == 0x1541C8u) {
        ctx->pc = 0x1541C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541C4u;
        // 0x1541c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1541CCu;
        goto label_1541cc;
    }
    ctx->pc = 0x1541C4u;
    {
        const bool branch_taken_0x1541c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1541C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541C4u;
        // 0x1541c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541c4) {
            ctx->pc = 0x1541D0u;
            goto label_1541d0;
        }
    }
    ctx->pc = 0x1541CCu;
label_1541cc:
    // 0x1541cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1541ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1541d0:
    // 0x1541d0: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1541d4:
    // 0x1541d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1541d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1541d8:
    // 0x1541d8: 0x8e250180  lw          $a1, 0x180($s1)
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_1541dc:
    // 0x1541dc: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1541dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_1541e0:
    // 0x1541e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1541e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1541e4:
    // 0x1541e4: 0x30a50400  andi        $a1, $a1, 0x400
    ctx->pc = 0x1541e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_1541e8:
    // 0x1541e8: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x1541e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
label_1541ec:
    // 0x1541ec: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1541ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1541f0:
    // 0x1541f0: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x1541f0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1541f4:
    // 0x1541f4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_1541f8:
    if (ctx->pc == 0x1541F8u) {
        ctx->pc = 0x1541F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541F4u;
        // 0x1541f8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1541FCu;
        goto label_1541fc;
    }
    ctx->pc = 0x1541F4u;
    {
        const bool branch_taken_0x1541f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1541F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541F4u;
        // 0x1541f8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541f4) {
            ctx->pc = 0x154210u;
            goto label_154210;
        }
    }
    ctx->pc = 0x1541FCu;
label_1541fc:
    // 0x1541fc: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x1541fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
label_154200:
    // 0x154200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154204:
    // 0x154204: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x154204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_154208:
    // 0x154208: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_15420c:
    if (ctx->pc == 0x15420Cu) {
        ctx->pc = 0x15420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154208u;
        // 0x15420c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154210u;
        goto label_154210;
    }
    ctx->pc = 0x154208u;
    {
        const bool branch_taken_0x154208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x154208) {
            ctx->pc = 0x15420Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154208u;
            // 0x15420c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154210u;
            goto label_154210;
        }
    }
    ctx->pc = 0x154210u;
label_154210:
    // 0x154210: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x154210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_154214:
    // 0x154214: 0x3a050001  xori        $a1, $s0, 0x1
    ctx->pc = 0x154214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_154218:
    // 0x154218: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15421c:
    // 0x15421c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_154220:
    // 0x154220: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_154224:
    // 0x154224: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x154224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154228:
    // 0x154228: 0x60f809  jalr        $v1
label_15422c:
    if (ctx->pc == 0x15422Cu) {
        ctx->pc = 0x15422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154228u;
        // 0x15422c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154230u;
        goto label_154230;
    }
    ctx->pc = 0x154228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154230u);
        ctx->pc = 0x15422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154228u;
        // 0x15422c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154228u, 0x154230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154230u;
label_154230:
    // 0x154230: 0x8e2601c8  lw          $a2, 0x1C8($s1)
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_154234:
    // 0x154234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154238:
    // 0x154238: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x154238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15423c:
    // 0x15423c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_154240:
    // 0x154240: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x154240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_154244:
    // 0x154244: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154248:
    // 0x154248: 0x60f809  jalr        $v1
label_15424c:
    if (ctx->pc == 0x15424Cu) {
        ctx->pc = 0x15424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154248u;
        // 0x15424c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154250u;
        goto label_154250;
    }
    ctx->pc = 0x154248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154250u);
        ctx->pc = 0x15424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154248u;
        // 0x15424c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154248u, 0x154250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154250u;
label_154250:
    // 0x154250: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x154250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154254:
    // 0x154254: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x154254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_154258:
    // 0x154258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x154258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15425c:
    // 0x15425c: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x15425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_154260:
    // 0x154260: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x154260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_154264:
    // 0x154264: 0x3e00008  jr          $ra
label_154268:
    if (ctx->pc == 0x154268u) {
        ctx->pc = 0x154268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154264u;
        // 0x154268: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15426Cu;
        goto label_fallthrough_0x154264;
    }
    ctx->pc = 0x154264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154264u;
        // 0x154268: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154264:
    ctx->pc = 0x15426Cu;
}

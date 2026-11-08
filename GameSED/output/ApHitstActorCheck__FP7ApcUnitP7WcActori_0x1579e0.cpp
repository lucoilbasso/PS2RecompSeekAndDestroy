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

// Function: ApHitstActorCheck__FP7ApcUnitP7WcActori
// Address: 0x1579e0 - 0x157db8
void ApHitstActorCheck__FP7ApcUnitP7WcActori_0x1579e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApHitstActorCheck__FP7ApcUnitP7WcActori_0x1579e0");
#endif

    switch (ctx->pc) {
        case 0x1579e0u: goto label_1579e0;
        case 0x1579e4u: goto label_1579e4;
        case 0x1579e8u: goto label_1579e8;
        case 0x1579ecu: goto label_1579ec;
        case 0x1579f0u: goto label_1579f0;
        case 0x1579f4u: goto label_1579f4;
        case 0x1579f8u: goto label_1579f8;
        case 0x1579fcu: goto label_1579fc;
        case 0x157a00u: goto label_157a00;
        case 0x157a04u: goto label_157a04;
        case 0x157a08u: goto label_157a08;
        case 0x157a0cu: goto label_157a0c;
        case 0x157a10u: goto label_157a10;
        case 0x157a14u: goto label_157a14;
        case 0x157a18u: goto label_157a18;
        case 0x157a1cu: goto label_157a1c;
        case 0x157a20u: goto label_157a20;
        case 0x157a24u: goto label_157a24;
        case 0x157a28u: goto label_157a28;
        case 0x157a2cu: goto label_157a2c;
        case 0x157a30u: goto label_157a30;
        case 0x157a34u: goto label_157a34;
        case 0x157a38u: goto label_157a38;
        case 0x157a3cu: goto label_157a3c;
        case 0x157a40u: goto label_157a40;
        case 0x157a44u: goto label_157a44;
        case 0x157a48u: goto label_157a48;
        case 0x157a4cu: goto label_157a4c;
        case 0x157a50u: goto label_157a50;
        case 0x157a54u: goto label_157a54;
        case 0x157a58u: goto label_157a58;
        case 0x157a5cu: goto label_157a5c;
        case 0x157a60u: goto label_157a60;
        case 0x157a64u: goto label_157a64;
        case 0x157a68u: goto label_157a68;
        case 0x157a6cu: goto label_157a6c;
        case 0x157a70u: goto label_157a70;
        case 0x157a74u: goto label_157a74;
        case 0x157a78u: goto label_157a78;
        case 0x157a7cu: goto label_157a7c;
        case 0x157a80u: goto label_157a80;
        case 0x157a84u: goto label_157a84;
        case 0x157a88u: goto label_157a88;
        case 0x157a8cu: goto label_157a8c;
        case 0x157a90u: goto label_157a90;
        case 0x157a94u: goto label_157a94;
        case 0x157a98u: goto label_157a98;
        case 0x157a9cu: goto label_157a9c;
        case 0x157aa0u: goto label_157aa0;
        case 0x157aa4u: goto label_157aa4;
        case 0x157aa8u: goto label_157aa8;
        case 0x157aacu: goto label_157aac;
        case 0x157ab0u: goto label_157ab0;
        case 0x157ab4u: goto label_157ab4;
        case 0x157ab8u: goto label_157ab8;
        case 0x157abcu: goto label_157abc;
        case 0x157ac0u: goto label_157ac0;
        case 0x157ac4u: goto label_157ac4;
        case 0x157ac8u: goto label_157ac8;
        case 0x157accu: goto label_157acc;
        case 0x157ad0u: goto label_157ad0;
        case 0x157ad4u: goto label_157ad4;
        case 0x157ad8u: goto label_157ad8;
        case 0x157adcu: goto label_157adc;
        case 0x157ae0u: goto label_157ae0;
        case 0x157ae4u: goto label_157ae4;
        case 0x157ae8u: goto label_157ae8;
        case 0x157aecu: goto label_157aec;
        case 0x157af0u: goto label_157af0;
        case 0x157af4u: goto label_157af4;
        case 0x157af8u: goto label_157af8;
        case 0x157afcu: goto label_157afc;
        case 0x157b00u: goto label_157b00;
        case 0x157b04u: goto label_157b04;
        case 0x157b08u: goto label_157b08;
        case 0x157b0cu: goto label_157b0c;
        case 0x157b10u: goto label_157b10;
        case 0x157b14u: goto label_157b14;
        case 0x157b18u: goto label_157b18;
        case 0x157b1cu: goto label_157b1c;
        case 0x157b20u: goto label_157b20;
        case 0x157b24u: goto label_157b24;
        case 0x157b28u: goto label_157b28;
        case 0x157b2cu: goto label_157b2c;
        case 0x157b30u: goto label_157b30;
        case 0x157b34u: goto label_157b34;
        case 0x157b38u: goto label_157b38;
        case 0x157b3cu: goto label_157b3c;
        case 0x157b40u: goto label_157b40;
        case 0x157b44u: goto label_157b44;
        case 0x157b48u: goto label_157b48;
        case 0x157b4cu: goto label_157b4c;
        case 0x157b50u: goto label_157b50;
        case 0x157b54u: goto label_157b54;
        case 0x157b58u: goto label_157b58;
        case 0x157b5cu: goto label_157b5c;
        case 0x157b60u: goto label_157b60;
        case 0x157b64u: goto label_157b64;
        case 0x157b68u: goto label_157b68;
        case 0x157b6cu: goto label_157b6c;
        case 0x157b70u: goto label_157b70;
        case 0x157b74u: goto label_157b74;
        case 0x157b78u: goto label_157b78;
        case 0x157b7cu: goto label_157b7c;
        case 0x157b80u: goto label_157b80;
        case 0x157b84u: goto label_157b84;
        case 0x157b88u: goto label_157b88;
        case 0x157b8cu: goto label_157b8c;
        case 0x157b90u: goto label_157b90;
        case 0x157b94u: goto label_157b94;
        case 0x157b98u: goto label_157b98;
        case 0x157b9cu: goto label_157b9c;
        case 0x157ba0u: goto label_157ba0;
        case 0x157ba4u: goto label_157ba4;
        case 0x157ba8u: goto label_157ba8;
        case 0x157bacu: goto label_157bac;
        case 0x157bb0u: goto label_157bb0;
        case 0x157bb4u: goto label_157bb4;
        case 0x157bb8u: goto label_157bb8;
        case 0x157bbcu: goto label_157bbc;
        case 0x157bc0u: goto label_157bc0;
        case 0x157bc4u: goto label_157bc4;
        case 0x157bc8u: goto label_157bc8;
        case 0x157bccu: goto label_157bcc;
        case 0x157bd0u: goto label_157bd0;
        case 0x157bd4u: goto label_157bd4;
        case 0x157bd8u: goto label_157bd8;
        case 0x157bdcu: goto label_157bdc;
        case 0x157be0u: goto label_157be0;
        case 0x157be4u: goto label_157be4;
        case 0x157be8u: goto label_157be8;
        case 0x157becu: goto label_157bec;
        case 0x157bf0u: goto label_157bf0;
        case 0x157bf4u: goto label_157bf4;
        case 0x157bf8u: goto label_157bf8;
        case 0x157bfcu: goto label_157bfc;
        case 0x157c00u: goto label_157c00;
        case 0x157c04u: goto label_157c04;
        case 0x157c08u: goto label_157c08;
        case 0x157c0cu: goto label_157c0c;
        case 0x157c10u: goto label_157c10;
        case 0x157c14u: goto label_157c14;
        case 0x157c18u: goto label_157c18;
        case 0x157c1cu: goto label_157c1c;
        case 0x157c20u: goto label_157c20;
        case 0x157c24u: goto label_157c24;
        case 0x157c28u: goto label_157c28;
        case 0x157c2cu: goto label_157c2c;
        case 0x157c30u: goto label_157c30;
        case 0x157c34u: goto label_157c34;
        case 0x157c38u: goto label_157c38;
        case 0x157c3cu: goto label_157c3c;
        case 0x157c40u: goto label_157c40;
        case 0x157c44u: goto label_157c44;
        case 0x157c48u: goto label_157c48;
        case 0x157c4cu: goto label_157c4c;
        case 0x157c50u: goto label_157c50;
        case 0x157c54u: goto label_157c54;
        case 0x157c58u: goto label_157c58;
        case 0x157c5cu: goto label_157c5c;
        case 0x157c60u: goto label_157c60;
        case 0x157c64u: goto label_157c64;
        case 0x157c68u: goto label_157c68;
        case 0x157c6cu: goto label_157c6c;
        case 0x157c70u: goto label_157c70;
        case 0x157c74u: goto label_157c74;
        case 0x157c78u: goto label_157c78;
        case 0x157c7cu: goto label_157c7c;
        case 0x157c80u: goto label_157c80;
        case 0x157c84u: goto label_157c84;
        case 0x157c88u: goto label_157c88;
        case 0x157c8cu: goto label_157c8c;
        case 0x157c90u: goto label_157c90;
        case 0x157c94u: goto label_157c94;
        case 0x157c98u: goto label_157c98;
        case 0x157c9cu: goto label_157c9c;
        case 0x157ca0u: goto label_157ca0;
        case 0x157ca4u: goto label_157ca4;
        case 0x157ca8u: goto label_157ca8;
        case 0x157cacu: goto label_157cac;
        case 0x157cb0u: goto label_157cb0;
        case 0x157cb4u: goto label_157cb4;
        case 0x157cb8u: goto label_157cb8;
        case 0x157cbcu: goto label_157cbc;
        case 0x157cc0u: goto label_157cc0;
        case 0x157cc4u: goto label_157cc4;
        case 0x157cc8u: goto label_157cc8;
        case 0x157cccu: goto label_157ccc;
        case 0x157cd0u: goto label_157cd0;
        case 0x157cd4u: goto label_157cd4;
        case 0x157cd8u: goto label_157cd8;
        case 0x157cdcu: goto label_157cdc;
        case 0x157ce0u: goto label_157ce0;
        case 0x157ce4u: goto label_157ce4;
        case 0x157ce8u: goto label_157ce8;
        case 0x157cecu: goto label_157cec;
        case 0x157cf0u: goto label_157cf0;
        case 0x157cf4u: goto label_157cf4;
        case 0x157cf8u: goto label_157cf8;
        case 0x157cfcu: goto label_157cfc;
        case 0x157d00u: goto label_157d00;
        case 0x157d04u: goto label_157d04;
        case 0x157d08u: goto label_157d08;
        case 0x157d0cu: goto label_157d0c;
        case 0x157d10u: goto label_157d10;
        case 0x157d14u: goto label_157d14;
        case 0x157d18u: goto label_157d18;
        case 0x157d1cu: goto label_157d1c;
        case 0x157d20u: goto label_157d20;
        case 0x157d24u: goto label_157d24;
        case 0x157d28u: goto label_157d28;
        case 0x157d2cu: goto label_157d2c;
        case 0x157d30u: goto label_157d30;
        case 0x157d34u: goto label_157d34;
        case 0x157d38u: goto label_157d38;
        case 0x157d3cu: goto label_157d3c;
        case 0x157d40u: goto label_157d40;
        case 0x157d44u: goto label_157d44;
        case 0x157d48u: goto label_157d48;
        case 0x157d4cu: goto label_157d4c;
        case 0x157d50u: goto label_157d50;
        case 0x157d54u: goto label_157d54;
        case 0x157d58u: goto label_157d58;
        case 0x157d5cu: goto label_157d5c;
        case 0x157d60u: goto label_157d60;
        case 0x157d64u: goto label_157d64;
        case 0x157d68u: goto label_157d68;
        case 0x157d6cu: goto label_157d6c;
        case 0x157d70u: goto label_157d70;
        case 0x157d74u: goto label_157d74;
        case 0x157d78u: goto label_157d78;
        case 0x157d7cu: goto label_157d7c;
        case 0x157d80u: goto label_157d80;
        case 0x157d84u: goto label_157d84;
        case 0x157d88u: goto label_157d88;
        case 0x157d8cu: goto label_157d8c;
        case 0x157d90u: goto label_157d90;
        case 0x157d94u: goto label_157d94;
        case 0x157d98u: goto label_157d98;
        case 0x157d9cu: goto label_157d9c;
        case 0x157da0u: goto label_157da0;
        case 0x157da4u: goto label_157da4;
        case 0x157da8u: goto label_157da8;
        case 0x157dacu: goto label_157dac;
        case 0x157db0u: goto label_157db0;
        case 0x157db4u: goto label_157db4;
        default: break;
    }

    ctx->pc = 0x1579e0u;

label_1579e0:
    // 0x1579e0: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x1579e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_1579e4:
    // 0x1579e4: 0xffb204b0  sd          $s2, 0x4B0($sp)
    ctx->pc = 0x1579e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 18));
label_1579e8:
    // 0x1579e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1579e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1579ec:
    // 0x1579ec: 0xffb004a0  sd          $s0, 0x4A0($sp)
    ctx->pc = 0x1579ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 16));
label_1579f0:
    // 0x1579f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1579f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1579f4:
    // 0x1579f4: 0xffb304b8  sd          $s3, 0x4B8($sp)
    ctx->pc = 0x1579f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1208), GPR_U64(ctx, 19));
label_1579f8:
    // 0x1579f8: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x1579f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1579fc:
    // 0x1579fc: 0xffb604d0  sd          $s6, 0x4D0($sp)
    ctx->pc = 0x1579fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 22));
label_157a00:
    // 0x157a00: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x157a00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_157a04:
    // 0x157a04: 0xffb104a8  sd          $s1, 0x4A8($sp)
    ctx->pc = 0x157a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1192), GPR_U64(ctx, 17));
label_157a08:
    // 0x157a08: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x157a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_157a0c:
    // 0x157a0c: 0xffb404c0  sd          $s4, 0x4C0($sp)
    ctx->pc = 0x157a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 20));
label_157a10:
    // 0x157a10: 0xffb504c8  sd          $s5, 0x4C8($sp)
    ctx->pc = 0x157a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1224), GPR_U64(ctx, 21));
label_157a14:
    // 0x157a14: 0xffb704d8  sd          $s7, 0x4D8($sp)
    ctx->pc = 0x157a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1240), GPR_U64(ctx, 23));
label_157a18:
    // 0x157a18: 0xffbe04e0  sd          $fp, 0x4E0($sp)
    ctx->pc = 0x157a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 30));
label_157a1c:
    // 0x157a1c: 0xffbf04e8  sd          $ra, 0x4E8($sp)
    ctx->pc = 0x157a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1256), GPR_U64(ctx, 31));
label_157a20:
    // 0x157a20: 0xafa60490  sw          $a2, 0x490($sp)
    ctx->pc = 0x157a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 6));
label_157a24:
    // 0x157a24: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x157a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_157a28:
    // 0x157a28: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x157a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_157a2c:
    // 0x157a2c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x157a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_157a30:
    // 0x157a30: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x157a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_157a34:
    // 0x157a34: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x157a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_157a38:
    // 0x157a38: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x157a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_157a3c:
    // 0x157a3c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x157a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_157a40:
    // 0x157a40: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x157a40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_157a44:
    // 0x157a44: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x157a44u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_157a48:
    // 0x157a48: 0x8e51007c  lw          $s1, 0x7C($s2)
    ctx->pc = 0x157a48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_157a4c:
    // 0x157a4c: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x157a4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_157a50:
    // 0x157a50: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x157a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157a54:
    // 0x157a54: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x157a54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_157a58:
    // 0x157a58: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x157a58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_157a5c:
    // 0x157a5c: 0xc64200e4  lwc1        $f2, 0xE4($s2)
    ctx->pc = 0x157a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_157a60:
    // 0x157a60: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x157a60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_157a64:
    // 0x157a64: 0xc64000e8  lwc1        $f0, 0xE8($s2)
    ctx->pc = 0x157a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157a68:
    // 0x157a68: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x157a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_157a6c:
    // 0x157a6c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x157a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_157a70:
    // 0x157a70: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x157a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_157a74:
    // 0x157a74: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x157a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_157a78:
    // 0x157a78: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x157a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_157a7c:
    // 0x157a7c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x157a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_157a80:
    // 0x157a80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x157a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_157a84:
    // 0x157a84: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x157a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_157a88:
    // 0x157a88: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x157a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_157a8c:
    // 0x157a8c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x157a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_157a90:
    // 0x157a90: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x157a90u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
label_157a94:
    // 0x157a94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_157a98:
    if (ctx->pc == 0x157A98u) {
        ctx->pc = 0x157A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A94u;
        // 0x157a98: 0xafb10034  sw          $s1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157A9Cu;
        goto label_157a9c;
    }
    ctx->pc = 0x157A94u;
    {
        const bool branch_taken_0x157a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A94u;
        // 0x157a98: 0xafb10034  sw          $s1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a94) {
            ctx->pc = 0x157AA4u;
            goto label_157aa4;
        }
    }
    ctx->pc = 0x157A9Cu;
label_157a9c:
    // 0x157a9c: 0xc061920  jal         func_186480
label_157aa0:
    if (ctx->pc == 0x157AA0u) {
        ctx->pc = 0x157AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A9Cu;
        // 0x157aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AA4u;
        goto label_157aa4;
    }
    ctx->pc = 0x157A9Cu;
    SET_GPR_U32(ctx, 31, 0x157AA4u);
    ctx->pc = 0x157AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A9Cu;
    // 0x157aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x157A9Cu, 0x157AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157AA4u;
label_157aa4:
    // 0x157aa4: 0xc061422  jal         func_185088
label_157aa8:
    if (ctx->pc == 0x157AA8u) {
        ctx->pc = 0x157AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AA4u;
        // 0x157aa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157AACu;
        goto label_157aac;
    }
    ctx->pc = 0x157AA4u;
    SET_GPR_U32(ctx, 31, 0x157AACu);
    ctx->pc = 0x157AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157AA4u;
    // 0x157aa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x157AA4u, 0x157AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157AACu;
label_157aac:
    // 0x157aac: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_157ab0:
    // 0x157ab0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157ab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_157ab4:
    // 0x157ab4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x157ab4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_157ab8:
    // 0x157ab8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x157ab8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_157abc:
    // 0x157abc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x157abcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_157ac0:
    // 0x157ac0: 0xfaa40000  sqc2        $vf4, 0x0($s5)
    ctx->pc = 0x157ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_157ac4:
    // 0x157ac4: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x157ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_157ac8:
    // 0x157ac8: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x157ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_157acc:
    // 0x157acc: 0xfaa70030  sqc2        $vf7, 0x30($s5)
    ctx->pc = 0x157accu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_157ad0:
    // 0x157ad0: 0x8e11007c  lw          $s1, 0x7C($s0)
    ctx->pc = 0x157ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_157ad4:
    // 0x157ad4: 0x27b50120  addiu       $s5, $sp, 0x120
    ctx->pc = 0x157ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_157ad8:
    // 0x157ad8: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x157ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_157adc:
    // 0x157adc: 0x27be0150  addiu       $fp, $sp, 0x150
    ctx->pc = 0x157adcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_157ae0:
    // 0x157ae0: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_157ae4:
    // 0x157ae4: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x157ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157ae8:
    // 0x157ae8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x157ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_157aec:
    // 0x157aec: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x157aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157af0:
    // 0x157af0: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x157af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_157af4:
    // 0x157af4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x157af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_157af8:
    // 0x157af8: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x157af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_157afc:
    // 0x157afc: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x157afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_157b00:
    // 0x157b00: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x157b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
label_157b04:
    // 0x157b04: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x157b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_157b08:
    // 0x157b08: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x157b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_157b0c:
    // 0x157b0c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x157b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_157b10:
    // 0x157b10: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x157b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_157b14:
    // 0x157b14: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x157b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
label_157b18:
    // 0x157b18: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x157b18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_157b1c:
    // 0x157b1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_157b20:
    if (ctx->pc == 0x157B20u) {
        ctx->pc = 0x157B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B1Cu;
        // 0x157b20: 0xafb10124  sw          $s1, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B24u;
        goto label_157b24;
    }
    ctx->pc = 0x157B1Cu;
    {
        const bool branch_taken_0x157b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B1Cu;
        // 0x157b20: 0xafb10124  sw          $s1, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b1c) {
            ctx->pc = 0x157B2Cu;
            goto label_157b2c;
        }
    }
    ctx->pc = 0x157B24u;
label_157b24:
    // 0x157b24: 0xc061920  jal         func_186480
label_157b28:
    if (ctx->pc == 0x157B28u) {
        ctx->pc = 0x157B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B24u;
        // 0x157b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B2Cu;
        goto label_157b2c;
    }
    ctx->pc = 0x157B24u;
    SET_GPR_U32(ctx, 31, 0x157B2Cu);
    ctx->pc = 0x157B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B24u;
    // 0x157b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x157B24u, 0x157B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B2Cu;
label_157b2c:
    // 0x157b2c: 0xc061422  jal         func_185088
label_157b30:
    if (ctx->pc == 0x157B30u) {
        ctx->pc = 0x157B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B2Cu;
        // 0x157b30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B34u;
        goto label_157b34;
    }
    ctx->pc = 0x157B2Cu;
    SET_GPR_U32(ctx, 31, 0x157B34u);
    ctx->pc = 0x157B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B2Cu;
    // 0x157b30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x157B2Cu, 0x157B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B34u;
label_157b34:
    // 0x157b34: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x157b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_157b38:
    // 0x157b38: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157b38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_157b3c:
    // 0x157b3c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x157b3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_157b40:
    // 0x157b40: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x157b40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_157b44:
    // 0x157b44: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x157b44u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_157b48:
    // 0x157b48: 0xfbc40000  sqc2        $vf4, 0x0($fp)
    ctx->pc = 0x157b48u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_157b4c:
    // 0x157b4c: 0xfbc50010  sqc2        $vf5, 0x10($fp)
    ctx->pc = 0x157b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_157b50:
    // 0x157b50: 0xfbc60020  sqc2        $vf6, 0x20($fp)
    ctx->pc = 0x157b50u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_157b54:
    // 0x157b54: 0xfbc70030  sqc2        $vf7, 0x30($fp)
    ctx->pc = 0x157b54u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_157b58:
    // 0x157b58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_157b5c:
    // 0x157b5c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_157b60:
    // 0x157b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x157b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_157b64:
    // 0x157b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_157b68:
    // 0x157b68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x157b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_157b6c:
    // 0x157b6c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x157b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
label_157b70:
    // 0x157b70: 0x2421a1d0  addiu       $at, $at, -0x5E30
    ctx->pc = 0x157b70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294943184));
label_157b74:
    // 0x157b74: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_157b78:
    // 0x157b78: 0xafa20494  sw          $v0, 0x494($sp)
    ctx->pc = 0x157b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 2));
label_157b7c:
    // 0x157b7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x157b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_157b80:
    // 0x157b80: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_157b84:
    if (ctx->pc == 0x157B84u) {
        ctx->pc = 0x157B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B80u;
        // 0x157b84: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B88u;
        goto label_157b88;
    }
    ctx->pc = 0x157B80u;
    {
        const bool branch_taken_0x157b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b80) {
            ctx->pc = 0x157B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157B80u;
            // 0x157b84: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157B98u;
            goto label_157b98;
        }
    }
    ctx->pc = 0x157B88u;
label_157b88:
    // 0x157b88: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x157b88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_157b8c:
    // 0x157b8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_157b90:
    if (ctx->pc == 0x157B90u) {
        ctx->pc = 0x157B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B8Cu;
        // 0x157b90: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157B94u;
        goto label_157b94;
    }
    ctx->pc = 0x157B8Cu;
    {
        const bool branch_taken_0x157b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B8Cu;
        // 0x157b90: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b8c) {
            ctx->pc = 0x157BACu;
            goto label_157bac;
        }
    }
    ctx->pc = 0x157B94u;
label_157b94:
    // 0x157b94: 0x0  nop
    ctx->pc = 0x157b94u;
    // NOP
label_157b98:
    // 0x157b98: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x157b98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_157b9c:
    // 0x157b9c: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x157b9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_157ba0:
    // 0x157ba0: 0xfac20000  sqc2        $vf2, 0x0($s6)
    ctx->pc = 0x157ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_157ba4:
    // 0x157ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157ba8:
    // 0x157ba8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x157ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_157bac:
    // 0x157bac: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x157bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_157bb0:
    // 0x157bb0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x157bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_157bb4:
    // 0x157bb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x157bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_157bb8:
    // 0x157bb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x157bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_157bbc:
    // 0x157bbc: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x157bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_157bc0:
    // 0x157bc0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x157bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_157bc4:
    // 0x157bc4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_157bc8:
    if (ctx->pc == 0x157BC8u) {
        ctx->pc = 0x157BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BC4u;
        // 0x157bc8: 0x26630020  addiu       $v1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BCCu;
        goto label_157bcc;
    }
    ctx->pc = 0x157BC4u;
    {
        const bool branch_taken_0x157bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BC4u;
        // 0x157bc8: 0x26630020  addiu       $v1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bc4) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157BCCu;
label_157bcc:
    // 0x157bcc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157bccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_157bd0:
    // 0x157bd0: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x157bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_157bd4:
    // 0x157bd4: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x157bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_157bd8:
    // 0x157bd8: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x157bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_157bdc:
    // 0x157bdc: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x157bdcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
label_157be0:
    // 0x157be0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_157be4:
    // 0x157be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_157be8:
    // 0x157be8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x157be8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_157bec:
    // 0x157bec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_157bf0:
    if (ctx->pc == 0x157BF0u) {
        ctx->pc = 0x157BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BECu;
        // 0x157bf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157BF4u;
        goto label_157bf4;
    }
    ctx->pc = 0x157BECu;
    {
        const bool branch_taken_0x157bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BECu;
        // 0x157bf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bec) {
            ctx->pc = 0x157BF8u;
            goto label_157bf8;
        }
    }
    ctx->pc = 0x157BF4u;
label_157bf4:
    // 0x157bf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157bf8:
    // 0x157bf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_157bfc:
    if (ctx->pc == 0x157BFCu) {
        ctx->pc = 0x157BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BF8u;
        // 0x157bfc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C00u;
        goto label_157c00;
    }
    ctx->pc = 0x157BF8u;
    {
        const bool branch_taken_0x157bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BF8u;
        // 0x157bfc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bf8) {
            ctx->pc = 0x157C28u;
            goto label_157c28;
        }
    }
    ctx->pc = 0x157C00u;
label_157c00:
    // 0x157c00: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x157c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157c04:
    // 0x157c04: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x157c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_157c08:
    // 0x157c08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x157c08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_157c0c:
    // 0x157c0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_157c10:
    if (ctx->pc == 0x157C10u) {
        ctx->pc = 0x157C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C0Cu;
        // 0x157c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C14u;
        goto label_157c14;
    }
    ctx->pc = 0x157C0Cu;
    {
        const bool branch_taken_0x157c0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C0Cu;
        // 0x157c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c0c) {
            ctx->pc = 0x157C18u;
            goto label_157c18;
        }
    }
    ctx->pc = 0x157C14u;
label_157c14:
    // 0x157c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157c18:
    // 0x157c18: 0x10000003  b           . + 4 + (0x3 << 2)
label_157c1c:
    if (ctx->pc == 0x157C1Cu) {
        ctx->pc = 0x157C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C18u;
        // 0x157c1c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C20u;
        goto label_157c20;
    }
    ctx->pc = 0x157C18u;
    {
        const bool branch_taken_0x157c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C18u;
        // 0x157c1c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c18) {
            ctx->pc = 0x157C28u;
            goto label_157c28;
        }
    }
    ctx->pc = 0x157C20u;
label_157c20:
    // 0x157c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157c24:
    // 0x157c24: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x157c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_157c28:
    // 0x157c28: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_157c2c:
    // 0x157c2c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_157c30:
    if (ctx->pc == 0x157C30u) {
        ctx->pc = 0x157C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C2Cu;
        // 0x157c30: 0x266403b0  addiu       $a0, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C34u;
        goto label_157c34;
    }
    ctx->pc = 0x157C2Cu;
    {
        const bool branch_taken_0x157c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C2Cu;
        // 0x157c30: 0x266403b0  addiu       $a0, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c2c) {
            ctx->pc = 0x157CB8u;
            goto label_157cb8;
        }
    }
    ctx->pc = 0x157C34u;
label_157c34:
    // 0x157c34: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x157c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_157c38:
    // 0x157c38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_157c3c:
    if (ctx->pc == 0x157C3Cu) {
        ctx->pc = 0x157C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C38u;
        // 0x157c3c: 0x8fd40000  lw          $s4, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C40u;
        goto label_157c40;
    }
    ctx->pc = 0x157C38u;
    {
        const bool branch_taken_0x157c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c38) {
            ctx->pc = 0x157C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157C38u;
            // 0x157c3c: 0x8fd40000  lw          $s4, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157C50u;
            goto label_157c50;
        }
    }
    ctx->pc = 0x157C40u;
label_157c40:
    // 0x157c40: 0x266403b0  addiu       $a0, $s3, 0x3B0
    ctx->pc = 0x157c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
label_157c44:
    // 0x157c44: 0x1000001d  b           . + 4 + (0x1D << 2)
label_157c48:
    if (ctx->pc == 0x157C48u) {
        ctx->pc = 0x157C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C44u;
        // 0x157c48: 0x26430140  addiu       $v1, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C4Cu;
        goto label_157c4c;
    }
    ctx->pc = 0x157C44u;
    {
        const bool branch_taken_0x157c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C44u;
        // 0x157c48: 0x26430140  addiu       $v1, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c44) {
            ctx->pc = 0x157CBCu;
            goto label_157cbc;
        }
    }
    ctx->pc = 0x157C4Cu;
label_157c4c:
    // 0x157c4c: 0x0  nop
    ctx->pc = 0x157c4cu;
    // NOP
label_157c50:
    // 0x157c50: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x157c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_157c54:
    // 0x157c54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x157c54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_157c58:
    // 0x157c58: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x157c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_157c5c:
    // 0x157c5c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x157c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_157c60:
    // 0x157c60: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x157c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_157c64:
    // 0x157c64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_157c68:
    if (ctx->pc == 0x157C68u) {
        ctx->pc = 0x157C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C64u;
        // 0x157c68: 0x267503b0  addiu       $s5, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C6Cu;
        goto label_157c6c;
    }
    ctx->pc = 0x157C64u;
    {
        const bool branch_taken_0x157c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C64u;
        // 0x157c68: 0x267503b0  addiu       $s5, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c64) {
            ctx->pc = 0x157C74u;
            goto label_157c74;
        }
    }
    ctx->pc = 0x157C6Cu;
label_157c6c:
    // 0x157c6c: 0xc061920  jal         func_186480
label_157c70:
    if (ctx->pc == 0x157C70u) {
        ctx->pc = 0x157C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C6Cu;
        // 0x157c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C74u;
        goto label_157c74;
    }
    ctx->pc = 0x157C6Cu;
    SET_GPR_U32(ctx, 31, 0x157C74u);
    ctx->pc = 0x157C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C6Cu;
    // 0x157c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x157C6Cu, 0x157C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C74u;
label_157c74:
    // 0x157c74: 0xc061422  jal         func_185088
label_157c78:
    if (ctx->pc == 0x157C78u) {
        ctx->pc = 0x157C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C74u;
        // 0x157c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157C7Cu;
        goto label_157c7c;
    }
    ctx->pc = 0x157C74u;
    SET_GPR_U32(ctx, 31, 0x157C7Cu);
    ctx->pc = 0x157C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C74u;
    // 0x157c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x157C74u, 0x157C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C7Cu;
label_157c7c:
    // 0x157c7c: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x157c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_157c80:
    // 0x157c80: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x157c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_157c84:
    // 0x157c84: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x157c84u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_157c88:
    // 0x157c88: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_157c8c:
    // 0x157c8c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x157c8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_157c90:
    // 0x157c90: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x157c90u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_157c94:
    // 0x157c94: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x157c94u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_157c98:
    // 0x157c98: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_157c9c:
    // 0x157c9c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_157ca0:
    // 0x157ca0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x157ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_157ca4:
    // 0x157ca4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x157ca4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_157ca8:
    // 0x157ca8: 0xfaac0000  sqc2        $vf12, 0x0($s5)
    ctx->pc = 0x157ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_157cac:
    // 0x157cac: 0x10000006  b           . + 4 + (0x6 << 2)
label_157cb0:
    if (ctx->pc == 0x157CB0u) {
        ctx->pc = 0x157CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CACu;
        // 0x157cb0: 0x266503c0  addiu       $a1, $s3, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157CB4u;
        goto label_157cb4;
    }
    ctx->pc = 0x157CACu;
    {
        const bool branch_taken_0x157cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CACu;
        // 0x157cb0: 0x266503c0  addiu       $a1, $s3, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cac) {
            ctx->pc = 0x157CC8u;
            goto label_157cc8;
        }
    }
    ctx->pc = 0x157CB4u;
label_157cb4:
    // 0x157cb4: 0x0  nop
    ctx->pc = 0x157cb4u;
    // NOP
label_157cb8:
    // 0x157cb8: 0x27c30060  addiu       $v1, $fp, 0x60
    ctx->pc = 0x157cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_157cbc:
    // 0x157cbc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x157cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_157cc0:
    // 0x157cc0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x157cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_157cc4:
    // 0x157cc4: 0x266503c0  addiu       $a1, $s3, 0x3C0
    ctx->pc = 0x157cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
label_157cc8:
    // 0x157cc8: 0x266403b0  addiu       $a0, $s3, 0x3B0
    ctx->pc = 0x157cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
label_157ccc:
    // 0x157ccc: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x157cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_157cd0:
    // 0x157cd0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x157cd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_157cd4:
    // 0x157cd4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x157cd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_157cd8:
    // 0x157cd8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x157cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_157cdc:
    // 0x157cdc: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x157cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_157ce0:
    // 0x157ce0: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_157ce4:
    // 0x157ce4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_157ce8:
    if (ctx->pc == 0x157CE8u) {
        ctx->pc = 0x157CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CE4u;
        // 0x157ce8: 0x266403d0  addiu       $a0, $s3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157CECu;
        goto label_157cec;
    }
    ctx->pc = 0x157CE4u;
    {
        const bool branch_taken_0x157ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CE4u;
        // 0x157ce8: 0x266403d0  addiu       $a0, $s3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ce4) {
            ctx->pc = 0x157D60u;
            goto label_157d60;
        }
    }
    ctx->pc = 0x157CECu;
label_157cec:
    // 0x157cec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x157cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_157cf0:
    // 0x157cf0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_157cf4:
    if (ctx->pc == 0x157CF4u) {
        ctx->pc = 0x157CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CF0u;
        // 0x157cf4: 0x26430140  addiu       $v1, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157CF8u;
        goto label_157cf8;
    }
    ctx->pc = 0x157CF0u;
    {
        const bool branch_taken_0x157cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CF0u;
        // 0x157cf4: 0x26430140  addiu       $v1, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cf0) {
            ctx->pc = 0x157D64u;
            goto label_157d64;
        }
    }
    ctx->pc = 0x157CF8u;
label_157cf8:
    // 0x157cf8: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x157cf8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_157cfc:
    // 0x157cfc: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_157d00:
    // 0x157d00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x157d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_157d04:
    // 0x157d04: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x157d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_157d08:
    // 0x157d08: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x157d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_157d0c:
    // 0x157d0c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x157d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_157d10:
    // 0x157d10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_157d14:
    if (ctx->pc == 0x157D14u) {
        ctx->pc = 0x157D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D10u;
        // 0x157d14: 0x267503d0  addiu       $s5, $s3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D18u;
        goto label_157d18;
    }
    ctx->pc = 0x157D10u;
    {
        const bool branch_taken_0x157d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D10u;
        // 0x157d14: 0x267503d0  addiu       $s5, $s3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d10) {
            ctx->pc = 0x157D20u;
            goto label_157d20;
        }
    }
    ctx->pc = 0x157D18u;
label_157d18:
    // 0x157d18: 0xc061920  jal         func_186480
label_157d1c:
    if (ctx->pc == 0x157D1Cu) {
        ctx->pc = 0x157D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D18u;
        // 0x157d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D20u;
        goto label_157d20;
    }
    ctx->pc = 0x157D18u;
    SET_GPR_U32(ctx, 31, 0x157D20u);
    ctx->pc = 0x157D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D18u;
    // 0x157d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x157D18u, 0x157D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D20u;
label_157d20:
    // 0x157d20: 0xc061422  jal         func_185088
label_157d24:
    if (ctx->pc == 0x157D24u) {
        ctx->pc = 0x157D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D20u;
        // 0x157d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D28u;
        goto label_157d28;
    }
    ctx->pc = 0x157D20u;
    SET_GPR_U32(ctx, 31, 0x157D28u);
    ctx->pc = 0x157D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D20u;
    // 0x157d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x157D20u, 0x157D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D28u;
label_157d28:
    // 0x157d28: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x157d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_157d2c:
    // 0x157d2c: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_157d30:
    // 0x157d30: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x157d30u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_157d34:
    // 0x157d34: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157d34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_157d38:
    // 0x157d38: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x157d38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_157d3c:
    // 0x157d3c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x157d3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_157d40:
    // 0x157d40: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x157d40u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_157d44:
    // 0x157d44: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x157d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_157d48:
    // 0x157d48: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x157d48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_157d4c:
    // 0x157d4c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x157d4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_157d50:
    // 0x157d50: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x157d50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_157d54:
    // 0x157d54: 0xfaac0000  sqc2        $vf12, 0x0($s5)
    ctx->pc = 0x157d54u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_157d58:
    // 0x157d58: 0x10000005  b           . + 4 + (0x5 << 2)
label_157d5c:
    if (ctx->pc == 0x157D5Cu) {
        ctx->pc = 0x157D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D58u;
        // 0x157d5c: 0x8fa30494  lw          $v1, 0x494($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D60u;
        goto label_157d60;
    }
    ctx->pc = 0x157D58u;
    {
        const bool branch_taken_0x157d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D58u;
        // 0x157d5c: 0x8fa30494  lw          $v1, 0x494($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d58) {
            ctx->pc = 0x157D70u;
            goto label_157d70;
        }
    }
    ctx->pc = 0x157D60u;
label_157d60:
    // 0x157d60: 0x26e30060  addiu       $v1, $s7, 0x60
    ctx->pc = 0x157d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 96));
label_157d64:
    // 0x157d64: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x157d64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_157d68:
    // 0x157d68: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x157d68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_157d6c:
    // 0x157d6c: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x157d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
label_157d70:
    // 0x157d70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157d74:
    // 0x157d74: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x157d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_157d78:
    // 0x157d78: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x157d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_157d7c:
    // 0x157d7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_157d80:
    // 0x157d80: 0x40f809  jalr        $v0
label_157d84:
    if (ctx->pc == 0x157D84u) {
        ctx->pc = 0x157D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D80u;
        // 0x157d84: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157D88u;
        goto label_157d88;
    }
    ctx->pc = 0x157D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157D88u);
        ctx->pc = 0x157D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D80u;
        // 0x157d84: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157D80u, 0x157D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157D88u;
label_157d88:
    // 0x157d88: 0xdfb004a0  ld          $s0, 0x4A0($sp)
    ctx->pc = 0x157d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_157d8c:
    // 0x157d8c: 0xdfb104a8  ld          $s1, 0x4A8($sp)
    ctx->pc = 0x157d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1192)));
label_157d90:
    // 0x157d90: 0xdfb204b0  ld          $s2, 0x4B0($sp)
    ctx->pc = 0x157d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_157d94:
    // 0x157d94: 0xdfb304b8  ld          $s3, 0x4B8($sp)
    ctx->pc = 0x157d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1208)));
label_157d98:
    // 0x157d98: 0xdfb404c0  ld          $s4, 0x4C0($sp)
    ctx->pc = 0x157d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
label_157d9c:
    // 0x157d9c: 0xdfb504c8  ld          $s5, 0x4C8($sp)
    ctx->pc = 0x157d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1224)));
label_157da0:
    // 0x157da0: 0xdfb604d0  ld          $s6, 0x4D0($sp)
    ctx->pc = 0x157da0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
label_157da4:
    // 0x157da4: 0xdfb704d8  ld          $s7, 0x4D8($sp)
    ctx->pc = 0x157da4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1240)));
label_157da8:
    // 0x157da8: 0xdfbe04e0  ld          $fp, 0x4E0($sp)
    ctx->pc = 0x157da8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
label_157dac:
    // 0x157dac: 0xdfbf04e8  ld          $ra, 0x4E8($sp)
    ctx->pc = 0x157dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1256)));
label_157db0:
    // 0x157db0: 0x3e00008  jr          $ra
label_157db4:
    if (ctx->pc == 0x157DB4u) {
        ctx->pc = 0x157DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DB0u;
        // 0x157db4: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157DB8u;
        goto label_fallthrough_0x157db0;
    }
    ctx->pc = 0x157DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DB0u;
        // 0x157db4: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x157db0:
    ctx->pc = 0x157DB8u;
}

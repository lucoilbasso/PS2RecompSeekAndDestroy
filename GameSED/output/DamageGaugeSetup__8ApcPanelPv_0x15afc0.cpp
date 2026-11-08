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

// Function: DamageGaugeSetup__8ApcPanelPv
// Address: 0x15afc0 - 0x15b42c
void DamageGaugeSetup__8ApcPanelPv_0x15afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageGaugeSetup__8ApcPanelPv_0x15afc0");
#endif

    switch (ctx->pc) {
        case 0x15afc0u: goto label_15afc0;
        case 0x15afc4u: goto label_15afc4;
        case 0x15afc8u: goto label_15afc8;
        case 0x15afccu: goto label_15afcc;
        case 0x15afd0u: goto label_15afd0;
        case 0x15afd4u: goto label_15afd4;
        case 0x15afd8u: goto label_15afd8;
        case 0x15afdcu: goto label_15afdc;
        case 0x15afe0u: goto label_15afe0;
        case 0x15afe4u: goto label_15afe4;
        case 0x15afe8u: goto label_15afe8;
        case 0x15afecu: goto label_15afec;
        case 0x15aff0u: goto label_15aff0;
        case 0x15aff4u: goto label_15aff4;
        case 0x15aff8u: goto label_15aff8;
        case 0x15affcu: goto label_15affc;
        case 0x15b000u: goto label_15b000;
        case 0x15b004u: goto label_15b004;
        case 0x15b008u: goto label_15b008;
        case 0x15b00cu: goto label_15b00c;
        case 0x15b010u: goto label_15b010;
        case 0x15b014u: goto label_15b014;
        case 0x15b018u: goto label_15b018;
        case 0x15b01cu: goto label_15b01c;
        case 0x15b020u: goto label_15b020;
        case 0x15b024u: goto label_15b024;
        case 0x15b028u: goto label_15b028;
        case 0x15b02cu: goto label_15b02c;
        case 0x15b030u: goto label_15b030;
        case 0x15b034u: goto label_15b034;
        case 0x15b038u: goto label_15b038;
        case 0x15b03cu: goto label_15b03c;
        case 0x15b040u: goto label_15b040;
        case 0x15b044u: goto label_15b044;
        case 0x15b048u: goto label_15b048;
        case 0x15b04cu: goto label_15b04c;
        case 0x15b050u: goto label_15b050;
        case 0x15b054u: goto label_15b054;
        case 0x15b058u: goto label_15b058;
        case 0x15b05cu: goto label_15b05c;
        case 0x15b060u: goto label_15b060;
        case 0x15b064u: goto label_15b064;
        case 0x15b068u: goto label_15b068;
        case 0x15b06cu: goto label_15b06c;
        case 0x15b070u: goto label_15b070;
        case 0x15b074u: goto label_15b074;
        case 0x15b078u: goto label_15b078;
        case 0x15b07cu: goto label_15b07c;
        case 0x15b080u: goto label_15b080;
        case 0x15b084u: goto label_15b084;
        case 0x15b088u: goto label_15b088;
        case 0x15b08cu: goto label_15b08c;
        case 0x15b090u: goto label_15b090;
        case 0x15b094u: goto label_15b094;
        case 0x15b098u: goto label_15b098;
        case 0x15b09cu: goto label_15b09c;
        case 0x15b0a0u: goto label_15b0a0;
        case 0x15b0a4u: goto label_15b0a4;
        case 0x15b0a8u: goto label_15b0a8;
        case 0x15b0acu: goto label_15b0ac;
        case 0x15b0b0u: goto label_15b0b0;
        case 0x15b0b4u: goto label_15b0b4;
        case 0x15b0b8u: goto label_15b0b8;
        case 0x15b0bcu: goto label_15b0bc;
        case 0x15b0c0u: goto label_15b0c0;
        case 0x15b0c4u: goto label_15b0c4;
        case 0x15b0c8u: goto label_15b0c8;
        case 0x15b0ccu: goto label_15b0cc;
        case 0x15b0d0u: goto label_15b0d0;
        case 0x15b0d4u: goto label_15b0d4;
        case 0x15b0d8u: goto label_15b0d8;
        case 0x15b0dcu: goto label_15b0dc;
        case 0x15b0e0u: goto label_15b0e0;
        case 0x15b0e4u: goto label_15b0e4;
        case 0x15b0e8u: goto label_15b0e8;
        case 0x15b0ecu: goto label_15b0ec;
        case 0x15b0f0u: goto label_15b0f0;
        case 0x15b0f4u: goto label_15b0f4;
        case 0x15b0f8u: goto label_15b0f8;
        case 0x15b0fcu: goto label_15b0fc;
        case 0x15b100u: goto label_15b100;
        case 0x15b104u: goto label_15b104;
        case 0x15b108u: goto label_15b108;
        case 0x15b10cu: goto label_15b10c;
        case 0x15b110u: goto label_15b110;
        case 0x15b114u: goto label_15b114;
        case 0x15b118u: goto label_15b118;
        case 0x15b11cu: goto label_15b11c;
        case 0x15b120u: goto label_15b120;
        case 0x15b124u: goto label_15b124;
        case 0x15b128u: goto label_15b128;
        case 0x15b12cu: goto label_15b12c;
        case 0x15b130u: goto label_15b130;
        case 0x15b134u: goto label_15b134;
        case 0x15b138u: goto label_15b138;
        case 0x15b13cu: goto label_15b13c;
        case 0x15b140u: goto label_15b140;
        case 0x15b144u: goto label_15b144;
        case 0x15b148u: goto label_15b148;
        case 0x15b14cu: goto label_15b14c;
        case 0x15b150u: goto label_15b150;
        case 0x15b154u: goto label_15b154;
        case 0x15b158u: goto label_15b158;
        case 0x15b15cu: goto label_15b15c;
        case 0x15b160u: goto label_15b160;
        case 0x15b164u: goto label_15b164;
        case 0x15b168u: goto label_15b168;
        case 0x15b16cu: goto label_15b16c;
        case 0x15b170u: goto label_15b170;
        case 0x15b174u: goto label_15b174;
        case 0x15b178u: goto label_15b178;
        case 0x15b17cu: goto label_15b17c;
        case 0x15b180u: goto label_15b180;
        case 0x15b184u: goto label_15b184;
        case 0x15b188u: goto label_15b188;
        case 0x15b18cu: goto label_15b18c;
        case 0x15b190u: goto label_15b190;
        case 0x15b194u: goto label_15b194;
        case 0x15b198u: goto label_15b198;
        case 0x15b19cu: goto label_15b19c;
        case 0x15b1a0u: goto label_15b1a0;
        case 0x15b1a4u: goto label_15b1a4;
        case 0x15b1a8u: goto label_15b1a8;
        case 0x15b1acu: goto label_15b1ac;
        case 0x15b1b0u: goto label_15b1b0;
        case 0x15b1b4u: goto label_15b1b4;
        case 0x15b1b8u: goto label_15b1b8;
        case 0x15b1bcu: goto label_15b1bc;
        case 0x15b1c0u: goto label_15b1c0;
        case 0x15b1c4u: goto label_15b1c4;
        case 0x15b1c8u: goto label_15b1c8;
        case 0x15b1ccu: goto label_15b1cc;
        case 0x15b1d0u: goto label_15b1d0;
        case 0x15b1d4u: goto label_15b1d4;
        case 0x15b1d8u: goto label_15b1d8;
        case 0x15b1dcu: goto label_15b1dc;
        case 0x15b1e0u: goto label_15b1e0;
        case 0x15b1e4u: goto label_15b1e4;
        case 0x15b1e8u: goto label_15b1e8;
        case 0x15b1ecu: goto label_15b1ec;
        case 0x15b1f0u: goto label_15b1f0;
        case 0x15b1f4u: goto label_15b1f4;
        case 0x15b1f8u: goto label_15b1f8;
        case 0x15b1fcu: goto label_15b1fc;
        case 0x15b200u: goto label_15b200;
        case 0x15b204u: goto label_15b204;
        case 0x15b208u: goto label_15b208;
        case 0x15b20cu: goto label_15b20c;
        case 0x15b210u: goto label_15b210;
        case 0x15b214u: goto label_15b214;
        case 0x15b218u: goto label_15b218;
        case 0x15b21cu: goto label_15b21c;
        case 0x15b220u: goto label_15b220;
        case 0x15b224u: goto label_15b224;
        case 0x15b228u: goto label_15b228;
        case 0x15b22cu: goto label_15b22c;
        case 0x15b230u: goto label_15b230;
        case 0x15b234u: goto label_15b234;
        case 0x15b238u: goto label_15b238;
        case 0x15b23cu: goto label_15b23c;
        case 0x15b240u: goto label_15b240;
        case 0x15b244u: goto label_15b244;
        case 0x15b248u: goto label_15b248;
        case 0x15b24cu: goto label_15b24c;
        case 0x15b250u: goto label_15b250;
        case 0x15b254u: goto label_15b254;
        case 0x15b258u: goto label_15b258;
        case 0x15b25cu: goto label_15b25c;
        case 0x15b260u: goto label_15b260;
        case 0x15b264u: goto label_15b264;
        case 0x15b268u: goto label_15b268;
        case 0x15b26cu: goto label_15b26c;
        case 0x15b270u: goto label_15b270;
        case 0x15b274u: goto label_15b274;
        case 0x15b278u: goto label_15b278;
        case 0x15b27cu: goto label_15b27c;
        case 0x15b280u: goto label_15b280;
        case 0x15b284u: goto label_15b284;
        case 0x15b288u: goto label_15b288;
        case 0x15b28cu: goto label_15b28c;
        case 0x15b290u: goto label_15b290;
        case 0x15b294u: goto label_15b294;
        case 0x15b298u: goto label_15b298;
        case 0x15b29cu: goto label_15b29c;
        case 0x15b2a0u: goto label_15b2a0;
        case 0x15b2a4u: goto label_15b2a4;
        case 0x15b2a8u: goto label_15b2a8;
        case 0x15b2acu: goto label_15b2ac;
        case 0x15b2b0u: goto label_15b2b0;
        case 0x15b2b4u: goto label_15b2b4;
        case 0x15b2b8u: goto label_15b2b8;
        case 0x15b2bcu: goto label_15b2bc;
        case 0x15b2c0u: goto label_15b2c0;
        case 0x15b2c4u: goto label_15b2c4;
        case 0x15b2c8u: goto label_15b2c8;
        case 0x15b2ccu: goto label_15b2cc;
        case 0x15b2d0u: goto label_15b2d0;
        case 0x15b2d4u: goto label_15b2d4;
        case 0x15b2d8u: goto label_15b2d8;
        case 0x15b2dcu: goto label_15b2dc;
        case 0x15b2e0u: goto label_15b2e0;
        case 0x15b2e4u: goto label_15b2e4;
        case 0x15b2e8u: goto label_15b2e8;
        case 0x15b2ecu: goto label_15b2ec;
        case 0x15b2f0u: goto label_15b2f0;
        case 0x15b2f4u: goto label_15b2f4;
        case 0x15b2f8u: goto label_15b2f8;
        case 0x15b2fcu: goto label_15b2fc;
        case 0x15b300u: goto label_15b300;
        case 0x15b304u: goto label_15b304;
        case 0x15b308u: goto label_15b308;
        case 0x15b30cu: goto label_15b30c;
        case 0x15b310u: goto label_15b310;
        case 0x15b314u: goto label_15b314;
        case 0x15b318u: goto label_15b318;
        case 0x15b31cu: goto label_15b31c;
        case 0x15b320u: goto label_15b320;
        case 0x15b324u: goto label_15b324;
        case 0x15b328u: goto label_15b328;
        case 0x15b32cu: goto label_15b32c;
        case 0x15b330u: goto label_15b330;
        case 0x15b334u: goto label_15b334;
        case 0x15b338u: goto label_15b338;
        case 0x15b33cu: goto label_15b33c;
        case 0x15b340u: goto label_15b340;
        case 0x15b344u: goto label_15b344;
        case 0x15b348u: goto label_15b348;
        case 0x15b34cu: goto label_15b34c;
        case 0x15b350u: goto label_15b350;
        case 0x15b354u: goto label_15b354;
        case 0x15b358u: goto label_15b358;
        case 0x15b35cu: goto label_15b35c;
        case 0x15b360u: goto label_15b360;
        case 0x15b364u: goto label_15b364;
        case 0x15b368u: goto label_15b368;
        case 0x15b36cu: goto label_15b36c;
        case 0x15b370u: goto label_15b370;
        case 0x15b374u: goto label_15b374;
        case 0x15b378u: goto label_15b378;
        case 0x15b37cu: goto label_15b37c;
        case 0x15b380u: goto label_15b380;
        case 0x15b384u: goto label_15b384;
        case 0x15b388u: goto label_15b388;
        case 0x15b38cu: goto label_15b38c;
        case 0x15b390u: goto label_15b390;
        case 0x15b394u: goto label_15b394;
        case 0x15b398u: goto label_15b398;
        case 0x15b39cu: goto label_15b39c;
        case 0x15b3a0u: goto label_15b3a0;
        case 0x15b3a4u: goto label_15b3a4;
        case 0x15b3a8u: goto label_15b3a8;
        case 0x15b3acu: goto label_15b3ac;
        case 0x15b3b0u: goto label_15b3b0;
        case 0x15b3b4u: goto label_15b3b4;
        case 0x15b3b8u: goto label_15b3b8;
        case 0x15b3bcu: goto label_15b3bc;
        case 0x15b3c0u: goto label_15b3c0;
        case 0x15b3c4u: goto label_15b3c4;
        case 0x15b3c8u: goto label_15b3c8;
        case 0x15b3ccu: goto label_15b3cc;
        case 0x15b3d0u: goto label_15b3d0;
        case 0x15b3d4u: goto label_15b3d4;
        case 0x15b3d8u: goto label_15b3d8;
        case 0x15b3dcu: goto label_15b3dc;
        case 0x15b3e0u: goto label_15b3e0;
        case 0x15b3e4u: goto label_15b3e4;
        case 0x15b3e8u: goto label_15b3e8;
        case 0x15b3ecu: goto label_15b3ec;
        case 0x15b3f0u: goto label_15b3f0;
        case 0x15b3f4u: goto label_15b3f4;
        case 0x15b3f8u: goto label_15b3f8;
        case 0x15b3fcu: goto label_15b3fc;
        case 0x15b400u: goto label_15b400;
        case 0x15b404u: goto label_15b404;
        case 0x15b408u: goto label_15b408;
        case 0x15b40cu: goto label_15b40c;
        case 0x15b410u: goto label_15b410;
        case 0x15b414u: goto label_15b414;
        case 0x15b418u: goto label_15b418;
        case 0x15b41cu: goto label_15b41c;
        case 0x15b420u: goto label_15b420;
        case 0x15b424u: goto label_15b424;
        case 0x15b428u: goto label_15b428;
        default: break;
    }

    ctx->pc = 0x15afc0u;

label_15afc0:
    // 0x15afc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15afc4:
    // 0x15afc4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x15afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_15afc8:
    // 0x15afc8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15afcc:
    // 0x15afcc: 0x2463a358  addiu       $v1, $v1, -0x5CA8
    ctx->pc = 0x15afccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943576));
label_15afd0:
    // 0x15afd0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_15afd4:
    // 0x15afd4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15afd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15afd8:
    // 0x15afd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15afdc:
    // 0x15afdc: 0x26d50020  addiu       $s5, $s6, 0x20
    ctx->pc = 0x15afdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_15afe0:
    // 0x15afe0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15afe4:
    // 0x15afe4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15afe8:
    // 0x15afe8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15afe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15afec:
    // 0x15afec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15afecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15aff0:
    // 0x15aff0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x15aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_15aff4:
    // 0x15aff4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x15aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_15aff8:
    // 0x15aff8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_15affc:
    // 0x15affc: 0x96c2001e  lhu         $v0, 0x1E($s6)
    ctx->pc = 0x15affcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 30)));
label_15b000:
    // 0x15b000: 0x96c40014  lhu         $a0, 0x14($s6)
    ctx->pc = 0x15b000u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 20)));
label_15b004:
    // 0x15b004: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x15b004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_15b008:
    // 0x15b008: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x15b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_15b00c:
    // 0x15b00c: 0x30842000  andi        $a0, $a0, 0x2000
    ctx->pc = 0x15b00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_15b010:
    // 0x15b010: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x15b010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15b014:
    // 0x15b014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15b018:
    // 0x15b018: 0x8cbe0004  lw          $fp, 0x4($a1)
    ctx->pc = 0x15b018u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_15b01c:
    // 0x15b01c: 0x108000f7  beqz        $a0, . + 4 + (0xF7 << 2)
label_15b020:
    if (ctx->pc == 0x15B020u) {
        ctx->pc = 0x15B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B01Cu;
        // 0x15b020: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B024u;
        goto label_15b024;
    }
    ctx->pc = 0x15B01Cu;
    {
        const bool branch_taken_0x15b01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B01Cu;
        // 0x15b020: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b01c) {
            ctx->pc = 0x15B3FCu;
            goto label_15b3fc;
        }
    }
    ctx->pc = 0x15B024u;
label_15b024:
    // 0x15b024: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x15b024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15b028:
    // 0x15b028: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15b028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15b02c:
    // 0x15b02c: 0x2454a2b8  addiu       $s4, $v0, -0x5D48
    ctx->pc = 0x15b02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943416));
label_15b030:
    // 0x15b030: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15b030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15b034:
    // 0x15b034: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15b034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15b038:
    // 0x15b038: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15b038u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15b03c:
    // 0x15b03c: 0xc06bd28  jal         func_1AF4A0
label_15b040:
    if (ctx->pc == 0x15B040u) {
        ctx->pc = 0x15B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B03Cu;
        // 0x15b040: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B044u;
        goto label_15b044;
    }
    ctx->pc = 0x15B03Cu;
    SET_GPR_U32(ctx, 31, 0x15B044u);
    ctx->pc = 0x15B040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B03Cu;
    // 0x15b040: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15B03Cu, 0x15B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B044u;
label_15b044:
    // 0x15b044: 0xc06bd20  jal         func_1AF480
label_15b048:
    if (ctx->pc == 0x15B048u) {
        ctx->pc = 0x15B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B044u;
        // 0x15b048: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B04Cu;
        goto label_15b04c;
    }
    ctx->pc = 0x15B044u;
    SET_GPR_U32(ctx, 31, 0x15B04Cu);
    ctx->pc = 0x15B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B044u;
    // 0x15b048: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15B044u, 0x15B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B04Cu;
label_15b04c:
    // 0x15b04c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15b050:
    // 0x15b050: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15b050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15b054:
    // 0x15b054: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15b054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15b058:
    // 0x15b058: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15b05c:
    // 0x15b05c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15b060:
    // 0x15b060: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15b060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15b064:
    // 0x15b064: 0xc0682b2  jal         func_1A0AC8
label_15b068:
    if (ctx->pc == 0x15B068u) {
        ctx->pc = 0x15B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B064u;
        // 0x15b068: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B06Cu;
        goto label_15b06c;
    }
    ctx->pc = 0x15B064u;
    SET_GPR_U32(ctx, 31, 0x15B06Cu);
    ctx->pc = 0x15B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B064u;
    // 0x15b068: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15B064u, 0x15B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B06Cu;
label_15b06c:
    // 0x15b06c: 0xc0682b6  jal         func_1A0AD8
label_15b070:
    if (ctx->pc == 0x15B070u) {
        ctx->pc = 0x15B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B06Cu;
        // 0x15b070: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B074u;
        goto label_15b074;
    }
    ctx->pc = 0x15B06Cu;
    SET_GPR_U32(ctx, 31, 0x15B074u);
    ctx->pc = 0x15B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B06Cu;
    // 0x15b070: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15B06Cu, 0x15B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B074u;
label_15b074:
    // 0x15b074: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15b074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b078:
    // 0x15b078: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b07c:
    // 0x15b07c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15b080:
    // 0x15b080: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15b084:
    // 0x15b084: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15b084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15b088:
    // 0x15b088: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15b08c:
    // 0x15b08c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15b08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b090:
    // 0x15b090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15b090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b094:
    // 0x15b094: 0xc062cb0  jal         func_18B2C0
label_15b098:
    if (ctx->pc == 0x15B098u) {
        ctx->pc = 0x15B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B094u;
        // 0x15b098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B09Cu;
        goto label_15b09c;
    }
    ctx->pc = 0x15B094u;
    SET_GPR_U32(ctx, 31, 0x15B09Cu);
    ctx->pc = 0x15B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B094u;
    // 0x15b098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15B094u, 0x15B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B09Cu;
label_15b09c:
    // 0x15b09c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b0a0:
    // 0x15b0a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b0a4:
    // 0x15b0a4: 0xc06825c  jal         func_1A0970
label_15b0a8:
    if (ctx->pc == 0x15B0A8u) {
        ctx->pc = 0x15B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0A4u;
        // 0x15b0a8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0ACu;
        goto label_15b0ac;
    }
    ctx->pc = 0x15B0A4u;
    SET_GPR_U32(ctx, 31, 0x15B0ACu);
    ctx->pc = 0x15B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B0A4u;
    // 0x15b0a8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15B0A4u, 0x15B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B0ACu;
label_15b0ac:
    // 0x15b0ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b0b0:
    // 0x15b0b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b0b4:
    // 0x15b0b4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15b0b8:
    // 0x15b0b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b0bc:
    // 0x15b0bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b0c0:
    // 0x15b0c0: 0x60f809  jalr        $v1
label_15b0c4:
    if (ctx->pc == 0x15B0C4u) {
        ctx->pc = 0x15B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0C0u;
        // 0x15b0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0C8u;
        goto label_15b0c8;
    }
    ctx->pc = 0x15B0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B0C8u);
        ctx->pc = 0x15B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0C0u;
        // 0x15b0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0C0u, 0x15B0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B0C8u;
label_15b0c8:
    // 0x15b0c8: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15b0c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15b0cc:
    // 0x15b0cc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15b0d0:
    if (ctx->pc == 0x15B0D0u) {
        ctx->pc = 0x15B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0CCu;
        // 0x15b0d0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0D4u;
        goto label_15b0d4;
    }
    ctx->pc = 0x15B0CCu;
    {
        const bool branch_taken_0x15b0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0CCu;
        // 0x15b0d0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0cc) {
            ctx->pc = 0x15B188u;
            goto label_15b188;
        }
    }
    ctx->pc = 0x15B0D4u;
label_15b0d4:
    // 0x15b0d4: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15b0d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b0d8:
    // 0x15b0d8: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15b0d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15b0dc:
    // 0x15b0dc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15b0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15b0e0:
    // 0x15b0e0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15b0e4:
    // 0x15b0e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15b0e8:
    // 0x15b0e8: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15b0ec:
    // 0x15b0ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b0f0:
    // 0x15b0f0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15b0f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15b0f4:
    // 0x15b0f4: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15b0f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15b0f8:
    // 0x15b0f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b0fc:
    // 0x15b0fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b100:
    // 0x15b100: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b104:
    // 0x15b104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b108:
    // 0x15b108: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15b108u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15b10c:
    // 0x15b10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b110:
    // 0x15b110: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15b114:
    // 0x15b114: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15b114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15b118:
    // 0x15b118: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15b118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15b11c:
    // 0x15b11c: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15b11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15b120:
    // 0x15b120: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15b120u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15b124:
    // 0x15b124: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15b124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15b128:
    // 0x15b128: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15b128u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15b12c:
    // 0x15b12c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15b12cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b130:
    // 0x15b130: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15b130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b134:
    // 0x15b134: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b138:
    // 0x15b138: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b13c:
    // 0x15b13c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b13cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b140:
    // 0x15b140: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b140u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b144:
    // 0x15b144: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b144u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b148:
    // 0x15b148: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15b148u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15b14c:
    // 0x15b14c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15b14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15b150:
    // 0x15b150: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15b154:
    // 0x15b154: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15b154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15b158:
    // 0x15b158: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b15c:
    // 0x15b15c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15b15cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b160:
    // 0x15b160: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b164:
    // 0x15b164: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b168:
    // 0x15b168: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b168u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b16c:
    // 0x15b16c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b16cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b170:
    // 0x15b170: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b170u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b174:
    // 0x15b174: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15b174u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15b178:
    // 0x15b178: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15b17c:
    // 0x15b17c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15b17cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15b180:
    // 0x15b180: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15b180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15b184:
    // 0x15b184: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b184u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15b188:
    // 0x15b188: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b18c:
    // 0x15b18c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15b190:
    // 0x15b190: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b194:
    // 0x15b194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b198:
    // 0x15b198: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15b19c:
    // 0x15b19c: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15b1a0:
    // 0x15b1a0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15b1a4:
    // 0x15b1a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15b1a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15b1a8:
    // 0x15b1a8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15b1ac:
    // 0x15b1ac: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15b1b0:
    // 0x15b1b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15b1b4:
    // 0x15b1b4: 0x40f809  jalr        $v0
label_15b1b8:
    if (ctx->pc == 0x15B1B8u) {
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1BCu;
        goto label_15b1bc;
    }
    ctx->pc = 0x15B1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B1BCu);
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B1B4u, 0x15B1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B1BCu;
label_15b1bc:
    // 0x15b1bc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b1c0:
    // 0x15b1c0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15b1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15b1c4:
    // 0x15b1c4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15b1c8:
    // 0x15b1c8: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b1cc:
    // 0x15b1cc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15b1ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15b1d0:
    // 0x15b1d0: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x15b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_15b1d4:
    // 0x15b1d4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15b1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15b1d8:
    // 0x15b1d8: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_15b1dc:
    // 0x15b1dc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15b1e0:
    // 0x15b1e0: 0xe0f809  jalr        $a3
label_15b1e4:
    if (ctx->pc == 0x15B1E4u) {
        ctx->pc = 0x15B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1E0u;
        // 0x15b1e4: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1E8u;
        goto label_15b1e8;
    }
    ctx->pc = 0x15B1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15B1E8u);
        ctx->pc = 0x15B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1E0u;
        // 0x15b1e4: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B1E0u, 0x15B1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B1E8u;
label_15b1e8:
    // 0x15b1e8: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x15b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15b1ec:
    // 0x15b1ec: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15b1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15b1f0:
    // 0x15b1f0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15b1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15b1f4:
    // 0x15b1f4: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15b1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15b1f8:
    // 0x15b1f8: 0xc06bd28  jal         func_1AF4A0
label_15b1fc:
    if (ctx->pc == 0x15B1FCu) {
        ctx->pc = 0x15B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1F8u;
        // 0x15b1fc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B200u;
        goto label_15b200;
    }
    ctx->pc = 0x15B1F8u;
    SET_GPR_U32(ctx, 31, 0x15B200u);
    ctx->pc = 0x15B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B1F8u;
    // 0x15b1fc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15B1F8u, 0x15B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B200u;
label_15b200:
    // 0x15b200: 0xc06bd20  jal         func_1AF480
label_15b204:
    if (ctx->pc == 0x15B204u) {
        ctx->pc = 0x15B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B200u;
        // 0x15b204: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B208u;
        goto label_15b208;
    }
    ctx->pc = 0x15B200u;
    SET_GPR_U32(ctx, 31, 0x15B208u);
    ctx->pc = 0x15B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B200u;
    // 0x15b204: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15B200u, 0x15B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B208u;
label_15b208:
    // 0x15b208: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15b20c:
    // 0x15b20c: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15b20cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15b210:
    // 0x15b210: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15b214:
    // 0x15b214: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15b218:
    // 0x15b218: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15b218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15b21c:
    // 0x15b21c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15b21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15b220:
    // 0x15b220: 0xc0682b2  jal         func_1A0AC8
label_15b224:
    if (ctx->pc == 0x15B224u) {
        ctx->pc = 0x15B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B220u;
        // 0x15b224: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B228u;
        goto label_15b228;
    }
    ctx->pc = 0x15B220u;
    SET_GPR_U32(ctx, 31, 0x15B228u);
    ctx->pc = 0x15B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B220u;
    // 0x15b224: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15B220u, 0x15B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B228u;
label_15b228:
    // 0x15b228: 0xc0682b6  jal         func_1A0AD8
label_15b22c:
    if (ctx->pc == 0x15B22Cu) {
        ctx->pc = 0x15B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B228u;
        // 0x15b22c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B230u;
        goto label_15b230;
    }
    ctx->pc = 0x15B228u;
    SET_GPR_U32(ctx, 31, 0x15B230u);
    ctx->pc = 0x15B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B228u;
    // 0x15b22c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15B228u, 0x15B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B230u;
label_15b230:
    // 0x15b230: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x15b230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_15b234:
    // 0x15b234: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b238:
    // 0x15b238: 0x24c601c0  addiu       $a2, $a2, 0x1C0
    ctx->pc = 0x15b238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
label_15b23c:
    // 0x15b23c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15b23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15b240:
    // 0x15b240: 0xae46000c  sw          $a2, 0xC($s2)
    ctx->pc = 0x15b240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
label_15b244:
    // 0x15b244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b248:
    // 0x15b248: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15b248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b24c:
    // 0x15b24c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15b24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b250:
    // 0x15b250: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15b250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b254:
    // 0x15b254: 0xc062cb0  jal         func_18B2C0
label_15b258:
    if (ctx->pc == 0x15B258u) {
        ctx->pc = 0x15B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B254u;
        // 0x15b258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B25Cu;
        goto label_15b25c;
    }
    ctx->pc = 0x15B254u;
    SET_GPR_U32(ctx, 31, 0x15B25Cu);
    ctx->pc = 0x15B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B254u;
    // 0x15b258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15B254u, 0x15B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B25Cu;
label_15b25c:
    // 0x15b25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b260:
    // 0x15b260: 0xc06825c  jal         func_1A0970
label_15b264:
    if (ctx->pc == 0x15B264u) {
        ctx->pc = 0x15B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B260u;
        // 0x15b264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B268u;
        goto label_15b268;
    }
    ctx->pc = 0x15B260u;
    SET_GPR_U32(ctx, 31, 0x15B268u);
    ctx->pc = 0x15B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B260u;
    // 0x15b264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15B260u, 0x15B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B268u;
label_15b268:
    // 0x15b268: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b26c:
    // 0x15b26c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b270:
    // 0x15b270: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15b274:
    // 0x15b274: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b278:
    // 0x15b278: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b27c:
    // 0x15b27c: 0x60f809  jalr        $v1
label_15b280:
    if (ctx->pc == 0x15B280u) {
        ctx->pc = 0x15B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B27Cu;
        // 0x15b280: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B284u;
        goto label_15b284;
    }
    ctx->pc = 0x15B27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B284u);
        ctx->pc = 0x15B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B27Cu;
        // 0x15b280: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B27Cu, 0x15B284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B284u;
label_15b284:
    // 0x15b284: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15b284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15b288:
    // 0x15b288: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15b28c:
    if (ctx->pc == 0x15B28Cu) {
        ctx->pc = 0x15B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B288u;
        // 0x15b28c: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B290u;
        goto label_15b290;
    }
    ctx->pc = 0x15B288u;
    {
        const bool branch_taken_0x15b288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B288u;
        // 0x15b28c: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b288) {
            ctx->pc = 0x15B344u;
            goto label_15b344;
        }
    }
    ctx->pc = 0x15B290u;
label_15b290:
    // 0x15b290: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15b290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b294:
    // 0x15b294: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15b294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15b298:
    // 0x15b298: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15b298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15b29c:
    // 0x15b29c: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15b2a0:
    // 0x15b2a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15b2a4:
    // 0x15b2a4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15b2a8:
    // 0x15b2a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15b2ac:
    // 0x15b2ac: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15b2acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15b2b0:
    // 0x15b2b0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15b2b4:
    // 0x15b2b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15b2b8:
    // 0x15b2b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b2bc:
    // 0x15b2bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15b2c0:
    // 0x15b2c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15b2c4:
    // 0x15b2c4: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15b2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15b2c8:
    // 0x15b2c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15b2cc:
    // 0x15b2cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15b2d0:
    // 0x15b2d0: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15b2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15b2d4:
    // 0x15b2d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15b2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15b2d8:
    // 0x15b2d8: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15b2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15b2dc:
    // 0x15b2dc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15b2dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15b2e0:
    // 0x15b2e0: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15b2e4:
    // 0x15b2e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15b2e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15b2e8:
    // 0x15b2e8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15b2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b2ec:
    // 0x15b2ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15b2ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b2f0:
    // 0x15b2f0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b2f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b2f4:
    // 0x15b2f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b2f8:
    // 0x15b2f8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b2f8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b2fc:
    // 0x15b2fc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b2fcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b300:
    // 0x15b300: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b300u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b304:
    // 0x15b304: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15b304u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15b308:
    // 0x15b308: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15b308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15b30c:
    // 0x15b30c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15b310:
    // 0x15b310: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15b314:
    // 0x15b314: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15b314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15b318:
    // 0x15b318: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15b318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15b31c:
    // 0x15b31c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15b31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15b320:
    // 0x15b320: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15b324:
    // 0x15b324: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15b324u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15b328:
    // 0x15b328: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15b328u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15b32c:
    // 0x15b32c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15b32cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15b330:
    // 0x15b330: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15b330u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15b334:
    // 0x15b334: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b334u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15b338:
    // 0x15b338: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15b338u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15b33c:
    // 0x15b33c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15b33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15b340:
    // 0x15b340: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15b340u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15b344:
    // 0x15b344: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15b344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b348:
    // 0x15b348: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15b34c:
    // 0x15b34c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b350:
    // 0x15b350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b354:
    // 0x15b354: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15b358:
    // 0x15b358: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15b35c:
    // 0x15b35c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15b360:
    // 0x15b360: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b364:
    // 0x15b364: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x15b364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
label_15b368:
    // 0x15b368: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b36c:
    // 0x15b36c: 0x60f809  jalr        $v1
label_15b370:
    if (ctx->pc == 0x15B370u) {
        ctx->pc = 0x15B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B36Cu;
        // 0x15b370: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B374u;
        goto label_15b374;
    }
    ctx->pc = 0x15B36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B374u);
        ctx->pc = 0x15B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B36Cu;
        // 0x15b370: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B36Cu, 0x15B374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B374u;
label_15b374:
    // 0x15b374: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b378:
    // 0x15b378: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15b37c:
    // 0x15b37c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15b380:
    // 0x15b380: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15b380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15b384:
    // 0x15b384: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b388:
    // 0x15b388: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x15b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_15b38c:
    // 0x15b38c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b390:
    // 0x15b390: 0x3c63021  addu        $a2, $fp, $a2
    ctx->pc = 0x15b390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_15b394:
    // 0x15b394: 0x60f809  jalr        $v1
label_15b398:
    if (ctx->pc == 0x15B398u) {
        ctx->pc = 0x15B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B394u;
        // 0x15b398: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B39Cu;
        goto label_15b39c;
    }
    ctx->pc = 0x15B394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B39Cu);
        ctx->pc = 0x15B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B394u;
        // 0x15b398: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B394u, 0x15B39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B39Cu;
label_15b39c:
    // 0x15b39c: 0x8690000c  lh          $s0, 0xC($s4)
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15b3a0:
    // 0x15b3a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15b3a4:
    // 0x15b3a4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_15b3a8:
    // 0x15b3a8: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x15b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_15b3ac:
    // 0x15b3ac: 0x24a5a2a8  addiu       $a1, $a1, -0x5D58
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943400));
label_15b3b0:
    // 0x15b3b0: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15b3b4:
    // 0x15b3b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b3b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b3b8:
    // 0x15b3b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b3bc:
    // 0x15b3bc: 0x60f809  jalr        $v1
label_15b3c0:
    if (ctx->pc == 0x15B3C0u) {
        ctx->pc = 0x15B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3BCu;
        // 0x15b3c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3C4u;
        goto label_15b3c4;
    }
    ctx->pc = 0x15B3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B3C4u);
        ctx->pc = 0x15B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3BCu;
        // 0x15b3c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B3BCu, 0x15B3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B3C4u;
label_15b3c4:
    // 0x15b3c4: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x15b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_15b3c8:
    // 0x15b3c8: 0x96c20016  lhu         $v0, 0x16($s6)
    ctx->pc = 0x15b3c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
label_15b3cc:
    // 0x15b3cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15b3d0:
    // 0x15b3d0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x15b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15b3d4:
    // 0x15b3d4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15b3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15b3d8:
    // 0x15b3d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b3dc:
    // 0x15b3dc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x15b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_15b3e0:
    // 0x15b3e0: 0xaea60018  sw          $a2, 0x18($s5)
    ctx->pc = 0x15b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 6));
label_15b3e4:
    // 0x15b3e4: 0xa6c20016  sh          $v0, 0x16($s6)
    ctx->pc = 0x15b3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 22), (uint16_t)GPR_U32(ctx, 2));
label_15b3e8:
    // 0x15b3e8: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x15b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_15b3ec:
    // 0x15b3ec: 0xaea40030  sw          $a0, 0x30($s5)
    ctx->pc = 0x15b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 4));
label_15b3f0:
    // 0x15b3f0: 0xaea50028  sw          $a1, 0x28($s5)
    ctx->pc = 0x15b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 5));
label_15b3f4:
    // 0x15b3f4: 0xaeb00014  sw          $s0, 0x14($s5)
    ctx->pc = 0x15b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 16));
label_15b3f8:
    // 0x15b3f8: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x15b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_15b3fc:
    // 0x15b3fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15b3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15b400:
    // 0x15b400: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15b400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15b404:
    // 0x15b404: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15b404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15b408:
    // 0x15b408: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15b408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15b40c:
    // 0x15b40c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15b40cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15b410:
    // 0x15b410: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15b410u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15b414:
    // 0x15b414: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15b414u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15b418:
    // 0x15b418: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x15b418u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15b41c:
    // 0x15b41c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x15b41cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15b420:
    // 0x15b420: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15b420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15b424:
    // 0x15b424: 0x3e00008  jr          $ra
label_15b428:
    if (ctx->pc == 0x15B428u) {
        ctx->pc = 0x15B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B424u;
        // 0x15b428: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B42Cu;
        goto label_fallthrough_0x15b424;
    }
    ctx->pc = 0x15B424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B424u;
        // 0x15b428: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b424:
    ctx->pc = 0x15B42Cu;
}

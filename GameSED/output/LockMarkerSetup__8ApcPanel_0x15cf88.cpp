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

// Function: LockMarkerSetup__8ApcPanel
// Address: 0x15cf88 - 0x15d330
void LockMarkerSetup__8ApcPanel_0x15cf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LockMarkerSetup__8ApcPanel_0x15cf88");
#endif

    switch (ctx->pc) {
        case 0x15cf88u: goto label_15cf88;
        case 0x15cf8cu: goto label_15cf8c;
        case 0x15cf90u: goto label_15cf90;
        case 0x15cf94u: goto label_15cf94;
        case 0x15cf98u: goto label_15cf98;
        case 0x15cf9cu: goto label_15cf9c;
        case 0x15cfa0u: goto label_15cfa0;
        case 0x15cfa4u: goto label_15cfa4;
        case 0x15cfa8u: goto label_15cfa8;
        case 0x15cfacu: goto label_15cfac;
        case 0x15cfb0u: goto label_15cfb0;
        case 0x15cfb4u: goto label_15cfb4;
        case 0x15cfb8u: goto label_15cfb8;
        case 0x15cfbcu: goto label_15cfbc;
        case 0x15cfc0u: goto label_15cfc0;
        case 0x15cfc4u: goto label_15cfc4;
        case 0x15cfc8u: goto label_15cfc8;
        case 0x15cfccu: goto label_15cfcc;
        case 0x15cfd0u: goto label_15cfd0;
        case 0x15cfd4u: goto label_15cfd4;
        case 0x15cfd8u: goto label_15cfd8;
        case 0x15cfdcu: goto label_15cfdc;
        case 0x15cfe0u: goto label_15cfe0;
        case 0x15cfe4u: goto label_15cfe4;
        case 0x15cfe8u: goto label_15cfe8;
        case 0x15cfecu: goto label_15cfec;
        case 0x15cff0u: goto label_15cff0;
        case 0x15cff4u: goto label_15cff4;
        case 0x15cff8u: goto label_15cff8;
        case 0x15cffcu: goto label_15cffc;
        case 0x15d000u: goto label_15d000;
        case 0x15d004u: goto label_15d004;
        case 0x15d008u: goto label_15d008;
        case 0x15d00cu: goto label_15d00c;
        case 0x15d010u: goto label_15d010;
        case 0x15d014u: goto label_15d014;
        case 0x15d018u: goto label_15d018;
        case 0x15d01cu: goto label_15d01c;
        case 0x15d020u: goto label_15d020;
        case 0x15d024u: goto label_15d024;
        case 0x15d028u: goto label_15d028;
        case 0x15d02cu: goto label_15d02c;
        case 0x15d030u: goto label_15d030;
        case 0x15d034u: goto label_15d034;
        case 0x15d038u: goto label_15d038;
        case 0x15d03cu: goto label_15d03c;
        case 0x15d040u: goto label_15d040;
        case 0x15d044u: goto label_15d044;
        case 0x15d048u: goto label_15d048;
        case 0x15d04cu: goto label_15d04c;
        case 0x15d050u: goto label_15d050;
        case 0x15d054u: goto label_15d054;
        case 0x15d058u: goto label_15d058;
        case 0x15d05cu: goto label_15d05c;
        case 0x15d060u: goto label_15d060;
        case 0x15d064u: goto label_15d064;
        case 0x15d068u: goto label_15d068;
        case 0x15d06cu: goto label_15d06c;
        case 0x15d070u: goto label_15d070;
        case 0x15d074u: goto label_15d074;
        case 0x15d078u: goto label_15d078;
        case 0x15d07cu: goto label_15d07c;
        case 0x15d080u: goto label_15d080;
        case 0x15d084u: goto label_15d084;
        case 0x15d088u: goto label_15d088;
        case 0x15d08cu: goto label_15d08c;
        case 0x15d090u: goto label_15d090;
        case 0x15d094u: goto label_15d094;
        case 0x15d098u: goto label_15d098;
        case 0x15d09cu: goto label_15d09c;
        case 0x15d0a0u: goto label_15d0a0;
        case 0x15d0a4u: goto label_15d0a4;
        case 0x15d0a8u: goto label_15d0a8;
        case 0x15d0acu: goto label_15d0ac;
        case 0x15d0b0u: goto label_15d0b0;
        case 0x15d0b4u: goto label_15d0b4;
        case 0x15d0b8u: goto label_15d0b8;
        case 0x15d0bcu: goto label_15d0bc;
        case 0x15d0c0u: goto label_15d0c0;
        case 0x15d0c4u: goto label_15d0c4;
        case 0x15d0c8u: goto label_15d0c8;
        case 0x15d0ccu: goto label_15d0cc;
        case 0x15d0d0u: goto label_15d0d0;
        case 0x15d0d4u: goto label_15d0d4;
        case 0x15d0d8u: goto label_15d0d8;
        case 0x15d0dcu: goto label_15d0dc;
        case 0x15d0e0u: goto label_15d0e0;
        case 0x15d0e4u: goto label_15d0e4;
        case 0x15d0e8u: goto label_15d0e8;
        case 0x15d0ecu: goto label_15d0ec;
        case 0x15d0f0u: goto label_15d0f0;
        case 0x15d0f4u: goto label_15d0f4;
        case 0x15d0f8u: goto label_15d0f8;
        case 0x15d0fcu: goto label_15d0fc;
        case 0x15d100u: goto label_15d100;
        case 0x15d104u: goto label_15d104;
        case 0x15d108u: goto label_15d108;
        case 0x15d10cu: goto label_15d10c;
        case 0x15d110u: goto label_15d110;
        case 0x15d114u: goto label_15d114;
        case 0x15d118u: goto label_15d118;
        case 0x15d11cu: goto label_15d11c;
        case 0x15d120u: goto label_15d120;
        case 0x15d124u: goto label_15d124;
        case 0x15d128u: goto label_15d128;
        case 0x15d12cu: goto label_15d12c;
        case 0x15d130u: goto label_15d130;
        case 0x15d134u: goto label_15d134;
        case 0x15d138u: goto label_15d138;
        case 0x15d13cu: goto label_15d13c;
        case 0x15d140u: goto label_15d140;
        case 0x15d144u: goto label_15d144;
        case 0x15d148u: goto label_15d148;
        case 0x15d14cu: goto label_15d14c;
        case 0x15d150u: goto label_15d150;
        case 0x15d154u: goto label_15d154;
        case 0x15d158u: goto label_15d158;
        case 0x15d15cu: goto label_15d15c;
        case 0x15d160u: goto label_15d160;
        case 0x15d164u: goto label_15d164;
        case 0x15d168u: goto label_15d168;
        case 0x15d16cu: goto label_15d16c;
        case 0x15d170u: goto label_15d170;
        case 0x15d174u: goto label_15d174;
        case 0x15d178u: goto label_15d178;
        case 0x15d17cu: goto label_15d17c;
        case 0x15d180u: goto label_15d180;
        case 0x15d184u: goto label_15d184;
        case 0x15d188u: goto label_15d188;
        case 0x15d18cu: goto label_15d18c;
        case 0x15d190u: goto label_15d190;
        case 0x15d194u: goto label_15d194;
        case 0x15d198u: goto label_15d198;
        case 0x15d19cu: goto label_15d19c;
        case 0x15d1a0u: goto label_15d1a0;
        case 0x15d1a4u: goto label_15d1a4;
        case 0x15d1a8u: goto label_15d1a8;
        case 0x15d1acu: goto label_15d1ac;
        case 0x15d1b0u: goto label_15d1b0;
        case 0x15d1b4u: goto label_15d1b4;
        case 0x15d1b8u: goto label_15d1b8;
        case 0x15d1bcu: goto label_15d1bc;
        case 0x15d1c0u: goto label_15d1c0;
        case 0x15d1c4u: goto label_15d1c4;
        case 0x15d1c8u: goto label_15d1c8;
        case 0x15d1ccu: goto label_15d1cc;
        case 0x15d1d0u: goto label_15d1d0;
        case 0x15d1d4u: goto label_15d1d4;
        case 0x15d1d8u: goto label_15d1d8;
        case 0x15d1dcu: goto label_15d1dc;
        case 0x15d1e0u: goto label_15d1e0;
        case 0x15d1e4u: goto label_15d1e4;
        case 0x15d1e8u: goto label_15d1e8;
        case 0x15d1ecu: goto label_15d1ec;
        case 0x15d1f0u: goto label_15d1f0;
        case 0x15d1f4u: goto label_15d1f4;
        case 0x15d1f8u: goto label_15d1f8;
        case 0x15d1fcu: goto label_15d1fc;
        case 0x15d200u: goto label_15d200;
        case 0x15d204u: goto label_15d204;
        case 0x15d208u: goto label_15d208;
        case 0x15d20cu: goto label_15d20c;
        case 0x15d210u: goto label_15d210;
        case 0x15d214u: goto label_15d214;
        case 0x15d218u: goto label_15d218;
        case 0x15d21cu: goto label_15d21c;
        case 0x15d220u: goto label_15d220;
        case 0x15d224u: goto label_15d224;
        case 0x15d228u: goto label_15d228;
        case 0x15d22cu: goto label_15d22c;
        case 0x15d230u: goto label_15d230;
        case 0x15d234u: goto label_15d234;
        case 0x15d238u: goto label_15d238;
        case 0x15d23cu: goto label_15d23c;
        case 0x15d240u: goto label_15d240;
        case 0x15d244u: goto label_15d244;
        case 0x15d248u: goto label_15d248;
        case 0x15d24cu: goto label_15d24c;
        case 0x15d250u: goto label_15d250;
        case 0x15d254u: goto label_15d254;
        case 0x15d258u: goto label_15d258;
        case 0x15d25cu: goto label_15d25c;
        case 0x15d260u: goto label_15d260;
        case 0x15d264u: goto label_15d264;
        case 0x15d268u: goto label_15d268;
        case 0x15d26cu: goto label_15d26c;
        case 0x15d270u: goto label_15d270;
        case 0x15d274u: goto label_15d274;
        case 0x15d278u: goto label_15d278;
        case 0x15d27cu: goto label_15d27c;
        case 0x15d280u: goto label_15d280;
        case 0x15d284u: goto label_15d284;
        case 0x15d288u: goto label_15d288;
        case 0x15d28cu: goto label_15d28c;
        case 0x15d290u: goto label_15d290;
        case 0x15d294u: goto label_15d294;
        case 0x15d298u: goto label_15d298;
        case 0x15d29cu: goto label_15d29c;
        case 0x15d2a0u: goto label_15d2a0;
        case 0x15d2a4u: goto label_15d2a4;
        case 0x15d2a8u: goto label_15d2a8;
        case 0x15d2acu: goto label_15d2ac;
        case 0x15d2b0u: goto label_15d2b0;
        case 0x15d2b4u: goto label_15d2b4;
        case 0x15d2b8u: goto label_15d2b8;
        case 0x15d2bcu: goto label_15d2bc;
        case 0x15d2c0u: goto label_15d2c0;
        case 0x15d2c4u: goto label_15d2c4;
        case 0x15d2c8u: goto label_15d2c8;
        case 0x15d2ccu: goto label_15d2cc;
        case 0x15d2d0u: goto label_15d2d0;
        case 0x15d2d4u: goto label_15d2d4;
        case 0x15d2d8u: goto label_15d2d8;
        case 0x15d2dcu: goto label_15d2dc;
        case 0x15d2e0u: goto label_15d2e0;
        case 0x15d2e4u: goto label_15d2e4;
        case 0x15d2e8u: goto label_15d2e8;
        case 0x15d2ecu: goto label_15d2ec;
        case 0x15d2f0u: goto label_15d2f0;
        case 0x15d2f4u: goto label_15d2f4;
        case 0x15d2f8u: goto label_15d2f8;
        case 0x15d2fcu: goto label_15d2fc;
        case 0x15d300u: goto label_15d300;
        case 0x15d304u: goto label_15d304;
        case 0x15d308u: goto label_15d308;
        case 0x15d30cu: goto label_15d30c;
        case 0x15d310u: goto label_15d310;
        case 0x15d314u: goto label_15d314;
        case 0x15d318u: goto label_15d318;
        case 0x15d31cu: goto label_15d31c;
        case 0x15d320u: goto label_15d320;
        case 0x15d324u: goto label_15d324;
        case 0x15d328u: goto label_15d328;
        case 0x15d32cu: goto label_15d32c;
        default: break;
    }

    ctx->pc = 0x15cf88u;

label_15cf88:
    // 0x15cf88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15cf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15cf8c:
    // 0x15cf8c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15cf90:
    // 0x15cf90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15cf94:
    // 0x15cf94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15cf98:
    // 0x15cf98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15cf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_15cf9c:
    // 0x15cf9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15cf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_15cfa0:
    // 0x15cfa0: 0x2454a498  addiu       $s4, $v0, -0x5B68
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943896));
label_15cfa4:
    // 0x15cfa4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_15cfa8:
    // 0x15cfa8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15cfa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15cfac:
    // 0x15cfac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15cfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_15cfb0:
    // 0x15cfb0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15cfb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15cfb4:
    // 0x15cfb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15cfb8:
    // 0x15cfb8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x15cfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_15cfbc:
    // 0x15cfbc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15cfc0:
    // 0x15cfc0: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15cfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15cfc4:
    // 0x15cfc4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15cfc8:
    // 0x15cfc8: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15cfcc:
    // 0x15cfcc: 0xc06bd28  jal         func_1AF4A0
label_15cfd0:
    if (ctx->pc == 0x15CFD0u) {
        ctx->pc = 0x15CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFCCu;
        // 0x15cfd0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFD4u;
        goto label_15cfd4;
    }
    ctx->pc = 0x15CFCCu;
    SET_GPR_U32(ctx, 31, 0x15CFD4u);
    ctx->pc = 0x15CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFCCu;
    // 0x15cfd0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15CFCCu, 0x15CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFD4u;
label_15cfd4:
    // 0x15cfd4: 0xc06bd20  jal         func_1AF480
label_15cfd8:
    if (ctx->pc == 0x15CFD8u) {
        ctx->pc = 0x15CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFD4u;
        // 0x15cfd8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFDCu;
        goto label_15cfdc;
    }
    ctx->pc = 0x15CFD4u;
    SET_GPR_U32(ctx, 31, 0x15CFDCu);
    ctx->pc = 0x15CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFD4u;
    // 0x15cfd8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15CFD4u, 0x15CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFDCu;
label_15cfdc:
    // 0x15cfdc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15cfe0:
    // 0x15cfe0: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15cfe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15cfe4:
    // 0x15cfe4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15cfe8:
    // 0x15cfe8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15cfec:
    // 0x15cfec: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15cff0:
    // 0x15cff0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15cff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15cff4:
    // 0x15cff4: 0xc0682b2  jal         func_1A0AC8
label_15cff8:
    if (ctx->pc == 0x15CFF8u) {
        ctx->pc = 0x15CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFF4u;
        // 0x15cff8: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFFCu;
        goto label_15cffc;
    }
    ctx->pc = 0x15CFF4u;
    SET_GPR_U32(ctx, 31, 0x15CFFCu);
    ctx->pc = 0x15CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFF4u;
    // 0x15cff8: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15CFF4u, 0x15CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFFCu;
label_15cffc:
    // 0x15cffc: 0xc0682b6  jal         func_1A0AD8
label_15d000:
    if (ctx->pc == 0x15D000u) {
        ctx->pc = 0x15D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFFCu;
        // 0x15d000: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D004u;
        goto label_15d004;
    }
    ctx->pc = 0x15CFFCu;
    SET_GPR_U32(ctx, 31, 0x15D004u);
    ctx->pc = 0x15D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFFCu;
    // 0x15d000: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15CFFCu, 0x15D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D004u;
label_15d004:
    // 0x15d004: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15d004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d008:
    // 0x15d008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15d008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d00c:
    // 0x15d00c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15d010:
    // 0x15d010: 0x245601c0  addiu       $s6, $v0, 0x1C0
    ctx->pc = 0x15d010u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15d014:
    // 0x15d014: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15d014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15d018:
    // 0x15d018: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15d018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15d01c:
    // 0x15d01c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15d01cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d020:
    // 0x15d020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15d020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d024:
    // 0x15d024: 0xc062cb0  jal         func_18B2C0
label_15d028:
    if (ctx->pc == 0x15D028u) {
        ctx->pc = 0x15D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D024u;
        // 0x15d028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D02Cu;
        goto label_15d02c;
    }
    ctx->pc = 0x15D024u;
    SET_GPR_U32(ctx, 31, 0x15D02Cu);
    ctx->pc = 0x15D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D024u;
    // 0x15d028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15D024u, 0x15D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D02Cu;
label_15d02c:
    // 0x15d02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d030:
    // 0x15d030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d034:
    // 0x15d034: 0xc06825c  jal         func_1A0970
label_15d038:
    if (ctx->pc == 0x15D038u) {
        ctx->pc = 0x15D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D034u;
        // 0x15d038: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D03Cu;
        goto label_15d03c;
    }
    ctx->pc = 0x15D034u;
    SET_GPR_U32(ctx, 31, 0x15D03Cu);
    ctx->pc = 0x15D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D034u;
    // 0x15d038: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15D034u, 0x15D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D03Cu;
label_15d03c:
    // 0x15d03c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d040:
    // 0x15d040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d044:
    // 0x15d044: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15d048:
    // 0x15d048: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d04c:
    // 0x15d04c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d050:
    // 0x15d050: 0x60f809  jalr        $v1
label_15d054:
    if (ctx->pc == 0x15D054u) {
        ctx->pc = 0x15D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D050u;
        // 0x15d054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D058u;
        goto label_15d058;
    }
    ctx->pc = 0x15D050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D058u);
        ctx->pc = 0x15D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D050u;
        // 0x15d054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D050u, 0x15D058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D058u;
label_15d058:
    // 0x15d058: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15d058u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15d05c:
    // 0x15d05c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15d060:
    if (ctx->pc == 0x15D060u) {
        ctx->pc = 0x15D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D05Cu;
        // 0x15d060: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D064u;
        goto label_15d064;
    }
    ctx->pc = 0x15D05Cu;
    {
        const bool branch_taken_0x15d05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D05Cu;
        // 0x15d060: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d05c) {
            ctx->pc = 0x15D118u;
            goto label_15d118;
        }
    }
    ctx->pc = 0x15D064u;
label_15d064:
    // 0x15d064: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15d064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d068:
    // 0x15d068: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15d068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15d06c:
    // 0x15d06c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d070:
    // 0x15d070: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15d070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15d074:
    // 0x15d074: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15d074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15d078:
    // 0x15d078: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15d078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15d07c:
    // 0x15d07c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15d080:
    // 0x15d080: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15d080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15d084:
    // 0x15d084: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15d084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15d088:
    // 0x15d088: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15d08c:
    // 0x15d08c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d090:
    // 0x15d090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d094:
    // 0x15d094: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d098:
    // 0x15d098: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15d098u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15d09c:
    // 0x15d09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d0a0:
    // 0x15d0a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d0a4:
    // 0x15d0a4: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15d0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15d0a8:
    // 0x15d0a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15d0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15d0ac:
    // 0x15d0ac: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15d0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15d0b0:
    // 0x15d0b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15d0b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15d0b4:
    // 0x15d0b4: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15d0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15d0b8:
    // 0x15d0b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15d0b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15d0bc:
    // 0x15d0bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15d0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d0c0:
    // 0x15d0c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d0c4:
    // 0x15d0c4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d0c8:
    // 0x15d0c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d0cc:
    // 0x15d0cc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d0ccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d0d0:
    // 0x15d0d0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d0d0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d0d4:
    // 0x15d0d4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d0d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d0d8:
    // 0x15d0d8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15d0dc:
    // 0x15d0dc: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15d0e0:
    // 0x15d0e0: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d0e4:
    // 0x15d0e4: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d0e8:
    // 0x15d0e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15d0e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d0ec:
    // 0x15d0ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15d0ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d0f0:
    // 0x15d0f0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d0f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d0f4:
    // 0x15d0f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d0f8:
    // 0x15d0f8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d0f8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d0fc:
    // 0x15d0fc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d0fcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d100:
    // 0x15d100: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d100u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d104:
    // 0x15d104: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15d104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15d108:
    // 0x15d108: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15d10c:
    // 0x15d10c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15d10cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15d110:
    // 0x15d110: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15d110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15d114:
    // 0x15d114: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d114u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15d118:
    // 0x15d118: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15d118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d11c:
    // 0x15d11c: 0x3c170800  lui         $s7, 0x800
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2048 << 16));
label_15d120:
    // 0x15d120: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d124:
    // 0x15d124: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_15d128:
    // 0x15d128: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15d12c:
    // 0x15d12c: 0x26940028  addiu       $s4, $s4, 0x28
    ctx->pc = 0x15d12cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_15d130:
    // 0x15d130: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x15d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
label_15d134:
    // 0x15d134: 0xaeb00164  sw          $s0, 0x164($s5)
    ctx->pc = 0x15d134u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 356), GPR_U32(ctx, 16));
label_15d138:
    // 0x15d138: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15d138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15d13c:
    // 0x15d13c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x15d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_15d140:
    // 0x15d140: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x15d140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_15d144:
    // 0x15d144: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15d144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15d148:
    // 0x15d148: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15d14c:
    // 0x15d14c: 0x40f809  jalr        $v0
label_15d150:
    if (ctx->pc == 0x15D150u) {
        ctx->pc = 0x15D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D14Cu;
        // 0x15d150: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D154u;
        goto label_15d154;
    }
    ctx->pc = 0x15D14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D154u);
        ctx->pc = 0x15D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D14Cu;
        // 0x15d150: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D14Cu, 0x15D154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D154u;
label_15d154:
    // 0x15d154: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15d154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15d158:
    // 0x15d158: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15d158u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15d15c:
    // 0x15d15c: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x15d15cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15d160:
    // 0x15d160: 0xc06bd28  jal         func_1AF4A0
label_15d164:
    if (ctx->pc == 0x15D164u) {
        ctx->pc = 0x15D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D160u;
        // 0x15d164: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D168u;
        goto label_15d168;
    }
    ctx->pc = 0x15D160u;
    SET_GPR_U32(ctx, 31, 0x15D168u);
    ctx->pc = 0x15D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D160u;
    // 0x15d164: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15D160u, 0x15D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D168u;
label_15d168:
    // 0x15d168: 0xc06bd20  jal         func_1AF480
label_15d16c:
    if (ctx->pc == 0x15D16Cu) {
        ctx->pc = 0x15D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D168u;
        // 0x15d16c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D170u;
        goto label_15d170;
    }
    ctx->pc = 0x15D168u;
    SET_GPR_U32(ctx, 31, 0x15D170u);
    ctx->pc = 0x15D16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D168u;
    // 0x15d16c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15D168u, 0x15D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D170u;
label_15d170:
    // 0x15d170: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15d170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15d174:
    // 0x15d174: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15d174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15d178:
    // 0x15d178: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15d17c:
    // 0x15d17c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d180:
    // 0x15d180: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15d184:
    // 0x15d184: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15d184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15d188:
    // 0x15d188: 0xc0682b2  jal         func_1A0AC8
label_15d18c:
    if (ctx->pc == 0x15D18Cu) {
        ctx->pc = 0x15D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D188u;
        // 0x15d18c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D190u;
        goto label_15d190;
    }
    ctx->pc = 0x15D188u;
    SET_GPR_U32(ctx, 31, 0x15D190u);
    ctx->pc = 0x15D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D188u;
    // 0x15d18c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15D188u, 0x15D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D190u;
label_15d190:
    // 0x15d190: 0xc0682b6  jal         func_1A0AD8
label_15d194:
    if (ctx->pc == 0x15D194u) {
        ctx->pc = 0x15D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D190u;
        // 0x15d194: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D198u;
        goto label_15d198;
    }
    ctx->pc = 0x15D190u;
    SET_GPR_U32(ctx, 31, 0x15D198u);
    ctx->pc = 0x15D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D190u;
    // 0x15d194: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15D190u, 0x15D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D198u;
label_15d198:
    // 0x15d198: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15d198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d19c:
    // 0x15d19c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15d19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d1a0:
    // 0x15d1a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15d1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15d1a4:
    // 0x15d1a4: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15d1a8:
    // 0x15d1a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d1ac:
    // 0x15d1ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15d1acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d1b0:
    // 0x15d1b0: 0xc062cb0  jal         func_18B2C0
label_15d1b4:
    if (ctx->pc == 0x15D1B4u) {
        ctx->pc = 0x15D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1B0u;
        // 0x15d1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1B8u;
        goto label_15d1b8;
    }
    ctx->pc = 0x15D1B0u;
    SET_GPR_U32(ctx, 31, 0x15D1B8u);
    ctx->pc = 0x15D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1B0u;
    // 0x15d1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15D1B0u, 0x15D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1B8u;
label_15d1b8:
    // 0x15d1b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d1bc:
    // 0x15d1bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d1c0:
    // 0x15d1c0: 0xc06825c  jal         func_1A0970
label_15d1c4:
    if (ctx->pc == 0x15D1C4u) {
        ctx->pc = 0x15D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1C0u;
        // 0x15d1c4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1C8u;
        goto label_15d1c8;
    }
    ctx->pc = 0x15D1C0u;
    SET_GPR_U32(ctx, 31, 0x15D1C8u);
    ctx->pc = 0x15D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1C0u;
    // 0x15d1c4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15D1C0u, 0x15D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1C8u;
label_15d1c8:
    // 0x15d1c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d1cc:
    // 0x15d1cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d1d0:
    // 0x15d1d0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15d1d4:
    // 0x15d1d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d1d8:
    // 0x15d1d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d1dc:
    // 0x15d1dc: 0x60f809  jalr        $v1
label_15d1e0:
    if (ctx->pc == 0x15D1E0u) {
        ctx->pc = 0x15D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1DCu;
        // 0x15d1e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1E4u;
        goto label_15d1e4;
    }
    ctx->pc = 0x15D1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D1E4u);
        ctx->pc = 0x15D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1DCu;
        // 0x15d1e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1DCu, 0x15D1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D1E4u;
label_15d1e4:
    // 0x15d1e4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15d1e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15d1e8:
    // 0x15d1e8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15d1ec:
    if (ctx->pc == 0x15D1ECu) {
        ctx->pc = 0x15D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E8u;
        // 0x15d1ec: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1F0u;
        goto label_15d1f0;
    }
    ctx->pc = 0x15D1E8u;
    {
        const bool branch_taken_0x15d1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E8u;
        // 0x15d1ec: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1e8) {
            ctx->pc = 0x15D2A4u;
            goto label_15d2a4;
        }
    }
    ctx->pc = 0x15D1F0u;
label_15d1f0:
    // 0x15d1f0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15d1f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d1f4:
    // 0x15d1f4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15d1f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15d1f8:
    // 0x15d1f8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15d1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d1fc:
    // 0x15d1fc: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x15d1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15d200:
    // 0x15d200: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15d204:
    // 0x15d204: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x15d204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15d208:
    // 0x15d208: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15d208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15d20c:
    // 0x15d20c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15d20cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15d210:
    // 0x15d210: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15d210u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15d214:
    // 0x15d214: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15d218:
    // 0x15d218: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d21c:
    // 0x15d21c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d220:
    // 0x15d220: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d224:
    // 0x15d224: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15d224u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15d228:
    // 0x15d228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d22c:
    // 0x15d22c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d230:
    // 0x15d230: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15d230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15d234:
    // 0x15d234: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15d234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15d238:
    // 0x15d238: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15d238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15d23c:
    // 0x15d23c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15d23cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15d240:
    // 0x15d240: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15d240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15d244:
    // 0x15d244: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15d244u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15d248:
    // 0x15d248: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15d248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d24c:
    // 0x15d24c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d24cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d250:
    // 0x15d250: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d254:
    // 0x15d254: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d258:
    // 0x15d258: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d258u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d25c:
    // 0x15d25c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d25cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d260:
    // 0x15d260: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d260u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d264:
    // 0x15d264: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15d264u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15d268:
    // 0x15d268: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15d26c:
    // 0x15d26c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d270:
    // 0x15d270: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d274:
    // 0x15d274: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15d274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d278:
    // 0x15d278: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15d278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d27c:
    // 0x15d27c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d280:
    // 0x15d280: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d284:
    // 0x15d284: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d284u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d288:
    // 0x15d288: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d288u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d28c:
    // 0x15d28c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d28cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d290:
    // 0x15d290: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15d290u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15d294:
    // 0x15d294: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15d298:
    // 0x15d298: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15d298u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15d29c:
    // 0x15d29c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15d29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15d2a0:
    // 0x15d2a0: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_15d2a4:
    // 0x15d2a4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15d2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d2a8:
    // 0x15d2a8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x15d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_15d2ac:
    // 0x15d2ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15d2b0:
    // 0x15d2b0: 0x34a53333  ori         $a1, $a1, 0x3333
    ctx->pc = 0x15d2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
label_15d2b4:
    // 0x15d2b4: 0xaeb00168  sw          $s0, 0x168($s5)
    ctx->pc = 0x15d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 360), GPR_U32(ctx, 16));
label_15d2b8:
    // 0x15d2b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15d2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15d2bc:
    // 0x15d2bc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x15d2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_15d2c0:
    // 0x15d2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d2c4:
    // 0x15d2c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x15d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_15d2c8:
    // 0x15d2c8: 0xc061372  jal         func_184DC8
label_15d2cc:
    if (ctx->pc == 0x15D2CCu) {
        ctx->pc = 0x15D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2C8u;
        // 0x15d2cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2D0u;
        goto label_15d2d0;
    }
    ctx->pc = 0x15D2C8u;
    SET_GPR_U32(ctx, 31, 0x15D2D0u);
    ctx->pc = 0x15D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2C8u;
    // 0x15d2cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x15D2C8u, 0x15D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2D0u;
label_15d2d0:
    // 0x15d2d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d2d4:
    // 0x15d2d4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x15d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_15d2d8:
    // 0x15d2d8: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_15d2dc:
    // 0x15d2dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d2e0:
    // 0x15d2e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d2e4:
    // 0x15d2e4: 0x60f809  jalr        $v1
label_15d2e8:
    if (ctx->pc == 0x15D2E8u) {
        ctx->pc = 0x15D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2E4u;
        // 0x15d2e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2ECu;
        goto label_15d2ec;
    }
    ctx->pc = 0x15D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D2ECu);
        ctx->pc = 0x15D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2E4u;
        // 0x15d2e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D2E4u, 0x15D2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D2ECu;
label_15d2ec:
    // 0x15d2ec: 0x96a20016  lhu         $v0, 0x16($s5)
    ctx->pc = 0x15d2ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
label_15d2f0:
    // 0x15d2f0: 0x8ea30164  lw          $v1, 0x164($s5)
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
label_15d2f4:
    // 0x15d2f4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x15d2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_15d2f8:
    // 0x15d2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15d2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d2fc:
    // 0x15d2fc: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x15d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_15d300:
    // 0x15d300: 0xaea30160  sw          $v1, 0x160($s5)
    ctx->pc = 0x15d300u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 352), GPR_U32(ctx, 3));
label_15d304:
    // 0x15d304: 0xa6a20016  sh          $v0, 0x16($s5)
    ctx->pc = 0x15d304u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 2));
label_15d308:
    // 0x15d308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15d308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15d30c:
    // 0x15d30c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15d30cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15d310:
    // 0x15d310: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15d310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15d314:
    // 0x15d314: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15d314u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15d318:
    // 0x15d318: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15d318u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15d31c:
    // 0x15d31c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x15d31cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d320:
    // 0x15d320: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x15d320u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15d324:
    // 0x15d324: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15d324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15d328:
    // 0x15d328: 0x3e00008  jr          $ra
label_15d32c:
    if (ctx->pc == 0x15D32Cu) {
        ctx->pc = 0x15D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D328u;
        // 0x15d32c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D330u;
        goto label_fallthrough_0x15d328;
    }
    ctx->pc = 0x15D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D328u;
        // 0x15d32c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d328:
    ctx->pc = 0x15D330u;
}

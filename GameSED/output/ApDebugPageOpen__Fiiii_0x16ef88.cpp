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

// Function: ApDebugPageOpen__Fiiii
// Address: 0x16ef88 - 0x16f2a0
void ApDebugPageOpen__Fiiii_0x16ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugPageOpen__Fiiii_0x16ef88");
#endif

    switch (ctx->pc) {
        case 0x16ef88u: goto label_16ef88;
        case 0x16ef8cu: goto label_16ef8c;
        case 0x16ef90u: goto label_16ef90;
        case 0x16ef94u: goto label_16ef94;
        case 0x16ef98u: goto label_16ef98;
        case 0x16ef9cu: goto label_16ef9c;
        case 0x16efa0u: goto label_16efa0;
        case 0x16efa4u: goto label_16efa4;
        case 0x16efa8u: goto label_16efa8;
        case 0x16efacu: goto label_16efac;
        case 0x16efb0u: goto label_16efb0;
        case 0x16efb4u: goto label_16efb4;
        case 0x16efb8u: goto label_16efb8;
        case 0x16efbcu: goto label_16efbc;
        case 0x16efc0u: goto label_16efc0;
        case 0x16efc4u: goto label_16efc4;
        case 0x16efc8u: goto label_16efc8;
        case 0x16efccu: goto label_16efcc;
        case 0x16efd0u: goto label_16efd0;
        case 0x16efd4u: goto label_16efd4;
        case 0x16efd8u: goto label_16efd8;
        case 0x16efdcu: goto label_16efdc;
        case 0x16efe0u: goto label_16efe0;
        case 0x16efe4u: goto label_16efe4;
        case 0x16efe8u: goto label_16efe8;
        case 0x16efecu: goto label_16efec;
        case 0x16eff0u: goto label_16eff0;
        case 0x16eff4u: goto label_16eff4;
        case 0x16eff8u: goto label_16eff8;
        case 0x16effcu: goto label_16effc;
        case 0x16f000u: goto label_16f000;
        case 0x16f004u: goto label_16f004;
        case 0x16f008u: goto label_16f008;
        case 0x16f00cu: goto label_16f00c;
        case 0x16f010u: goto label_16f010;
        case 0x16f014u: goto label_16f014;
        case 0x16f018u: goto label_16f018;
        case 0x16f01cu: goto label_16f01c;
        case 0x16f020u: goto label_16f020;
        case 0x16f024u: goto label_16f024;
        case 0x16f028u: goto label_16f028;
        case 0x16f02cu: goto label_16f02c;
        case 0x16f030u: goto label_16f030;
        case 0x16f034u: goto label_16f034;
        case 0x16f038u: goto label_16f038;
        case 0x16f03cu: goto label_16f03c;
        case 0x16f040u: goto label_16f040;
        case 0x16f044u: goto label_16f044;
        case 0x16f048u: goto label_16f048;
        case 0x16f04cu: goto label_16f04c;
        case 0x16f050u: goto label_16f050;
        case 0x16f054u: goto label_16f054;
        case 0x16f058u: goto label_16f058;
        case 0x16f05cu: goto label_16f05c;
        case 0x16f060u: goto label_16f060;
        case 0x16f064u: goto label_16f064;
        case 0x16f068u: goto label_16f068;
        case 0x16f06cu: goto label_16f06c;
        case 0x16f070u: goto label_16f070;
        case 0x16f074u: goto label_16f074;
        case 0x16f078u: goto label_16f078;
        case 0x16f07cu: goto label_16f07c;
        case 0x16f080u: goto label_16f080;
        case 0x16f084u: goto label_16f084;
        case 0x16f088u: goto label_16f088;
        case 0x16f08cu: goto label_16f08c;
        case 0x16f090u: goto label_16f090;
        case 0x16f094u: goto label_16f094;
        case 0x16f098u: goto label_16f098;
        case 0x16f09cu: goto label_16f09c;
        case 0x16f0a0u: goto label_16f0a0;
        case 0x16f0a4u: goto label_16f0a4;
        case 0x16f0a8u: goto label_16f0a8;
        case 0x16f0acu: goto label_16f0ac;
        case 0x16f0b0u: goto label_16f0b0;
        case 0x16f0b4u: goto label_16f0b4;
        case 0x16f0b8u: goto label_16f0b8;
        case 0x16f0bcu: goto label_16f0bc;
        case 0x16f0c0u: goto label_16f0c0;
        case 0x16f0c4u: goto label_16f0c4;
        case 0x16f0c8u: goto label_16f0c8;
        case 0x16f0ccu: goto label_16f0cc;
        case 0x16f0d0u: goto label_16f0d0;
        case 0x16f0d4u: goto label_16f0d4;
        case 0x16f0d8u: goto label_16f0d8;
        case 0x16f0dcu: goto label_16f0dc;
        case 0x16f0e0u: goto label_16f0e0;
        case 0x16f0e4u: goto label_16f0e4;
        case 0x16f0e8u: goto label_16f0e8;
        case 0x16f0ecu: goto label_16f0ec;
        case 0x16f0f0u: goto label_16f0f0;
        case 0x16f0f4u: goto label_16f0f4;
        case 0x16f0f8u: goto label_16f0f8;
        case 0x16f0fcu: goto label_16f0fc;
        case 0x16f100u: goto label_16f100;
        case 0x16f104u: goto label_16f104;
        case 0x16f108u: goto label_16f108;
        case 0x16f10cu: goto label_16f10c;
        case 0x16f110u: goto label_16f110;
        case 0x16f114u: goto label_16f114;
        case 0x16f118u: goto label_16f118;
        case 0x16f11cu: goto label_16f11c;
        case 0x16f120u: goto label_16f120;
        case 0x16f124u: goto label_16f124;
        case 0x16f128u: goto label_16f128;
        case 0x16f12cu: goto label_16f12c;
        case 0x16f130u: goto label_16f130;
        case 0x16f134u: goto label_16f134;
        case 0x16f138u: goto label_16f138;
        case 0x16f13cu: goto label_16f13c;
        case 0x16f140u: goto label_16f140;
        case 0x16f144u: goto label_16f144;
        case 0x16f148u: goto label_16f148;
        case 0x16f14cu: goto label_16f14c;
        case 0x16f150u: goto label_16f150;
        case 0x16f154u: goto label_16f154;
        case 0x16f158u: goto label_16f158;
        case 0x16f15cu: goto label_16f15c;
        case 0x16f160u: goto label_16f160;
        case 0x16f164u: goto label_16f164;
        case 0x16f168u: goto label_16f168;
        case 0x16f16cu: goto label_16f16c;
        case 0x16f170u: goto label_16f170;
        case 0x16f174u: goto label_16f174;
        case 0x16f178u: goto label_16f178;
        case 0x16f17cu: goto label_16f17c;
        case 0x16f180u: goto label_16f180;
        case 0x16f184u: goto label_16f184;
        case 0x16f188u: goto label_16f188;
        case 0x16f18cu: goto label_16f18c;
        case 0x16f190u: goto label_16f190;
        case 0x16f194u: goto label_16f194;
        case 0x16f198u: goto label_16f198;
        case 0x16f19cu: goto label_16f19c;
        case 0x16f1a0u: goto label_16f1a0;
        case 0x16f1a4u: goto label_16f1a4;
        case 0x16f1a8u: goto label_16f1a8;
        case 0x16f1acu: goto label_16f1ac;
        case 0x16f1b0u: goto label_16f1b0;
        case 0x16f1b4u: goto label_16f1b4;
        case 0x16f1b8u: goto label_16f1b8;
        case 0x16f1bcu: goto label_16f1bc;
        case 0x16f1c0u: goto label_16f1c0;
        case 0x16f1c4u: goto label_16f1c4;
        case 0x16f1c8u: goto label_16f1c8;
        case 0x16f1ccu: goto label_16f1cc;
        case 0x16f1d0u: goto label_16f1d0;
        case 0x16f1d4u: goto label_16f1d4;
        case 0x16f1d8u: goto label_16f1d8;
        case 0x16f1dcu: goto label_16f1dc;
        case 0x16f1e0u: goto label_16f1e0;
        case 0x16f1e4u: goto label_16f1e4;
        case 0x16f1e8u: goto label_16f1e8;
        case 0x16f1ecu: goto label_16f1ec;
        case 0x16f1f0u: goto label_16f1f0;
        case 0x16f1f4u: goto label_16f1f4;
        case 0x16f1f8u: goto label_16f1f8;
        case 0x16f1fcu: goto label_16f1fc;
        case 0x16f200u: goto label_16f200;
        case 0x16f204u: goto label_16f204;
        case 0x16f208u: goto label_16f208;
        case 0x16f20cu: goto label_16f20c;
        case 0x16f210u: goto label_16f210;
        case 0x16f214u: goto label_16f214;
        case 0x16f218u: goto label_16f218;
        case 0x16f21cu: goto label_16f21c;
        case 0x16f220u: goto label_16f220;
        case 0x16f224u: goto label_16f224;
        case 0x16f228u: goto label_16f228;
        case 0x16f22cu: goto label_16f22c;
        case 0x16f230u: goto label_16f230;
        case 0x16f234u: goto label_16f234;
        case 0x16f238u: goto label_16f238;
        case 0x16f23cu: goto label_16f23c;
        case 0x16f240u: goto label_16f240;
        case 0x16f244u: goto label_16f244;
        case 0x16f248u: goto label_16f248;
        case 0x16f24cu: goto label_16f24c;
        case 0x16f250u: goto label_16f250;
        case 0x16f254u: goto label_16f254;
        case 0x16f258u: goto label_16f258;
        case 0x16f25cu: goto label_16f25c;
        case 0x16f260u: goto label_16f260;
        case 0x16f264u: goto label_16f264;
        case 0x16f268u: goto label_16f268;
        case 0x16f26cu: goto label_16f26c;
        case 0x16f270u: goto label_16f270;
        case 0x16f274u: goto label_16f274;
        case 0x16f278u: goto label_16f278;
        case 0x16f27cu: goto label_16f27c;
        case 0x16f280u: goto label_16f280;
        case 0x16f284u: goto label_16f284;
        case 0x16f288u: goto label_16f288;
        case 0x16f28cu: goto label_16f28c;
        case 0x16f290u: goto label_16f290;
        case 0x16f294u: goto label_16f294;
        case 0x16f298u: goto label_16f298;
        case 0x16f29cu: goto label_16f29c;
        default: break;
    }

    ctx->pc = 0x16ef88u;

label_16ef88:
    // 0x16ef88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16ef8c:
    // 0x16ef8c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x16ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_16ef90:
    // 0x16ef90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16ef90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16ef94:
    // 0x16ef94: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x16ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
label_16ef98:
    // 0x16ef98: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x16ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_16ef9c:
    // 0x16ef9c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x16ef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_16efa0:
    // 0x16efa0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x16efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_16efa4:
    // 0x16efa4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x16efa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16efa8:
    // 0x16efa8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x16efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_16efac:
    // 0x16efac: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x16efacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_16efb0:
    // 0x16efb0: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x16efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_16efb4:
    // 0x16efb4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x16efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_16efb8:
    // 0x16efb8: 0xc0682b2  jal         func_1A0AC8
label_16efbc:
    if (ctx->pc == 0x16EFBCu) {
        ctx->pc = 0x16EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFB8u;
        // 0x16efbc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFC0u;
        goto label_16efc0;
    }
    ctx->pc = 0x16EFB8u;
    SET_GPR_U32(ctx, 31, 0x16EFC0u);
    ctx->pc = 0x16EFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EFB8u;
    // 0x16efbc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16EFB8u, 0x16EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFC0u;
label_16efc0:
    // 0x16efc0: 0xc0682b6  jal         func_1A0AD8
label_16efc4:
    if (ctx->pc == 0x16EFC4u) {
        ctx->pc = 0x16EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFC0u;
        // 0x16efc4: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFC8u;
        goto label_16efc8;
    }
    ctx->pc = 0x16EFC0u;
    SET_GPR_U32(ctx, 31, 0x16EFC8u);
    ctx->pc = 0x16EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EFC0u;
    // 0x16efc4: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16EFC0u, 0x16EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFC8u;
label_16efc8:
    // 0x16efc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16efc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16efcc:
    // 0x16efcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16efccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16efd0:
    // 0x16efd0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16efd4:
    // 0x16efd4: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x16efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_16efd8:
    // 0x16efd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16efd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16efdc:
    // 0x16efdc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x16efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_16efe0:
    // 0x16efe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16efe4:
    // 0x16efe4: 0xc063114  jal         func_18C450
label_16efe8:
    if (ctx->pc == 0x16EFE8u) {
        ctx->pc = 0x16EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFE4u;
        // 0x16efe8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFECu;
        goto label_16efec;
    }
    ctx->pc = 0x16EFE4u;
    SET_GPR_U32(ctx, 31, 0x16EFECu);
    ctx->pc = 0x16EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EFE4u;
    // 0x16efe8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C450u, 0x16EFE4u, 0x16EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFECu;
label_16efec:
    // 0x16efec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16eff0:
    // 0x16eff0: 0xc06825c  jal         func_1A0970
label_16eff4:
    if (ctx->pc == 0x16EFF4u) {
        ctx->pc = 0x16EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFF0u;
        // 0x16eff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFF8u;
        goto label_16eff8;
    }
    ctx->pc = 0x16EFF0u;
    SET_GPR_U32(ctx, 31, 0x16EFF8u);
    ctx->pc = 0x16EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EFF0u;
    // 0x16eff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16EFF0u, 0x16EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EFF8u;
label_16eff8:
    // 0x16eff8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_16effc:
    // 0x16effc: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x16effcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_16f000:
    // 0x16f000: 0xc06bd28  jal         func_1AF4A0
label_16f004:
    if (ctx->pc == 0x16F004u) {
        ctx->pc = 0x16F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F000u;
        // 0x16f004: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F008u;
        goto label_16f008;
    }
    ctx->pc = 0x16F000u;
    SET_GPR_U32(ctx, 31, 0x16F008u);
    ctx->pc = 0x16F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F000u;
    // 0x16f004: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x16F000u, 0x16F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F008u;
label_16f008:
    // 0x16f008: 0xc06bd20  jal         func_1AF480
label_16f00c:
    if (ctx->pc == 0x16F00Cu) {
        ctx->pc = 0x16F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F008u;
        // 0x16f00c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F010u;
        goto label_16f010;
    }
    ctx->pc = 0x16F008u;
    SET_GPR_U32(ctx, 31, 0x16F010u);
    ctx->pc = 0x16F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F008u;
    // 0x16f00c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16F008u, 0x16F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F010u;
label_16f010:
    // 0x16f010: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x16f010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_16f014:
    // 0x16f014: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x16f014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_16f018:
    // 0x16f018: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x16f018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16f01c:
    // 0x16f01c: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x16f01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
label_16f020:
    // 0x16f020: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x16f020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_16f024:
    // 0x16f024: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x16f024u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_16f028:
    // 0x16f028: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16f028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f02c:
    // 0x16f02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f030:
    // 0x16f030: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x16f030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_16f034:
    // 0x16f034: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x16f034u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_16f038:
    // 0x16f038: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x16f038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_16f03c:
    // 0x16f03c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x16f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_16f040:
    // 0x16f040: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x16f040u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 16)));
label_16f044:
    // 0x16f044: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x16f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_16f048:
    // 0x16f048: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x16f048u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
label_16f04c:
    // 0x16f04c: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x16f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_16f050:
    // 0x16f050: 0xdce30020  ld          $v1, 0x20($a3)
    ctx->pc = 0x16f050u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 32)));
label_16f054:
    // 0x16f054: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x16f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
label_16f058:
    // 0x16f058: 0xdce20028  ld          $v0, 0x28($a3)
    ctx->pc = 0x16f058u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 40)));
label_16f05c:
    // 0x16f05c: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x16f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
label_16f060:
    // 0x16f060: 0xdce30030  ld          $v1, 0x30($a3)
    ctx->pc = 0x16f060u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 48)));
label_16f064:
    // 0x16f064: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x16f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
label_16f068:
    // 0x16f068: 0xdce20038  ld          $v0, 0x38($a3)
    ctx->pc = 0x16f068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 56)));
label_16f06c:
    // 0x16f06c: 0xafa8005c  sw          $t0, 0x5C($sp)
    ctx->pc = 0x16f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 8));
label_16f070:
    // 0x16f070: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x16f070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
label_16f074:
    // 0x16f074: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x16f074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
label_16f078:
    // 0x16f078: 0xffa20048  sd          $v0, 0x48($sp)
    ctx->pc = 0x16f078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
label_16f07c:
    // 0x16f07c: 0xc0631a2  jal         func_18C688
label_16f080:
    if (ctx->pc == 0x16F080u) {
        ctx->pc = 0x16F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F07Cu;
        // 0x16f080: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F084u;
        goto label_16f084;
    }
    ctx->pc = 0x16F07Cu;
    SET_GPR_U32(ctx, 31, 0x16F084u);
    ctx->pc = 0x16F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F07Cu;
    // 0x16f080: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C688u, 0x16F07Cu, 0x16F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F084u;
label_16f084:
    // 0x16f084: 0x26270150  addiu       $a3, $s1, 0x150
    ctx->pc = 0x16f084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_16f088:
    // 0x16f088: 0xc781853c  lwc1        $f1, -0x7AC4($gp)
    ctx->pc = 0x16f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f08c:
    // 0x16f08c: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x16f08cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
label_16f090:
    // 0x16f090: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x16f090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_16f094:
    // 0x16f094: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x16f094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_16f098:
    // 0x16f098: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x16f098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_16f09c:
    // 0x16f09c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x16f09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_16f0a0:
    // 0x16f0a0: 0x94e30056  lhu         $v1, 0x56($a3)
    ctx->pc = 0x16f0a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
label_16f0a4:
    // 0x16f0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f0a8:
    // 0x16f0a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16f0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16f0ac:
    // 0x16f0ac: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x16f0acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
label_16f0b0:
    // 0x16f0b0: 0xc7838540  lwc1        $f3, -0x7AC0($gp)
    ctx->pc = 0x16f0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16f0b4:
    // 0x16f0b4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x16f0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_16f0b8:
    // 0x16f0b8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x16f0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_16f0bc:
    // 0x16f0bc: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x16f0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_16f0c0:
    // 0x16f0c0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x16f0c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_16f0c4:
    // 0x16f0c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16f0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_16f0c8:
    // 0x16f0c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16f0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16f0cc:
    // 0x16f0cc: 0x0  nop
    ctx->pc = 0x16f0ccu;
    // NOP
label_16f0d0:
    // 0x16f0d0: 0x0  nop
    ctx->pc = 0x16f0d0u;
    // NOP
label_16f0d4:
    // 0x16f0d4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x16f0d4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
label_16f0d8:
    // 0x16f0d8: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x16f0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
label_16f0dc:
    // 0x16f0dc: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x16f0dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_16f0e0:
    // 0x16f0e0: 0x0  nop
    ctx->pc = 0x16f0e0u;
    // NOP
label_16f0e4:
    // 0x16f0e4: 0x0  nop
    ctx->pc = 0x16f0e4u;
    // NOP
label_16f0e8:
    // 0x16f0e8: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x16f0e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_16f0ec:
    // 0x16f0ec: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x16f0ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_16f0f0:
    // 0x16f0f0: 0xe4e1006c  swc1        $f1, 0x6C($a3)
    ctx->pc = 0x16f0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
label_16f0f4:
    // 0x16f0f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x16f0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_16f0f8:
    // 0x16f0f8: 0xe4e30068  swc1        $f3, 0x68($a3)
    ctx->pc = 0x16f0f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
label_16f0fc:
    // 0x16f0fc: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x16f0fcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
label_16f100:
    // 0x16f100: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x16f100u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_16f104:
    // 0x16f104: 0xe4e30064  swc1        $f3, 0x64($a3)
    ctx->pc = 0x16f104u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
label_16f108:
    // 0x16f108: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x16f108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
label_16f10c:
    // 0x16f10c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x16f10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_16f110:
    // 0x16f110: 0xe4e5002c  swc1        $f5, 0x2C($a3)
    ctx->pc = 0x16f110u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
label_16f114:
    // 0x16f114: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x16f114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_16f118:
    // 0x16f118: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x16f118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_16f11c:
    // 0x16f11c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x16f11cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_16f120:
    // 0x16f120: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x16f120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_16f124:
    // 0x16f124: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16f124u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_16f128:
    // 0x16f128: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x16f128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_16f12c:
    // 0x16f12c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x16f12cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_16f130:
    // 0x16f130: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16f130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16f134:
    // 0x16f134: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16f134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16f138:
    // 0x16f138: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x16f138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16f13c:
    // 0x16f13c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16f13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16f140:
    // 0x16f140: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16f140u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16f144:
    // 0x16f144: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16f144u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16f148:
    // 0x16f148: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16f148u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16f14c:
    // 0x16f14c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x16f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_16f150:
    // 0x16f150: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x16f150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16f154:
    // 0x16f154: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x16f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_16f158:
    // 0x16f158: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x16f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f15c:
    // 0x16f15c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16f15cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16f160:
    // 0x16f160: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x16f160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16f164:
    // 0x16f164: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x16f164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16f168:
    // 0x16f168: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16f168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16f16c:
    // 0x16f16c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16f16cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16f170:
    // 0x16f170: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16f170u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16f174:
    // 0x16f174: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16f174u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16f178:
    // 0x16f178: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16f178u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_16f17c:
    // 0x16f17c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x16f17cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_16f180:
    // 0x16f180: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x16f180u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_16f184:
    // 0x16f184: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16f184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16f188:
    // 0x16f188: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x16f188u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16f18c:
    // 0x16f18c: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x16f18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
label_16f190:
    // 0x16f190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16f190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f194:
    // 0x16f194: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x16f194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_16f198:
    // 0x16f198: 0xc4e40068  lwc1        $f4, 0x68($a3)
    ctx->pc = 0x16f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16f19c:
    // 0x16f19c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16f19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16f1a0:
    // 0x16f1a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16f1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_16f1a4:
    // 0x16f1a4: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x16f1a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
label_16f1a8:
    // 0x16f1a8: 0x94e30054  lhu         $v1, 0x54($a3)
    ctx->pc = 0x16f1a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
label_16f1ac:
    // 0x16f1ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16f1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16f1b0:
    // 0x16f1b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16f1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16f1b4:
    // 0x16f1b4: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x16f1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
label_16f1b8:
    // 0x16f1b8: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x16f1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_16f1bc:
    // 0x16f1bc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x16f1bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_16f1c0:
    // 0x16f1c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16f1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_16f1c4:
    // 0x16f1c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16f1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16f1c8:
    // 0x16f1c8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x16f1c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_16f1cc:
    // 0x16f1cc: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x16f1ccu;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
label_16f1d0:
    // 0x16f1d0: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x16f1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
label_16f1d4:
    // 0x16f1d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16f1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16f1d8:
    // 0x16f1d8: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x16f1d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_16f1dc:
    // 0x16f1dc: 0xe4e20060  swc1        $f2, 0x60($a3)
    ctx->pc = 0x16f1dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
label_16f1e0:
    // 0x16f1e0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x16f1e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_16f1e4:
    // 0x16f1e4: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x16f1e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_16f1e8:
    // 0x16f1e8: 0xe4e0002c  swc1        $f0, 0x2C($a3)
    ctx->pc = 0x16f1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
label_16f1ec:
    // 0x16f1ec: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x16f1ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_16f1f0:
    // 0x16f1f0: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x16f1f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_16f1f4:
    // 0x16f1f4: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x16f1f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_16f1f8:
    // 0x16f1f8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x16f1f8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_16f1fc:
    // 0x16f1fc: 0xe4e30020  swc1        $f3, 0x20($a3)
    ctx->pc = 0x16f1fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_16f200:
    // 0x16f200: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x16f200u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_16f204:
    // 0x16f204: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x16f204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16f208:
    // 0x16f208: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16f208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16f20c:
    // 0x16f20c: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x16f20cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16f210:
    // 0x16f210: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16f210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16f214:
    // 0x16f214: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16f214u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16f218:
    // 0x16f218: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16f218u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16f21c:
    // 0x16f21c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16f21cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16f220:
    // 0x16f220: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x16f220u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_16f224:
    // 0x16f224: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x16f224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f228:
    // 0x16f228: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x16f228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f22c:
    // 0x16f22c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16f22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16f230:
    // 0x16f230: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16f230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16f234:
    // 0x16f234: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x16f234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16f238:
    // 0x16f238: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16f238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16f23c:
    // 0x16f23c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16f23cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16f240:
    // 0x16f240: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16f240u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16f244:
    // 0x16f244: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16f244u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16f248:
    // 0x16f248: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16f248u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_16f24c:
    // 0x16f24c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x16f24cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_16f250:
    // 0x16f250: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x16f250u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_16f254:
    // 0x16f254: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16f254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16f258:
    // 0x16f258: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x16f258u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16f25c:
    // 0x16f25c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x16f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_16f260:
    // 0x16f260: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16f260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f264:
    // 0x16f264: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16f264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f268:
    // 0x16f268: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x16f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_16f26c:
    // 0x16f26c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16f26cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16f270:
    // 0x16f270: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16f274:
    // 0x16f274: 0x60f809  jalr        $v1
label_16f278:
    if (ctx->pc == 0x16F278u) {
        ctx->pc = 0x16F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F274u;
        // 0x16f278: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F27Cu;
        goto label_16f27c;
    }
    ctx->pc = 0x16F274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F27Cu);
        ctx->pc = 0x16F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F274u;
        // 0x16f278: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F274u, 0x16F27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F27Cu;
label_16f27c:
    // 0x16f27c: 0xaf918b58  sw          $s1, -0x74A8($gp)
    ctx->pc = 0x16f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937432), GPR_U32(ctx, 17));
label_16f280:
    // 0x16f280: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x16f280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16f284:
    // 0x16f284: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x16f284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_16f288:
    // 0x16f288: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x16f288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16f28c:
    // 0x16f28c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x16f28cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_16f290:
    // 0x16f290: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x16f290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16f294:
    // 0x16f294: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x16f294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_16f298:
    // 0x16f298: 0x3e00008  jr          $ra
label_16f29c:
    if (ctx->pc == 0x16F29Cu) {
        ctx->pc = 0x16F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F298u;
        // 0x16f29c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2A0u;
        goto label_fallthrough_0x16f298;
    }
    ctx->pc = 0x16F298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F298u;
        // 0x16f29c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16f298:
    ctx->pc = 0x16F2A0u;
}

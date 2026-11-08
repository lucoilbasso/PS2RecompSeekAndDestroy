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

// Function: ApCameraMotionProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x13ee48 - 0x13eefc
void ApCameraMotionProc__FP11BMotionCtrlP11BMotionWorki_0x13ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraMotionProc__FP11BMotionCtrlP11BMotionWorki_0x13ee48");
#endif

    switch (ctx->pc) {
        case 0x13ee48u: goto label_13ee48;
        case 0x13ee4cu: goto label_13ee4c;
        case 0x13ee50u: goto label_13ee50;
        case 0x13ee54u: goto label_13ee54;
        case 0x13ee58u: goto label_13ee58;
        case 0x13ee5cu: goto label_13ee5c;
        case 0x13ee60u: goto label_13ee60;
        case 0x13ee64u: goto label_13ee64;
        case 0x13ee68u: goto label_13ee68;
        case 0x13ee6cu: goto label_13ee6c;
        case 0x13ee70u: goto label_13ee70;
        case 0x13ee74u: goto label_13ee74;
        case 0x13ee78u: goto label_13ee78;
        case 0x13ee7cu: goto label_13ee7c;
        case 0x13ee80u: goto label_13ee80;
        case 0x13ee84u: goto label_13ee84;
        case 0x13ee88u: goto label_13ee88;
        case 0x13ee8cu: goto label_13ee8c;
        case 0x13ee90u: goto label_13ee90;
        case 0x13ee94u: goto label_13ee94;
        case 0x13ee98u: goto label_13ee98;
        case 0x13ee9cu: goto label_13ee9c;
        case 0x13eea0u: goto label_13eea0;
        case 0x13eea4u: goto label_13eea4;
        case 0x13eea8u: goto label_13eea8;
        case 0x13eeacu: goto label_13eeac;
        case 0x13eeb0u: goto label_13eeb0;
        case 0x13eeb4u: goto label_13eeb4;
        case 0x13eeb8u: goto label_13eeb8;
        case 0x13eebcu: goto label_13eebc;
        case 0x13eec0u: goto label_13eec0;
        case 0x13eec4u: goto label_13eec4;
        case 0x13eec8u: goto label_13eec8;
        case 0x13eeccu: goto label_13eecc;
        case 0x13eed0u: goto label_13eed0;
        case 0x13eed4u: goto label_13eed4;
        case 0x13eed8u: goto label_13eed8;
        case 0x13eedcu: goto label_13eedc;
        case 0x13eee0u: goto label_13eee0;
        case 0x13eee4u: goto label_13eee4;
        case 0x13eee8u: goto label_13eee8;
        case 0x13eeecu: goto label_13eeec;
        case 0x13eef0u: goto label_13eef0;
        case 0x13eef4u: goto label_13eef4;
        case 0x13eef8u: goto label_13eef8;
        default: break;
    }

    ctx->pc = 0x13ee48u;

label_13ee48:
    // 0x13ee48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13ee4c:
    // 0x13ee4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13ee50:
    // 0x13ee50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ee50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13ee54:
    // 0x13ee54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13ee58:
    // 0x13ee58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13ee5c:
    // 0x13ee5c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_13ee60:
    // 0x13ee60: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_13ee64:
    if (ctx->pc == 0x13EE64u) {
        ctx->pc = 0x13EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE60u;
        // 0x13ee64: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE68u;
        goto label_13ee68;
    }
    ctx->pc = 0x13EE60u;
    {
        const bool branch_taken_0x13ee60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE60u;
        // 0x13ee64: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee60) {
            ctx->pc = 0x13EEE4u;
            goto label_13eee4;
        }
    }
    ctx->pc = 0x13EE68u;
label_13ee68:
    // 0x13ee68: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x13ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13ee6c:
    // 0x13ee6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13ee70:
    if (ctx->pc == 0x13EE70u) {
        ctx->pc = 0x13EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE6Cu;
        // 0x13ee70: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE74u;
        goto label_13ee74;
    }
    ctx->pc = 0x13EE6Cu;
    {
        const bool branch_taken_0x13ee6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ee6c) {
            ctx->pc = 0x13EE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EE6Cu;
            // 0x13ee70: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EE80u;
            goto label_13ee80;
        }
    }
    ctx->pc = 0x13EE74u;
label_13ee74:
    // 0x13ee74: 0x40f809  jalr        $v0
label_13ee78:
    if (ctx->pc == 0x13EE78u) {
        ctx->pc = 0x13EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE74u;
        // 0x13ee78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE7Cu;
        goto label_13ee7c;
    }
    ctx->pc = 0x13EE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EE7Cu);
        ctx->pc = 0x13EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE74u;
        // 0x13ee78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE74u, 0x13EE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EE7Cu;
label_13ee7c:
    // 0x13ee7c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x13ee7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_13ee80:
    // 0x13ee80: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x13ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_13ee84:
    // 0x13ee84: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_13ee88:
    if (ctx->pc == 0x13EE88u) {
        ctx->pc = 0x13EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE84u;
        // 0x13ee88: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE8Cu;
        goto label_13ee8c;
    }
    ctx->pc = 0x13EE84u;
    {
        const bool branch_taken_0x13ee84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE84u;
        // 0x13ee88: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee84) {
            ctx->pc = 0x13EEC8u;
            goto label_13eec8;
        }
    }
    ctx->pc = 0x13EE8Cu;
label_13ee8c:
    // 0x13ee8c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_13ee90:
    if (ctx->pc == 0x13EE90u) {
        ctx->pc = 0x13EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE8Cu;
        // 0x13ee90: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EE94u;
        goto label_13ee94;
    }
    ctx->pc = 0x13EE8Cu;
    {
        const bool branch_taken_0x13ee8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE8Cu;
        // 0x13ee90: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee8c) {
            ctx->pc = 0x13EEA0u;
            goto label_13eea0;
        }
    }
    ctx->pc = 0x13EE94u;
label_13ee94:
    // 0x13ee94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13ee98:
    // 0x13ee98: 0xc0618c2  jal         func_186308
label_13ee9c:
    if (ctx->pc == 0x13EE9Cu) {
        ctx->pc = 0x13EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE98u;
        // 0x13ee9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EEA0u;
        goto label_13eea0;
    }
    ctx->pc = 0x13EE98u;
    SET_GPR_U32(ctx, 31, 0x13EEA0u);
    ctx->pc = 0x13EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE98u;
    // 0x13ee9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13EE98u, 0x13EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEA0u;
label_13eea0:
    // 0x13eea0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_13eea4:
    if (ctx->pc == 0x13EEA4u) {
        ctx->pc = 0x13EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEA0u;
        // 0x13eea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EEA8u;
        goto label_13eea8;
    }
    ctx->pc = 0x13EEA0u;
    {
        const bool branch_taken_0x13eea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEA0u;
        // 0x13eea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eea0) {
            ctx->pc = 0x13EEB4u;
            goto label_13eeb4;
        }
    }
    ctx->pc = 0x13EEA8u;
label_13eea8:
    // 0x13eea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13eea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13eeac:
    // 0x13eeac: 0xc0618da  jal         func_186368
label_13eeb0:
    if (ctx->pc == 0x13EEB0u) {
        ctx->pc = 0x13EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEACu;
        // 0x13eeb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EEB4u;
        goto label_13eeb4;
    }
    ctx->pc = 0x13EEACu;
    SET_GPR_U32(ctx, 31, 0x13EEB4u);
    ctx->pc = 0x13EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EEACu;
    // 0x13eeb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13EEACu, 0x13EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEB4u;
label_13eeb4:
    // 0x13eeb4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x13eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_13eeb8:
    // 0x13eeb8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_13eebc:
    // 0x13eebc: 0x10000009  b           . + 4 + (0x9 << 2)
label_13eec0:
    if (ctx->pc == 0x13EEC0u) {
        ctx->pc = 0x13EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEBCu;
        // 0x13eec0: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EEC4u;
        goto label_13eec4;
    }
    ctx->pc = 0x13EEBCu;
    {
        const bool branch_taken_0x13eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEBCu;
        // 0x13eec0: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eebc) {
            ctx->pc = 0x13EEE4u;
            goto label_13eee4;
        }
    }
    ctx->pc = 0x13EEC4u;
label_13eec4:
    // 0x13eec4: 0x0  nop
    ctx->pc = 0x13eec4u;
    // NOP
label_13eec8:
    // 0x13eec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13eec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13eecc:
    // 0x13eecc: 0xc0618c2  jal         func_186308
label_13eed0:
    if (ctx->pc == 0x13EED0u) {
        ctx->pc = 0x13EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EECCu;
        // 0x13eed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EED4u;
        goto label_13eed4;
    }
    ctx->pc = 0x13EECCu;
    SET_GPR_U32(ctx, 31, 0x13EED4u);
    ctx->pc = 0x13EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EECCu;
    // 0x13eed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13EECCu, 0x13EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EED4u;
label_13eed4:
    // 0x13eed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13eed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13eed8:
    // 0x13eed8: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x13eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_13eedc:
    // 0x13eedc: 0xc0618da  jal         func_186368
label_13eee0:
    if (ctx->pc == 0x13EEE0u) {
        ctx->pc = 0x13EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEDCu;
        // 0x13eee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EEE4u;
        goto label_13eee4;
    }
    ctx->pc = 0x13EEDCu;
    SET_GPR_U32(ctx, 31, 0x13EEE4u);
    ctx->pc = 0x13EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EEDCu;
    // 0x13eee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13EEDCu, 0x13EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEE4u;
label_13eee4:
    // 0x13eee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13eee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13eee8:
    // 0x13eee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13eee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13eeec:
    // 0x13eeec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13eeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13eef0:
    // 0x13eef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13eef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13eef4:
    // 0x13eef4: 0x3e00008  jr          $ra
label_13eef8:
    if (ctx->pc == 0x13EEF8u) {
        ctx->pc = 0x13EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEF4u;
        // 0x13eef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EEFCu;
        goto label_fallthrough_0x13eef4;
    }
    ctx->pc = 0x13EEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEF4u;
        // 0x13eef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13eef4:
    ctx->pc = 0x13EEFCu;
}

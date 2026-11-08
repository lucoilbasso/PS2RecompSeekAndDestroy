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

// Function: WMCardCommandThreadProgram__FP8BcThread
// Address: 0x178de8 - 0x178f04
void WMCardCommandThreadProgram__FP8BcThread_0x178de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardCommandThreadProgram__FP8BcThread_0x178de8");
#endif

    switch (ctx->pc) {
        case 0x178de8u: goto label_178de8;
        case 0x178decu: goto label_178dec;
        case 0x178df0u: goto label_178df0;
        case 0x178df4u: goto label_178df4;
        case 0x178df8u: goto label_178df8;
        case 0x178dfcu: goto label_178dfc;
        case 0x178e00u: goto label_178e00;
        case 0x178e04u: goto label_178e04;
        case 0x178e08u: goto label_178e08;
        case 0x178e0cu: goto label_178e0c;
        case 0x178e10u: goto label_178e10;
        case 0x178e14u: goto label_178e14;
        case 0x178e18u: goto label_178e18;
        case 0x178e1cu: goto label_178e1c;
        case 0x178e20u: goto label_178e20;
        case 0x178e24u: goto label_178e24;
        case 0x178e28u: goto label_178e28;
        case 0x178e2cu: goto label_178e2c;
        case 0x178e30u: goto label_178e30;
        case 0x178e34u: goto label_178e34;
        case 0x178e38u: goto label_178e38;
        case 0x178e3cu: goto label_178e3c;
        case 0x178e40u: goto label_178e40;
        case 0x178e44u: goto label_178e44;
        case 0x178e48u: goto label_178e48;
        case 0x178e4cu: goto label_178e4c;
        case 0x178e50u: goto label_178e50;
        case 0x178e54u: goto label_178e54;
        case 0x178e58u: goto label_178e58;
        case 0x178e5cu: goto label_178e5c;
        case 0x178e60u: goto label_178e60;
        case 0x178e64u: goto label_178e64;
        case 0x178e68u: goto label_178e68;
        case 0x178e6cu: goto label_178e6c;
        case 0x178e70u: goto label_178e70;
        case 0x178e74u: goto label_178e74;
        case 0x178e78u: goto label_178e78;
        case 0x178e7cu: goto label_178e7c;
        case 0x178e80u: goto label_178e80;
        case 0x178e84u: goto label_178e84;
        case 0x178e88u: goto label_178e88;
        case 0x178e8cu: goto label_178e8c;
        case 0x178e90u: goto label_178e90;
        case 0x178e94u: goto label_178e94;
        case 0x178e98u: goto label_178e98;
        case 0x178e9cu: goto label_178e9c;
        case 0x178ea0u: goto label_178ea0;
        case 0x178ea4u: goto label_178ea4;
        case 0x178ea8u: goto label_178ea8;
        case 0x178eacu: goto label_178eac;
        case 0x178eb0u: goto label_178eb0;
        case 0x178eb4u: goto label_178eb4;
        case 0x178eb8u: goto label_178eb8;
        case 0x178ebcu: goto label_178ebc;
        case 0x178ec0u: goto label_178ec0;
        case 0x178ec4u: goto label_178ec4;
        case 0x178ec8u: goto label_178ec8;
        case 0x178eccu: goto label_178ecc;
        case 0x178ed0u: goto label_178ed0;
        case 0x178ed4u: goto label_178ed4;
        case 0x178ed8u: goto label_178ed8;
        case 0x178edcu: goto label_178edc;
        case 0x178ee0u: goto label_178ee0;
        case 0x178ee4u: goto label_178ee4;
        case 0x178ee8u: goto label_178ee8;
        case 0x178eecu: goto label_178eec;
        case 0x178ef0u: goto label_178ef0;
        case 0x178ef4u: goto label_178ef4;
        case 0x178ef8u: goto label_178ef8;
        case 0x178efcu: goto label_178efc;
        case 0x178f00u: goto label_178f00;
        default: break;
    }

    ctx->pc = 0x178de8u;

label_178de8:
    // 0x178de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_178dec:
    // 0x178dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178df0:
    // 0x178df0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_178df4:
    // 0x178df4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_178df8:
    // 0x178df8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_178dfc:
    // 0x178dfc: 0x49000  sll         $s2, $a0, 0
    ctx->pc = 0x178dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_178e00:
    // 0x178e00: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x178e00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_178e04:
    // 0x178e04: 0x26304040  addiu       $s0, $s1, 0x4040
    ctx->pc = 0x178e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16448));
label_178e08:
    // 0x178e08: 0xc06bd28  jal         func_1AF4A0
label_178e0c:
    if (ctx->pc == 0x178E0Cu) {
        ctx->pc = 0x178E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E08u;
        // 0x178e0c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E10u;
        goto label_178e10;
    }
    ctx->pc = 0x178E08u;
    SET_GPR_U32(ctx, 31, 0x178E10u);
    ctx->pc = 0x178E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E08u;
    // 0x178e0c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178E08u, 0x178E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E10u;
label_178e10:
    // 0x178e10: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x178e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
label_178e14:
    // 0x178e14: 0xc06bd28  jal         func_1AF4A0
label_178e18:
    if (ctx->pc == 0x178E18u) {
        ctx->pc = 0x178E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E14u;
        // 0x178e18: 0x8c64d184  lw          $a0, -0x2E7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E1Cu;
        goto label_178e1c;
    }
    ctx->pc = 0x178E14u;
    SET_GPR_U32(ctx, 31, 0x178E1Cu);
    ctx->pc = 0x178E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E14u;
    // 0x178e18: 0x8c64d184  lw          $a0, -0x2E7C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178E14u, 0x178E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E1Cu;
label_178e1c:
    // 0x178e1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x178e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_178e20:
    // 0x178e20: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x178e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_178e24:
    // 0x178e24: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_178e28:
    if (ctx->pc == 0x178E28u) {
        ctx->pc = 0x178E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E24u;
        // 0x178e28: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E2Cu;
        goto label_178e2c;
    }
    ctx->pc = 0x178E24u;
    {
        const bool branch_taken_0x178e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E24u;
        // 0x178e28: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e24) {
            ctx->pc = 0x178ED0u;
            goto label_178ed0;
        }
    }
    ctx->pc = 0x178E2Cu;
label_178e2c:
    // 0x178e2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_178e30:
    // 0x178e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_178e34:
    // 0x178e34: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x178e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_178e38:
    // 0x178e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_178e3c:
    // 0x178e3c: 0x8c637a80  lw          $v1, 0x7A80($v1)
    ctx->pc = 0x178e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31360)));
label_178e40:
    // 0x178e40: 0x600008  jr          $v1
label_178e44:
    if (ctx->pc == 0x178E44u) {
        ctx->pc = 0x178E48u;
        goto label_178e48;
    }
    ctx->pc = 0x178E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x178E48u;
label_178e48:
    // 0x178e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178e4c:
    // 0x178e4c: 0xc05e580  jal         func_179600
label_178e50:
    if (ctx->pc == 0x178E50u) {
        ctx->pc = 0x178E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E4Cu;
        // 0x178e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E54u;
        goto label_178e54;
    }
    ctx->pc = 0x178E4Cu;
    SET_GPR_U32(ctx, 31, 0x178E54u);
    ctx->pc = 0x178E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E4Cu;
    // 0x178e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179600u, 0x178E4Cu, 0x178E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E54u;
label_178e54:
    // 0x178e54: 0x1000001e  b           . + 4 + (0x1E << 2)
label_178e58:
    if (ctx->pc == 0x178E58u) {
        ctx->pc = 0x178E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E54u;
        // 0x178e58: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E5Cu;
        goto label_178e5c;
    }
    ctx->pc = 0x178E54u;
    {
        const bool branch_taken_0x178e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E54u;
        // 0x178e58: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e54) {
            ctx->pc = 0x178ED0u;
            goto label_178ed0;
        }
    }
    ctx->pc = 0x178E5Cu;
label_178e5c:
    // 0x178e5c: 0x0  nop
    ctx->pc = 0x178e5cu;
    // NOP
label_178e60:
    // 0x178e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178e64:
    // 0x178e64: 0xc05e58e  jal         func_179638
label_178e68:
    if (ctx->pc == 0x178E68u) {
        ctx->pc = 0x178E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E64u;
        // 0x178e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E6Cu;
        goto label_178e6c;
    }
    ctx->pc = 0x178E64u;
    SET_GPR_U32(ctx, 31, 0x178E6Cu);
    ctx->pc = 0x178E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E64u;
    // 0x178e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179638u, 0x178E64u, 0x178E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E6Cu;
label_178e6c:
    // 0x178e6c: 0x10000018  b           . + 4 + (0x18 << 2)
label_178e70:
    if (ctx->pc == 0x178E70u) {
        ctx->pc = 0x178E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E6Cu;
        // 0x178e70: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E74u;
        goto label_178e74;
    }
    ctx->pc = 0x178E6Cu;
    {
        const bool branch_taken_0x178e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E6Cu;
        // 0x178e70: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e6c) {
            ctx->pc = 0x178ED0u;
            goto label_178ed0;
        }
    }
    ctx->pc = 0x178E74u;
label_178e74:
    // 0x178e74: 0x0  nop
    ctx->pc = 0x178e74u;
    // NOP
label_178e78:
    // 0x178e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178e7c:
    // 0x178e7c: 0xc05e5b8  jal         func_1796E0
label_178e80:
    if (ctx->pc == 0x178E80u) {
        ctx->pc = 0x178E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E7Cu;
        // 0x178e80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E84u;
        goto label_178e84;
    }
    ctx->pc = 0x178E7Cu;
    SET_GPR_U32(ctx, 31, 0x178E84u);
    ctx->pc = 0x178E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E7Cu;
    // 0x178e80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1796E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1796E0u, 0x178E7Cu, 0x178E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E84u;
label_178e84:
    // 0x178e84: 0x10000012  b           . + 4 + (0x12 << 2)
label_178e88:
    if (ctx->pc == 0x178E88u) {
        ctx->pc = 0x178E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E84u;
        // 0x178e88: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E8Cu;
        goto label_178e8c;
    }
    ctx->pc = 0x178E84u;
    {
        const bool branch_taken_0x178e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E84u;
        // 0x178e88: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e84) {
            ctx->pc = 0x178ED0u;
            goto label_178ed0;
        }
    }
    ctx->pc = 0x178E8Cu;
label_178e8c:
    // 0x178e8c: 0x0  nop
    ctx->pc = 0x178e8cu;
    // NOP
label_178e90:
    // 0x178e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178e94:
    // 0x178e94: 0xc05e5e0  jal         func_179780
label_178e98:
    if (ctx->pc == 0x178E98u) {
        ctx->pc = 0x178E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E94u;
        // 0x178e98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E9Cu;
        goto label_178e9c;
    }
    ctx->pc = 0x178E94u;
    SET_GPR_U32(ctx, 31, 0x178E9Cu);
    ctx->pc = 0x178E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E94u;
    // 0x178e98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179780u, 0x178E94u, 0x178E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E9Cu;
label_178e9c:
    // 0x178e9c: 0x1000000c  b           . + 4 + (0xC << 2)
label_178ea0:
    if (ctx->pc == 0x178EA0u) {
        ctx->pc = 0x178EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E9Cu;
        // 0x178ea0: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178EA4u;
        goto label_178ea4;
    }
    ctx->pc = 0x178E9Cu;
    {
        const bool branch_taken_0x178e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E9Cu;
        // 0x178ea0: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e9c) {
            ctx->pc = 0x178ED0u;
            goto label_178ed0;
        }
    }
    ctx->pc = 0x178EA4u;
label_178ea4:
    // 0x178ea4: 0x0  nop
    ctx->pc = 0x178ea4u;
    // NOP
label_178ea8:
    // 0x178ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178eac:
    // 0x178eac: 0xc05e3c2  jal         func_178F08
label_178eb0:
    if (ctx->pc == 0x178EB0u) {
        ctx->pc = 0x178EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EACu;
        // 0x178eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178EB4u;
        goto label_178eb4;
    }
    ctx->pc = 0x178EACu;
    SET_GPR_U32(ctx, 31, 0x178EB4u);
    ctx->pc = 0x178EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EACu;
    // 0x178eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F08u, 0x178EACu, 0x178EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EB4u;
label_178eb4:
    // 0x178eb4: 0x10000006  b           . + 4 + (0x6 << 2)
label_178eb8:
    if (ctx->pc == 0x178EB8u) {
        ctx->pc = 0x178EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EB4u;
        // 0x178eb8: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178EBCu;
        goto label_178ebc;
    }
    ctx->pc = 0x178EB4u;
    {
        const bool branch_taken_0x178eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EB4u;
        // 0x178eb8: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178eb4) {
            ctx->pc = 0x178ED0u;
            goto label_178ed0;
        }
    }
    ctx->pc = 0x178EBCu;
label_178ebc:
    // 0x178ebc: 0x0  nop
    ctx->pc = 0x178ebcu;
    // NOP
label_178ec0:
    // 0x178ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178ec4:
    // 0x178ec4: 0xc05e414  jal         func_179050
label_178ec8:
    if (ctx->pc == 0x178EC8u) {
        ctx->pc = 0x178EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EC4u;
        // 0x178ec8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178ECCu;
        goto label_178ecc;
    }
    ctx->pc = 0x178EC4u;
    SET_GPR_U32(ctx, 31, 0x178ECCu);
    ctx->pc = 0x178EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EC4u;
    // 0x178ec8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179050u, 0x178EC4u, 0x178ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178ECCu;
label_178ecc:
    // 0x178ecc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x178eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_178ed0:
    // 0x178ed0: 0xc06bd20  jal         func_1AF480
label_178ed4:
    if (ctx->pc == 0x178ED4u) {
        ctx->pc = 0x178ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178ED0u;
        // 0x178ed4: 0x8c44d184  lw          $a0, -0x2E7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178ED8u;
        goto label_178ed8;
    }
    ctx->pc = 0x178ED0u;
    SET_GPR_U32(ctx, 31, 0x178ED8u);
    ctx->pc = 0x178ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178ED0u;
    // 0x178ed4: 0x8c44d184  lw          $a0, -0x2E7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x178ED0u, 0x178ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178ED8u;
label_178ed8:
    // 0x178ed8: 0xc06bcc4  jal         func_1AF310
label_178edc:
    if (ctx->pc == 0x178EDCu) {
        ctx->pc = 0x178EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178ED8u;
        // 0x178edc: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178EE0u;
        goto label_178ee0;
    }
    ctx->pc = 0x178ED8u;
    SET_GPR_U32(ctx, 31, 0x178EE0u);
    ctx->pc = 0x178EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178ED8u;
    // 0x178edc: 0x2404005a  addiu       $a0, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF310u, 0x178ED8u, 0x178EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EE0u;
label_178ee0:
    // 0x178ee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x178ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_178ee4:
    // 0x178ee4: 0x1443ffc8  bne         $v0, $v1, . + 4 + (-0x38 << 2)
label_178ee8:
    if (ctx->pc == 0x178EE8u) {
        ctx->pc = 0x178EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EE4u;
        // 0x178ee8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178EECu;
        goto label_178eec;
    }
    ctx->pc = 0x178EE4u;
    {
        const bool branch_taken_0x178ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x178EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EE4u;
        // 0x178ee8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ee4) {
            ctx->pc = 0x178E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e08;
        }
    }
    ctx->pc = 0x178EECu;
label_178eec:
    // 0x178eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178ef0:
    // 0x178ef0: 0x24a57a60  addiu       $a1, $a1, 0x7A60
    ctx->pc = 0x178ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31328));
label_178ef4:
    // 0x178ef4: 0xc068186  jal         func_1A0618
label_178ef8:
    if (ctx->pc == 0x178EF8u) {
        ctx->pc = 0x178EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EF4u;
        // 0x178ef8: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178EFCu;
        goto label_178efc;
    }
    ctx->pc = 0x178EF4u;
    SET_GPR_U32(ctx, 31, 0x178EFCu);
    ctx->pc = 0x178EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EF4u;
    // 0x178ef8: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x178EF4u, 0x178EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EFCu;
label_178efc:
    // 0x178efc: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_178f00:
    if (ctx->pc == 0x178F00u) {
        ctx->pc = 0x178F04u;
        goto label_fallthrough_0x178efc;
    }
    ctx->pc = 0x178EFCu;
    {
        const bool branch_taken_0x178efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178efc) {
            ctx->pc = 0x178E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e08;
        }
    }
label_fallthrough_0x178efc:
    ctx->pc = 0x178F04u;
}

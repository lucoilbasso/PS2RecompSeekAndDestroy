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

// Function: entry_001b4d10
// Address: 0x1b4d10 - 0x1b4d9c
void entry_001b4d10_0x1b4d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4d10_0x1b4d10");
#endif

    switch (ctx->pc) {
        case 0x1b4d34u: goto label_1b4d34;
        case 0x1b4d54u: goto label_1b4d54;
        case 0x1b4d7cu: goto label_1b4d7c;
        case 0x1b4d8cu: goto label_1b4d8c;
        case 0x1b4d94u: goto label_1b4d94;
        default: break;
    }

    ctx->pc = 0x1b4d10u;

    // 0x1b4d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4d14: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x1b4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x1b4d18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4d1c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b4d20: 0x27d09a80  addiu       $s0, $fp, -0x6580
    ctx->pc = 0x1b4d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
    // 0x1b4d24: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4d28: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b4d28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b4d2c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D34u);
    ctx->pc = 0x1B4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D2Cu;
    // 0x1b4d30: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4D2Cu, 0x1B4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D34u;
label_1b4d34:
    // 0x1b4d34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4d40: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b4d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b4d44: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b4d48: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x1b4d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1b4d4c: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D54u);
    ctx->pc = 0x1B4D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D4Cu;
    // 0x1b4d50: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B4D4Cu, 0x1B4D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D54u;
label_1b4d54:
    // 0x1b4d54: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b4d58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b4d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4d60: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b4d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b4d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d68: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1b4d6c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b4d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d70: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4d74: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4D74u;
    SET_GPR_U32(ctx, 31, 0x1B4D7Cu);
    ctx->pc = 0x1B4D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D74u;
    // 0x1b4d78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4D74u, 0x1B4D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D7Cu;
label_1b4d7c:
    // 0x1b4d7c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4D7Cu;
    {
        const bool branch_taken_0x1b4d7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D7Cu;
        // 0x1b4d80: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d7c) {
            ctx->pc = 0x1B4D9Cu;
            return;
        }
    }
    ctx->pc = 0x1B4D84u;
    // 0x1b4d84: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4D84u;
    SET_GPR_U32(ctx, 31, 0x1B4D8Cu);
    ctx->pc = 0x1B4D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D84u;
    // 0x1b4d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4D84u, 0x1B4D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D8Cu;
label_1b4d8c:
    // 0x1b4d8c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D94u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4D8Cu, 0x1B4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D94u;
label_1b4d94:
    // 0x1b4d94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4D94u;
    {
        const bool branch_taken_0x1b4d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D94u;
        // 0x1b4d98: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d94) {
            ctx->pc = 0x1B4DD4u;
            return;
        }
    }
    ctx->pc = 0x1B4D9Cu;
}

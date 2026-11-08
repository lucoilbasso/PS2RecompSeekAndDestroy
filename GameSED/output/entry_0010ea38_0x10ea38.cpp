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

// Function: entry_0010ea38
// Address: 0x10ea38 - 0x10ea84
void entry_0010ea38_0x10ea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea38_0x10ea38");
#endif

    switch (ctx->pc) {
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea6cu: goto label_10ea6c;
        default: break;
    }

    ctx->pc = 0x10ea38u;

    // 0x10ea38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ea3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10ea40: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10ea44: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10ea48: 0xc04110c  jal         func_104430
    ctx->pc = 0x10EA48u;
    SET_GPR_U32(ctx, 31, 0x10EA50u);
    ctx->pc = 0x10EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA48u;
    // 0x10ea4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10EA48u, 0x10EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA50u;
label_10ea50:
    // 0x10ea50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ea50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea54: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10ea58: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x10ea58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10ea5c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10EA5Cu;
    {
        const bool branch_taken_0x10ea5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA5Cu;
        // 0x10ea60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea5c) {
            ctx->pc = 0x10EA84u;
            return;
        }
    }
    ctx->pc = 0x10EA64u;
    // 0x10ea64: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10EA64u;
    SET_GPR_U32(ctx, 31, 0x10EA6Cu);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10EA64u, 0x10EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA6Cu;
label_10ea6c:
    // 0x10ea6c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10ea70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ea70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea74: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10ea78: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10ea7c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10EA7Cu;
    SET_GPR_U32(ctx, 31, 0x10EA84u);
    ctx->pc = 0x10EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA7Cu;
    // 0x10ea80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10EA7Cu, 0x10EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA84u;
}

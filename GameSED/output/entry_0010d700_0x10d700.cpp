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

// Function: entry_0010d700
// Address: 0x10d700 - 0x10d748
void entry_0010d700_0x10d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d700_0x10d700");
#endif

    switch (ctx->pc) {
        case 0x10d710u: goto label_10d710;
        case 0x10d718u: goto label_10d718;
        case 0x10d734u: goto label_10d734;
        case 0x10d740u: goto label_10d740;
        default: break;
    }

    ctx->pc = 0x10d700u;

    // 0x10d700: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D700u;
    {
        const bool branch_taken_0x10d700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D700u;
        // 0x10d704: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d700) {
            ctx->pc = 0x10D748u;
            return;
        }
    }
    ctx->pc = 0x10D708u;
    // 0x10d708: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10D708u;
    SET_GPR_U32(ctx, 31, 0x10D710u);
    ctx->pc = 0x10D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D708u;
    // 0x10d70c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10D708u, 0x10D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D710u;
label_10d710:
    // 0x10d710: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10D710u;
    SET_GPR_U32(ctx, 31, 0x10D718u);
    ctx->pc = 0x10D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D710u;
    // 0x10d714: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10D710u, 0x10D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D718u;
label_10d718:
    // 0x10d718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10d718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d71c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d720: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10d720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10d724: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x10d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x10d728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d72c: 0xc0624a8  jal         func_1892A0
    ctx->pc = 0x10D72Cu;
    SET_GPR_U32(ctx, 31, 0x10D734u);
    ctx->pc = 0x10D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D72Cu;
    // 0x10d730: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x10D72Cu, 0x10D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D734u;
label_10d734:
    // 0x10d734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d738: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10D738u;
    SET_GPR_U32(ctx, 31, 0x10D740u);
    ctx->pc = 0x10D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D738u;
    // 0x10d73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10D738u, 0x10D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D740u;
label_10d740:
    // 0x10d740: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x10D740u;
    {
        const bool branch_taken_0x10d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D740u;
        // 0x10d744: 0xae3001c4  sw          $s0, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d740) {
            ctx->pc = 0x10D7CCu;
            return;
        }
    }
    ctx->pc = 0x10D748u;
}

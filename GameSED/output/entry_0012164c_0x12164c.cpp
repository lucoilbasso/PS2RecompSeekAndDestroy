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

// Function: entry_0012164c
// Address: 0x12164c - 0x121670
void entry_0012164c_0x12164c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012164c_0x12164c");
#endif

    switch (ctx->pc) {
        case 0x121658u: goto label_121658;
        default: break;
    }

    ctx->pc = 0x12164cu;

    // 0x12164c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121650: 0xc04844a  jal         func_121128
    ctx->pc = 0x121650u;
    SET_GPR_U32(ctx, 31, 0x121658u);
    ctx->pc = 0x121654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121650u;
    // 0x121654: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x121650u, 0x121658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121658u;
label_121658:
    // 0x121658: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x121658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x12165c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12165Cu;
    {
        const bool branch_taken_0x12165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12165Cu;
        // 0x121660: 0x24845ba8  addiu       $a0, $a0, 0x5BA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12165c) {
            ctx->pc = 0x121670u;
            return;
        }
    }
    ctx->pc = 0x121664u;
    // 0x121664: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x121664u;
    {
        const bool branch_taken_0x121664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121664u;
        // 0x121668: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121664) {
            ctx->pc = 0x12168Cu;
            return;
        }
    }
    ctx->pc = 0x12166Cu;
    // 0x12166c: 0x0  nop
    ctx->pc = 0x12166cu;
    // NOP
    ctx->pc = 0x121670u;
}

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

// Function: entry_00154b68
// Address: 0x154b68 - 0x154b7c
void entry_00154b68_0x154b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b68_0x154b68");
#endif

    ctx->pc = 0x154b68u;

    // 0x154b68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154b6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154B6Cu;
    {
        const bool branch_taken_0x154b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B6Cu;
        // 0x154b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b6c) {
            ctx->pc = 0x154B7Cu;
            return;
        }
    }
    ctx->pc = 0x154B74u;
    // 0x154b74: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x154B74u;
    SET_GPR_U32(ctx, 31, 0x154B7Cu);
    ctx->pc = 0x154B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B74u;
    // 0x154b78: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154B74u, 0x154B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B7Cu;
}

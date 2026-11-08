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

// Function: entry_0013fb80
// Address: 0x13fb80 - 0x13fb94
void entry_0013fb80_0x13fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fb80_0x13fb80");
#endif

    ctx->pc = 0x13fb80u;

    // 0x13fb80: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FB80u;
    {
        const bool branch_taken_0x13fb80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB80u;
        // 0x13fb84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb80) {
            ctx->pc = 0x13FB94u;
            return;
        }
    }
    ctx->pc = 0x13FB88u;
    // 0x13fb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb8c: 0xc0618da  jal         func_186368
    ctx->pc = 0x13FB8Cu;
    SET_GPR_U32(ctx, 31, 0x13FB94u);
    ctx->pc = 0x13FB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB8Cu;
    // 0x13fb90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FB8Cu, 0x13FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB94u;
}

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

// Function: entry_00145a40
// Address: 0x145a40 - 0x145a5c
void entry_00145a40_0x145a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145a40_0x145a40");
#endif

    ctx->pc = 0x145a40u;

    // 0x145a40: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x145a44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145A44u;
    {
        const bool branch_taken_0x145a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A44u;
        // 0x145a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a44) {
            ctx->pc = 0x145A5Cu;
            return;
        }
    }
    ctx->pc = 0x145A4Cu;
    // 0x145a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a54: 0xc05f820  jal         func_17E080
    ctx->pc = 0x145A54u;
    SET_GPR_U32(ctx, 31, 0x145A5Cu);
    ctx->pc = 0x145A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145A54u;
    // 0x145a58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x145A54u, 0x145A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145A5Cu;
}

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

// Function: entry_0013ef50
// Address: 0x13ef50 - 0x13ef68
void entry_0013ef50_0x13ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ef50_0x13ef50");
#endif

    ctx->pc = 0x13ef50u;

    // 0x13ef50: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EF50u;
    {
        const bool branch_taken_0x13ef50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x13EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF50u;
        // 0x13ef54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef50) {
            ctx->pc = 0x13EF68u;
            return;
        }
    }
    ctx->pc = 0x13EF58u;
    // 0x13ef58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13ef58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ef5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef60: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13EF60u;
    SET_GPR_U32(ctx, 31, 0x13EF68u);
    ctx->pc = 0x13EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF60u;
    // 0x13ef64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13EF60u, 0x13EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF68u;
}

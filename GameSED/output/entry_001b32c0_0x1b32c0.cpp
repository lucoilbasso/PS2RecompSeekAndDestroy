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

// Function: entry_001b32c0
// Address: 0x1b32c0 - 0x1b32e0
void entry_001b32c0_0x1b32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32c0_0x1b32c0");
#endif

    ctx->pc = 0x1b32c0u;

    // 0x1b32c0: 0x2b0182a  slt         $v1, $s5, $s0
    ctx->pc = 0x1b32c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b32c4: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x1b32c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x1b32c8: 0x2d31024  and         $v0, $s6, $s3
    ctx->pc = 0x1b32c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 19));
    // 0x1b32cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B32CCu;
    {
        const bool branch_taken_0x1b32cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32CCu;
        // 0x1b32d0: 0x2a3800b  movn        $s0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32cc) {
            ctx->pc = 0x1B32E0u;
            return;
        }
    }
    ctx->pc = 0x1B32D4u;
    // 0x1b32d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b32d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32d8: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B32D8u;
    SET_GPR_U32(ctx, 31, 0x1B32E0u);
    ctx->pc = 0x1B32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32D8u;
    // 0x1b32dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B32D8u, 0x1B32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32E0u;
}

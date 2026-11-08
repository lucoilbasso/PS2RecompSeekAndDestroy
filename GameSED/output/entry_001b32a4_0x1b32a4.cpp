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

// Function: entry_001b32a4
// Address: 0x1b32a4 - 0x1b32b4
void entry_001b32a4_0x1b32a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32a4_0x1b32a4");
#endif

    ctx->pc = 0x1b32a4u;

    // 0x1b32a4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B32A4u;
    {
        const bool branch_taken_0x1b32a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32A4u;
        // 0x1b32a8: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32a4) {
            ctx->pc = 0x1B32B4u;
            return;
        }
    }
    ctx->pc = 0x1B32ACu;
    // 0x1b32ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B32ACu;
    {
        const bool branch_taken_0x1b32ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32ACu;
        // 0x1b32b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32ac) {
            ctx->pc = 0x1B32C0u;
            return;
        }
    }
    ctx->pc = 0x1B32B4u;
}

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

// Function: entry_001c96e0
// Address: 0x1c96e0 - 0x1c96f0
void entry_001c96e0_0x1c96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c96e0_0x1c96e0");
#endif

    ctx->pc = 0x1c96e0u;

    // 0x1c96e0: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1c96e0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1c96e4: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x1c96e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1c96e8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C96E8u;
    {
        const bool branch_taken_0x1c96e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96e8) {
            ctx->pc = 0x1C96ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C96E8u;
            // 0x1c96ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C96F0u;
            return;
        }
    }
    ctx->pc = 0x1C96F0u;
}

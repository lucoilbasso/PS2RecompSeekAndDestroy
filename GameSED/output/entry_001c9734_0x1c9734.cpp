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

// Function: entry_001c9734
// Address: 0x1c9734 - 0x1c9744
void entry_001c9734_0x1c9734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9734_0x1c9734");
#endif

    ctx->pc = 0x1c9734u;

    // 0x1c9734: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x1c9734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1c9738: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1c9738u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1c973c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C973Cu;
    {
        const bool branch_taken_0x1c973c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c973c) {
            ctx->pc = 0x1C9740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C973Cu;
            // 0x1c9740: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9744u;
            return;
        }
    }
    ctx->pc = 0x1C9744u;
}

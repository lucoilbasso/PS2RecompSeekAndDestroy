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

// Function: entry_001c9230
// Address: 0x1c9230 - 0x1c9248
void entry_001c9230_0x1c9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9230_0x1c9230");
#endif

    ctx->pc = 0x1c9230u;

    // 0x1c9230: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1c9230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9234: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1c9234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9238: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1c9238u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1c923c: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1c923cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1c9240: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9240u;
    {
        const bool branch_taken_0x1c9240 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9240) {
            ctx->pc = 0x1C9244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9240u;
            // 0x1c9244: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9248u;
            return;
        }
    }
    ctx->pc = 0x1C9248u;
}

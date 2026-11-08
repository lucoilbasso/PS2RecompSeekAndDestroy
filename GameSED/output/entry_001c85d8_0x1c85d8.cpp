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

// Function: entry_001c85d8
// Address: 0x1c85d8 - 0x1c85f0
void entry_001c85d8_0x1c85d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c85d8_0x1c85d8");
#endif

    ctx->pc = 0x1c85d8u;

    // 0x1c85d8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1c85d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85dc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1c85dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85e0: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1c85e0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1c85e4: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1c85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1c85e8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C85E8u;
    {
        const bool branch_taken_0x1c85e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c85e8) {
            ctx->pc = 0x1C85ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C85E8u;
            // 0x1c85ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C85F0u;
            return;
        }
    }
    ctx->pc = 0x1C85F0u;
}

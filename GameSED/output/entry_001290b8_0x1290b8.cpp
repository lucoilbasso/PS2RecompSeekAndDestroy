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

// Function: entry_001290b8
// Address: 0x1290b8 - 0x1290cc
void entry_001290b8_0x1290b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001290b8_0x1290b8");
#endif

    ctx->pc = 0x1290b8u;

    // 0x1290b8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1290b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1290bc: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x1290bcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1290c0: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x1290c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x1290c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1290C4u;
    {
        const bool branch_taken_0x1290c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1290c4) {
            ctx->pc = 0x1290C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290C4u;
            // 0x1290c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1290CCu;
            return;
        }
    }
    ctx->pc = 0x1290CCu;
}

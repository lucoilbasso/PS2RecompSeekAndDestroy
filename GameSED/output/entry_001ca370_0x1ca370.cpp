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

// Function: entry_001ca370
// Address: 0x1ca370 - 0x1ca388
void entry_001ca370_0x1ca370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca370_0x1ca370");
#endif

    ctx->pc = 0x1ca370u;

    // 0x1ca370: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA370u;
    {
        const bool branch_taken_0x1ca370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca370) {
            ctx->pc = 0x1CA374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA370u;
            // 0x1ca374: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA388u;
            return;
        }
    }
    ctx->pc = 0x1CA378u;
    // 0x1ca378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca37c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca380: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA380u;
    {
        const bool branch_taken_0x1ca380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA380u;
        // 0x1ca384: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca380) {
            ctx->pc = 0x1CA3F0u;
            return;
        }
    }
    ctx->pc = 0x1CA388u;
}

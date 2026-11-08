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

// Function: entry_001861a8
// Address: 0x1861a8 - 0x1861c0
void entry_001861a8_0x1861a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001861a8_0x1861a8");
#endif

    ctx->pc = 0x1861a8u;

    // 0x1861a8: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1861A8u;
    {
        const bool branch_taken_0x1861a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1861a8) {
            ctx->pc = 0x1861ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1861A8u;
            // 0x1861ac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1861D0u;
            return;
        }
    }
    ctx->pc = 0x1861B0u;
    // 0x1861b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1861B0u;
    {
        const bool branch_taken_0x1861b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1861B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861B0u;
        // 0x1861b4: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861b0) {
            ctx->pc = 0x1861C0u;
            return;
        }
    }
    ctx->pc = 0x1861B8u;
    // 0x1861b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1861B8u;
    {
        const bool branch_taken_0x1861b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861B8u;
        // 0x1861bc: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861b8) {
            ctx->pc = 0x1861C4u;
            return;
        }
    }
    ctx->pc = 0x1861C0u;
}

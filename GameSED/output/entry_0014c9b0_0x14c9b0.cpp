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

// Function: entry_0014c9b0
// Address: 0x14c9b0 - 0x14c9d0
void entry_0014c9b0_0x14c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c9b0_0x14c9b0");
#endif

    ctx->pc = 0x14c9b0u;

    // 0x14c9b0: 0xa21101aa  sb          $s1, 0x1AA($s0)
    ctx->pc = 0x14c9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 426), (uint8_t)GPR_U32(ctx, 17));
    // 0x14c9b4: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14C9B4u;
    {
        const bool branch_taken_0x14c9b4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x14C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9B4u;
        // 0x14c9b8: 0xae0001b8  sw          $zero, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9b4) {
            ctx->pc = 0x14CA08u;
            return;
        }
    }
    ctx->pc = 0x14C9BCu;
    // 0x14c9bc: 0x265001b8  addiu       $s0, $s2, 0x1B8
    ctx->pc = 0x14c9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 440));
    // 0x14c9c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9c4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C9C4u;
    {
        const bool branch_taken_0x14c9c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9C4u;
        // 0x14c9c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9c4) {
            ctx->pc = 0x14C9D0u;
            return;
        }
    }
    ctx->pc = 0x14C9CCu;
    // 0x14c9cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x14c9d0u;
}

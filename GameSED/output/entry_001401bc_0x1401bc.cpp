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

// Function: entry_001401bc
// Address: 0x1401bc - 0x1401d8
void entry_001401bc_0x1401bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001401bc_0x1401bc");
#endif

    ctx->pc = 0x1401bcu;

    // 0x1401bc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1401BCu;
    {
        const bool branch_taken_0x1401bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401BCu;
        // 0x1401c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401bc) {
            ctx->pc = 0x1401D8u;
            return;
        }
    }
    ctx->pc = 0x1401C4u;
    // 0x1401c4: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1401c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1401c8: 0x8e430190  lw          $v1, 0x190($s2)
    ctx->pc = 0x1401c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x1401cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1401ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1401d0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1401D0u;
    {
        const bool branch_taken_0x1401d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401D0u;
        // 0x1401d4: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401d0) {
            ctx->pc = 0x140308u;
            return;
        }
    }
    ctx->pc = 0x1401D8u;
}

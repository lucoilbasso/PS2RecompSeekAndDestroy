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

// Function: entry_00117fc0
// Address: 0x117fc0 - 0x117fd8
void entry_00117fc0_0x117fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117fc0_0x117fc0");
#endif

    ctx->pc = 0x117fc0u;

    // 0x117fc0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117fc8: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x117fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x117fcc: 0x18400047  blez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x117FCCu;
    {
        const bool branch_taken_0x117fcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x117FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FCCu;
        // 0x117fd0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fcc) {
            ctx->pc = 0x1180ECu;
            return;
        }
    }
    ctx->pc = 0x117FD4u;
    // 0x117fd4: 0x0  nop
    ctx->pc = 0x117fd4u;
    // NOP
    ctx->pc = 0x117fd8u;
}

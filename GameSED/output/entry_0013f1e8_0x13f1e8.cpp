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

// Function: entry_0013f1e8
// Address: 0x13f1e8 - 0x13f1f8
void entry_0013f1e8_0x13f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f1e8_0x13f1e8");
#endif

    ctx->pc = 0x13f1e8u;

    // 0x13f1e8: 0x8cb00018  lw          $s0, 0x18($a1)
    ctx->pc = 0x13f1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x13f1ec: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F1ECu;
    {
        const bool branch_taken_0x13f1ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1ECu;
        // 0x13f1f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1ec) {
            ctx->pc = 0x13F214u;
            return;
        }
    }
    ctx->pc = 0x13F1F4u;
    // 0x13f1f4: 0x0  nop
    ctx->pc = 0x13f1f4u;
    // NOP
    ctx->pc = 0x13f1f8u;
}

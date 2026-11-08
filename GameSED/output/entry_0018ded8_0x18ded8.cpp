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

// Function: entry_0018ded8
// Address: 0x18ded8 - 0x18dee8
void entry_0018ded8_0x18ded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ded8_0x18ded8");
#endif

    ctx->pc = 0x18ded8u;

    // 0x18ded8: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x18DED8u;
    {
        const bool branch_taken_0x18ded8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DED8u;
        // 0x18dedc: 0x8c820218  lw          $v0, 0x218($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ded8) {
            ctx->pc = 0x18DF04u;
            return;
        }
    }
    ctx->pc = 0x18DEE0u;
    // 0x18dee0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18dee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dee4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x18dee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18dee8u;
}

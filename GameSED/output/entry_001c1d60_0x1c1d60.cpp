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

// Function: entry_001c1d60
// Address: 0x1c1d60 - 0x1c1d6c
void entry_001c1d60_0x1c1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1d60_0x1c1d60");
#endif

    ctx->pc = 0x1c1d60u;

    // 0x1c1d60: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x1c1d60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1d64: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C1D64u;
    {
        const bool branch_taken_0x1c1d64 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1C1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D64u;
        // 0x1c1d68: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d64) {
            ctx->pc = 0x1C1D48u;
            return;
        }
    }
    ctx->pc = 0x1C1D6Cu;
}

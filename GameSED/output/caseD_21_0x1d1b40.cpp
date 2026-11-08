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

// Function: caseD_21
// Address: 0x1d1b40 - 0x1d1b50
void caseD_21_0x1d1b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_21_0x1d1b40");
#endif

    ctx->pc = 0x1d1b40u;

    // 0x1d1b40: 0x12200363  beqz        $s1, . + 4 + (0x363 << 2)
    ctx->pc = 0x1D1B40u;
    {
        const bool branch_taken_0x1d1b40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B40u;
        // 0x1d1b44: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b40) {
            ctx->pc = 0x1D28D0u;
            return;
        }
    }
    ctx->pc = 0x1D1B48u;
    // 0x1d1b48: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d1b48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b4c: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x1d1b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
    ctx->pc = 0x1d1b50u;
}

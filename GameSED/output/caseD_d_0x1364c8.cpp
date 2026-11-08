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

// Function: caseD_d
// Address: 0x1364c8 - 0x1364d0
void caseD_d_0x1364c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1364c8");
#endif

    ctx->pc = 0x1364c8u;

    // 0x1364c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1364C8u;
    {
        const bool branch_taken_0x1364c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364C8u;
        // 0x1364cc: 0x3c130004  lui         $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364c8) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x1364D0u;
}

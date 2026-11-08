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

// Function: caseD_e
// Address: 0x1364d0 - 0x1364d8
void caseD_e_0x1364d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1364d0");
#endif

    ctx->pc = 0x1364d0u;

    // 0x1364d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1364D0u;
    {
        const bool branch_taken_0x1364d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364D0u;
        // 0x1364d4: 0x3c130020  lui         $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364d0) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x1364D8u;
}

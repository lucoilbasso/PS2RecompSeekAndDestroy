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

// Function: caseD_a
// Address: 0x1360a8 - 0x1360b0
void caseD_a_0x1360a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1360a8");
#endif

    ctx->pc = 0x1360a8u;

    // 0x1360a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1360A8u;
    {
        const bool branch_taken_0x1360a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360A8u;
        // 0x1360ac: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360a8) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x1360B0u;
}

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

// Function: caseD_9
// Address: 0x116690 - 0x116698
void caseD_9_0x116690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x116690");
#endif

    ctx->pc = 0x116690u;

    // 0x116690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116690u;
    {
        const bool branch_taken_0x116690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116690u;
        // 0x116694: 0x26230180  addiu       $v1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116690) {
            ctx->pc = 0x1166A4u;
            return;
        }
    }
    ctx->pc = 0x116698u;
}

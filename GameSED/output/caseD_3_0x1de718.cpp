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

// Function: caseD_3
// Address: 0x1de718 - 0x1de720
void caseD_3_0x1de718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1de718");
#endif

    ctx->pc = 0x1de718u;

    // 0x1de718: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE718u;
    {
        const bool branch_taken_0x1de718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE718u;
        // 0x1de71c: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de718) {
            ctx->pc = 0x1DE73Cu;
            return;
        }
    }
    ctx->pc = 0x1DE720u;
}

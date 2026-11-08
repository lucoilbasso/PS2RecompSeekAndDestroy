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

// Function: caseD_1
// Address: 0x1ded88 - 0x1ded90
void caseD_1_0x1ded88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1ded88");
#endif

    ctx->pc = 0x1ded88u;

    // 0x1ded88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DED88u;
    {
        const bool branch_taken_0x1ded88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED88u;
        // 0x1ded8c: 0xad000020  sw          $zero, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded88) {
            ctx->pc = 0x1DEDBCu;
            return;
        }
    }
    ctx->pc = 0x1DED90u;
}

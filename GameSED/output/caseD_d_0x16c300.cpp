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
// Address: 0x16c300 - 0x16c308
void caseD_d_0x16c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x16c300");
#endif

    ctx->pc = 0x16c300u;

    // 0x16c300: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x16C300u;
    {
        const bool branch_taken_0x16c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C300u;
        // 0x16c304: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c300) {
            ctx->pc = 0x16C488u;
            return;
        }
    }
    ctx->pc = 0x16C308u;
}

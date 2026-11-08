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
// Address: 0x1de708 - 0x1de710
void caseD_1_0x1de708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1de708");
#endif

    ctx->pc = 0x1de708u;

    // 0x1de708: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DE708u;
    {
        const bool branch_taken_0x1de708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE708u;
        // 0x1de70c: 0xad000020  sw          $zero, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de708) {
            ctx->pc = 0x1DE73Cu;
            return;
        }
    }
    ctx->pc = 0x1DE710u;
}

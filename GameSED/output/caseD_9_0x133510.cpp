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
// Address: 0x133510 - 0x133518
void caseD_9_0x133510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x133510");
#endif

    ctx->pc = 0x133510u;

    // 0x133510: 0x100002e4  b           . + 4 + (0x2E4 << 2)
    ctx->pc = 0x133510u;
    {
        const bool branch_taken_0x133510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133510u;
        // 0x133514: 0x92700235  lbu         $s0, 0x235($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 565)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133510) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133518u;
}

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

// Function: entry_00163658
// Address: 0x163658 - 0x163660
void entry_00163658_0x163658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163658_0x163658");
#endif

    ctx->pc = 0x163658u;

    // 0x163658: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x163658u;
    {
        const bool branch_taken_0x163658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163658u;
        // 0x16365c: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163658) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x163660u;
}

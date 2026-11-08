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

// Function: entry_0014ad8c
// Address: 0x14ad8c - 0x14ad94
void entry_0014ad8c_0x14ad8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ad8c_0x14ad8c");
#endif

    ctx->pc = 0x14ad8cu;

    // 0x14ad8c: 0x5660ffd6  bnel        $s3, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x14AD8Cu;
    {
        const bool branch_taken_0x14ad8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ad8c) {
            ctx->pc = 0x14AD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AD8Cu;
            // 0x14ad90: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ACE8u;
            return;
        }
    }
    ctx->pc = 0x14AD94u;
}

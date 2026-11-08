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

// Function: entry_00106e80
// Address: 0x106e80 - 0x106e88
void entry_00106e80_0x106e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106e80_0x106e80");
#endif

    ctx->pc = 0x106e80u;

    // 0x106e80: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106E80u;
    {
        const bool branch_taken_0x106e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106e80) {
            ctx->pc = 0x106E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E80u;
            // 0x106e84: 0xae33012c  sw          $s3, 0x12C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106E88u;
            return;
        }
    }
    ctx->pc = 0x106E88u;
}

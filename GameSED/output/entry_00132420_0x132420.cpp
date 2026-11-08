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

// Function: entry_00132420
// Address: 0x132420 - 0x132428
void entry_00132420_0x132420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132420_0x132420");
#endif

    ctx->pc = 0x132420u;

    // 0x132420: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x132420u;
    {
        const bool branch_taken_0x132420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x132424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132420u;
        // 0x132424: 0x24830030  addiu       $v1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132420) {
            ctx->pc = 0x132430u;
            return;
        }
    }
    ctx->pc = 0x132428u;
}

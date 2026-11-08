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

// Function: entry_00132784
// Address: 0x132784 - 0x13278c
void entry_00132784_0x132784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132784_0x132784");
#endif

    ctx->pc = 0x132784u;

    // 0x132784: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132784u;
    {
        const bool branch_taken_0x132784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132784u;
        // 0x132788: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132784) {
            ctx->pc = 0x132798u;
            return;
        }
    }
    ctx->pc = 0x13278Cu;
}

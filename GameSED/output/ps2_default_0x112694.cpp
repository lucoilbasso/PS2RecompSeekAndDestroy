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

// Function: default
// Address: 0x112694 - 0x11269c
void ps2_default_0x112694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x112694");
#endif

    ctx->pc = 0x112694u;

    // 0x112694: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x112694u;
    {
        const bool branch_taken_0x112694 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x112694) {
            ctx->pc = 0x112698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112694u;
            // 0x112698: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11269Cu;
            return;
        }
    }
    ctx->pc = 0x11269Cu;
}

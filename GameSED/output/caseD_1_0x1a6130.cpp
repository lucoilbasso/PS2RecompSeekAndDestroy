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
// Address: 0x1a6130 - 0x1a6138
void caseD_1_0x1a6130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a6130");
#endif

    ctx->pc = 0x1a6130u;

    // 0x1a6130: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A6130u;
    {
        const bool branch_taken_0x1a6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6130u;
        // 0x1a6134: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6130) {
            ctx->pc = 0x1A61DCu;
            return;
        }
    }
    ctx->pc = 0x1A6138u;
}

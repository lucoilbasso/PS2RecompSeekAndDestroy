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

// Function: entry_001411e0
// Address: 0x1411e0 - 0x1411f0
void entry_001411e0_0x1411e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001411e0_0x1411e0");
#endif

    ctx->pc = 0x1411e0u;

    // 0x1411e0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1411E0u;
    {
        const bool branch_taken_0x1411e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411E0u;
        // 0x1411e4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411e0) {
            ctx->pc = 0x1411F0u;
            return;
        }
    }
    ctx->pc = 0x1411E8u;
    // 0x1411e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1411E8u;
    {
        const bool branch_taken_0x1411e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1411ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411E8u;
        // 0x1411ec: 0xae330000  sw          $s3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1411e8) {
            ctx->pc = 0x141228u;
            return;
        }
    }
    ctx->pc = 0x1411F0u;
}

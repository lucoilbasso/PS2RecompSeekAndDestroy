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

// Function: entry_001c1b88
// Address: 0x1c1b88 - 0x1c1b9c
void entry_001c1b88_0x1c1b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b88_0x1c1b88");
#endif

    ctx->pc = 0x1c1b88u;

    // 0x1c1b88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1b8c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1c1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1c1b90: 0x1053fff7  beq         $v0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C1B90u;
    {
        const bool branch_taken_0x1c1b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B90u;
        // 0x1c1b94: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b90) {
            ctx->pc = 0x1C1B70u;
            return;
        }
    }
    ctx->pc = 0x1C1B98u;
    // 0x1c1b98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c1b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1c1b9cu;
}

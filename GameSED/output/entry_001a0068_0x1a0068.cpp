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

// Function: entry_001a0068
// Address: 0x1a0068 - 0x1a0078
void entry_001a0068_0x1a0068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0068_0x1a0068");
#endif

    ctx->pc = 0x1a0068u;

    // 0x1a0068: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a0068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a006c: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x1a006cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a0070: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A0070u;
    {
        const bool branch_taken_0x1a0070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0070) {
            ctx->pc = 0x1A0074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0070u;
            // 0x1a0074: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0038u;
            return;
        }
    }
    ctx->pc = 0x1A0078u;
}

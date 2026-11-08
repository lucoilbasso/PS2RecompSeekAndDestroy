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

// Function: entry_001d1a30
// Address: 0x1d1a30 - 0x1d1a44
void entry_001d1a30_0x1d1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1a30_0x1d1a30");
#endif

    ctx->pc = 0x1d1a30u;

    // 0x1d1a30: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1A30u;
    {
        const bool branch_taken_0x1d1a30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A30u;
        // 0x1d1a34: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a30) {
            ctx->pc = 0x1D1A44u;
            return;
        }
    }
    ctx->pc = 0x1D1A38u;
    // 0x1d1a38: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1d1a3c: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D1A3Cu;
    {
        const bool branch_taken_0x1d1a3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A3Cu;
        // 0x1d1a40: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a3c) {
            ctx->pc = 0x1D1B34u;
            return;
        }
    }
    ctx->pc = 0x1D1A44u;
}

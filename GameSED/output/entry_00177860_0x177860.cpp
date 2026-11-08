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

// Function: entry_00177860
// Address: 0x177860 - 0x17786c
void entry_00177860_0x177860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177860_0x177860");
#endif

    ctx->pc = 0x177860u;

    // 0x177860: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x177860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x177864: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x177864u;
    {
        const bool branch_taken_0x177864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177864u;
        // 0x177868: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177864) {
            ctx->pc = 0x177800u;
            return;
        }
    }
    ctx->pc = 0x17786Cu;
}

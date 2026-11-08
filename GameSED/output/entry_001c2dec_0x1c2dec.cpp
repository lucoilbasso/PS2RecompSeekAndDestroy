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

// Function: entry_001c2dec
// Address: 0x1c2dec - 0x1c2df8
void entry_001c2dec_0x1c2dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2dec_0x1c2dec");
#endif

    ctx->pc = 0x1c2decu;

    // 0x1c2dec: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1c2decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2df0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2DF0u;
    {
        const bool branch_taken_0x1c2df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DF0u;
        // 0x1c2df4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2df0) {
            ctx->pc = 0x1C2E00u;
            return;
        }
    }
    ctx->pc = 0x1C2DF8u;
}

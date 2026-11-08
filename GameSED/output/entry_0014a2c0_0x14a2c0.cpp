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

// Function: entry_0014a2c0
// Address: 0x14a2c0 - 0x14a2d0
void entry_0014a2c0_0x14a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a2c0_0x14a2c0");
#endif

    ctx->pc = 0x14a2c0u;

    // 0x14a2c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14a2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14a2c4: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x14a2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14a2c8: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14A2C8u;
    {
        const bool branch_taken_0x14a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2C8u;
        // 0x14a2cc: 0x254a0080  addiu       $t2, $t2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2c8) {
            ctx->pc = 0x14A260u;
            return;
        }
    }
    ctx->pc = 0x14A2D0u;
}

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

// Function: entry_00162108
// Address: 0x162108 - 0x162118
void entry_00162108_0x162108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162108_0x162108");
#endif

    ctx->pc = 0x162108u;

    // 0x162108: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x162108u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x16210c: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x16210cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x162110: 0x1440fe2b  bnez        $v0, . + 4 + (-0x1D5 << 2)
    ctx->pc = 0x162110u;
    {
        const bool branch_taken_0x162110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162110u;
        // 0x162114: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162110) {
            ctx->pc = 0x1619C0u;
            return;
        }
    }
    ctx->pc = 0x162118u;
}

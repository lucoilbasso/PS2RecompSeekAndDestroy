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

// Function: entry_0019cd2c
// Address: 0x19cd2c - 0x19cd34
void entry_0019cd2c_0x19cd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cd2c_0x19cd2c");
#endif

    ctx->pc = 0x19cd2cu;

    // 0x19cd2c: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19CD2Cu;
    {
        const bool branch_taken_0x19cd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19cd2c) {
            ctx->pc = 0x19CD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CD2Cu;
            // 0x19cd30: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CD20u;
            return;
        }
    }
    ctx->pc = 0x19CD34u;
}

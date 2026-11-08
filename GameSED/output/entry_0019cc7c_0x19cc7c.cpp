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

// Function: entry_0019cc7c
// Address: 0x19cc7c - 0x19cc88
void entry_0019cc7c_0x19cc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc7c_0x19cc7c");
#endif

    ctx->pc = 0x19cc7cu;

    // 0x19cc7c: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x19cc7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19cc80: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x19CC80u;
    {
        const bool branch_taken_0x19cc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC80u;
        // 0x19cc84: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc80) {
            ctx->pc = 0x19CC18u;
            return;
        }
    }
    ctx->pc = 0x19CC88u;
}

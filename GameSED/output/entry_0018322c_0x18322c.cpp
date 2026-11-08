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

// Function: entry_0018322c
// Address: 0x18322c - 0x183238
void entry_0018322c_0x18322c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018322c_0x18322c");
#endif

    ctx->pc = 0x18322cu;

    // 0x18322c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18322cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183230: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x183230u;
    {
        const bool branch_taken_0x183230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x183234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183230u;
        // 0x183234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183230) {
            ctx->pc = 0x183248u;
            return;
        }
    }
    ctx->pc = 0x183238u;
}

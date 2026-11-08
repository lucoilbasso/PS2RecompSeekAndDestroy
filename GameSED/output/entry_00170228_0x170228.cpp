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

// Function: entry_00170228
// Address: 0x170228 - 0x170240
void entry_00170228_0x170228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170228_0x170228");
#endif

    ctx->pc = 0x170228u;

    // 0x170228: 0x24020900  addiu       $v0, $zero, 0x900
    ctx->pc = 0x170228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x17022c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17022Cu;
    {
        const bool branch_taken_0x17022c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17022c) {
            ctx->pc = 0x170230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17022Cu;
            // 0x170230: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170248u;
            return;
        }
    }
    ctx->pc = 0x170234u;
    // 0x170234: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x170234u;
    {
        const bool branch_taken_0x170234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170234u;
        // 0x170238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170234) {
            ctx->pc = 0x17024Cu;
            return;
        }
    }
    ctx->pc = 0x17023Cu;
    // 0x17023c: 0x0  nop
    ctx->pc = 0x17023cu;
    // NOP
    ctx->pc = 0x170240u;
}

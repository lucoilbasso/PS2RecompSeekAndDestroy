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

// Function: entry_0010fb60
// Address: 0x10fb60 - 0x10fb70
void entry_0010fb60_0x10fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb60_0x10fb60");
#endif

    ctx->pc = 0x10fb60u;

    // 0x10fb60: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB60u;
    {
        const bool branch_taken_0x10fb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb60) {
            ctx->pc = 0x10FB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FB60u;
            // 0x10fb64: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FB70u;
            return;
        }
    }
    ctx->pc = 0x10FB68u;
    // 0x10fb68: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x10fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x10fb6c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x10fb70u;
}

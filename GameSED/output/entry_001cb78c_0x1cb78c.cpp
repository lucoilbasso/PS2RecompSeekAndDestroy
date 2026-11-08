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

// Function: entry_001cb78c
// Address: 0x1cb78c - 0x1cb7a0
void entry_001cb78c_0x1cb78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb78c_0x1cb78c");
#endif

    ctx->pc = 0x1cb78cu;

    // 0x1cb78c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cb790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb794: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1CB794u;
    {
        const bool branch_taken_0x1cb794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB794u;
        // 0x1cb798: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb794) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB79Cu;
    // 0x1cb79c: 0x0  nop
    ctx->pc = 0x1cb79cu;
    // NOP
    ctx->pc = 0x1cb7a0u;
}

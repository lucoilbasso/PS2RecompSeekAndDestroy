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

// Function: entry_001689bc
// Address: 0x1689bc - 0x1689c8
void entry_001689bc_0x1689bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001689bc_0x1689bc");
#endif

    ctx->pc = 0x1689bcu;

    // 0x1689bc: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x1689BCu;
    {
        const bool branch_taken_0x1689bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689BCu;
        // 0x1689c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689bc) {
            ctx->pc = 0x168E50u;
            return;
        }
    }
    ctx->pc = 0x1689C4u;
    // 0x1689c4: 0x0  nop
    ctx->pc = 0x1689c4u;
    // NOP
    ctx->pc = 0x1689c8u;
}

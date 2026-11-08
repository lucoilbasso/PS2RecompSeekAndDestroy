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

// Function: entry_00155fa0
// Address: 0x155fa0 - 0x155fa8
void entry_00155fa0_0x155fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155fa0_0x155fa0");
#endif

    ctx->pc = 0x155fa0u;

    // 0x155fa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155FA0u;
    {
        const bool branch_taken_0x155fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FA0u;
        // 0x155fa4: 0x2490075c  addiu       $s0, $a0, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1884));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fa0) {
            ctx->pc = 0x155FACu;
            return;
        }
    }
    ctx->pc = 0x155FA8u;
}

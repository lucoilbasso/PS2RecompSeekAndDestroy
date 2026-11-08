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

// Function: entry_001d16d0
// Address: 0x1d16d0 - 0x1d16e0
void entry_001d16d0_0x1d16d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d16d0_0x1d16d0");
#endif

    ctx->pc = 0x1d16d0u;

    // 0x1d16d0: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x1d16d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d16d4: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1D16D4u;
    {
        const bool branch_taken_0x1d16d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16D4u;
        // 0x1d16d8: 0x2455c3e0  addiu       $s5, $v0, -0x3C20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16d4) {
            ctx->pc = 0x1D1B54u;
            return;
        }
    }
    ctx->pc = 0x1D16DCu;
    // 0x1d16dc: 0x0  nop
    ctx->pc = 0x1d16dcu;
    // NOP
    ctx->pc = 0x1d16e0u;
}

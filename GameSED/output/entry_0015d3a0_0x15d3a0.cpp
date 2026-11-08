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

// Function: entry_0015d3a0
// Address: 0x15d3a0 - 0x15d3b0
void entry_0015d3a0_0x15d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3a0_0x15d3a0");
#endif

    ctx->pc = 0x15d3a0u;

    // 0x15d3a0: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x15d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x15d3a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15D3A4u;
    {
        const bool branch_taken_0x15d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3A4u;
        // 0x15d3a8: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3a4) {
            ctx->pc = 0x15D3F0u;
            return;
        }
    }
    ctx->pc = 0x15D3ACu;
    // 0x15d3ac: 0x0  nop
    ctx->pc = 0x15d3acu;
    // NOP
    ctx->pc = 0x15d3b0u;
}

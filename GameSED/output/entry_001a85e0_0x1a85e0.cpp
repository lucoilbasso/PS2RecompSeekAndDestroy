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

// Function: entry_001a85e0
// Address: 0x1a85e0 - 0x1a85f4
void entry_001a85e0_0x1a85e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a85e0_0x1a85e0");
#endif

    ctx->pc = 0x1a85e0u;

    // 0x1a85e0: 0x2c620200  sltiu       $v0, $v1, 0x200
    ctx->pc = 0x1a85e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a85e4: 0x0  nop
    ctx->pc = 0x1a85e4u;
    // NOP
    // 0x1a85e8: 0x0  nop
    ctx->pc = 0x1a85e8u;
    // NOP
    // 0x1a85ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A85ECu;
    {
        const bool branch_taken_0x1a85ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85ECu;
        // 0x1a85f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85ec) {
            ctx->pc = 0x1A85D8u;
            return;
        }
    }
    ctx->pc = 0x1A85F4u;
}

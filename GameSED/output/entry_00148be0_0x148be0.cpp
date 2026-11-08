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

// Function: entry_00148be0
// Address: 0x148be0 - 0x148bf0
void entry_00148be0_0x148be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148be0_0x148be0");
#endif

    ctx->pc = 0x148be0u;

    // 0x148be0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148be4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148be8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x148BE8u;
    {
        const bool branch_taken_0x148be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BE8u;
        // 0x148bec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148be8) {
            ctx->pc = 0x148BB8u;
            return;
        }
    }
    ctx->pc = 0x148BF0u;
}

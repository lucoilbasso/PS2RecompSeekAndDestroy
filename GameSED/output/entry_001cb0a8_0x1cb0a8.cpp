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

// Function: entry_001cb0a8
// Address: 0x1cb0a8 - 0x1cb0b8
void entry_001cb0a8_0x1cb0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb0a8_0x1cb0a8");
#endif

    ctx->pc = 0x1cb0a8u;

    // 0x1cb0a8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1cb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb0ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb0b0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CB0B0u;
    {
        const bool branch_taken_0x1cb0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0B0u;
        // 0x1cb0b4: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0b0) {
            ctx->pc = 0x1CB050u;
            return;
        }
    }
    ctx->pc = 0x1CB0B8u;
}

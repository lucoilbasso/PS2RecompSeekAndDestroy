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

// Function: entry_001cb104
// Address: 0x1cb104 - 0x1cb118
void entry_001cb104_0x1cb104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb104_0x1cb104");
#endif

    ctx->pc = 0x1cb104u;

    // 0x1cb104: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1cb104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb108: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb10c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CB10Cu;
    {
        const bool branch_taken_0x1cb10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB10Cu;
        // 0x1cb110: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb10c) {
            ctx->pc = 0x1CB0D8u;
            return;
        }
    }
    ctx->pc = 0x1CB114u;
    // 0x1cb114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cb118u;
}

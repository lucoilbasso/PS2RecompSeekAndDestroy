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

// Function: entry_001d4080
// Address: 0x1d4080 - 0x1d4098
void entry_001d4080_0x1d4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4080_0x1d4080");
#endif

    ctx->pc = 0x1d4080u;

    // 0x1d4080: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4084: 0x1662ff92  bne         $s3, $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x1D4084u;
    {
        const bool branch_taken_0x1d4084 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4084u;
        // 0x1d4088: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4084) {
            ctx->pc = 0x1D3ED0u;
            return;
        }
    }
    ctx->pc = 0x1D408Cu;
    // 0x1d408c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D408Cu;
    {
        const bool branch_taken_0x1d408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D408Cu;
        // 0x1d4090: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d408c) {
            ctx->pc = 0x1D40DCu;
            return;
        }
    }
    ctx->pc = 0x1D4094u;
    // 0x1d4094: 0x0  nop
    ctx->pc = 0x1d4094u;
    // NOP
    ctx->pc = 0x1d4098u;
}

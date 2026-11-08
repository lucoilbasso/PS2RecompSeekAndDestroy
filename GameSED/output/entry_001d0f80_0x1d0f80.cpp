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

// Function: entry_001d0f80
// Address: 0x1d0f80 - 0x1d0f90
void entry_001d0f80_0x1d0f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0f80_0x1d0f80");
#endif

    ctx->pc = 0x1d0f80u;

    // 0x1d0f80: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F80u;
    {
        const bool branch_taken_0x1d0f80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F80u;
        // 0x1d0f84: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f80) {
            ctx->pc = 0x1D0F90u;
            return;
        }
    }
    ctx->pc = 0x1D0F88u;
    // 0x1d0f88: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0F88u;
    {
        const bool branch_taken_0x1d0f88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f88) {
            ctx->pc = 0x1D0FBCu;
            return;
        }
    }
    ctx->pc = 0x1D0F90u;
}

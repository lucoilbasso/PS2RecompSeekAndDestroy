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

// Function: entry_00106b78
// Address: 0x106b78 - 0x106b90
void entry_00106b78_0x106b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106b78_0x106b78");
#endif

    ctx->pc = 0x106b78u;

    // 0x106b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106b7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x106b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x106b80: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x106b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x106b84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106b88: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106B88u;
    {
        const bool branch_taken_0x106b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x106B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B88u;
        // 0x106b8c: 0x8f909194  lw          $s0, -0x6E6C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b88) {
            ctx->pc = 0x106B9Cu;
            return;
        }
    }
    ctx->pc = 0x106B90u;
}

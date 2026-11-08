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

// Function: entry_00115568
// Address: 0x115568 - 0x115578
void entry_00115568_0x115568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115568_0x115568");
#endif

    ctx->pc = 0x115568u;

    // 0x115568: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x115568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x11556c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x11556cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x115570: 0x12430069  beq         $s2, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x115570u;
    {
        const bool branch_taken_0x115570 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x115574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115570u;
        // 0x115574: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115570) {
            ctx->pc = 0x115718u;
            return;
        }
    }
    ctx->pc = 0x115578u;
}

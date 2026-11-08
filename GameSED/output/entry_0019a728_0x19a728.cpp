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

// Function: entry_0019a728
// Address: 0x19a728 - 0x19a744
void entry_0019a728_0x19a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a728_0x19a728");
#endif

    ctx->pc = 0x19a728u;

label_19a728:
    // 0x19a728: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x19a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x19a72c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a730: 0x0  nop
    ctx->pc = 0x19a730u;
    // NOP
    // 0x19a734: 0x0  nop
    ctx->pc = 0x19a734u;
    // NOP
    // 0x19a738: 0x0  nop
    ctx->pc = 0x19a738u;
    // NOP
    // 0x19a73c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A73Cu;
    {
        const bool branch_taken_0x19a73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a73c) {
            ctx->pc = 0x19A740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A73Cu;
            // 0x19a740: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a728;
        }
    }
    ctx->pc = 0x19A744u;
}

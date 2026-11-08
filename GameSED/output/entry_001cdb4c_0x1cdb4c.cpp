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

// Function: entry_001cdb4c
// Address: 0x1cdb4c - 0x1cdb58
void entry_001cdb4c_0x1cdb4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdb4c_0x1cdb4c");
#endif

    ctx->pc = 0x1cdb4cu;

    // 0x1cdb4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1cdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cdb50: 0x144bffdf  bne         $v0, $t3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CDB50u;
    {
        const bool branch_taken_0x1cdb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x1CDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB50u;
        // 0x1cdb54: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb50) {
            ctx->pc = 0x1CDAD0u;
            return;
        }
    }
    ctx->pc = 0x1CDB58u;
}

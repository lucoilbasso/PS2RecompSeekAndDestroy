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

// Function: entry_001c2ddc
// Address: 0x1c2ddc - 0x1c2dec
void entry_001c2ddc_0x1c2ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2ddc_0x1c2ddc");
#endif

    ctx->pc = 0x1c2ddcu;

    // 0x1c2ddc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1c2ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2de0: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2DE0u;
    {
        const bool branch_taken_0x1c2de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1C2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DE0u;
        // 0x1c2de4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2de0) {
            ctx->pc = 0x1C2E00u;
            return;
        }
    }
    ctx->pc = 0x1C2DE8u;
    // 0x1c2de8: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1c2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    ctx->pc = 0x1c2decu;
}

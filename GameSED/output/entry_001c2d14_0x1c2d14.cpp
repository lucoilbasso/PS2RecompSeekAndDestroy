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

// Function: entry_001c2d14
// Address: 0x1c2d14 - 0x1c2d20
void entry_001c2d14_0x1c2d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2d14_0x1c2d14");
#endif

    ctx->pc = 0x1c2d14u;

    // 0x1c2d14: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C2D14u;
    {
        const bool branch_taken_0x1c2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D14u;
        // 0x1c2d18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d14) {
            ctx->pc = 0x1C2E00u;
            return;
        }
    }
    ctx->pc = 0x1C2D1Cu;
    // 0x1c2d1c: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x1c2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    ctx->pc = 0x1c2d20u;
}

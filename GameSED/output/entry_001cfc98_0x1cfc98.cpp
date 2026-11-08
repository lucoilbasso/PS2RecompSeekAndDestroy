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

// Function: entry_001cfc98
// Address: 0x1cfc98 - 0x1cfca8
void entry_001cfc98_0x1cfc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfc98_0x1cfc98");
#endif

    ctx->pc = 0x1cfc98u;

    // 0x1cfc98: 0x12050016  beq         $s0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CFC98u;
    {
        const bool branch_taken_0x1cfc98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC98u;
        // 0x1cfc9c: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc98) {
            ctx->pc = 0x1CFCF4u;
            return;
        }
    }
    ctx->pc = 0x1CFCA0u;
    // 0x1cfca0: 0x240cfffc  addiu       $t4, $zero, -0x4
    ctx->pc = 0x1cfca0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cfca4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1cfca8u;
}

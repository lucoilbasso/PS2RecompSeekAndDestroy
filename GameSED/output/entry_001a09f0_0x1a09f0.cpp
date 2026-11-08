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

// Function: entry_001a09f0
// Address: 0x1a09f0 - 0x1a0a08
void entry_001a09f0_0x1a09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a09f0_0x1a09f0");
#endif

    ctx->pc = 0x1a09f0u;

    // 0x1a09f0: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a09f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a09f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A09F8u;
    {
        const bool branch_taken_0x1a09f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09F8u;
        // 0x1a09fc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09f8) {
            ctx->pc = 0x1A0A2Cu;
            return;
        }
    }
    ctx->pc = 0x1A0A00u;
    // 0x1a0a00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0a04: 0x0  nop
    ctx->pc = 0x1a0a04u;
    // NOP
    ctx->pc = 0x1a0a08u;
}

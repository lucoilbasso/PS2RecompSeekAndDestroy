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

// Function: entry_001a06c0
// Address: 0x1a06c0 - 0x1a06d8
void entry_001a06c0_0x1a06c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a06c0_0x1a06c0");
#endif

    ctx->pc = 0x1a06c0u;

    // 0x1a06c0: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a06c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a06c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A06C8u;
    {
        const bool branch_taken_0x1a06c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06C8u;
        // 0x1a06cc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06c8) {
            ctx->pc = 0x1A06FCu;
            return;
        }
    }
    ctx->pc = 0x1A06D0u;
    // 0x1a06d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a06d4: 0x0  nop
    ctx->pc = 0x1a06d4u;
    // NOP
    ctx->pc = 0x1a06d8u;
}

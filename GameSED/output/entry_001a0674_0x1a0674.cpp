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

// Function: entry_001a0674
// Address: 0x1a0674 - 0x1a0690
void entry_001a0674_0x1a0674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0674_0x1a0674");
#endif

    ctx->pc = 0x1a0674u;

    // 0x1a0674: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a0674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a0678: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a067c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F6A8u));
    // 0x1a0680: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A0680u;
    {
        const bool branch_taken_0x1a0680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0680u;
        // 0x1a0684: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0680) {
            ctx->pc = 0x1A0700u;
            return;
        }
    }
    ctx->pc = 0x1A0688u;
    // 0x1a0688: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a068c: 0x0  nop
    ctx->pc = 0x1a068cu;
    // NOP
    ctx->pc = 0x1a0690u;
}

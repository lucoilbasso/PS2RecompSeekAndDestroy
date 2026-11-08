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

// Function: entry_001a0418
// Address: 0x1a0418 - 0x1a042c
void entry_001a0418_0x1a0418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0418_0x1a0418");
#endif

    ctx->pc = 0x1a0418u;

    // 0x1a0418: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a0418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a041c: 0x0  nop
    ctx->pc = 0x1a041cu;
    // NOP
    // 0x1a0420: 0x0  nop
    ctx->pc = 0x1a0420u;
    // NOP
    // 0x1a0424: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0424u;
    {
        const bool branch_taken_0x1a0424 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a0424) {
            ctx->pc = 0x1A0428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0424u;
            // 0x1a0428: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0408u;
            return;
        }
    }
    ctx->pc = 0x1A042Cu;
}

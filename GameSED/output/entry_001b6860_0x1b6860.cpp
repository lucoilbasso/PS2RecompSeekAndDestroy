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

// Function: entry_001b6860
// Address: 0x1b6860 - 0x1b6878
void entry_001b6860_0x1b6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6860_0x1b6860");
#endif

    ctx->pc = 0x1b6860u;

    // 0x1b6860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6864: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6864u;
    {
        const bool branch_taken_0x1b6864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6864u;
        // 0x1b6868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6864) {
            ctx->pc = 0x1B6878u;
            return;
        }
    }
    ctx->pc = 0x1B686Cu;
    // 0x1b686c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1b686cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6870: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6870u;
    {
        const bool branch_taken_0x1b6870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6870u;
        // 0x1b6874: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6870) {
            ctx->pc = 0x1B6890u;
            return;
        }
    }
    ctx->pc = 0x1B6878u;
}

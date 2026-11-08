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

// Function: caseD_c
// Address: 0x111788 - 0x1117a0
void caseD_c_0x111788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x111788");
#endif

    ctx->pc = 0x111788u;

    // 0x111788: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11178c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11178cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x111790: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x111790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x111794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x111794u;
    {
        const bool branch_taken_0x111794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111794u;
        // 0x111798: 0x249400d0  addiu       $s4, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111794) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x11179Cu;
    // 0x11179c: 0x0  nop
    ctx->pc = 0x11179cu;
    // NOP
    ctx->pc = 0x1117a0u;
}

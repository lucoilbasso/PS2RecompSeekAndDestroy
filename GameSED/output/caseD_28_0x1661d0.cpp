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

// Function: caseD_28
// Address: 0x1661d0 - 0x1661e8
void caseD_28_0x1661d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_28_0x1661d0");
#endif

    ctx->pc = 0x1661d0u;

    // 0x1661d0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1661d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1661d4: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1661d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    // 0x1661d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1661d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1661dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1661DCu;
    {
        const bool branch_taken_0x1661dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661DCu;
        // 0x1661e0: 0x24c69110  addiu       $a2, $a2, -0x6EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661dc) {
            ctx->pc = 0x1661F8u;
            return;
        }
    }
    ctx->pc = 0x1661E4u;
    // 0x1661e4: 0x0  nop
    ctx->pc = 0x1661e4u;
    // NOP
    ctx->pc = 0x1661e8u;
}

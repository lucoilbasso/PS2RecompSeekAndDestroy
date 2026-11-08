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

// Function: caseD_26
// Address: 0x1661a0 - 0x1661b8
void caseD_26_0x1661a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_26_0x1661a0");
#endif

    ctx->pc = 0x1661a0u;

    // 0x1661a0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1661a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1661a4: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1661a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    // 0x1661a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1661a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1661ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1661ACu;
    {
        const bool branch_taken_0x1661ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661ACu;
        // 0x1661b0: 0x24c6afd8  addiu       $a2, $a2, -0x5028 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661ac) {
            ctx->pc = 0x1661F8u;
            return;
        }
    }
    ctx->pc = 0x1661B4u;
    // 0x1661b4: 0x0  nop
    ctx->pc = 0x1661b4u;
    // NOP
    ctx->pc = 0x1661b8u;
}

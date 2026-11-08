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

// Function: caseD_1
// Address: 0x10e2d8 - 0x10e2f0
void caseD_1_0x10e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x10e2d8");
#endif

    ctx->pc = 0x10e2d8u;

    // 0x10e2d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e2dc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x10e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x10e2e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10e2e4: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x10E2E4u;
    {
        const bool branch_taken_0x10e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2E4u;
        // 0x10e2e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2e4) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E2ECu;
    // 0x10e2ec: 0x0  nop
    ctx->pc = 0x10e2ecu;
    // NOP
    ctx->pc = 0x10e2f0u;
}

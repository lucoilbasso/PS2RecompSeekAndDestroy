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

// Function: caseD_e
// Address: 0x1351d0 - 0x1351e8
void caseD_e_0x1351d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1351d0");
#endif

    ctx->pc = 0x1351d0u;

    // 0x1351d0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1351d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1351d4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1351d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1351d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1351d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1351dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1351DCu;
    {
        const bool branch_taken_0x1351dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351DCu;
        // 0x1351e0: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351dc) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x1351E4u;
    // 0x1351e4: 0x0  nop
    ctx->pc = 0x1351e4u;
    // NOP
    ctx->pc = 0x1351e8u;
}

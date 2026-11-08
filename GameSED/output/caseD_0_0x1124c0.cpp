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

// Function: caseD_0
// Address: 0x1124c0 - 0x1124d0
void caseD_0_0x1124c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1124c0");
#endif

    ctx->pc = 0x1124c0u;

    // 0x1124c0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1124c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1124c4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1124c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1124c8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1124C8u;
    {
        const bool branch_taken_0x1124c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124C8u;
        // 0x1124cc: 0x8c710020  lw          $s1, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124c8) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x1124D0u;
}

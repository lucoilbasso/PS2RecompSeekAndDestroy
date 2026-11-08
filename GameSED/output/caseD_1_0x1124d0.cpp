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
// Address: 0x1124d0 - 0x1124e0
void caseD_1_0x1124d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1124d0");
#endif

    ctx->pc = 0x1124d0u;

    // 0x1124d0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1124d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1124d4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1124d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1124d8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1124D8u;
    {
        const bool branch_taken_0x1124d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124D8u;
        // 0x1124dc: 0x8c710024  lw          $s1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124d8) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x1124E0u;
}

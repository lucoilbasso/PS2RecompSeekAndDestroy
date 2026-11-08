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

// Function: caseD_2
// Address: 0x1124e0 - 0x1124f0
void caseD_2_0x1124e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1124e0");
#endif

    ctx->pc = 0x1124e0u;

    // 0x1124e0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1124e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1124e4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1124e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1124e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1124E8u;
    {
        const bool branch_taken_0x1124e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124E8u;
        // 0x1124ec: 0x8c710028  lw          $s1, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124e8) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x1124F0u;
}

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

// Function: caseD_1a
// Address: 0x110fd8 - 0x110fe8
void caseD_1a_0x110fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x110fd8");
#endif

    ctx->pc = 0x110fd8u;

    // 0x110fd8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x110fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x110fdc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x110fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x110fe0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x110FE0u;
    {
        const bool branch_taken_0x110fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE0u;
        // 0x110fe4: 0x8c750044  lw          $s5, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe0) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110FE8u;
}

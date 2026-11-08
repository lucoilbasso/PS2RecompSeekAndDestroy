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
// Address: 0x112628 - 0x112638
void caseD_1_0x112628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x112628");
#endif

    ctx->pc = 0x112628u;

    // 0x112628: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11262c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11262cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112630: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x112630u;
    {
        const bool branch_taken_0x112630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112630u;
        // 0x112634: 0x90710031  lbu         $s1, 0x31($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112630) {
            ctx->pc = 0x112694u;
            return;
        }
    }
    ctx->pc = 0x112638u;
}

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

// Function: caseD_4
// Address: 0x112658 - 0x112668
void caseD_4_0x112658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x112658");
#endif

    ctx->pc = 0x112658u;

    // 0x112658: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11265c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11265cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112660: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x112660u;
    {
        const bool branch_taken_0x112660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112660u;
        // 0x112664: 0xa0710030  sb          $s1, 0x30($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112660) {
            ctx->pc = 0x112694u;
            return;
        }
    }
    ctx->pc = 0x112668u;
}

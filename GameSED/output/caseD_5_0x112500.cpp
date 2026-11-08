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

// Function: caseD_5
// Address: 0x112500 - 0x112510
void caseD_5_0x112500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x112500");
#endif

    ctx->pc = 0x112500u;

    // 0x112500: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112504: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x112504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112508: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x112508u;
    {
        const bool branch_taken_0x112508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112508u;
        // 0x11250c: 0xac710024  sw          $s1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112508) {
            ctx->pc = 0x112564u;
            return;
        }
    }
    ctx->pc = 0x112510u;
}

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

// Function: entry_001aa7d0
// Address: 0x1aa7d0 - 0x1aa7e8
void entry_001aa7d0_0x1aa7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa7d0_0x1aa7d0");
#endif

    ctx->pc = 0x1aa7d0u;

    // 0x1aa7d0: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x1aa7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x1aa7d4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1aa7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1aa7d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa7dc: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x1aa7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1aa7e0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1AA7E0u;
    {
        const bool branch_taken_0x1aa7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7E0u;
        // 0x1aa7e4: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7e0) {
            ctx->pc = 0x1AA8D8u;
            return;
        }
    }
    ctx->pc = 0x1AA7E8u;
}

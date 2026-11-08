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

// Function: $L18
// Address: 0x1d0a5c - 0x1d0a70
void ps2__L18_0x1d0a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L18_0x1d0a5c");
#endif

    ctx->pc = 0x1d0a5cu;

    // 0x1d0a5c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1d0a5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0a60: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D0A60u;
    {
        const bool branch_taken_0x1d0a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0a60) {
            ctx->pc = 0x1D0A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0A60u;
            // 0x1d0a64: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0AC8u;
            return;
        }
    }
    ctx->pc = 0x1D0A68u;
    // 0x1d0a68: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1d0a68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0a6c: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x1d0a6cu;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    ctx->pc = 0x1d0a70u;
}

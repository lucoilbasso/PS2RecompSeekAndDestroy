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

// Function: entry_0015e2d8
// Address: 0x15e2d8 - 0x15e2e8
void entry_0015e2d8_0x15e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e2d8_0x15e2d8");
#endif

    ctx->pc = 0x15e2d8u;

    // 0x15e2d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E2D8u;
    {
        const bool branch_taken_0x15e2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e2d8) {
            ctx->pc = 0x15E2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E2D8u;
            // 0x15e2dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2ECu;
            return;
        }
    }
    ctx->pc = 0x15E2E0u;
    // 0x15e2e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2e4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x15e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x15e2e8u;
}

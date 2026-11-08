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

// Function: entry_00152a88
// Address: 0x152a88 - 0x152aa0
void entry_00152a88_0x152a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152a88_0x152a88");
#endif

    ctx->pc = 0x152a88u;

    // 0x152a88: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x152a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x152a8c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x152a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x152a90: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x152a90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x152a94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152A94u;
    {
        const bool branch_taken_0x152a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A94u;
        // 0x152a98: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a94) {
            ctx->pc = 0x152AC0u;
            return;
        }
    }
    ctx->pc = 0x152A9Cu;
    // 0x152a9c: 0x0  nop
    ctx->pc = 0x152a9cu;
    // NOP
    ctx->pc = 0x152aa0u;
}

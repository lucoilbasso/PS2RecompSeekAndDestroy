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

// Function: entry_0015e2c4
// Address: 0x15e2c4 - 0x15e2d8
void entry_0015e2c4_0x15e2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e2c4_0x15e2c4");
#endif

    ctx->pc = 0x15e2c4u;

    // 0x15e2c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15e2c8: 0xae150034  sw          $s5, 0x34($s0)
    ctx->pc = 0x15e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 21));
    // 0x15e2cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E2CCu;
    {
        const bool branch_taken_0x15e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2CCu;
        // 0x15e2d0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2cc) {
            ctx->pc = 0x15E2E8u;
            return;
        }
    }
    ctx->pc = 0x15E2D4u;
    // 0x15e2d4: 0x0  nop
    ctx->pc = 0x15e2d4u;
    // NOP
    ctx->pc = 0x15e2d8u;
}

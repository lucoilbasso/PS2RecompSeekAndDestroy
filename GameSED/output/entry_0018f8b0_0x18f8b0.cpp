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

// Function: entry_0018f8b0
// Address: 0x18f8b0 - 0x18f8c8
void entry_0018f8b0_0x18f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f8b0_0x18f8b0");
#endif

    ctx->pc = 0x18f8b0u;

    // 0x18f8b0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x18f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x18f8b4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18f8b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f8bc: 0xace30130  sw          $v1, 0x130($a3)
    ctx->pc = 0x18f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 3));
    // 0x18f8c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18F8C0u;
    {
        const bool branch_taken_0x18f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8C0u;
        // 0x18f8c4: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8c0) {
            ctx->pc = 0x18F908u;
            return;
        }
    }
    ctx->pc = 0x18F8C8u;
}

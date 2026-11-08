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

// Function: entry_001e04d8
// Address: 0x1e04d8 - 0x1e04f0
void entry_001e04d8_0x1e04d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e04d8_0x1e04d8");
#endif

    ctx->pc = 0x1e04d8u;

    // 0x1e04d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e04dc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E04DCu;
    {
        const bool branch_taken_0x1e04dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04DCu;
        // 0x1e04e0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04dc) {
            ctx->pc = 0x1E04F0u;
            return;
        }
    }
    ctx->pc = 0x1E04E4u;
    // 0x1e04e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E04E4u;
    {
        const bool branch_taken_0x1e04e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E4u;
        // 0x1e04e8: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e4) {
            ctx->pc = 0x1E04F4u;
            return;
        }
    }
    ctx->pc = 0x1E04ECu;
    // 0x1e04ec: 0x0  nop
    ctx->pc = 0x1e04ecu;
    // NOP
    ctx->pc = 0x1e04f0u;
}

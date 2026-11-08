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

// Function: entry_0019b6b0
// Address: 0x19b6b0 - 0x19b6c8
void entry_0019b6b0_0x19b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b6b0_0x19b6b0");
#endif

    ctx->pc = 0x19b6b0u;

    // 0x19b6b0: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B6B0u;
    {
        const bool branch_taken_0x19b6b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6B0u;
        // 0x19b6b4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6b0) {
            ctx->pc = 0x19B6C8u;
            return;
        }
    }
    ctx->pc = 0x19B6B8u;
    // 0x19b6b8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b6bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B6BCu;
    {
        const bool branch_taken_0x19b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6BCu;
        // 0x19b6c0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6bc) {
            ctx->pc = 0x19B6CCu;
            return;
        }
    }
    ctx->pc = 0x19B6C4u;
    // 0x19b6c4: 0x0  nop
    ctx->pc = 0x19b6c4u;
    // NOP
    ctx->pc = 0x19b6c8u;
}

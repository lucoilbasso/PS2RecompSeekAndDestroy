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

// Function: entry_0019b7a8
// Address: 0x19b7a8 - 0x19b7c0
void entry_0019b7a8_0x19b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b7a8_0x19b7a8");
#endif

    ctx->pc = 0x19b7a8u;

    // 0x19b7a8: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B7A8u;
    {
        const bool branch_taken_0x19b7a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7A8u;
        // 0x19b7ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7a8) {
            ctx->pc = 0x19B7C0u;
            return;
        }
    }
    ctx->pc = 0x19B7B0u;
    // 0x19b7b0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b7b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B7B4u;
    {
        const bool branch_taken_0x19b7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7B4u;
        // 0x19b7b8: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7b4) {
            ctx->pc = 0x19B7C4u;
            return;
        }
    }
    ctx->pc = 0x19B7BCu;
    // 0x19b7bc: 0x0  nop
    ctx->pc = 0x19b7bcu;
    // NOP
    ctx->pc = 0x19b7c0u;
}

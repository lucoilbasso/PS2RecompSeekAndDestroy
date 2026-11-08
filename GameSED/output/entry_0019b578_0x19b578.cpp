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

// Function: entry_0019b578
// Address: 0x19b578 - 0x19b590
void entry_0019b578_0x19b578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b578_0x19b578");
#endif

    ctx->pc = 0x19b578u;

    // 0x19b578: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B578u;
    {
        const bool branch_taken_0x19b578 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B578u;
        // 0x19b57c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b578) {
            ctx->pc = 0x19B590u;
            return;
        }
    }
    ctx->pc = 0x19B580u;
    // 0x19b580: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B584u;
    {
        const bool branch_taken_0x19b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B584u;
        // 0x19b588: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b584) {
            ctx->pc = 0x19B594u;
            return;
        }
    }
    ctx->pc = 0x19B58Cu;
    // 0x19b58c: 0x0  nop
    ctx->pc = 0x19b58cu;
    // NOP
    ctx->pc = 0x19b590u;
}

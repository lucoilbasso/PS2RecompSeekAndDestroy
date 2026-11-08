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

// Function: entry_0019cb20
// Address: 0x19cb20 - 0x19cb38
void entry_0019cb20_0x19cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb20_0x19cb20");
#endif

    ctx->pc = 0x19cb20u;

    // 0x19cb20: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CB20u;
    {
        const bool branch_taken_0x19cb20 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB20u;
        // 0x19cb24: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb20) {
            ctx->pc = 0x19CB38u;
            return;
        }
    }
    ctx->pc = 0x19CB28u;
    // 0x19cb28: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19cb2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19CB2Cu;
    {
        const bool branch_taken_0x19cb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB2Cu;
        // 0x19cb30: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb2c) {
            ctx->pc = 0x19CB3Cu;
            return;
        }
    }
    ctx->pc = 0x19CB34u;
    // 0x19cb34: 0x0  nop
    ctx->pc = 0x19cb34u;
    // NOP
    ctx->pc = 0x19cb38u;
}

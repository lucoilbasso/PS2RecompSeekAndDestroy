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

// Function: entry_00130080
// Address: 0x130080 - 0x1300a0
void entry_00130080_0x130080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130080_0x130080");
#endif

    ctx->pc = 0x130080u;

    // 0x130080: 0x0  nop
    ctx->pc = 0x130080u;
    // NOP
    // 0x130084: 0x0  nop
    ctx->pc = 0x130084u;
    // NOP
    // 0x130088: 0x0  nop
    ctx->pc = 0x130088u;
    // NOP
    // 0x13008c: 0x0  nop
    ctx->pc = 0x13008cu;
    // NOP
    // 0x130090: 0x0  nop
    ctx->pc = 0x130090u;
    // NOP
    // 0x130094: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x130094u;
    {
        const bool branch_taken_0x130094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130094u;
        // 0x130098: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130094) {
            ctx->pc = 0x130078u;
            return;
        }
    }
    ctx->pc = 0x13009Cu;
    // 0x13009c: 0x0  nop
    ctx->pc = 0x13009cu;
    // NOP
    ctx->pc = 0x1300a0u;
}

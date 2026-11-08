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

// Function: entry_00109234
// Address: 0x109234 - 0x109240
void entry_00109234_0x109234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109234_0x109234");
#endif

    ctx->pc = 0x109234u;

    // 0x109234: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x109234u;
    {
        const bool branch_taken_0x109234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109234u;
        // 0x109238: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109234) {
            ctx->pc = 0x1092C4u;
            return;
        }
    }
    ctx->pc = 0x10923Cu;
    // 0x10923c: 0x0  nop
    ctx->pc = 0x10923cu;
    // NOP
    ctx->pc = 0x109240u;
}

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

// Function: entry_0019ceb0
// Address: 0x19ceb0 - 0x19cebc
void entry_0019ceb0_0x19ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ceb0_0x19ceb0");
#endif

    ctx->pc = 0x19ceb0u;

    // 0x19ceb0: 0x0  nop
    ctx->pc = 0x19ceb0u;
    // NOP
    // 0x19ceb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CEB4u;
    {
        const bool branch_taken_0x19ceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB4u;
        // 0x19ceb8: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ceb4) {
            ctx->pc = 0x19CEA0u;
            return;
        }
    }
    ctx->pc = 0x19CEBCu;
}

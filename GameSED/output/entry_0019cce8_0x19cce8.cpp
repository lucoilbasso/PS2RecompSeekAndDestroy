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

// Function: entry_0019cce8
// Address: 0x19cce8 - 0x19ccf4
void entry_0019cce8_0x19cce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cce8_0x19cce8");
#endif

    ctx->pc = 0x19cce8u;

    // 0x19cce8: 0x0  nop
    ctx->pc = 0x19cce8u;
    // NOP
    // 0x19ccec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CCECu;
    {
        const bool branch_taken_0x19ccec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CCECu;
        // 0x19ccf0: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ccec) {
            ctx->pc = 0x19CCD8u;
            return;
        }
    }
    ctx->pc = 0x19CCF4u;
}

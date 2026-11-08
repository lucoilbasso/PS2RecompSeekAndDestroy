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

// Function: entry_0011cec8
// Address: 0x11cec8 - 0x11ced4
void entry_0011cec8_0x11cec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cec8_0x11cec8");
#endif

    ctx->pc = 0x11cec8u;

    // 0x11cec8: 0x0  nop
    ctx->pc = 0x11cec8u;
    // NOP
    // 0x11cecc: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11CECCu;
    {
        const bool branch_taken_0x11cecc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cecc) {
            ctx->pc = 0x11CED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CECCu;
            // 0x11ced0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CEB0u;
            return;
        }
    }
    ctx->pc = 0x11CED4u;
}

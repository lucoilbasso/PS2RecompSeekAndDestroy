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

// Function: caseD_b
// Address: 0x111ee0 - 0x111ef0
void caseD_b_0x111ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x111ee0");
#endif

    ctx->pc = 0x111ee0u;

    // 0x111ee0: 0x8f978a30  lw          $s7, -0x75D0($gp)
    ctx->pc = 0x111ee0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x111ee4: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x111EE4u;
    {
        const bool branch_taken_0x111ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EE4u;
        // 0x111ee8: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ee4) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111EECu;
    // 0x111eec: 0x0  nop
    ctx->pc = 0x111eecu;
    // NOP
    ctx->pc = 0x111ef0u;
}

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

// Function: caseD_1
// Address: 0x132bf0 - 0x132c00
void caseD_1_0x132bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x132bf0");
#endif

    ctx->pc = 0x132bf0u;

    // 0x132bf0: 0x8f828a30  lw          $v0, -0x75D0($gp)
    ctx->pc = 0x132bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x132bf4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x132BF4u;
    {
        const bool branch_taken_0x132bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BF4u;
        // 0x132bf8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bf4) {
            ctx->pc = 0x132C38u;
            return;
        }
    }
    ctx->pc = 0x132BFCu;
    // 0x132bfc: 0x0  nop
    ctx->pc = 0x132bfcu;
    // NOP
    ctx->pc = 0x132c00u;
}

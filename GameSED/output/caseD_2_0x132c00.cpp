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

// Function: caseD_2
// Address: 0x132c00 - 0x132c10
void caseD_2_0x132c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x132c00");
#endif

    ctx->pc = 0x132c00u;

    // 0x132c00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x132c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132c04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x132C04u;
    {
        const bool branch_taken_0x132c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C04u;
        // 0x132c08: 0xaf828a30  sw          $v0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c04) {
            ctx->pc = 0x132C38u;
            return;
        }
    }
    ctx->pc = 0x132C0Cu;
    // 0x132c0c: 0x0  nop
    ctx->pc = 0x132c0cu;
    // NOP
    ctx->pc = 0x132c10u;
}

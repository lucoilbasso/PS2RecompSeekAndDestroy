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

// Function: caseD_3
// Address: 0x132c10 - 0x132c28
void caseD_3_0x132c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x132c10");
#endif

    ctx->pc = 0x132c10u;

    // 0x132c10: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132c14: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132c14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132c18: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x132c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x132c1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x132C1Cu;
    {
        const bool branch_taken_0x132c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C1Cu;
        // 0x132c20: 0xaf848a30  sw          $a0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c1c) {
            ctx->pc = 0x132C38u;
            return;
        }
    }
    ctx->pc = 0x132C24u;
    // 0x132c24: 0x0  nop
    ctx->pc = 0x132c24u;
    // NOP
    ctx->pc = 0x132c28u;
}

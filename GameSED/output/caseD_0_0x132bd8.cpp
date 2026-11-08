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

// Function: caseD_0
// Address: 0x132bd8 - 0x132bf0
void caseD_0_0x132bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x132bd8");
#endif

    ctx->pc = 0x132bd8u;

    // 0x132bd8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132bdc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132be0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x132be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x132be4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x132BE4u;
    {
        const bool branch_taken_0x132be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BE4u;
        // 0x132be8: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132be4) {
            ctx->pc = 0x132C38u;
            return;
        }
    }
    ctx->pc = 0x132BECu;
    // 0x132bec: 0x0  nop
    ctx->pc = 0x132becu;
    // NOP
    ctx->pc = 0x132bf0u;
}

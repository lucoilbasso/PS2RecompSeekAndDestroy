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

// Function: entry_001759c8
// Address: 0x1759c8 - 0x1759e4
void entry_001759c8_0x1759c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001759c8_0x1759c8");
#endif

    ctx->pc = 0x1759c8u;

label_1759c8:
    // 0x1759c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1759c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1759cc: 0x0  nop
    ctx->pc = 0x1759ccu;
    // NOP
    // 0x1759d0: 0x0  nop
    ctx->pc = 0x1759d0u;
    // NOP
    // 0x1759d4: 0x0  nop
    ctx->pc = 0x1759d4u;
    // NOP
    // 0x1759d8: 0x0  nop
    ctx->pc = 0x1759d8u;
    // NOP
    // 0x1759dc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1759DCu;
    {
        const bool branch_taken_0x1759dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1759dc) {
            ctx->pc = 0x1759C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1759c8;
        }
    }
    ctx->pc = 0x1759E4u;
}

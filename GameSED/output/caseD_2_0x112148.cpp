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
// Address: 0x112148 - 0x112158
void caseD_2_0x112148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x112148");
#endif

    ctx->pc = 0x112148u;

    // 0x112148: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x112148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x11214c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112150: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x112150u;
    {
        const bool branch_taken_0x112150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112150u;
        // 0x112154: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112150) {
            ctx->pc = 0x11229Cu;
            return;
        }
    }
    ctx->pc = 0x112158u;
}

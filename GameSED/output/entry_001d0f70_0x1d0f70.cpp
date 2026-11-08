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

// Function: entry_001d0f70
// Address: 0x1d0f70 - 0x1d0f80
void entry_001d0f70_0x1d0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0f70_0x1d0f70");
#endif

    ctx->pc = 0x1d0f70u;

    // 0x1d0f70: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F70u;
    {
        const bool branch_taken_0x1d0f70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f70) {
            ctx->pc = 0x1D0F80u;
            return;
        }
    }
    ctx->pc = 0x1D0F78u;
    // 0x1d0f78: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d0f7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d0f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1d0f80u;
}

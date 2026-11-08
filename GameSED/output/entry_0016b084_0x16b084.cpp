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

// Function: entry_0016b084
// Address: 0x16b084 - 0x16b094
void entry_0016b084_0x16b084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b084_0x16b084");
#endif

    ctx->pc = 0x16b084u;

    // 0x16b084: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B084u;
    {
        const bool branch_taken_0x16b084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b084) {
            ctx->pc = 0x16B094u;
            return;
        }
    }
    ctx->pc = 0x16B08Cu;
    // 0x16b08c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b090: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x16b090u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    ctx->pc = 0x16b094u;
}

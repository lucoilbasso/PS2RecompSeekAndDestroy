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

// Function: entry_00199488
// Address: 0x199488 - 0x199498
void entry_00199488_0x199488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199488_0x199488");
#endif

    ctx->pc = 0x199488u;

    // 0x199488: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x199488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x19948c: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x19948cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x199490: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x199490u;
    {
        const bool branch_taken_0x199490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199490) {
            ctx->pc = 0x1993D8u;
            return;
        }
    }
    ctx->pc = 0x199498u;
}

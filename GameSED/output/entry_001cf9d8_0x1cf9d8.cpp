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

// Function: entry_001cf9d8
// Address: 0x1cf9d8 - 0x1cf9ec
void entry_001cf9d8_0x1cf9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf9d8_0x1cf9d8");
#endif

    ctx->pc = 0x1cf9d8u;

    // 0x1cf9d8: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x1cf9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cf9dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CF9DCu;
    {
        const bool branch_taken_0x1cf9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf9dc) {
            ctx->pc = 0x1CF998u;
            return;
        }
    }
    ctx->pc = 0x1CF9E4u;
    // 0x1cf9e4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1cf9e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1cf9e8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cf9e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x1cf9ecu;
}

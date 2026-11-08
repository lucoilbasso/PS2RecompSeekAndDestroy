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

// Function: entry_001ceb90
// Address: 0x1ceb90 - 0x1ceba0
void entry_001ceb90_0x1ceb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceb90_0x1ceb90");
#endif

    ctx->pc = 0x1ceb90u;

    // 0x1ceb90: 0x3c1e001e  lui         $fp, 0x1E
    ctx->pc = 0x1ceb90u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb94: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1ceb94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1ceb98: 0x3c15001e  lui         $s5, 0x1E
    ctx->pc = 0x1ceb98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb9c: 0x3c17001e  lui         $s7, 0x1E
    ctx->pc = 0x1ceb9cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)30 << 16));
    ctx->pc = 0x1ceba0u;
}

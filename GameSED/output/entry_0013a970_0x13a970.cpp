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

// Function: entry_0013a970
// Address: 0x13a970 - 0x13a974
void entry_0013a970_0x13a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a970_0x13a970");
#endif

    ctx->pc = 0x13a970u;

    // 0x13a970: 0x2603075c  addiu       $v1, $s0, 0x75C
    ctx->pc = 0x13a970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
    ctx->pc = 0x13a974u;
}

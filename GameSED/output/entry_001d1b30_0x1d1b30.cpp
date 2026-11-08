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

// Function: entry_001d1b30
// Address: 0x1d1b30 - 0x1d1b34
void entry_001d1b30_0x1d1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1b30_0x1d1b30");
#endif

    ctx->pc = 0x1d1b30u;

    // 0x1d1b30: 0x3b51023  subu        $v0, $sp, $s5
    ctx->pc = 0x1d1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
    ctx->pc = 0x1d1b34u;
}

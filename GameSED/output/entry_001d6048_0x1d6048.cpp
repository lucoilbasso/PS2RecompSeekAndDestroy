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

// Function: entry_001d6048
// Address: 0x1d6048 - 0x1d604c
void entry_001d6048_0x1d6048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6048_0x1d6048");
#endif

    ctx->pc = 0x1d6048u;

    // 0x1d6048: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x1d6048u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    ctx->pc = 0x1d604cu;
}

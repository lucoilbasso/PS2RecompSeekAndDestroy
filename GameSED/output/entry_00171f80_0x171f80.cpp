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

// Function: entry_00171f80
// Address: 0x171f80 - 0x171f84
void entry_00171f80_0x171f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171f80_0x171f80");
#endif

    ctx->pc = 0x171f80u;

    // 0x171f80: 0x1274825  or          $t1, $t1, $a3
    ctx->pc = 0x171f80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    ctx->pc = 0x171f84u;
}

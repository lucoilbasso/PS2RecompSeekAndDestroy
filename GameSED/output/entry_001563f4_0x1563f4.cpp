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

// Function: entry_001563f4
// Address: 0x1563f4 - 0x1563f8
void entry_001563f4_0x1563f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001563f4_0x1563f4");
#endif

    ctx->pc = 0x1563f4u;

    // 0x1563f4: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1563f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    ctx->pc = 0x1563f8u;
}

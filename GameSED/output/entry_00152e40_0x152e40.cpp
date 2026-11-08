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

// Function: entry_00152e40
// Address: 0x152e40 - 0x152e44
void entry_00152e40_0x152e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152e40_0x152e40");
#endif

    ctx->pc = 0x152e40u;

    // 0x152e40: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x152e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    ctx->pc = 0x152e44u;
}

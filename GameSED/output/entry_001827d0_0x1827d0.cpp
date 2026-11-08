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

// Function: entry_001827d0
// Address: 0x1827d0 - 0x1827d4
void entry_001827d0_0x1827d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001827d0_0x1827d0");
#endif

    ctx->pc = 0x1827d0u;

    // 0x1827d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1827d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1827d4u;
}

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

// Function: entry_0011f3f8
// Address: 0x11f3f8 - 0x11f3fc
void entry_0011f3f8_0x11f3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f3f8_0x11f3f8");
#endif

    ctx->pc = 0x11f3f8u;

    // 0x11f3f8: 0x4600ae86  mov.s       $f26, $f21
    ctx->pc = 0x11f3f8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11f3fcu;
}

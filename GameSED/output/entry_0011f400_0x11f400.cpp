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

// Function: entry_0011f400
// Address: 0x11f400 - 0x11f404
void entry_0011f400_0x11f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f400_0x11f400");
#endif

    ctx->pc = 0x11f400u;

    // 0x11f400: 0x4600ae46  mov.s       $f25, $f21
    ctx->pc = 0x11f400u;
    ctx->f[25] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x11f404u;
}

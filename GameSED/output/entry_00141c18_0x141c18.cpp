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

// Function: entry_00141c18
// Address: 0x141c18 - 0x141c1c
void entry_00141c18_0x141c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141c18_0x141c18");
#endif

    ctx->pc = 0x141c18u;

    // 0x141c18: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x141c18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x141c1cu;
}

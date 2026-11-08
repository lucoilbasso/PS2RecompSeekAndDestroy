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

// Function: entry_0019f018
// Address: 0x19f018 - 0x19f01c
void entry_0019f018_0x19f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f018_0x19f018");
#endif

    ctx->pc = 0x19f018u;

    // 0x19f018: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x19f018u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x19f01cu;
}

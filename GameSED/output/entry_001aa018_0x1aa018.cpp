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

// Function: entry_001aa018
// Address: 0x1aa018 - 0x1aa01c
void entry_001aa018_0x1aa018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa018_0x1aa018");
#endif

    ctx->pc = 0x1aa018u;

    // 0x1aa018: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x1aa018u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    ctx->pc = 0x1aa01cu;
}

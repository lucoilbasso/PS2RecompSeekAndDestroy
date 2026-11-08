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

// Function: entry_00148ed4
// Address: 0x148ed4 - 0x148ed8
void entry_00148ed4_0x148ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ed4_0x148ed4");
#endif

    ctx->pc = 0x148ed4u;

    // 0x148ed4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x148ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x148ed8u;
}

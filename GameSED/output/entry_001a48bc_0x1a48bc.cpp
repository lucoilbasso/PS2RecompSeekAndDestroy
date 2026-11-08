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

// Function: entry_001a48bc
// Address: 0x1a48bc - 0x1a48c0
void entry_001a48bc_0x1a48bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a48bc_0x1a48bc");
#endif

    ctx->pc = 0x1a48bcu;

    // 0x1a48bc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a48bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1a48c0u;
}

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

// Function: entry_0018c1e8
// Address: 0x18c1e8 - 0x18c1ec
void entry_0018c1e8_0x18c1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c1e8_0x18c1e8");
#endif

    ctx->pc = 0x18c1e8u;

    // 0x18c1e8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x18c1e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x18c1ecu;
}

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

// Function: entry_00191364
// Address: 0x191364 - 0x191368
void entry_00191364_0x191364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191364_0x191364");
#endif

    ctx->pc = 0x191364u;

    // 0x191364: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x191364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    ctx->pc = 0x191368u;
}

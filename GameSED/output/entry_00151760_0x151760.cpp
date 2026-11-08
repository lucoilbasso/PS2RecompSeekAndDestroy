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

// Function: entry_00151760
// Address: 0x151760 - 0x151764
void entry_00151760_0x151760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151760_0x151760");
#endif

    ctx->pc = 0x151760u;

    // 0x151760: 0x460110a8  max.s       $f2, $f2, $f1
    ctx->pc = 0x151760u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[1]);
    ctx->pc = 0x151764u;
}

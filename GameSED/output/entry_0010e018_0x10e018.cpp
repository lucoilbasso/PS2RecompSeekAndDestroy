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

// Function: entry_0010e018
// Address: 0x10e018 - 0x10e01c
void entry_0010e018_0x10e018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e018_0x10e018");
#endif

    ctx->pc = 0x10e018u;

    // 0x10e018: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x10e018u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    ctx->pc = 0x10e01cu;
}

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

// Function: entry_001a8e88
// Address: 0x1a8e88 - 0x1a8e8c
void entry_001a8e88_0x1a8e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e88_0x1a8e88");
#endif

    ctx->pc = 0x1a8e88u;

    // 0x1a8e88: 0x48380a  movz        $a3, $v0, $t0
    ctx->pc = 0x1a8e88u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    ctx->pc = 0x1a8e8cu;
}

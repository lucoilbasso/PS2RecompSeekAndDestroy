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

// Function: entry_001b6cc4
// Address: 0x1b6cc4 - 0x1b6cc8
void entry_001b6cc4_0x1b6cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6cc4_0x1b6cc4");
#endif

    ctx->pc = 0x1b6cc4u;

    // 0x1b6cc4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1b6cc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->pc = 0x1b6cc8u;
}

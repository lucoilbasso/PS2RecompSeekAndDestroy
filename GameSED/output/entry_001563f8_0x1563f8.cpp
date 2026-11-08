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

// Function: entry_001563f8
// Address: 0x1563f8 - 0x1563fc
void entry_001563f8_0x1563f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001563f8_0x1563f8");
#endif

    ctx->pc = 0x1563f8u;

    // 0x1563f8: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1563f8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1563fcu;
}

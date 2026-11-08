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

// Function: entry_0015bdc4
// Address: 0x15bdc4 - 0x15bdc8
void entry_0015bdc4_0x15bdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bdc4_0x15bdc4");
#endif

    ctx->pc = 0x15bdc4u;

    // 0x15bdc4: 0x83b00a  movz        $s6, $a0, $v1
    ctx->pc = 0x15bdc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
    ctx->pc = 0x15bdc8u;
}

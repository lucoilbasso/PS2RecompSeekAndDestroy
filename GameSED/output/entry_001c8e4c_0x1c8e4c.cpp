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

// Function: entry_001c8e4c
// Address: 0x1c8e4c - 0x1c8e50
void entry_001c8e4c_0x1c8e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8e4c_0x1c8e4c");
#endif

    ctx->pc = 0x1c8e4cu;

    // 0x1c8e4c: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1c8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    ctx->pc = 0x1c8e50u;
}

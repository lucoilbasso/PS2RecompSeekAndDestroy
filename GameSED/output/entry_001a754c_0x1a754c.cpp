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

// Function: entry_001a754c
// Address: 0x1a754c - 0x1a7550
void entry_001a754c_0x1a754c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a754c_0x1a754c");
#endif

    ctx->pc = 0x1a754cu;

    // 0x1a754c: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x1a754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->pc = 0x1a7550u;
}

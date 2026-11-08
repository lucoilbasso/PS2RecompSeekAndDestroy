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

// Function: entry_0012bd9c
// Address: 0x12bd9c - 0x12bda0
void entry_0012bd9c_0x12bd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bd9c_0x12bd9c");
#endif

    ctx->pc = 0x12bd9cu;

    // 0x12bd9c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x12bd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->pc = 0x12bda0u;
}

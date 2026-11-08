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

// Function: entry_001189a4
// Address: 0x1189a4 - 0x1189a8
void entry_001189a4_0x1189a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001189a4_0x1189a4");
#endif

    ctx->pc = 0x1189a4u;

    // 0x1189a4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1189a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1189a8u;
}

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

// Function: entry_0019d5e0
// Address: 0x19d5e0 - 0x19d5e4
void entry_0019d5e0_0x19d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d5e0_0x19d5e0");
#endif

    ctx->pc = 0x19d5e0u;

    // 0x19d5e0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x19d5e4u;
}

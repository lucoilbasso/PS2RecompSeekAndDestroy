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

// Function: entry_0019d184
// Address: 0x19d184 - 0x19d188
void entry_0019d184_0x19d184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d184_0x19d184");
#endif

    ctx->pc = 0x19d184u;

    // 0x19d184: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x19d184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    ctx->pc = 0x19d188u;
}

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

// Function: entry_0018824c
// Address: 0x18824c - 0x188250
void entry_0018824c_0x18824c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018824c_0x18824c");
#endif

    ctx->pc = 0x18824cu;

    // 0x18824c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x18824cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x188250u;
}

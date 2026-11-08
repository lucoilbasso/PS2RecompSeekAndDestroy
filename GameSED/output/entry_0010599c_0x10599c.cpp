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

// Function: entry_0010599c
// Address: 0x10599c - 0x1059a0
void entry_0010599c_0x10599c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010599c_0x10599c");
#endif

    ctx->pc = 0x10599cu;

    // 0x10599c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x10599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x1059a0u;
}

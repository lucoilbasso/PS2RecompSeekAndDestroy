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

// Function: entry_0019a22c
// Address: 0x19a22c - 0x19a230
void entry_0019a22c_0x19a22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a22c_0x19a22c");
#endif

    ctx->pc = 0x19a22cu;

    // 0x19a22c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x19a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x19a230u;
}

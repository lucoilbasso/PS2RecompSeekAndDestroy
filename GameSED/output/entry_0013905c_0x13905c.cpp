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

// Function: entry_0013905c
// Address: 0x13905c - 0x139060
void entry_0013905c_0x13905c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013905c_0x13905c");
#endif

    ctx->pc = 0x13905cu;

    // 0x13905c: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    ctx->pc = 0x139060u;
}

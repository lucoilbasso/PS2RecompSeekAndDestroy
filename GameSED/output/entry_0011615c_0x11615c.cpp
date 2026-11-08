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

// Function: entry_0011615c
// Address: 0x11615c - 0x116160
void entry_0011615c_0x11615c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011615c_0x11615c");
#endif

    ctx->pc = 0x11615cu;

    // 0x11615c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    ctx->pc = 0x116160u;
}

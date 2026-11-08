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

// Function: entry_0011259c
// Address: 0x11259c - 0x1125a0
void entry_0011259c_0x11259c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011259c_0x11259c");
#endif

    ctx->pc = 0x11259cu;

    // 0x11259c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1125a0u;
}

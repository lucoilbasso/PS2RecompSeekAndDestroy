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

// Function: entry_0017179c
// Address: 0x17179c - 0x1717a0
void entry_0017179c_0x17179c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017179c_0x17179c");
#endif

    ctx->pc = 0x17179cu;

    // 0x17179c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x17179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->pc = 0x1717a0u;
}

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

// Function: entry_0019789c
// Address: 0x19789c - 0x1978a0
void entry_0019789c_0x19789c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019789c_0x19789c");
#endif

    ctx->pc = 0x19789cu;

    // 0x19789c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x19789cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x1978a0u;
}

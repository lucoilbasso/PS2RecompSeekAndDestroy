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

// Function: entry_0015e6f0
// Address: 0x15e6f0 - 0x15e6f4
void entry_0015e6f0_0x15e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e6f0_0x15e6f0");
#endif

    ctx->pc = 0x15e6f0u;

    // 0x15e6f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x15e6f4u;
}

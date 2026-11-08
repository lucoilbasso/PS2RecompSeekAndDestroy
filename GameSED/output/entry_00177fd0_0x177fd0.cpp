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

// Function: entry_00177fd0
// Address: 0x177fd0 - 0x177fd4
void entry_00177fd0_0x177fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177fd0_0x177fd0");
#endif

    ctx->pc = 0x177fd0u;

    // 0x177fd0: 0xa2020055  sb          $v0, 0x55($s0)
    ctx->pc = 0x177fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x177fd4u;
}

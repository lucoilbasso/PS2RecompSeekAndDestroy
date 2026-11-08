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

// Function: entry_001dfdc8
// Address: 0x1dfdc8 - 0x1dfdd0
void entry_001dfdc8_0x1dfdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfdc8_0x1dfdc8");
#endif

    ctx->pc = 0x1dfdc8u;

    // 0x1dfdc8: 0xae3001a4  sw          $s0, 0x1A4($s1)
    ctx->pc = 0x1dfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 16));
    // 0x1dfdcc: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x1dfdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    ctx->pc = 0x1dfdd0u;
}

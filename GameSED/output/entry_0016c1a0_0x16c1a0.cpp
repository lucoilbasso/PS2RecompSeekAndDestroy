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

// Function: entry_0016c1a0
// Address: 0x16c1a0 - 0x16c1a8
void entry_0016c1a0_0x16c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c1a0_0x16c1a0");
#endif

    ctx->pc = 0x16c1a0u;

    // 0x16c1a0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x16c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x16c1a4: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x16c1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->pc = 0x16c1a8u;
}

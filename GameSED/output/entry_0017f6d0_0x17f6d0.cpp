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

// Function: entry_0017f6d0
// Address: 0x17f6d0 - 0x17f6d8
void entry_0017f6d0_0x17f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6d0_0x17f6d0");
#endif

    ctx->pc = 0x17f6d0u;

    // 0x17f6d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f6d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x17f6d8u;
}

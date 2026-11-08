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

// Function: entry_001673a0
// Address: 0x1673a0 - 0x1673a8
void entry_001673a0_0x1673a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001673a0_0x1673a0");
#endif

    ctx->pc = 0x1673a0u;

    // 0x1673a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1673a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1673a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1673a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x1673a8u;
}

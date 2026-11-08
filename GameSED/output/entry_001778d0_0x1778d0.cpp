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

// Function: entry_001778d0
// Address: 0x1778d0 - 0x1778dc
void entry_001778d0_0x1778d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001778d0_0x1778d0");
#endif

    ctx->pc = 0x1778d0u;

    // 0x1778d0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1778d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1778d4: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x1778d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1778d8: 0xa0820055  sb          $v0, 0x55($a0)
    ctx->pc = 0x1778d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1778dcu;
}

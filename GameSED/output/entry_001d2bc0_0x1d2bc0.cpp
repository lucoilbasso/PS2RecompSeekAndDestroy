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

// Function: entry_001d2bc0
// Address: 0x1d2bc0 - 0x1d2bc8
void entry_001d2bc0_0x1d2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2bc0_0x1d2bc0");
#endif

    ctx->pc = 0x1d2bc0u;

    // 0x1d2bc0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1d2bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2bc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d2bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1d2bc8u;
}

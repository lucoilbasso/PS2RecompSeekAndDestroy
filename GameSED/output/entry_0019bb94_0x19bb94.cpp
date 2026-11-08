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

// Function: entry_0019bb94
// Address: 0x19bb94 - 0x19bb9c
void entry_0019bb94_0x19bb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb94_0x19bb94");
#endif

    ctx->pc = 0x19bb94u;

    // 0x19bb94: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x19bb94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19bb98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19bb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x19bb9cu;
}

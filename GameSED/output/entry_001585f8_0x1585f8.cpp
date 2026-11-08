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

// Function: entry_001585f8
// Address: 0x1585f8 - 0x158604
void entry_001585f8_0x1585f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001585f8_0x1585f8");
#endif

    ctx->pc = 0x1585f8u;

    // 0x1585f8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1585f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1585fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1585fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x158600: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x158600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    ctx->pc = 0x158604u;
}

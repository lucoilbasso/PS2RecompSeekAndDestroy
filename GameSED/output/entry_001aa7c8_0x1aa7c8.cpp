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

// Function: entry_001aa7c8
// Address: 0x1aa7c8 - 0x1aa7d0
void entry_001aa7c8_0x1aa7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa7c8_0x1aa7c8");
#endif

    ctx->pc = 0x1aa7c8u;

    // 0x1aa7c8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1aa7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1aa7cc: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x1aa7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    ctx->pc = 0x1aa7d0u;
}

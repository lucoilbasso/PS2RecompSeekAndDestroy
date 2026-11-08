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

// Function: entry_0019c8d0
// Address: 0x19c8d0 - 0x19c8d8
void entry_0019c8d0_0x19c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8d0_0x19c8d0");
#endif

    ctx->pc = 0x19c8d0u;

    // 0x19c8d0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x19c8d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c8d4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x19c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->pc = 0x19c8d8u;
}

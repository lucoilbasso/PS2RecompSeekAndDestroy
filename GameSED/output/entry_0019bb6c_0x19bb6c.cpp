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

// Function: entry_0019bb6c
// Address: 0x19bb6c - 0x19bb78
void entry_0019bb6c_0x19bb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb6c_0x19bb6c");
#endif

    ctx->pc = 0x19bb6cu;

    // 0x19bb6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19bb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19bb70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19bb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19bb74: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19bb74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19bb78u;
}

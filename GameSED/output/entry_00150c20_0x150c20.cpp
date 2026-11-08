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

// Function: entry_00150c20
// Address: 0x150c20 - 0x150c28
void entry_00150c20_0x150c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150c20_0x150c20");
#endif

    ctx->pc = 0x150c20u;

    // 0x150c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150c24: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x150c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    ctx->pc = 0x150c28u;
}

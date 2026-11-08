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

// Function: entry_00158c80
// Address: 0x158c80 - 0x158c88
void entry_00158c80_0x158c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158c80_0x158c80");
#endif

    ctx->pc = 0x158c80u;

    // 0x158c80: 0x25040400  addiu       $a0, $t0, 0x400
    ctx->pc = 0x158c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x158c84: 0x250303e0  addiu       $v1, $t0, 0x3E0
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 992));
    ctx->pc = 0x158c88u;
}

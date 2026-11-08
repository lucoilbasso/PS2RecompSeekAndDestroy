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

// Function: entry_0018e9d0
// Address: 0x18e9d0 - 0x18e9d8
void entry_0018e9d0_0x18e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e9d0_0x18e9d0");
#endif

    ctx->pc = 0x18e9d0u;

    // 0x18e9d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18e9d4: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x18e9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x18e9d8u;
}

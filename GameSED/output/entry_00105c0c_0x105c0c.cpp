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

// Function: entry_00105c0c
// Address: 0x105c0c - 0x105c10
void entry_00105c0c_0x105c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105c0c_0x105c0c");
#endif

    ctx->pc = 0x105c0cu;

    // 0x105c0c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x105c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x105c10u;
}

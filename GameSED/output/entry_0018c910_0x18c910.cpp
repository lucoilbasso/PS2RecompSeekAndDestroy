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

// Function: entry_0018c910
// Address: 0x18c910 - 0x18c918
void entry_0018c910_0x18c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c910_0x18c910");
#endif

    ctx->pc = 0x18c910u;

    // 0x18c910: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c914: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x18c914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x18c918u;
}

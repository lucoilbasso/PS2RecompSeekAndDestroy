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

// Function: entry_00105e18
// Address: 0x105e18 - 0x105e20
void entry_00105e18_0x105e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105e18_0x105e18");
#endif

    ctx->pc = 0x105e18u;

    // 0x105e18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x105e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105e1c: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x105e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x105e20u;
}

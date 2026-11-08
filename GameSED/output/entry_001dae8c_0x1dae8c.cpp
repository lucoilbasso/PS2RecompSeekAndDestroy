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

// Function: entry_001dae8c
// Address: 0x1dae8c - 0x1dae98
void entry_001dae8c_0x1dae8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dae8c_0x1dae8c");
#endif

    ctx->pc = 0x1dae8cu;

    // 0x1dae8c: 0x26041258  addiu       $a0, $s0, 0x1258
    ctx->pc = 0x1dae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4696));
    // 0x1dae90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dae94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1dae98u;
}

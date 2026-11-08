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

// Function: entry_001d5c40
// Address: 0x1d5c40 - 0x1d5c54
void entry_001d5c40_0x1d5c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c40_0x1d5c40");
#endif

    ctx->pc = 0x1d5c40u;

    // 0x1d5c40: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x1d5c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x1d5c44: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1d5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5c48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5c4c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1d5c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d5c50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1d5c54u;
}

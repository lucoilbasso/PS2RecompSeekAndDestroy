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

// Function: entry_00156c50
// Address: 0x156c50 - 0x156c60
void entry_00156c50_0x156c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156c50_0x156c50");
#endif

    ctx->pc = 0x156c50u;

    // 0x156c50: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x156c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x156c54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x156c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156c58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x156c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156c5c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x156c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x156c60u;
}

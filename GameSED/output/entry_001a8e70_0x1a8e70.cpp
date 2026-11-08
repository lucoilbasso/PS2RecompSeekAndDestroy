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

// Function: entry_001a8e70
// Address: 0x1a8e70 - 0x1a8e88
void entry_001a8e70_0x1a8e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e70_0x1a8e70");
#endif

    ctx->pc = 0x1a8e70u;

    // 0x1a8e70: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a8e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8e74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a8e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a8e78: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1a8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a8e7c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1a8e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a8e80: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1a8e80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a8e84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a8e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1a8e88u;
}

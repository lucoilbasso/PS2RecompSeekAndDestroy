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

// Function: entry_0019cee0
// Address: 0x19cee0 - 0x19cef4
void entry_0019cee0_0x19cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cee0_0x19cee0");
#endif

    ctx->pc = 0x19cee0u;

    // 0x19cee0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19cee4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19cee8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19ceec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19cef0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x19cef4u;
}

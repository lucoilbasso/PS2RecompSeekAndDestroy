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

// Function: entry_00103700
// Address: 0x103700 - 0x103714
void entry_00103700_0x103700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103700_0x103700");
#endif

    ctx->pc = 0x103700u;

    // 0x103700: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x103700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x103704: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x103704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x103708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x103708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10370c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10370cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103710: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x103710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x103714u;
}

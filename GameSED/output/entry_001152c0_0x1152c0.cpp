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

// Function: entry_001152c0
// Address: 0x1152c0 - 0x1152d8
void entry_001152c0_0x1152c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001152c0_0x1152c0");
#endif

    ctx->pc = 0x1152c0u;

    // 0x1152c0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1152c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1152c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1152c8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1152c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1152cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1152ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1152d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1152d4: 0x28c50022  slti        $a1, $a2, 0x22
    ctx->pc = 0x1152d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    ctx->pc = 0x1152d8u;
}

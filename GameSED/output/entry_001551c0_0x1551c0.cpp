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

// Function: entry_001551c0
// Address: 0x1551c0 - 0x1551cc
void entry_001551c0_0x1551c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001551c0_0x1551c0");
#endif

    ctx->pc = 0x1551c0u;

    // 0x1551c0: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x1551c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1551c4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1551c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1551c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1551c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1551ccu;
}

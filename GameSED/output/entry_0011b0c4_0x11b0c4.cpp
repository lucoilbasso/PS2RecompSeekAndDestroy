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

// Function: entry_0011b0c4
// Address: 0x11b0c4 - 0x11b0e0
void entry_0011b0c4_0x11b0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b0c4_0x11b0c4");
#endif

    ctx->pc = 0x11b0c4u;

    // 0x11b0c4: 0x264533f0  addiu       $a1, $s2, 0x33F0
    ctx->pc = 0x11b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 13296));
    // 0x11b0c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b0cc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11b0d0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x11b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11b0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b0d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11b0dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x11b0e0u;
}

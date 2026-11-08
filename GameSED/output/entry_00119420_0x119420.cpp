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

// Function: entry_00119420
// Address: 0x119420 - 0x119430
void entry_00119420_0x119420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119420_0x119420");
#endif

    ctx->pc = 0x119420u;

    // 0x119420: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x119420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x119424: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x119424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x119428: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x119428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
    // 0x11942c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11942cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x119430u;
}

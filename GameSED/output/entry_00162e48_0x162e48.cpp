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

// Function: entry_00162e48
// Address: 0x162e48 - 0x162e78
void entry_00162e48_0x162e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162e48_0x162e48");
#endif

    ctx->pc = 0x162e48u;

    // 0x162e48: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x162e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x162e4c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x162e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x162e50: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x162e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x162e54: 0x24c6a430  addiu       $a2, $a2, -0x5BD0
    ctx->pc = 0x162e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943792));
    // 0x162e58: 0x24a50610  addiu       $a1, $a1, 0x610
    ctx->pc = 0x162e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1552));
    // 0x162e5c: 0x8cc41400  lw          $a0, 0x1400($a2)
    ctx->pc = 0x162e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x162e60: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x162e60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162e64: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x162e64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x162e68: 0x8cc31400  lw          $v1, 0x1400($a2)
    ctx->pc = 0x162e68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x162e6c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x162e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x162e70: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x162e70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x162e74: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x162e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    ctx->pc = 0x162e78u;
}

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

// Function: entry_001417e8
// Address: 0x1417e8 - 0x141800
void entry_001417e8_0x1417e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001417e8_0x1417e8");
#endif

    ctx->pc = 0x1417e8u;

    // 0x1417e8: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1417ec: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1417ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1417f0: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x1417f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1417f4: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1417f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1417f8: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x1417f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1417fc: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1417fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x141800u;
}

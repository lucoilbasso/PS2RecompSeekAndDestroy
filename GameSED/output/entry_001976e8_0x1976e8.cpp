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

// Function: entry_001976e8
// Address: 0x1976e8 - 0x197704
void entry_001976e8_0x1976e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001976e8_0x1976e8");
#endif

    ctx->pc = 0x1976e8u;

    // 0x1976e8: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1976e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1976ec: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x1976ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x1976f0: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x1976f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1976f4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1976f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1976f8: 0x8d230028  lw          $v1, 0x28($t1)
    ctx->pc = 0x1976f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x1976fc: 0x34c20100  ori         $v0, $a2, 0x100
    ctx->pc = 0x1976fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x197700: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x197700u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->pc = 0x197704u;
}

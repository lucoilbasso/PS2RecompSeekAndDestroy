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

// Function: entry_00194ed8
// Address: 0x194ed8 - 0x194eec
void entry_00194ed8_0x194ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194ed8_0x194ed8");
#endif

    ctx->pc = 0x194ed8u;

    // 0x194ed8: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x194ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x194edc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x194edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x194ee0: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x194ee0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x194ee4: 0x34c30100  ori         $v1, $a2, 0x100
    ctx->pc = 0x194ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x194ee8: 0x68300a  movz        $a2, $v1, $t0
    ctx->pc = 0x194ee8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->pc = 0x194eecu;
}

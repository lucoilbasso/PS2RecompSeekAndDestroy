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

// Function: entry_00105598
// Address: 0x105598 - 0x1055b8
void entry_00105598_0x105598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105598_0x105598");
#endif

    ctx->pc = 0x105598u;

    // 0x105598: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x105598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x10559c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1055a0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1055a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1055a4: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1055a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1055a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1055ac: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1055acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1055b0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1055b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1055b4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1055b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x1055b8u;
}

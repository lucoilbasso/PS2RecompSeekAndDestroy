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

// Function: caseD_8
// Address: 0x10e3a0 - 0x10e3b0
void caseD_8_0x10e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x10e3a0");
#endif

    ctx->pc = 0x10e3a0u;

    // 0x10e3a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e3a4: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x10e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x10e3a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10e3ac: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x10e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    ctx->pc = 0x10e3b0u;
}

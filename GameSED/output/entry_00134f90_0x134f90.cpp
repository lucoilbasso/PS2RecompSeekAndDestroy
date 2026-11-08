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

// Function: entry_00134f90
// Address: 0x134f90 - 0x134f9c
void entry_00134f90_0x134f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134f90_0x134f90");
#endif

    ctx->pc = 0x134f90u;

    // 0x134f90: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x134f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x134f94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x134f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x134f98: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x134f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    ctx->pc = 0x134f9cu;
}

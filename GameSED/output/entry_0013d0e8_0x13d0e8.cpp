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

// Function: entry_0013d0e8
// Address: 0x13d0e8 - 0x13d0fc
void entry_0013d0e8_0x13d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d0e8_0x13d0e8");
#endif

    ctx->pc = 0x13d0e8u;

    // 0x13d0e8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x13d0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d0ec: 0x25490050  addiu       $t1, $t2, 0x50
    ctx->pc = 0x13d0ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x13d0f0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x13d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13d0f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x13d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d0f8: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x13d0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->pc = 0x13d0fcu;
}

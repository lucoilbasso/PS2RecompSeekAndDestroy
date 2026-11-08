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

// Function: entry_001718a8
// Address: 0x1718a8 - 0x1718b8
void entry_001718a8_0x1718a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001718a8_0x1718a8");
#endif

    ctx->pc = 0x1718a8u;

    // 0x1718a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1718a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1718ac: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x1718acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1718b0: 0x27a8001c  addiu       $t0, $sp, 0x1C
    ctx->pc = 0x1718b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1718b4: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x1718b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->pc = 0x1718b8u;
}

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

// Function: entry_00174318
// Address: 0x174318 - 0x174330
void entry_00174318_0x174318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174318_0x174318");
#endif

    ctx->pc = 0x174318u;

    // 0x174318: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x174318u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17431c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17431cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174324: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x174324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x174328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17432c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17432cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174330u;
}

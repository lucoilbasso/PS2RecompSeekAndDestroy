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

// Function: entry_00113b94
// Address: 0x113b94 - 0x113ba0
void entry_00113b94_0x113b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113b94_0x113b94");
#endif

    ctx->pc = 0x113b94u;

    // 0x113b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b98: 0x2448c058  addiu       $t0, $v0, -0x3FA8
    ctx->pc = 0x113b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951000));
    // 0x113b9c: 0x95090000  lhu         $t1, 0x0($t0)
    ctx->pc = 0x113b9cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->pc = 0x113ba0u;
}

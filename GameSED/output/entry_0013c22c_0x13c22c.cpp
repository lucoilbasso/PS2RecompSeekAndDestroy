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

// Function: entry_0013c22c
// Address: 0x13c22c - 0x13c238
void entry_0013c22c_0x13c22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c22c_0x13c22c");
#endif

    ctx->pc = 0x13c22cu;

    // 0x13c22c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x13c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x13c230: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x13c230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x13c234: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x13c234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x13c238u;
}

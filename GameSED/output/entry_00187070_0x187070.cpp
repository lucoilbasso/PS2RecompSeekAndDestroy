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

// Function: entry_00187070
// Address: 0x187070 - 0x187088
void entry_00187070_0x187070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187070_0x187070");
#endif

    ctx->pc = 0x187070u;

    // 0x187070: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x187070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x187074: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x187074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x187078: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x187078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18707c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187080: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x187080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x187084: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x187084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    ctx->pc = 0x187088u;
}

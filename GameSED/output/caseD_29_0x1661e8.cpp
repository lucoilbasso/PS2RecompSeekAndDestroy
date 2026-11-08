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

// Function: caseD_29
// Address: 0x1661e8 - 0x1661f8
void caseD_29_0x1661e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_29_0x1661e8");
#endif

    ctx->pc = 0x1661e8u;

    // 0x1661e8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1661e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1661ec: 0x2603111c  addiu       $v1, $s0, 0x111C
    ctx->pc = 0x1661ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4380));
    // 0x1661f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1661f4: 0x24c69460  addiu       $a2, $a2, -0x6BA0
    ctx->pc = 0x1661f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939744));
    ctx->pc = 0x1661f8u;
}

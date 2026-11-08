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

// Function: caseD_19
// Address: 0x112108 - 0x112124
void caseD_19_0x112108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x112108");
#endif

    ctx->pc = 0x112108u;

    // 0x112108: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x112108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x11210c: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x11210cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112110: 0x8c82b830  lw          $v0, -0x47D0($a0)
    ctx->pc = 0x112110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112114: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x112114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x112118: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x112118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x11211c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x11211cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x112120: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x112120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x112124u;
}

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

// Function: caseD_a
// Address: 0x112550 - 0x112564
void caseD_a_0x112550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x112550");
#endif

    ctx->pc = 0x112550u;

    // 0x112550: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112554: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x112554u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112558: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x112558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x11255c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x112560: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x112560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x112564u;
}

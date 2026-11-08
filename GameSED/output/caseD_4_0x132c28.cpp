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

// Function: caseD_4
// Address: 0x132c28 - 0x132c38
void caseD_4_0x132c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x132c28");
#endif

    ctx->pc = 0x132c28u;

    // 0x132c28: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132c2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x132c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132c30: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132c30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132c34: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x132c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    ctx->pc = 0x132c38u;
}

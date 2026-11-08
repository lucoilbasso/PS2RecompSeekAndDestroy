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

// Function: entry_001a1158
// Address: 0x1a1158 - 0x1a1164
void entry_001a1158_0x1a1158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1158_0x1a1158");
#endif

    ctx->pc = 0x1a1158u;

    // 0x1a1158: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a115c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a115cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1160: 0xac282c08  sw          $t0, 0x2C08($at)
    ctx->pc = 0x1a1160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 8));
    ctx->pc = 0x1a1164u;
}

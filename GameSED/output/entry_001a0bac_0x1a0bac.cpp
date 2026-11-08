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

// Function: entry_001a0bac
// Address: 0x1a0bac - 0x1a0bb8
void entry_001a0bac_0x1a0bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0bac_0x1a0bac");
#endif

    ctx->pc = 0x1a0bacu;

    // 0x1a0bac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0bb0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a0bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a0bb4: 0xac222c00  sw          $v0, 0x2C00($at)
    ctx->pc = 0x1a0bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 2));
    ctx->pc = 0x1a0bb8u;
}

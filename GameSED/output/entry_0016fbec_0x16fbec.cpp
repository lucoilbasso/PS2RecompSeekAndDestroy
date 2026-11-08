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

// Function: entry_0016fbec
// Address: 0x16fbec - 0x16fc04
void entry_0016fbec_0x16fbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fbec_0x16fbec");
#endif

    ctx->pc = 0x16fbecu;

    // 0x16fbec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x16fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fbf0: 0xaf828b68  sw          $v0, -0x7498($gp)
    ctx->pc = 0x16fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 2));
    // 0x16fbf4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x16fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x16fbf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16fbfc: 0x8c63ba00  lw          $v1, -0x4600($v1)
    ctx->pc = 0x16fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949376)));
    // 0x16fc00: 0xaf838b64  sw          $v1, -0x749C($gp)
    ctx->pc = 0x16fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 3));
    ctx->pc = 0x16fc04u;
}

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

// Function: entry_0014d2e8
// Address: 0x14d2e8 - 0x14d2fc
void entry_0014d2e8_0x14d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d2e8_0x14d2e8");
#endif

    ctx->pc = 0x14d2e8u;

    // 0x14d2e8: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x14d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x14d2ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14d2f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14d2f4: 0xac403630  sw          $zero, 0x3630($v0)
    ctx->pc = 0x14d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13872), GPR_U32(ctx, 0));
    // 0x14d2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14d2fcu;
}

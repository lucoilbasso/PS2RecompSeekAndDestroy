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

// Function: entry_001172b0
// Address: 0x1172b0 - 0x1172bc
void entry_001172b0_0x1172b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001172b0_0x1172b0");
#endif

    ctx->pc = 0x1172b0u;

    // 0x1172b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1172b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1172b4: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x1172b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x1172b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1172b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1172bcu;
}

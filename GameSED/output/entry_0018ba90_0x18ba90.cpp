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

// Function: entry_0018ba90
// Address: 0x18ba90 - 0x18baa4
void entry_0018ba90_0x18ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ba90_0x18ba90");
#endif

    ctx->pc = 0x18ba90u;

    // 0x18ba90: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x18ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x18ba94: 0x8cd70218  lw          $s7, 0x218($a2)
    ctx->pc = 0x18ba94u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 536)));
    // 0x18ba98: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x18ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x18ba9c: 0x8cc30258  lw          $v1, 0x258($a2)
    ctx->pc = 0x18ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
    // 0x18baa0: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x18baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    ctx->pc = 0x18baa4u;
}

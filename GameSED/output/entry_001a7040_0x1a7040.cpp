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

// Function: entry_001a7040
// Address: 0x1a7040 - 0x1a7054
void entry_001a7040_0x1a7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7040_0x1a7040");
#endif

    ctx->pc = 0x1a7040u;

    // 0x1a7040: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a7044: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a7048: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a704c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a7050: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a7050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1a7054u;
}

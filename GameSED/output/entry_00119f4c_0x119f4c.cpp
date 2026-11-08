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

// Function: entry_00119f4c
// Address: 0x119f4c - 0x119f5c
void entry_00119f4c_0x119f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119f4c_0x119f4c");
#endif

    ctx->pc = 0x119f4cu;

    // 0x119f4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119f50: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119f54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119f58: 0x8463e150  lh          $v1, -0x1EB0($v1)
    ctx->pc = 0x119f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294959440)));
    ctx->pc = 0x119f5cu;
}

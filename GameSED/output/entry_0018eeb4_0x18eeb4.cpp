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

// Function: entry_0018eeb4
// Address: 0x18eeb4 - 0x18eed0
void entry_0018eeb4_0x18eeb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eeb4_0x18eeb4");
#endif

    ctx->pc = 0x18eeb4u;

    // 0x18eeb4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x18eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18eeb8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x18eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x18eebc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18eec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18eec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eec4: 0x24631b88  addiu       $v1, $v1, 0x1B88
    ctx->pc = 0x18eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7048));
    // 0x18eec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18eecc: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x18eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    ctx->pc = 0x18eed0u;
}

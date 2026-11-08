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

// Function: entry_001a8fa4
// Address: 0x1a8fa4 - 0x1a8fb4
void entry_001a8fa4_0x1a8fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8fa4_0x1a8fa4");
#endif

    ctx->pc = 0x1a8fa4u;

    // 0x1a8fa4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a8fa8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a8fac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a8fb0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x1a8fb4u;
}

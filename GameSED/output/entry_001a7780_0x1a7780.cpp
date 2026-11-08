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

// Function: entry_001a7780
// Address: 0x1a7780 - 0x1a7790
void entry_001a7780_0x1a7780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7780_0x1a7780");
#endif

    ctx->pc = 0x1a7780u;

    // 0x1a7780: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a7780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a7784: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a7784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7788: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a778c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->pc = 0x1a7790u;
}

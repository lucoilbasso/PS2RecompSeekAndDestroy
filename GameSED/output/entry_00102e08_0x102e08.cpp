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

// Function: entry_00102e08
// Address: 0x102e08 - 0x102e14
void entry_00102e08_0x102e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102e08_0x102e08");
#endif

    ctx->pc = 0x102e08u;

    // 0x102e08: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x102e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x102e0c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x102e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x102e10: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x102e14u;
}

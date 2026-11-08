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

// Function: entry_0016a180
// Address: 0x16a180 - 0x16a18c
void entry_0016a180_0x16a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a180_0x16a180");
#endif

    ctx->pc = 0x16a180u;

    // 0x16a180: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x16a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x16a184: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x16a188: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16a18cu;
}

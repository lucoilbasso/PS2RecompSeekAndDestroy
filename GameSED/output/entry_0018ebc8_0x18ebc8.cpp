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

// Function: entry_0018ebc8
// Address: 0x18ebc8 - 0x18ebd8
void entry_0018ebc8_0x18ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebc8_0x18ebc8");
#endif

    ctx->pc = 0x18ebc8u;

    // 0x18ebc8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18ebc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18ebcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ebd0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18ebd4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x18ebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->pc = 0x18ebd8u;
}

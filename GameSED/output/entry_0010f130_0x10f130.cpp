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

// Function: entry_0010f130
// Address: 0x10f130 - 0x10f140
void entry_0010f130_0x10f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f130_0x10f130");
#endif

    ctx->pc = 0x10f130u;

    // 0x10f130: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x10f130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x10f134: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x10f134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x10f138: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x10f138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10f13c: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x10f13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x10f140u;
}

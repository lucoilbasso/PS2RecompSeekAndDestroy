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

// Function: entry_0019c1a0
// Address: 0x19c1a0 - 0x19c1b4
void entry_0019c1a0_0x19c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c1a0_0x19c1a0");
#endif

    ctx->pc = 0x19c1a0u;

    // 0x19c1a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c1a4: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19c1a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c1ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1b0: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
    ctx->pc = 0x19c1b4u;
}

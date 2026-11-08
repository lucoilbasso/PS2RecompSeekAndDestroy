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

// Function: entry_001a3fd4
// Address: 0x1a3fd4 - 0x1a3fe8
void entry_001a3fd4_0x1a3fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3fd4_0x1a3fd4");
#endif

    ctx->pc = 0x1a3fd4u;

    // 0x1a3fd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a3fd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3fdc: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x1a3fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1a3fe0: 0x2446ff80  addiu       $a2, $v0, -0x80
    ctx->pc = 0x1a3fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x1a3fe4: 0x0  nop
    ctx->pc = 0x1a3fe4u;
    // NOP
    ctx->pc = 0x1a3fe8u;
}

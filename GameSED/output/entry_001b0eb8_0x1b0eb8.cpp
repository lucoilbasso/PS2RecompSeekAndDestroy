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

// Function: entry_001b0eb8
// Address: 0x1b0eb8 - 0x1b0ec8
void entry_001b0eb8_0x1b0eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0eb8_0x1b0eb8");
#endif

    ctx->pc = 0x1b0eb8u;

    // 0x1b0eb8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1b0eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ebc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b0ec0: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1b0ec0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1b0ec4: 0x0  nop
    ctx->pc = 0x1b0ec4u;
    // NOP
    ctx->pc = 0x1b0ec8u;
}

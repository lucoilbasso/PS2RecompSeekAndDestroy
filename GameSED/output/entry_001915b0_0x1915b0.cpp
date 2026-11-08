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

// Function: entry_001915b0
// Address: 0x1915b0 - 0x1915c0
void entry_001915b0_0x1915b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001915b0_0x1915b0");
#endif

    ctx->pc = 0x1915b0u;

    // 0x1915b0: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x1915b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1915b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1915b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1915b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915bc: 0x0  nop
    ctx->pc = 0x1915bcu;
    // NOP
    ctx->pc = 0x1915c0u;
}

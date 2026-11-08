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

// Function: entry_00191440
// Address: 0x191440 - 0x191450
void entry_00191440_0x191440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191440_0x191440");
#endif

    ctx->pc = 0x191440u;

    // 0x191440: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x191440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x191444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191448: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x191448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x19144c: 0x0  nop
    ctx->pc = 0x19144cu;
    // NOP
    ctx->pc = 0x191450u;
}

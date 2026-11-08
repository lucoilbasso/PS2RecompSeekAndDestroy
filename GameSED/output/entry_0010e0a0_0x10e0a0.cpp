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

// Function: entry_0010e0a0
// Address: 0x10e0a0 - 0x10e0b0
void entry_0010e0a0_0x10e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e0a0_0x10e0a0");
#endif

    ctx->pc = 0x10e0a0u;

    // 0x10e0a0: 0x260401bc  addiu       $a0, $s0, 0x1BC
    ctx->pc = 0x10e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x10e0a4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x10e0a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e0ac: 0x0  nop
    ctx->pc = 0x10e0acu;
    // NOP
    ctx->pc = 0x10e0b0u;
}

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

// Function: entry_001df7f8
// Address: 0x1df7f8 - 0x1df808
void entry_001df7f8_0x1df7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df7f8_0x1df7f8");
#endif

    ctx->pc = 0x1df7f8u;

    // 0x1df7f8: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1df7fc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1df7fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1df800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df804: 0x0  nop
    ctx->pc = 0x1df804u;
    // NOP
    ctx->pc = 0x1df808u;
}

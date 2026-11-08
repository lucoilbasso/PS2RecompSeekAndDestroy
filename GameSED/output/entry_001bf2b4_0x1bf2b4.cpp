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

// Function: entry_001bf2b4
// Address: 0x1bf2b4 - 0x1bf2c0
void entry_001bf2b4_0x1bf2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf2b4_0x1bf2b4");
#endif

    ctx->pc = 0x1bf2b4u;

    // 0x1bf2b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2b8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1bf2b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf2bc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf2bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bf2c0u;
}

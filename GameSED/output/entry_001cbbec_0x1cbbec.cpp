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

// Function: entry_001cbbec
// Address: 0x1cbbec - 0x1cbbf4
void entry_001cbbec_0x1cbbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbbec_0x1cbbec");
#endif

    ctx->pc = 0x1cbbecu;

    // 0x1cbbec: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1cbbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbf0: 0x27a30480  addiu       $v1, $sp, 0x480
    ctx->pc = 0x1cbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    ctx->pc = 0x1cbbf4u;
}

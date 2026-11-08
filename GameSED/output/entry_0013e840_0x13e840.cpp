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

// Function: entry_0013e840
// Address: 0x13e840 - 0x13e84c
void entry_0013e840_0x13e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e840_0x13e840");
#endif

    ctx->pc = 0x13e840u;

    // 0x13e840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13e840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13e844: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x13e844u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x13e848: 0xac20020c  sw          $zero, 0x20C($at)
    ctx->pc = 0x13e848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 524), GPR_U32(ctx, 0));
    ctx->pc = 0x13e84cu;
}

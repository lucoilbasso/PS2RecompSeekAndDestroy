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

// Function: entry_001c7670
// Address: 0x1c7670 - 0x1c767c
void entry_001c7670_0x1c7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7670_0x1c7670");
#endif

    ctx->pc = 0x1c7670u;

    // 0x1c7670: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c7674: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7678: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x1c7678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->pc = 0x1c767cu;
}

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

// Function: entry_00177a6c
// Address: 0x177a6c - 0x177a74
void entry_00177a6c_0x177a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177a6c_0x177a6c");
#endif

    ctx->pc = 0x177a6cu;

    // 0x177a6c: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x177a70: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->pc = 0x177a74u;
}

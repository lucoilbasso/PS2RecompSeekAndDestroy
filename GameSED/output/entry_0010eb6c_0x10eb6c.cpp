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

// Function: entry_0010eb6c
// Address: 0x10eb6c - 0x10eb74
void entry_0010eb6c_0x10eb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eb6c_0x10eb6c");
#endif

    ctx->pc = 0x10eb6cu;

    // 0x10eb6c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x10eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x10eb70: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x10eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x10eb74u;
}

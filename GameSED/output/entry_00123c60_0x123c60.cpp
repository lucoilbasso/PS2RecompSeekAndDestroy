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

// Function: entry_00123c60
// Address: 0x123c60 - 0x123c70
void entry_00123c60_0x123c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123c60_0x123c60");
#endif

    ctx->pc = 0x123c60u;

    // 0x123c60: 0xaca00480  sw          $zero, 0x480($a1)
    ctx->pc = 0x123c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1152), GPR_U32(ctx, 0));
    // 0x123c64: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x123c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c68: 0xaca00484  sw          $zero, 0x484($a1)
    ctx->pc = 0x123c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1156), GPR_U32(ctx, 0));
    // 0x123c6c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x123c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->pc = 0x123c70u;
}

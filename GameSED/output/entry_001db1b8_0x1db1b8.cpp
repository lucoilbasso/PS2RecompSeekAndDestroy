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

// Function: entry_001db1b8
// Address: 0x1db1b8 - 0x1db1c4
void entry_001db1b8_0x1db1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db1b8_0x1db1b8");
#endif

    ctx->pc = 0x1db1b8u;

    // 0x1db1b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db1b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1bc: 0xae021258  sw          $v0, 0x1258($s0)
    ctx->pc = 0x1db1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 2));
    // 0x1db1c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1db1c4u;
}

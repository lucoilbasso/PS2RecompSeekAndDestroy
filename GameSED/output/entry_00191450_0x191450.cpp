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

// Function: entry_00191450
// Address: 0x191450 - 0x191468
void entry_00191450_0x191450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191450_0x191450");
#endif

    ctx->pc = 0x191450u;

    // 0x191450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x191450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x191454: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x191454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x191458: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x191458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19145c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x19145cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x191460: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x191460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x191464: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x191464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x191468u;
}

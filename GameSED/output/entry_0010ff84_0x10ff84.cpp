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

// Function: entry_0010ff84
// Address: 0x10ff84 - 0x10ff98
void entry_0010ff84_0x10ff84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ff84_0x10ff84");
#endif

    ctx->pc = 0x10ff84u;

    // 0x10ff84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ff88: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x10ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x10ff8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff90: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x10ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x10ff94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x10ff98u;
}

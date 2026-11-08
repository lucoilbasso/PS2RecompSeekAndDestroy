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

// Function: entry_0014111c
// Address: 0x14111c - 0x141130
void entry_0014111c_0x14111c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014111c_0x14111c");
#endif

    ctx->pc = 0x14111cu;

    // 0x14111c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x141120: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x141120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141124: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x141124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x141128: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x141128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x14112c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x14112cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x141130u;
}

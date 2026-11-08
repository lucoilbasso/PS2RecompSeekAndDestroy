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

// Function: entry_00120398
// Address: 0x120398 - 0x1203b0
void entry_00120398_0x120398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120398_0x120398");
#endif

    ctx->pc = 0x120398u;

    // 0x120398: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x120398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12039c: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x12039cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1203a0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1203a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1203a4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1203a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203a8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1203a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1203ac: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1203acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->pc = 0x1203b0u;
}

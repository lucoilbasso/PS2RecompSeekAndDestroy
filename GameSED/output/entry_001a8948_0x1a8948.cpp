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

// Function: entry_001a8948
// Address: 0x1a8948 - 0x1a8968
void entry_001a8948_0x1a8948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8948_0x1a8948");
#endif

    ctx->pc = 0x1a8948u;

    // 0x1a8948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a894c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a894cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8954: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a8954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a8958: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a8958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a895c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a895cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8960: 0x806966c  j           func_1A59B0
    ctx->pc = 0x1A8960u;
    ctx->pc = 0x1A8964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8960u;
    // 0x1a8964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    BSCDEntVarParameterPtr__FP15BsSCDEntControli_0x1a59b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A8968u;
}

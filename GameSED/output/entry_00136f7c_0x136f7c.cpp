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

// Function: entry_00136f7c
// Address: 0x136f7c - 0x136fb0
void entry_00136f7c_0x136f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136f7c_0x136f7c");
#endif

    ctx->pc = 0x136f7cu;

    // 0x136f7c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x136f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x136f80: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x136f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x136f84: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x136f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x136f88: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x136f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x136f8c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x136f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x136f90: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x136f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x136f94: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x136f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x136f98: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x136f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x136f9c: 0x8c76007c  lw          $s6, 0x7C($v1)
    ctx->pc = 0x136f9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x136fa0: 0x12c00152  beqz        $s6, . + 4 + (0x152 << 2)
    ctx->pc = 0x136FA0u;
    {
        const bool branch_taken_0x136fa0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FA0u;
        // 0x136fa4: 0x251ebc50  addiu       $fp, $t0, -0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fa0) {
            ctx->pc = 0x1374ECu;
            return;
        }
    }
    ctx->pc = 0x136FA8u;
    // 0x136fa8: 0x8ed20004  lw          $s2, 0x4($s6)
    ctx->pc = 0x136fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x136fac: 0x0  nop
    ctx->pc = 0x136facu;
    // NOP
    ctx->pc = 0x136fb0u;
}

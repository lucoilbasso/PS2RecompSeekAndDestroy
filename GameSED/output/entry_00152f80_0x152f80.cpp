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

// Function: entry_00152f80
// Address: 0x152f80 - 0x152fb0
void entry_00152f80_0x152f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152f80_0x152f80");
#endif

    ctx->pc = 0x152f80u;

    // 0x152f80: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x152f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x152f84: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x152f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152f88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x152F88u;
    {
        const bool branch_taken_0x152f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F88u;
        // 0x152f8c: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f88) {
            ctx->pc = 0x152FB0u;
            return;
        }
    }
    ctx->pc = 0x152F90u;
    // 0x152f90: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x152f94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x152f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x152f98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152F98u;
    {
        const bool branch_taken_0x152f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F98u;
        // 0x152f9c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f98) {
            ctx->pc = 0x152FB0u;
            return;
        }
    }
    ctx->pc = 0x152FA0u;
    // 0x152fa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x152fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152fa4: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x152fa4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x152fa8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x152fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x152fac: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x152facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x152fb0u;
}

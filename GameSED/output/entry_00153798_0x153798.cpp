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

// Function: entry_00153798
// Address: 0x153798 - 0x1537c8
void entry_00153798_0x153798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153798_0x153798");
#endif

    ctx->pc = 0x153798u;

    // 0x153798: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x153798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x15379c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x15379cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1537a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1537A0u;
    {
        const bool branch_taken_0x1537a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1537A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537A0u;
        // 0x1537a4: 0xacc30038  sw          $v1, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537a0) {
            ctx->pc = 0x1537C8u;
            return;
        }
    }
    ctx->pc = 0x1537A8u;
    // 0x1537a8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x1537a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1537ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1537acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1537b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1537B0u;
    {
        const bool branch_taken_0x1537b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537B0u;
        // 0x1537b4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537b0) {
            ctx->pc = 0x1537C8u;
            return;
        }
    }
    ctx->pc = 0x1537B8u;
    // 0x1537b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1537bc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1537bcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1537c0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1537c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1537c4: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x1537c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x1537c8u;
}

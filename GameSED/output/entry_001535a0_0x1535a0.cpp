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

// Function: entry_001535a0
// Address: 0x1535a0 - 0x1535d0
void entry_001535a0_0x1535a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001535a0_0x1535a0");
#endif

    ctx->pc = 0x1535a0u;

    // 0x1535a0: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1535a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1535a4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1535a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1535a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1535A8u;
    {
        const bool branch_taken_0x1535a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1535ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A8u;
        // 0x1535ac: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a8) {
            ctx->pc = 0x1535D0u;
            return;
        }
    }
    ctx->pc = 0x1535B0u;
    // 0x1535b0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1535b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1535b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1535b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1535B8u;
    {
        const bool branch_taken_0x1535b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B8u;
        // 0x1535bc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b8) {
            ctx->pc = 0x1535D0u;
            return;
        }
    }
    ctx->pc = 0x1535C0u;
    // 0x1535c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1535c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1535c4: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1535c4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1535c8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1535c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1535cc: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x1535ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x1535d0u;
}

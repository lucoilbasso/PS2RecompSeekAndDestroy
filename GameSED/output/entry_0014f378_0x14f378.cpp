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

// Function: entry_0014f378
// Address: 0x14f378 - 0x14f3a8
void entry_0014f378_0x14f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f378_0x14f378");
#endif

    ctx->pc = 0x14f378u;

    // 0x14f378: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x14f37c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x14f37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x14f380: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F380u;
    {
        const bool branch_taken_0x14f380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F380u;
        // 0x14f384: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f380) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F388u;
    // 0x14f388: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x14f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x14f38c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x14f390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F390u;
    {
        const bool branch_taken_0x14f390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F390u;
        // 0x14f394: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f390) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F398u;
    // 0x14f398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f39c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14f39cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14f3a0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14f3a4: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x14f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x14f3a8u;
}

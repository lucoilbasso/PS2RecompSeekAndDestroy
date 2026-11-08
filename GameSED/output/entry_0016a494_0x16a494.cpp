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

// Function: entry_0016a494
// Address: 0x16a494 - 0x16a4d0
void entry_0016a494_0x16a494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a494_0x16a494");
#endif

    ctx->pc = 0x16a494u;

    // 0x16a494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16a494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a498: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x16A498u;
    {
        const bool branch_taken_0x16a498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A498u;
        // 0x16a49c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a498) {
            ctx->pc = 0x16A520u;
            return;
        }
    }
    ctx->pc = 0x16A4A0u;
    // 0x16a4a0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16a4a4: 0x8c430c04  lw          $v1, 0xC04($v0)
    ctx->pc = 0x16a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16a4a8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16A4A8u;
    {
        const bool branch_taken_0x16a4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4A8u;
        // 0x16a4ac: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4a8) {
            ctx->pc = 0x16A524u;
            return;
        }
    }
    ctx->pc = 0x16A4B0u;
    // 0x16a4b0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16a4b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A4B4u;
    {
        const bool branch_taken_0x16a4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4B4u;
        // 0x16a4b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4b4) {
            ctx->pc = 0x16A4D0u;
            return;
        }
    }
    ctx->pc = 0x16A4BCu;
    // 0x16a4bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16a4c0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16a4c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16a4c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A4C8u;
    {
        const bool branch_taken_0x16a4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4C8u;
        // 0x16a4cc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4c8) {
            ctx->pc = 0x16A4D4u;
            return;
        }
    }
    ctx->pc = 0x16A4D0u;
}

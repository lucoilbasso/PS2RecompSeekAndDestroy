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

// Function: entry_001ca7c0
// Address: 0x1ca7c0 - 0x1ca808
void entry_001ca7c0_0x1ca7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca7c0_0x1ca7c0");
#endif

    ctx->pc = 0x1ca7c0u;

    // 0x1ca7c0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1ca7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1ca7c4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1ca7c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1ca7c8: 0x1140001e  beqz        $t2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CA7C8u;
    {
        const bool branch_taken_0x1ca7c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7C8u;
        // 0x1ca7cc: 0x8c980000  lw          $t8, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7c8) {
            ctx->pc = 0x1CA844u;
            return;
        }
    }
    ctx->pc = 0x1CA7D0u;
    // 0x1ca7d0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1ca7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1ca7d4: 0x8f0e0008  lw          $t6, 0x8($t8)
    ctx->pc = 0x1ca7d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x1ca7d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ca7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca7dc: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x1ca7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1ca7e0: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA7E0u;
    {
        const bool branch_taken_0x1ca7e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7E0u;
        // 0x1ca7e4: 0x14c1021  addu        $v0, $t2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7e0) {
            ctx->pc = 0x1CA848u;
            return;
        }
    }
    ctx->pc = 0x1CA7E8u;
    // 0x1ca7e8: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1ca7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7ec: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x1ca7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1ca7f0: 0xcf1821  addu        $v1, $a2, $t7
    ctx->pc = 0x1ca7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x1ca7f4: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x1ca7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ca7f8: 0x2467fffc  addiu       $a3, $v1, -0x4
    ctx->pc = 0x1ca7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1ca7fc: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x1ca7fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca800: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ca800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ca804: 0x0  nop
    ctx->pc = 0x1ca804u;
    // NOP
    ctx->pc = 0x1ca808u;
}

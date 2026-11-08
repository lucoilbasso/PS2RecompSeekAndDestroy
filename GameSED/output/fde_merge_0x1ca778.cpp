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

// Function: fde_merge
// Address: 0x1ca778 - 0x1ca870
void fde_merge_0x1ca778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fde_merge_0x1ca778");
#endif

    switch (ctx->pc) {
        case 0x1ca7c0u: goto label_1ca7c0;
        case 0x1ca808u: goto label_1ca808;
        default: break;
    }

    ctx->pc = 0x1ca778u;

    // 0x1ca778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca77c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ca77cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca78c: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x1ca78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ca790: 0x13200033  beqz        $t9, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CA790u;
    {
        const bool branch_taken_0x1ca790 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA790u;
        // 0x1ca794: 0x320602d  daddu       $t4, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca790) {
            ctx->pc = 0x1CA860u;
            goto label_1ca860;
        }
    }
    ctx->pc = 0x1CA798u;
    // 0x1ca798: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1ca798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ca79c: 0x192880  sll         $a1, $t9, 2
    ctx->pc = 0x1ca79cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x1ca7a0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1ca7a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ca7a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ca7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca7a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ca7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ca7ac: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x1ca7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x1ca7b0: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1ca7b0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7b4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ca7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ca7b8: 0x246bfffc  addiu       $t3, $v1, -0x4
    ctx->pc = 0x1ca7b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1ca7bc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1ca7bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca7c0:
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
            goto label_1ca844;
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
            goto label_1ca848;
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
label_1ca808:
    // 0x1ca808: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1ca808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1ca80c: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x1ca80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1ca810: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x1ca814: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x1ca814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1ca818: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1ca818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1ca81c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ca81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ca820: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x1ca820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1ca824: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x1ca824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x1ca828: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA828u;
    {
        const bool branch_taken_0x1ca828 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA828u;
        // 0x1ca82c: 0x25adfffc  addiu       $t5, $t5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca828) {
            ctx->pc = 0x1CA844u;
            goto label_1ca844;
        }
    }
    ctx->pc = 0x1CA830u;
    // 0x1ca830: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x1ca830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1ca834: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ca834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca838: 0x4e1023  subu        $v0, $v0, $t6
    ctx->pc = 0x1ca838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1ca83c: 0x5c40fff2  bgtzl       $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CA83Cu;
    {
        const bool branch_taken_0x1ca83c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ca83c) {
            ctx->pc = 0x1CA840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA83Cu;
            // 0x1ca840: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca808;
        }
    }
    ctx->pc = 0x1CA844u;
label_1ca844:
    // 0x1ca844: 0x14c1021  addu        $v0, $t2, $t4
    ctx->pc = 0x1ca844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_1ca848:
    // 0x1ca848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca84c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x1ca850: 0x1580ffdb  bnez        $t4, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CA850u;
    {
        const bool branch_taken_0x1ca850 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA850u;
        // 0x1ca854: 0xac580000  sw          $t8, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca850) {
            ctx->pc = 0x1CA7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca7c0;
        }
    }
    ctx->pc = 0x1CA858u;
    // 0x1ca858: 0x2191021  addu        $v0, $s0, $t9
    ctx->pc = 0x1ca858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x1ca85c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ca85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ca860:
    // 0x1ca860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca864: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca868: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA868u;
        // 0x1ca86c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA870u;
}

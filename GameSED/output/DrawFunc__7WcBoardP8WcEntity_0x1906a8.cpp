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

// Function: DrawFunc__7WcBoardP8WcEntity
// Address: 0x1906a8 - 0x190798
void DrawFunc__7WcBoardP8WcEntity_0x1906a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__7WcBoardP8WcEntity_0x1906a8");
#endif

    switch (ctx->pc) {
        case 0x1906c8u: goto label_1906c8;
        case 0x1906e4u: goto label_1906e4;
        case 0x190730u: goto label_190730;
        case 0x190740u: goto label_190740;
        default: break;
    }

    ctx->pc = 0x1906a8u;

    // 0x1906a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1906ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1906acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1906b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1906b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1906b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1906b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1906b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1906bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1906c0: 0xc0641e6  jal         func_190798
    ctx->pc = 0x1906C0u;
    SET_GPR_U32(ctx, 31, 0x1906C8u);
    ctx->pc = 0x1906C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906C0u;
    // 0x1906c4: 0x8e050164  lw          $a1, 0x164($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190798u, 0x1906C0u, 0x1906C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906C8u;
label_1906c8:
    // 0x1906c8: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x1906cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1906ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1906d0: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1906D0u;
    {
        const bool branch_taken_0x1906d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1906d0) {
            ctx->pc = 0x1906D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1906D0u;
            // 0x1906d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190788u;
            goto label_190788;
        }
    }
    ctx->pc = 0x1906D8u;
    // 0x1906d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1906d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906dc: 0xc06437a  jal         func_190DE8
    ctx->pc = 0x1906DCu;
    SET_GPR_U32(ctx, 31, 0x1906E4u);
    ctx->pc = 0x1906E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906DCu;
    // 0x1906e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190DE8u, 0x1906DCu, 0x1906E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906E4u;
label_1906e4:
    // 0x1906e4: 0x96220150  lhu         $v0, 0x150($s1)
    ctx->pc = 0x1906e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1906e8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1906e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1906ec: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1906ECu;
    {
        const bool branch_taken_0x1906ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1906F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906ECu;
        // 0x1906f0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906ec) {
            ctx->pc = 0x190784u;
            goto label_190784;
        }
    }
    ctx->pc = 0x1906F4u;
    // 0x1906f4: 0x8e250278  lw          $a1, 0x278($s1)
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1906f8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1906F8u;
    {
        const bool branch_taken_0x1906f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906f8) {
            ctx->pc = 0x1906FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1906F8u;
            // 0x1906fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190700u;
            goto label_190700;
        }
    }
    ctx->pc = 0x190700u;
label_190700:
    // 0x190700: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190704: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190708: 0x26270240  addiu       $a3, $s1, 0x240
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x19070c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x190710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190714: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x190714u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x190718: 0x1810  mfhi        $v1
    ctx->pc = 0x190718u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19071c: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x190720: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x190720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x190724: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x190728: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x190728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x19072c: 0x0  nop
    ctx->pc = 0x19072cu;
    // NOP
label_190730:
    // 0x190730: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x190730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190734: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x190734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190738: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x190738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19073c: 0x0  nop
    ctx->pc = 0x19073cu;
    // NOP
label_190740:
    // 0x190740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190744: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x190744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x190748: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19074c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19074cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x190750: 0x0  nop
    ctx->pc = 0x190750u;
    // NOP
    // 0x190754: 0x14c8fffa  bne         $a2, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190754u;
    {
        const bool branch_taken_0x190754 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x190758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190754u;
        // 0x190758: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190754) {
            ctx->pc = 0x190740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190740;
        }
    }
    ctx->pc = 0x19075Cu;
    // 0x19075c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x190760: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x190760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x190764: 0x1528fff2  bne         $t1, $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x190764u;
    {
        const bool branch_taken_0x190764 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        ctx->pc = 0x190768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190764u;
        // 0x190768: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190764) {
            ctx->pc = 0x190730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190730;
        }
    }
    ctx->pc = 0x19076Cu;
    // 0x19076c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x19076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x190770: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x190770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x190774: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x190774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190778: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x190778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19077c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190780: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x190780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_190784:
    // 0x190784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190788:
    // 0x190788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19078c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19078cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190790: 0x3e00008  jr          $ra
    ctx->pc = 0x190790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190790u;
        // 0x190794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190798u;
}

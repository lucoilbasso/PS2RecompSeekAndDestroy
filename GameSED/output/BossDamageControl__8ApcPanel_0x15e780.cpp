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

// Function: BossDamageControl__8ApcPanel
// Address: 0x15e780 - 0x15e848
void BossDamageControl__8ApcPanel_0x15e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BossDamageControl__8ApcPanel_0x15e780");
#endif

    switch (ctx->pc) {
        case 0x15e7a8u: goto label_15e7a8;
        case 0x15e83cu: goto label_15e83c;
        default: break;
    }

    ctx->pc = 0x15e780u;

    // 0x15e780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e784: 0x24860170  addiu       $a2, $a0, 0x170
    ctx->pc = 0x15e784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x15e788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15e78c: 0x24870da0  addiu       $a3, $a0, 0xDA0
    ctx->pc = 0x15e78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
    // 0x15e790: 0x8cc20200  lw          $v0, 0x200($a2)
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
    // 0x15e794: 0x8cc30204  lw          $v1, 0x204($a2)
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 516)));
    // 0x15e798: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15E798u;
    {
        const bool branch_taken_0x15e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E798u;
        // 0x15e79c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e798) {
            ctx->pc = 0x15E7CCu;
            goto label_15e7cc;
        }
    }
    ctx->pc = 0x15E7A0u;
    // 0x15e7a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15e7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e7a4: 0x0  nop
    ctx->pc = 0x15e7a4u;
    // NOP
label_15e7a8:
    // 0x15e7a8: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x15e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x15e7ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x15e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15e7b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15e7b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15e7b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e7bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E7BCu;
    {
        const bool branch_taken_0x15e7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7BCu;
        // 0x15e7c0: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7bc) {
            ctx->pc = 0x15E7D0u;
            goto label_15e7d0;
        }
    }
    ctx->pc = 0x15E7C4u;
    // 0x15e7c4: 0x1445fff8  bne         $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15E7C4u;
    {
        const bool branch_taken_0x15e7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x15E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7C4u;
        // 0x15e7c8: 0xac820200  sw          $v0, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7c4) {
            ctx->pc = 0x15E7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e7a8;
        }
    }
    ctx->pc = 0x15E7CCu;
label_15e7cc:
    // 0x15e7cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15e7ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e7d0:
    // 0x15e7d0: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E7D0u;
    {
        const bool branch_taken_0x15e7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e7d0) {
            ctx->pc = 0x15E7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E7D0u;
            // 0x15e7d4: 0x8ce50030  lw          $a1, 0x30($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E824u;
            goto label_15e824;
        }
    }
    ctx->pc = 0x15E7D8u;
    // 0x15e7d8: 0x8cc30200  lw          $v1, 0x200($a2)
    ctx->pc = 0x15e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
    // 0x15e7dc: 0x8cc20204  lw          $v0, 0x204($a2)
    ctx->pc = 0x15e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 516)));
    // 0x15e7e0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15E7E0u;
    {
        const bool branch_taken_0x15e7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7E0u;
        // 0x15e7e4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7e0) {
            ctx->pc = 0x15E818u;
            goto label_15e818;
        }
    }
    ctx->pc = 0x15E7E8u;
    // 0x15e7e8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x15e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15e7ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e7f0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x15e7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15e7f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15e7f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x15e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x15e7fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15e800: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15e800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15e804: 0x8cc30200  lw          $v1, 0x200($a2)
    ctx->pc = 0x15e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 512)));
    // 0x15e808: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x15e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x15e80c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e810: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15e810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x15e814: 0xacc30200  sw          $v1, 0x200($a2)
    ctx->pc = 0x15e814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 512), GPR_U32(ctx, 3));
label_15e818:
    // 0x15e818: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15e81c: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x15e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
    // 0x15e820: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15e820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_15e824:
    // 0x15e824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e828: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15e828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e82c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15e82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e830: 0x28a22000  slti        $v0, $a1, 0x2000
    ctx->pc = 0x15e830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x15e834: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15E834u;
    SET_GPR_U32(ctx, 31, 0x15E83Cu);
    ctx->pc = 0x15E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E834u;
    // 0x15e838: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15E834u, 0x15E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E83Cu;
label_15e83c:
    // 0x15e83c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15e83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e840: 0x3e00008  jr          $ra
    ctx->pc = 0x15E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E840u;
        // 0x15e844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E848u;
}

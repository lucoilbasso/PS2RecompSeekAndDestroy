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

// Function: WMCardWrite__FP7WcMCardP17MCARD_INFORMATIONiPvUi
// Address: 0x179a80 - 0x179b38
void WMCardWrite__FP7WcMCardP17MCARD_INFORMATIONiPvUi_0x179a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardWrite__FP7WcMCardP17MCARD_INFORMATIONiPvUi_0x179a80");
#endif

    switch (ctx->pc) {
        case 0x179ab8u: goto label_179ab8;
        case 0x179ac4u: goto label_179ac4;
        case 0x179ae0u: goto label_179ae0;
        default: break;
    }

    ctx->pc = 0x179a80u;

    // 0x179a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179a84: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x179a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x179a88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179a8c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x179a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x179a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179a94: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x179a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x179a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179a9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x179a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179aa0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x179aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x179aa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179aa8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x179aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x179aac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x179aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ab4: 0x0  nop
    ctx->pc = 0x179ab4u;
    // NOP
label_179ab8:
    // 0x179ab8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179abc: 0xc07158c  jal         func_1C5630
    ctx->pc = 0x179ABCu;
    SET_GPR_U32(ctx, 31, 0x179AC4u);
    ctx->pc = 0x179AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ABCu;
    // 0x179ac0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5630u, 0x179ABCu, 0x179AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AC4u;
label_179ac4:
    // 0x179ac4: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x179AC4u;
    {
        const bool branch_taken_0x179ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AC4u;
        // 0x179ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ac4) {
            ctx->pc = 0x179AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179ab8;
        }
    }
    ctx->pc = 0x179ACCu;
    // 0x179acc: 0x26704030  addiu       $s0, $s3, 0x4030
    ctx->pc = 0x179accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16432));
    // 0x179ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ad8: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179AD8u;
    SET_GPR_U32(ctx, 31, 0x179AE0u);
    ctx->pc = 0x179ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AD8u;
    // 0x179adc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179AD8u, 0x179AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AE0u;
label_179ae0:
    // 0x179ae0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179ae4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x179AE4u;
    {
        const bool branch_taken_0x179ae4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x179AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AE4u;
        // 0x179ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ae4) {
            ctx->pc = 0x179B18u;
            goto label_179b18;
        }
    }
    ctx->pc = 0x179AECu;
    // 0x179aec: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x179aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x179af0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179AF0u;
    {
        const bool branch_taken_0x179af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x179AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AF0u;
        // 0x179af4: 0x2882fff8  slti        $v0, $a0, -0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967288) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179af0) {
            ctx->pc = 0x179B0Cu;
            goto label_179b0c;
        }
    }
    ctx->pc = 0x179AF8u;
    // 0x179af8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179AF8u;
    {
        const bool branch_taken_0x179af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AF8u;
        // 0x179afc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179af8) {
            ctx->pc = 0x179B10u;
            goto label_179b10;
        }
    }
    ctx->pc = 0x179B00u;
    // 0x179b00: 0x2882ffff  slti        $v0, $a0, -0x1
    ctx->pc = 0x179b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x179b04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x179B04u;
    {
        const bool branch_taken_0x179b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179b04) {
            ctx->pc = 0x179B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179B04u;
            // 0x179b08: 0x2882fffb  slti        $v0, $a0, -0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967291) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179B0Cu;
            goto label_179b0c;
        }
    }
    ctx->pc = 0x179B0Cu;
label_179b0c:
    // 0x179b0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_179b10:
    // 0x179b10: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x179b10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x179b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179b18:
    // 0x179b18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179b1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179b20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x179b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179b24: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x179b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179b28: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x179b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179b2c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179b30: 0x3e00008  jr          $ra
    ctx->pc = 0x179B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B30u;
        // 0x179b34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179B38u;
}

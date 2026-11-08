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

// Function: InitGrphic__9ApcEfeGen
// Address: 0x12ea08 - 0x12eb50
void InitGrphic__9ApcEfeGen_0x12ea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitGrphic__9ApcEfeGen_0x12ea08");
#endif

    switch (ctx->pc) {
        case 0x12ea60u: goto label_12ea60;
        case 0x12ea6cu: goto label_12ea6c;
        case 0x12ea88u: goto label_12ea88;
        default: break;
    }

    ctx->pc = 0x12ea08u;

    // 0x12ea08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12ea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12ea0c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x12ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x12ea10: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x12ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x12ea14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ea18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12ea1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ea20: 0x245194f0  addiu       $s1, $v0, -0x6B10
    ctx->pc = 0x12ea20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x12ea24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ea28: 0x24729440  addiu       $s2, $v1, -0x6BC0
    ctx->pc = 0x12ea28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939712));
    // 0x12ea2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12ea30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12ea30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12ea38: 0x2414002b  addiu       $s4, $zero, 0x2B
    ctx->pc = 0x12ea38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12ea3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12ea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12ea40: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x12ea40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ea44: 0x15acf8  dsll        $s5, $s5, 19
    ctx->pc = 0x12ea44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 19);
    // 0x12ea48: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12ea4c: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x12ea4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ea50: 0x16b3bc  dsll32      $s6, $s6, 14
    ctx->pc = 0x12ea50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 14));
    // 0x12ea54: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x12ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12ea58: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x12ea58u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x12ea5c: 0x0  nop
    ctx->pc = 0x12ea5cu;
    // NOP
label_12ea60:
    // 0x12ea60: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ea64: 0xc04bad4  jal         func_12EB50
    ctx->pc = 0x12EA64u;
    SET_GPR_U32(ctx, 31, 0x12EA6Cu);
    ctx->pc = 0x12EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA64u;
    // 0x12ea68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB50u, 0x12EA64u, 0x12EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA6Cu;
label_12ea6c:
    // 0x12ea6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ea70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea74: 0x26e56040  addiu       $a1, $s7, 0x6040
    ctx->pc = 0x12ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 24640));
    // 0x12ea78: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EA78u;
    {
        const bool branch_taken_0x12ea78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA78u;
        // 0x12ea7c: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea78) {
            ctx->pc = 0x12EA88u;
            goto label_12ea88;
        }
    }
    ctx->pc = 0x12EA80u;
    // 0x12ea80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12EA80u;
    SET_GPR_U32(ctx, 31, 0x12EA88u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12EA80u, 0x12EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA88u;
label_12ea88:
    // 0x12ea88: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x12ea88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12ea8c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x12ea8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x12ea90: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x12ea90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ea94: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x12ea94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12ea98: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x12ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x12ea9c: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x12ea9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12eaa0: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x12eaa0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12eaa4: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x12eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x12eaa8: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x12eaa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x12eaac: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x12eaacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x12eab0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x12eab0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12eab4: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x12eab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x12eab8: 0x9627000c  lhu         $a3, 0xC($s1)
    ctx->pc = 0x12eab8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12eabc: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x12eabcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x12eac0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x12eac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12eac4: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x12eac4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eac8: 0x73cfc  dsll32      $a3, $a3, 19
    ctx->pc = 0x12eac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 19));
    // 0x12eacc: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x12eaccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12ead0: 0xb62825  or          $a1, $a1, $s6
    ctx->pc = 0x12ead0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
    // 0x12ead4: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x12ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x12ead8: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x12ead8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12eadc: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x12eadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x12eae0: 0xfe240020  sd          $a0, 0x20($s1)
    ctx->pc = 0x12eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
    // 0x12eae4: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x12eae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x12eae8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x12eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x12eaec: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x12eaecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12eaf0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x12eaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x12eaf4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x12eaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x12eaf8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12eaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12eafc: 0xfe240028  sd          $a0, 0x28($s1)
    ctx->pc = 0x12eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 4));
    // 0x12eb00: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x12eb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x12eb04: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x12eb04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12eb08: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x12eb08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x12eb0c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x12eb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x12eb10: 0xfe250038  sd          $a1, 0x38($s1)
    ctx->pc = 0x12eb10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 5));
    // 0x12eb14: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x12eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x12eb18: 0xae280040  sw          $t0, 0x40($s1)
    ctx->pc = 0x12eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 8));
    // 0x12eb1c: 0x681ffd0  bgez        $s4, . + 4 + (-0x30 << 2)
    ctx->pc = 0x12EB1Cu;
    {
        const bool branch_taken_0x12eb1c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x12EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB1Cu;
        // 0x12eb20: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb1c) {
            ctx->pc = 0x12EA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea60;
        }
    }
    ctx->pc = 0x12EB24u;
    // 0x12eb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12eb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eb28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12eb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12eb2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12eb2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eb30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12eb30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eb34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12eb34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12eb38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12eb38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12eb3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12eb3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12eb40: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12eb40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12eb44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12eb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12eb48: 0x3e00008  jr          $ra
    ctx->pc = 0x12EB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB48u;
        // 0x12eb4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EB50u;
}

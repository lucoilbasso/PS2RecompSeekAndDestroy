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

// Function: SearchImagePackage__7WcImagePcPi
// Address: 0x17e970 - 0x17ea50
void SearchImagePackage__7WcImagePcPi_0x17e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchImagePackage__7WcImagePcPi_0x17e970");
#endif

    switch (ctx->pc) {
        case 0x17e9b0u: goto label_17e9b0;
        case 0x17e9d4u: goto label_17e9d4;
        case 0x17ea14u: goto label_17ea14;
        case 0x17ea28u: goto label_17ea28;
        default: break;
    }

    ctx->pc = 0x17e970u;

    // 0x17e970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17e974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e978: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17e978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e97c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17e97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17e980: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17e980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e984: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17e988: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17e988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e98c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17e990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e994: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17e998: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17e99c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x17e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e9a0: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17E9A0u;
    {
        const bool branch_taken_0x17e9a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9A0u;
        // 0x17e9a4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9a0) {
            ctx->pc = 0x17EA04u;
            goto label_17ea04;
        }
    }
    ctx->pc = 0x17E9A8u;
    // 0x17e9a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17e9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9ac: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_17e9b0:
    // 0x17e9b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17e9b4: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x17e9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x17e9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17e9c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17E9C0u;
    {
        const bool branch_taken_0x17e9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9C0u;
        // 0x17e9c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9c0) {
            ctx->pc = 0x17E9F0u;
            goto label_17e9f0;
        }
    }
    ctx->pc = 0x17E9C8u;
    // 0x17e9c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9cc: 0xc067210  jal         func_19C840
    ctx->pc = 0x17E9CCu;
    SET_GPR_U32(ctx, 31, 0x17E9D4u);
    ctx->pc = 0x17E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9CCu;
    // 0x17e9d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C840u, 0x17E9CCu, 0x17E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9D4u;
label_17e9d4:
    // 0x17e9d4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E9D4u;
    {
        const bool branch_taken_0x17e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9d4) {
            ctx->pc = 0x17E9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E9D4u;
            // 0x17e9d8: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E9F4u;
            goto label_17e9f4;
        }
    }
    ctx->pc = 0x17E9DCu;
    // 0x17e9dc: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17E9DCu;
    {
        const bool branch_taken_0x17e9dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9dc) {
            ctx->pc = 0x17E9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E9DCu;
            // 0x17e9e0: 0xaeb10000  sw          $s1, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E9E4u;
            goto label_17e9e4;
        }
    }
    ctx->pc = 0x17E9E4u;
label_17e9e4:
    // 0x17e9e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17E9E4u;
    {
        const bool branch_taken_0x17e9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9E4u;
        // 0x17e9e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9e4) {
            ctx->pc = 0x17EA2Cu;
            goto label_17ea2c;
        }
    }
    ctx->pc = 0x17E9ECu;
    // 0x17e9ec: 0x0  nop
    ctx->pc = 0x17e9ecu;
    // NOP
label_17e9f0:
    // 0x17e9f0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x17e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_17e9f4:
    // 0x17e9f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17e9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17e9f8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x17e9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17e9fc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17E9FCu;
    {
        const bool branch_taken_0x17e9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9fc) {
            ctx->pc = 0x17EA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E9FCu;
            // 0x17ea00: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e9b0;
        }
    }
    ctx->pc = 0x17EA04u;
label_17ea04:
    // 0x17ea04: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17ea08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17ea08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea0c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x17EA0Cu;
    SET_GPR_U32(ctx, 31, 0x17EA14u);
    ctx->pc = 0x17EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA0Cu;
    // 0x17ea10: 0x24847c98  addiu       $a0, $a0, 0x7C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x17EA0Cu, 0x17EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA14u;
label_17ea14:
    // 0x17ea14: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17ea18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea1c: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0
    ctx->pc = 0x17ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    // 0x17ea20: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17EA20u;
    SET_GPR_U32(ctx, 31, 0x17EA28u);
    ctx->pc = 0x17EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA20u;
    // 0x17ea24: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17EA20u, 0x17EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA28u;
label_17ea28:
    // 0x17ea28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ea28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ea2c:
    // 0x17ea2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ea2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ea30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ea30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ea34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ea34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ea38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ea38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ea3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ea3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ea40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17ea40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ea44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17ea44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ea48: 0x3e00008  jr          $ra
    ctx->pc = 0x17EA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA48u;
        // 0x17ea4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EA50u;
}

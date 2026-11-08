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

// Function: _pictureData0
// Address: 0x1c0dd8 - 0x1c0ee0
void _pictureData0_0x1c0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureData0_0x1c0dd8");
#endif

    switch (ctx->pc) {
        case 0x1c0e28u: goto label_1c0e28;
        case 0x1c0e2cu: goto label_1c0e2c;
        case 0x1c0e34u: goto label_1c0e34;
        case 0x1c0e50u: goto label_1c0e50;
        case 0x1c0e58u: goto label_1c0e58;
        case 0x1c0e70u: goto label_1c0e70;
        case 0x1c0ea4u: goto label_1c0ea4;
        case 0x1c0ebcu: goto label_1c0ebc;
        default: break;
    }

    ctx->pc = 0x1c0dd8u;

    // 0x1c0dd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c0dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c0ddc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c0ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c0de0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c0de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c0de4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c0de4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0de8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c0de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c0dec: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1c0decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0df0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c0df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c0df4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c0df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0df8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c0df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c0dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0e00: 0xae400810  sw          $zero, 0x810($s2)
    ctx->pc = 0x1c0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 0));
    // 0x1c0e04: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x1c0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1c0e08: 0x8e44012c  lw          $a0, 0x12C($s2)
    ctx->pc = 0x1c0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x1c0e0c: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1c0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1c0e10: 0x828818  mult        $s1, $a0, $v0
    ctx->pc = 0x1c0e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c0e14: 0xae400814  sw          $zero, 0x814($s2)
    ctx->pc = 0x1c0e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 0));
    // 0x1c0e18: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x1c0e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x1c0e1c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1c0e1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1c0e20: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1c0e20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1c0e24: 0x0  nop
    ctx->pc = 0x1c0e24u;
    // NOP
label_1c0e28:
    // 0x1c0e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0e2c:
    // 0x1c0e2c: 0xc070404  jal         func_1C1010
    ctx->pc = 0x1C0E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E34u);
    ctx->pc = 0x1C0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E2Cu;
    // 0x1c0e30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1010u, 0x1C0E2Cu, 0x1C0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E34u;
label_1c0e34:
    // 0x1c0e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e38: 0x1214fffc  beq         $s0, $s4, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1C0E38u;
    {
        const bool branch_taken_0x1c0e38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E38u;
        // 0x1c0e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e38) {
            ctx->pc = 0x1C0E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0e2c;
        }
    }
    ctx->pc = 0x1C0E40u;
    // 0x1c0e40: 0x1213fff9  beq         $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C0E40u;
    {
        const bool branch_taken_0x1c0e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x1c0e40) {
            ctx->pc = 0x1C0E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0e28;
        }
    }
    ctx->pc = 0x1C0E48u;
    // 0x1c0e48: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C0E48u;
    SET_GPR_U32(ctx, 31, 0x1C0E50u);
    ctx->pc = 0x1C0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E48u;
    // 0x1c0e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C0E48u, 0x1C0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E50u;
label_1c0e50:
    // 0x1c0e50: 0xc070248  jal         func_1C0920
    ctx->pc = 0x1C0E50u;
    SET_GPR_U32(ctx, 31, 0x1C0E58u);
    ctx->pc = 0x1C0E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E50u;
    // 0x1c0e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0920u, 0x1C0E50u, 0x1C0E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E58u;
label_1c0e58:
    // 0x1c0e58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0e5c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c0e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0e60: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1c0e60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1c0e64: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1c0e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x1c0e68: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c0e6c: 0x2e130001  sltiu       $s3, $s0, 0x1
    ctx->pc = 0x1c0e6cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c0e70:
    // 0x1c0e70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0e74: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1c0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1c0e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0e7c: 0x0  nop
    ctx->pc = 0x1c0e7cu;
    // NOP
    // 0x1c0e80: 0x0  nop
    ctx->pc = 0x1c0e80u;
    // NOP
    // 0x1c0e84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C0E84u;
    {
        const bool branch_taken_0x1c0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e84) {
            ctx->pc = 0x1C0E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0e70;
        }
    }
    ctx->pc = 0x1C0E8Cu;
    // 0x1c0e8c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0E8Cu;
    {
        const bool branch_taken_0x1c0e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E8Cu;
        // 0x1c0e90: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e8c) {
            ctx->pc = 0x1C0EA8u;
            goto label_1c0ea8;
        }
    }
    ctx->pc = 0x1C0E94u;
    // 0x1c0e94: 0x8e450810  lw          $a1, 0x810($s2)
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2064)));
    // 0x1c0e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e9c: 0xc06fe4a  jal         func_1BF928
    ctx->pc = 0x1C0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0EA4u);
    ctx->pc = 0x1C0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E9Cu;
    // 0x1c0ea0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF928u, 0x1C0E9Cu, 0x1C0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EA4u;
label_1c0ea4:
    // 0x1c0ea4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1c0ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c0ea8:
    // 0x1c0ea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0EA8u;
    {
        const bool branch_taken_0x1c0ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EA8u;
        // 0x1c0eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ea8) {
            ctx->pc = 0x1C0EBCu;
            goto label_1c0ebc;
        }
    }
    ctx->pc = 0x1C0EB0u;
    // 0x1c0eb0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c0eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c0eb4: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C0EB4u;
    SET_GPR_U32(ctx, 31, 0x1C0EBCu);
    ctx->pc = 0x1C0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EB4u;
    // 0x1c0eb8: 0x24a5b548  addiu       $a1, $a1, -0x4AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C0EB4u, 0x1C0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EBCu;
label_1c0ebc:
    // 0x1c0ebc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1c0ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ec0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c0ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0ec4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c0ec4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0ec8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c0ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0ecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c0eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0ed0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c0ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0ED8u;
        // 0x1c0edc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0EE0u;
}

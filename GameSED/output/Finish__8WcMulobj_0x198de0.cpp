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

// Function: Finish__8WcMulobj
// Address: 0x198de0 - 0x198eb8
void Finish__8WcMulobj_0x198de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8WcMulobj_0x198de0");
#endif

    switch (ctx->pc) {
        case 0x198de0u: goto label_198de0;
        case 0x198de4u: goto label_198de4;
        case 0x198de8u: goto label_198de8;
        case 0x198decu: goto label_198dec;
        case 0x198df0u: goto label_198df0;
        case 0x198df4u: goto label_198df4;
        case 0x198df8u: goto label_198df8;
        case 0x198dfcu: goto label_198dfc;
        case 0x198e00u: goto label_198e00;
        case 0x198e04u: goto label_198e04;
        case 0x198e08u: goto label_198e08;
        case 0x198e0cu: goto label_198e0c;
        case 0x198e10u: goto label_198e10;
        case 0x198e14u: goto label_198e14;
        case 0x198e18u: goto label_198e18;
        case 0x198e1cu: goto label_198e1c;
        case 0x198e20u: goto label_198e20;
        case 0x198e24u: goto label_198e24;
        case 0x198e28u: goto label_198e28;
        case 0x198e2cu: goto label_198e2c;
        case 0x198e30u: goto label_198e30;
        case 0x198e34u: goto label_198e34;
        case 0x198e38u: goto label_198e38;
        case 0x198e3cu: goto label_198e3c;
        case 0x198e40u: goto label_198e40;
        case 0x198e44u: goto label_198e44;
        case 0x198e48u: goto label_198e48;
        case 0x198e4cu: goto label_198e4c;
        case 0x198e50u: goto label_198e50;
        case 0x198e54u: goto label_198e54;
        case 0x198e58u: goto label_198e58;
        case 0x198e5cu: goto label_198e5c;
        case 0x198e60u: goto label_198e60;
        case 0x198e64u: goto label_198e64;
        case 0x198e68u: goto label_198e68;
        case 0x198e6cu: goto label_198e6c;
        case 0x198e70u: goto label_198e70;
        case 0x198e74u: goto label_198e74;
        case 0x198e78u: goto label_198e78;
        case 0x198e7cu: goto label_198e7c;
        case 0x198e80u: goto label_198e80;
        case 0x198e84u: goto label_198e84;
        case 0x198e88u: goto label_198e88;
        case 0x198e8cu: goto label_198e8c;
        case 0x198e90u: goto label_198e90;
        case 0x198e94u: goto label_198e94;
        case 0x198e98u: goto label_198e98;
        case 0x198e9cu: goto label_198e9c;
        case 0x198ea0u: goto label_198ea0;
        case 0x198ea4u: goto label_198ea4;
        case 0x198ea8u: goto label_198ea8;
        case 0x198eacu: goto label_198eac;
        case 0x198eb0u: goto label_198eb0;
        case 0x198eb4u: goto label_198eb4;
        default: break;
    }

    ctx->pc = 0x198de0u;

label_198de0:
    // 0x198de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_198de4:
    // 0x198de4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x198de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_198de8:
    // 0x198de8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x198de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198dec:
    // 0x198dec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x198decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_198df0:
    // 0x198df0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x198df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_198df4:
    // 0x198df4: 0x269601b4  addiu       $s6, $s4, 0x1B4
    ctx->pc = 0x198df4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
label_198df8:
    // 0x198df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_198dfc:
    // 0x198dfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x198dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_198e00:
    // 0x198e00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x198e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_198e04:
    // 0x198e04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x198e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_198e08:
    // 0x198e08: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x198e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_198e0c:
    // 0x198e0c: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x198e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_198e10:
    // 0x198e10: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_198e14:
    if (ctx->pc == 0x198E14u) {
        ctx->pc = 0x198E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E10u;
        // 0x198e14: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E18u;
        goto label_198e18;
    }
    ctx->pc = 0x198E10u;
    {
        const bool branch_taken_0x198e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E10u;
        // 0x198e14: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e10) {
            ctx->pc = 0x198E84u;
            goto label_198e84;
        }
    }
    ctx->pc = 0x198E18u;
label_198e18:
    // 0x198e18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198e1c:
    // 0x198e1c: 0x0  nop
    ctx->pc = 0x198e1cu;
    // NOP
label_198e20:
    // 0x198e20: 0x8e3303f0  lw          $s3, 0x3F0($s1)
    ctx->pc = 0x198e20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_198e24:
    // 0x198e24: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x198e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198e28:
    // 0x198e28: 0xc05bedc  jal         func_16FB70
label_198e2c:
    if (ctx->pc == 0x198E2Cu) {
        ctx->pc = 0x198E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E28u;
        // 0x198e2c: 0x2412003e  addiu       $s2, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E30u;
        goto label_198e30;
    }
    ctx->pc = 0x198E28u;
    SET_GPR_U32(ctx, 31, 0x198E30u);
    ctx->pc = 0x198E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E28u;
    // 0x198e2c: 0x2412003e  addiu       $s2, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x198E28u, 0x198E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E30u;
label_198e30:
    // 0x198e30: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198e34:
    // 0x198e34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_198e38:
    if (ctx->pc == 0x198E38u) {
        ctx->pc = 0x198E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E34u;
        // 0x198e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E3Cu;
        goto label_198e3c;
    }
    ctx->pc = 0x198E34u;
    {
        const bool branch_taken_0x198e34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E34u;
        // 0x198e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e34) {
            ctx->pc = 0x198E54u;
            goto label_198e54;
        }
    }
    ctx->pc = 0x198E3Cu;
label_198e3c:
    // 0x198e3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x198e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_198e40:
    // 0x198e40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_198e44:
    // 0x198e44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x198e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_198e48:
    // 0x198e48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x198e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_198e4c:
    // 0x198e4c: 0x60f809  jalr        $v1
label_198e50:
    if (ctx->pc == 0x198E50u) {
        ctx->pc = 0x198E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E4Cu;
        // 0x198e50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E54u;
        goto label_198e54;
    }
    ctx->pc = 0x198E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198E54u);
        ctx->pc = 0x198E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E4Cu;
        // 0x198e50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198E4Cu, 0x198E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198E54u;
label_198e54:
    // 0x198e54: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_198e58:
    // 0x198e58: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_198e5c:
    // 0x198e5c: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_198e60:
    if (ctx->pc == 0x198E60u) {
        ctx->pc = 0x198E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E5Cu;
        // 0x198e60: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E64u;
        goto label_198e64;
    }
    ctx->pc = 0x198E5Cu;
    {
        const bool branch_taken_0x198e5c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x198E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E5Cu;
        // 0x198e60: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e5c) {
            ctx->pc = 0x198E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198e30;
        }
    }
    ctx->pc = 0x198E64u;
label_198e64:
    // 0x198e64: 0xc05bedc  jal         func_16FB70
label_198e68:
    if (ctx->pc == 0x198E68u) {
        ctx->pc = 0x198E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E64u;
        // 0x198e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E6Cu;
        goto label_198e6c;
    }
    ctx->pc = 0x198E64u;
    SET_GPR_U32(ctx, 31, 0x198E6Cu);
    ctx->pc = 0x198E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E64u;
    // 0x198e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x198E64u, 0x198E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E6Cu;
label_198e6c:
    // 0x198e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198e70:
    // 0x198e70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x198e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198e74:
    // 0x198e74: 0xc067f04  jal         func_19FC10
label_198e78:
    if (ctx->pc == 0x198E78u) {
        ctx->pc = 0x198E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E74u;
        // 0x198e78: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E7Cu;
        goto label_198e7c;
    }
    ctx->pc = 0x198E74u;
    SET_GPR_U32(ctx, 31, 0x198E7Cu);
    ctx->pc = 0x198E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E74u;
    // 0x198e78: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x198E74u, 0x198E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E7Cu;
label_198e7c:
    // 0x198e7c: 0x5620ffe8  bnel        $s1, $zero, . + 4 + (-0x18 << 2)
label_198e80:
    if (ctx->pc == 0x198E80u) {
        ctx->pc = 0x198E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E7Cu;
        // 0x198e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E84u;
        goto label_198e84;
    }
    ctx->pc = 0x198E7Cu;
    {
        const bool branch_taken_0x198e7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x198e7c) {
            ctx->pc = 0x198E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198E7Cu;
            // 0x198e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198e20;
        }
    }
    ctx->pc = 0x198E84u;
label_198e84:
    // 0x198e84: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x198e84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_198e88:
    // 0x198e88: 0xc064e8e  jal         func_193A38
label_198e8c:
    if (ctx->pc == 0x198E8Cu) {
        ctx->pc = 0x198E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E88u;
        // 0x198e8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E90u;
        goto label_198e90;
    }
    ctx->pc = 0x198E88u;
    SET_GPR_U32(ctx, 31, 0x198E90u);
    ctx->pc = 0x198E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E88u;
    // 0x198e8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A38u, 0x198E88u, 0x198E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E90u;
label_198e90:
    // 0x198e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198e94:
    // 0x198e94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x198e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_198e98:
    // 0x198e98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x198e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_198e9c:
    // 0x198e9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x198e9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_198ea0:
    // 0x198ea0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x198ea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198ea4:
    // 0x198ea4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x198ea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_198ea8:
    // 0x198ea8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x198ea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198eac:
    // 0x198eac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x198eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_198eb0:
    // 0x198eb0: 0x3e00008  jr          $ra
label_198eb4:
    if (ctx->pc == 0x198EB4u) {
        ctx->pc = 0x198EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB0u;
        // 0x198eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EB8u;
        goto label_fallthrough_0x198eb0;
    }
    ctx->pc = 0x198EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB0u;
        // 0x198eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x198eb0:
    ctx->pc = 0x198EB8u;
}

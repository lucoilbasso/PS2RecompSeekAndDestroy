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

// Function: Cmd_PARTICLE_CREATE_Entry__FP15BsSCDEntControl
// Address: 0x130fc0 - 0x131138
void Cmd_PARTICLE_CREATE_Entry__FP15BsSCDEntControl_0x130fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTICLE_CREATE_Entry__FP15BsSCDEntControl_0x130fc0");
#endif

    switch (ctx->pc) {
        case 0x130fe8u: goto label_130fe8;
        case 0x130ff4u: goto label_130ff4;
        case 0x131000u: goto label_131000;
        case 0x131034u: goto label_131034;
        case 0x13104cu: goto label_13104c;
        case 0x1310a8u: goto label_1310a8;
        case 0x1310e8u: goto label_1310e8;
        case 0x1310f8u: goto label_1310f8;
        case 0x131114u: goto label_131114;
        default: break;
    }

    ctx->pc = 0x130fc0u;

    // 0x130fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x130fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x130fc4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x130fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x130fc8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x130fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x130fcc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x130fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x130fd0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x130fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x130fd4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x130fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x130fd8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x130fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x130fdc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x130fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x130fe0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x130FE0u;
    SET_GPR_U32(ctx, 31, 0x130FE8u);
    ctx->pc = 0x130FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FE0u;
    // 0x130fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x130FE0u, 0x130FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FE8u;
label_130fe8:
    // 0x130fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x130FECu;
    SET_GPR_U32(ctx, 31, 0x130FF4u);
    ctx->pc = 0x130FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FECu;
    // 0x130ff0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x130FECu, 0x130FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FF4u;
label_130ff4:
    // 0x130ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ff8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x130FF8u;
    SET_GPR_U32(ctx, 31, 0x131000u);
    ctx->pc = 0x130FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FF8u;
    // 0x130ffc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x130FF8u, 0x131000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131000u;
label_131000:
    // 0x131000: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x131000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131004: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x131004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x131008: 0x8c500048  lw          $s0, 0x48($v0)
    ctx->pc = 0x131008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x13100c: 0x52000042  beql        $s0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x13100Cu;
    {
        const bool branch_taken_0x13100c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13100c) {
            ctx->pc = 0x131010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13100Cu;
            // 0x131010: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131118u;
            goto label_131118;
        }
    }
    ctx->pc = 0x131014u;
    // 0x131014: 0x8e0202f8  lw          $v0, 0x2F8($s0)
    ctx->pc = 0x131014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x131018: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x131018u;
    {
        const bool branch_taken_0x131018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131018u;
        // 0x13101c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131018) {
            ctx->pc = 0x131114u;
            goto label_131114;
        }
    }
    ctx->pc = 0x131020u;
    // 0x131020: 0x8e13001c  lw          $s3, 0x1C($s0)
    ctx->pc = 0x131020u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x131024: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x131024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131028: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x131028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13102c: 0xc041682  jal         func_105A08
    ctx->pc = 0x13102Cu;
    SET_GPR_U32(ctx, 31, 0x131034u);
    ctx->pc = 0x131030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13102Cu;
    // 0x131030: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x13102Cu, 0x131034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131034u;
label_131034:
    // 0x131034: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x131034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x131038: 0x24a56240  addiu       $a1, $a1, 0x6240
    ctx->pc = 0x131038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
    // 0x13103c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13103cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131040: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x131040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x131044: 0xc068186  jal         func_1A0618
    ctx->pc = 0x131044u;
    SET_GPR_U32(ctx, 31, 0x13104Cu);
    ctx->pc = 0x131048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131044u;
    // 0x131048: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x131044u, 0x13104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13104Cu;
label_13104c:
    // 0x13104c: 0x8e0302f8  lw          $v1, 0x2F8($s0)
    ctx->pc = 0x13104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x131050: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x131050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x131054: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x131054u;
    {
        const bool branch_taken_0x131054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131054u;
        // 0x131058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131054) {
            ctx->pc = 0x131084u;
            goto label_131084;
        }
    }
    ctx->pc = 0x13105Cu;
    // 0x13105c: 0x8c650150  lw          $a1, 0x150($v1)
    ctx->pc = 0x13105cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x131060: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x131060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x131064: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x131064u;
    {
        const bool branch_taken_0x131064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x131068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131064u;
        // 0x131068: 0xac620154  sw          $v0, 0x154($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131064) {
            ctx->pc = 0x131078u;
            goto label_131078;
        }
    }
    ctx->pc = 0x13106Cu;
    // 0x13106c: 0xac640150  sw          $a0, 0x150($v1)
    ctx->pc = 0x13106cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 4));
    // 0x131070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x131070u;
    {
        const bool branch_taken_0x131070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131070u;
        // 0x131074: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131070) {
            ctx->pc = 0x131080u;
            goto label_131080;
        }
    }
    ctx->pc = 0x131078u;
label_131078:
    // 0x131078: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x131078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x13107c: 0xac640150  sw          $a0, 0x150($v1)
    ctx->pc = 0x13107cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 4));
label_131080:
    // 0x131080: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131084:
    // 0x131084: 0x52400024  beql        $s2, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x131084u;
    {
        const bool branch_taken_0x131084 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x131084) {
            ctx->pc = 0x131088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131084u;
            // 0x131088: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131118u;
            goto label_131118;
        }
    }
    ctx->pc = 0x13108Cu;
    // 0x13108c: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13108Cu;
    {
        const bool branch_taken_0x13108c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13108c) {
            ctx->pc = 0x131090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13108Cu;
            // 0x131090: 0x8e0302f8  lw          $v1, 0x2F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1310B0u;
            goto label_1310b0;
        }
    }
    ctx->pc = 0x131094u;
    // 0x131094: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x131094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x131098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13109c: 0x24a56218  addiu       $a1, $a1, 0x6218
    ctx->pc = 0x13109cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25112));
    // 0x1310a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1310A0u;
    SET_GPR_U32(ctx, 31, 0x1310A8u);
    ctx->pc = 0x1310A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310A0u;
    // 0x1310a4: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1310A0u, 0x1310A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310A8u;
label_1310a8:
    // 0x1310a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1310A8u;
    {
        const bool branch_taken_0x1310a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1310ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310A8u;
        // 0x1310ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310a8) {
            ctx->pc = 0x131118u;
            goto label_131118;
        }
    }
    ctx->pc = 0x1310B0u;
label_1310b0:
    // 0x1310b0: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x1310b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x1310b4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1310b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1310b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1310b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1310bc: 0x8e0902f8  lw          $t1, 0x2F8($s0)
    ctx->pc = 0x1310bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x1310c0: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1310c4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1310c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1310c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1310c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310cc: 0xdd230170  ld          $v1, 0x170($t1)
    ctx->pc = 0x1310ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 368)));
    // 0x1310d0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1310d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1310d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d8: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1310d8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1310dc: 0xdd220178  ld          $v0, 0x178($t1)
    ctx->pc = 0x1310dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 376)));
    // 0x1310e0: 0xc04bfd4  jal         func_12FF50
    ctx->pc = 0x1310E0u;
    SET_GPR_U32(ctx, 31, 0x1310E8u);
    ctx->pc = 0x1310E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310E0u;
    // 0x1310e4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF50u, 0x1310E0u, 0x1310E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310E8u;
label_1310e8:
    // 0x1310e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1310e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1310ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310f0: 0xc041682  jal         func_105A08
    ctx->pc = 0x1310F0u;
    SET_GPR_U32(ctx, 31, 0x1310F8u);
    ctx->pc = 0x1310F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310F0u;
    // 0x1310f4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x1310F0u, 0x1310F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310F8u;
label_1310f8:
    // 0x1310f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1310f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310fc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1310FCu;
    {
        const bool branch_taken_0x1310fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310FCu;
        // 0x131100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310fc) {
            ctx->pc = 0x131114u;
            goto label_131114;
        }
    }
    ctx->pc = 0x131104u;
    // 0x131104: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x131104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x131108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13110c: 0xc04c17e  jal         func_1305F8
    ctx->pc = 0x13110Cu;
    SET_GPR_U32(ctx, 31, 0x131114u);
    ctx->pc = 0x131110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13110Cu;
    // 0x131110: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305F8u, 0x13110Cu, 0x131114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131114u;
label_131114:
    // 0x131114: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x131114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131118:
    // 0x131118: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x131118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13111c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13111cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131120: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x131120u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131124: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x131124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131128: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x131128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13112c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131130: 0x3e00008  jr          $ra
    ctx->pc = 0x131130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131130u;
        // 0x131134: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131138u;
}

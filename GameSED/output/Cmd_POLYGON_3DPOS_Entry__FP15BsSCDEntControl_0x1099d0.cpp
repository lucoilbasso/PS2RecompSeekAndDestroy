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

// Function: Cmd_POLYGON_3DPOS_Entry__FP15BsSCDEntControl
// Address: 0x1099d0 - 0x109ac4
void Cmd_POLYGON_3DPOS_Entry__FP15BsSCDEntControl_0x1099d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_3DPOS_Entry__FP15BsSCDEntControl_0x1099d0");
#endif

    switch (ctx->pc) {
        case 0x109a04u: goto label_109a04;
        case 0x109a20u: goto label_109a20;
        case 0x109a34u: goto label_109a34;
        case 0x109a50u: goto label_109a50;
        case 0x109a70u: goto label_109a70;
        case 0x109a84u: goto label_109a84;
        case 0x109a98u: goto label_109a98;
        default: break;
    }

    ctx->pc = 0x1099d0u;

    // 0x1099d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1099d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1099d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1099d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1099d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1099d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1099dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1099dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1099e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1099e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1099e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1099e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1099ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1099ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1099f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1099f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1099f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1099f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1099f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1099fc: 0xc04110c  jal         func_104430
    ctx->pc = 0x1099FCu;
    SET_GPR_U32(ctx, 31, 0x109A04u);
    ctx->pc = 0x109A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099FCu;
    // 0x109a00: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1099FCu, 0x109A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A04u;
label_109a04:
    // 0x109a04: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x109a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109a08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109a10: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x109A10u;
    {
        const bool branch_taken_0x109a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109a10) {
            ctx->pc = 0x109A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109A10u;
            // 0x109a14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109A40u;
            goto label_109a40;
        }
    }
    ctx->pc = 0x109A18u;
    // 0x109a18: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109A18u;
    SET_GPR_U32(ctx, 31, 0x109A20u);
    ctx->pc = 0x109A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A18u;
    // 0x109a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109A18u, 0x109A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A20u;
label_109a20:
    // 0x109a20: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x109a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x109a24: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x109a24u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1FB830u));
    // 0x109a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a2c: 0xc0640ca  jal         func_190328
    ctx->pc = 0x109A2Cu;
    SET_GPR_U32(ctx, 31, 0x109A34u);
    ctx->pc = 0x109A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A2Cu;
    // 0x109a30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x109A2Cu, 0x109A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A34u;
label_109a34:
    // 0x109a34: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x109A34u;
    {
        const bool branch_taken_0x109a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A34u;
        // 0x109a38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a34) {
            ctx->pc = 0x109AACu;
            goto label_109aac;
        }
    }
    ctx->pc = 0x109A3Cu;
    // 0x109a3c: 0x0  nop
    ctx->pc = 0x109a3cu;
    // NOP
label_109a40:
    // 0x109a40: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109A40u;
    {
        const bool branch_taken_0x109a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109a40) {
            ctx->pc = 0x109A54u;
            goto label_109a54;
        }
    }
    ctx->pc = 0x109A48u;
    // 0x109a48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109A48u;
    SET_GPR_U32(ctx, 31, 0x109A50u);
    ctx->pc = 0x109A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A48u;
    // 0x109a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109A48u, 0x109A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A50u;
label_109a50:
    // 0x109a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109a54:
    // 0x109a54: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x109a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x109a58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x109a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x109a5c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x109a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109a60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109a64: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x109A64u;
    {
        const bool branch_taken_0x109a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a64) {
            ctx->pc = 0x109A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109A64u;
            // 0x109a68: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109AACu;
            goto label_109aac;
        }
    }
    ctx->pc = 0x109A6Cu;
    // 0x109a6c: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x109a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_109a70:
    // 0x109a70: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x109a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x109a74: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x109a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a7c: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x109A7Cu;
    SET_GPR_U32(ctx, 31, 0x109A84u);
    ctx->pc = 0x109A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A7Cu;
    // 0x109a80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x109A7Cu, 0x109A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A84u;
label_109a84:
    // 0x109a84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x109a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x109a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a90: 0xc0640ca  jal         func_190328
    ctx->pc = 0x109A90u;
    SET_GPR_U32(ctx, 31, 0x109A98u);
    ctx->pc = 0x109A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A90u;
    // 0x109a94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x109A90u, 0x109A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A98u;
label_109a98:
    // 0x109a98: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109aa0: 0x1473fff3  bne         $v1, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x109AA0u;
    {
        const bool branch_taken_0x109aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x109aa0) {
            ctx->pc = 0x109A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109a70;
        }
    }
    ctx->pc = 0x109AA8u;
    // 0x109aa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_109aac:
    // 0x109aac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x109aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109ab0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109ab4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x109ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109ab8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x109ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109abc: 0x3e00008  jr          $ra
    ctx->pc = 0x109ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ABCu;
        // 0x109ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109AC4u;
}

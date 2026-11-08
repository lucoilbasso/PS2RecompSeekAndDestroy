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

// Function: Cmd_STAGE_EFFECT_Entry__FP15BsSCDEntControl
// Address: 0x143330 - 0x14341c
void Cmd_STAGE_EFFECT_Entry__FP15BsSCDEntControl_0x143330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_STAGE_EFFECT_Entry__FP15BsSCDEntControl_0x143330");
#endif

    switch (ctx->pc) {
        case 0x143368u: goto label_143368;
        case 0x143380u: goto label_143380;
        case 0x14339cu: goto label_14339c;
        case 0x1433c8u: goto label_1433c8;
        case 0x1433e4u: goto label_1433e4;
        case 0x1433f8u: goto label_1433f8;
        case 0x143404u: goto label_143404;
        default: break;
    }

    ctx->pc = 0x143330u;

    // 0x143330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143334: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x143334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14333c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x14333cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x143340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143344: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143348: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x143348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14334c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x14334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x143350: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x143350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x143354: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x143354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143358: 0x10c70017  beq         $a2, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x143358u;
    {
        const bool branch_taken_0x143358 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x14335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143358u;
        // 0x14335c: 0x8cb20048  lw          $s2, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143358) {
            ctx->pc = 0x1433B8u;
            goto label_1433b8;
        }
    }
    ctx->pc = 0x143360u;
    // 0x143360: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x143360u;
    SET_GPR_U32(ctx, 31, 0x143368u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x143360u, 0x143368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143368u;
label_143368:
    // 0x143368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14336c: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x14336Cu;
    {
        const bool branch_taken_0x14336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x143370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14336Cu;
        // 0x143370: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14336c) {
            ctx->pc = 0x143408u;
            goto label_143408;
        }
    }
    ctx->pc = 0x143374u;
    // 0x143374: 0x26500024  addiu       $s0, $s2, 0x24
    ctx->pc = 0x143374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x143378: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x143378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14337c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_143380:
    // 0x143380: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x143380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x143384: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143384u;
    {
        const bool branch_taken_0x143384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143384u;
        // 0x143388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143384) {
            ctx->pc = 0x14339Cu;
            goto label_14339c;
        }
    }
    ctx->pc = 0x14338Cu;
    // 0x14338c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14338cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143394: 0xc05f820  jal         func_17E080
    ctx->pc = 0x143394u;
    SET_GPR_U32(ctx, 31, 0x14339Cu);
    ctx->pc = 0x143398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143394u;
    // 0x143398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x143394u, 0x14339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14339Cu;
label_14339c:
    // 0x14339c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14339cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1433a0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1433a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1433a4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1433A4u;
    {
        const bool branch_taken_0x1433a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1433a4) {
            ctx->pc = 0x1433A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1433A4u;
            // 0x1433a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143380;
        }
    }
    ctx->pc = 0x1433ACu;
    // 0x1433ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1433ACu;
    {
        const bool branch_taken_0x1433ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433ACu;
        // 0x1433b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433ac) {
            ctx->pc = 0x143408u;
            goto label_143408;
        }
    }
    ctx->pc = 0x1433B4u;
    // 0x1433b4: 0x0  nop
    ctx->pc = 0x1433b4u;
    // NOP
label_1433b8:
    // 0x1433b8: 0x26500024  addiu       $s0, $s2, 0x24
    ctx->pc = 0x1433b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x1433bc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1433bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1433c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1433c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1433c4: 0x0  nop
    ctx->pc = 0x1433c4u;
    // NOP
label_1433c8:
    // 0x1433c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1433c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1433cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1433CCu;
    {
        const bool branch_taken_0x1433cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433CCu;
        // 0x1433d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433cc) {
            ctx->pc = 0x1433E4u;
            goto label_1433e4;
        }
    }
    ctx->pc = 0x1433D4u;
    // 0x1433d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1433d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1433d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433dc: 0xc05f820  jal         func_17E080
    ctx->pc = 0x1433DCu;
    SET_GPR_U32(ctx, 31, 0x1433E4u);
    ctx->pc = 0x1433E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433DCu;
    // 0x1433e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x1433DCu, 0x1433E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433E4u;
label_1433e4:
    // 0x1433e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1433e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1433e8: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1433E8u;
    {
        const bool branch_taken_0x1433e8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1433e8) {
            ctx->pc = 0x1433ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1433E8u;
            // 0x1433ec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1433C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1433c8;
        }
    }
    ctx->pc = 0x1433F0u;
    // 0x1433f0: 0xc050eb6  jal         func_143AD8
    ctx->pc = 0x1433F0u;
    SET_GPR_U32(ctx, 31, 0x1433F8u);
    ctx->pc = 0x1433F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433F0u;
    // 0x1433f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143AD8u, 0x1433F0u, 0x1433F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433F8u;
label_1433f8:
    // 0x1433f8: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1433f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1433fc: 0xc060e88  jal         func_183A20
    ctx->pc = 0x1433FCu;
    SET_GPR_U32(ctx, 31, 0x143404u);
    ctx->pc = 0x143400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433FCu;
    // 0x143400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x1433FCu, 0x143404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143404u;
label_143404:
    // 0x143404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143408:
    // 0x143408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14340c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14340cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143410: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x143410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143414: 0x3e00008  jr          $ra
    ctx->pc = 0x143414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143414u;
        // 0x143418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14341Cu;
}

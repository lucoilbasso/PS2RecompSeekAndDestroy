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

// Function: Cmd_PARTICLE_ANGSET_Entry__FP15BsSCDEntControl
// Address: 0x131318 - 0x1313d8
void Cmd_PARTICLE_ANGSET_Entry__FP15BsSCDEntControl_0x131318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTICLE_ANGSET_Entry__FP15BsSCDEntControl_0x131318");
#endif

    switch (ctx->pc) {
        case 0x1313a0u: goto label_1313a0;
        case 0x1313b0u: goto label_1313b0;
        default: break;
    }

    ctx->pc = 0x131318u;

    // 0x131318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13131c: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x13131cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x131320: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x131320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x131324: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x131324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131328: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x131328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x13132c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x13132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x131330: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x131330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x131334: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x131334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x131338: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x131338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13133c: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x13133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x131340: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x131340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x131344: 0x14e6000c  bne         $a3, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x131344u;
    {
        const bool branch_taken_0x131344 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x131348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131344u;
        // 0x131348: 0x8cb202f8  lw          $s2, 0x2F8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131344) {
            ctx->pc = 0x131378u;
            goto label_131378;
        }
    }
    ctx->pc = 0x13134Cu;
    // 0x13134c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x13134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x131350: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x131350u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x131354: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x131354u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x131358: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x131358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x13135c: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x13135cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x131360: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x131360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131364: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x131364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x131368: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x131368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13136c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x13136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x131370: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x131370u;
    {
        const bool branch_taken_0x131370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131370u;
        // 0x131374: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131370) {
            ctx->pc = 0x1313B0u;
            goto label_1313b0;
        }
    }
    ctx->pc = 0x131378u;
label_131378:
    // 0x131378: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x131378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13137c: 0x54e2000d  bnel        $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13137Cu;
    {
        const bool branch_taken_0x13137c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x13137c) {
            ctx->pc = 0x131380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13137Cu;
            // 0x131380: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1313B4u;
            goto label_1313b4;
        }
    }
    ctx->pc = 0x131384u;
    // 0x131384: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x131388: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x131388u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x13138c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x13138cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x131390: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x131390u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131398: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x131398u;
    SET_GPR_U32(ctx, 31, 0x1313A0u);
    ctx->pc = 0x13139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131398u;
    // 0x13139c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x131398u, 0x1313A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313A0u;
label_1313a0:
    // 0x1313a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1313a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1313a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313a8: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1313A8u;
    SET_GPR_U32(ctx, 31, 0x1313B0u);
    ctx->pc = 0x1313ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313A8u;
    // 0x1313ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1313A8u, 0x1313B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313B0u;
label_1313b0:
    // 0x1313b0: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1313b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1313b4:
    // 0x1313b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1313b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1313b8: 0xfe420170  sd          $v0, 0x170($s2)
    ctx->pc = 0x1313b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 368), GPR_U64(ctx, 2));
    // 0x1313bc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1313bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1313c0: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x1313c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1313c4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1313c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1313c8: 0xfe430178  sd          $v1, 0x178($s2)
    ctx->pc = 0x1313c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 376), GPR_U64(ctx, 3));
    // 0x1313cc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1313ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1313d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1313D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1313D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313D0u;
        // 0x1313d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1313D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1313D8u;
}

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

// Function: Cmd_PARTICLE_POSSET_Entry__FP15BsSCDEntControl
// Address: 0x131288 - 0x131318
void Cmd_PARTICLE_POSSET_Entry__FP15BsSCDEntControl_0x131288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTICLE_POSSET_Entry__FP15BsSCDEntControl_0x131288");
#endif

    switch (ctx->pc) {
        case 0x131288u: goto label_131288;
        case 0x13128cu: goto label_13128c;
        case 0x131290u: goto label_131290;
        case 0x131294u: goto label_131294;
        case 0x131298u: goto label_131298;
        case 0x13129cu: goto label_13129c;
        case 0x1312a0u: goto label_1312a0;
        case 0x1312a4u: goto label_1312a4;
        case 0x1312a8u: goto label_1312a8;
        case 0x1312acu: goto label_1312ac;
        case 0x1312b0u: goto label_1312b0;
        case 0x1312b4u: goto label_1312b4;
        case 0x1312b8u: goto label_1312b8;
        case 0x1312bcu: goto label_1312bc;
        case 0x1312c0u: goto label_1312c0;
        case 0x1312c4u: goto label_1312c4;
        case 0x1312c8u: goto label_1312c8;
        case 0x1312ccu: goto label_1312cc;
        case 0x1312d0u: goto label_1312d0;
        case 0x1312d4u: goto label_1312d4;
        case 0x1312d8u: goto label_1312d8;
        case 0x1312dcu: goto label_1312dc;
        case 0x1312e0u: goto label_1312e0;
        case 0x1312e4u: goto label_1312e4;
        case 0x1312e8u: goto label_1312e8;
        case 0x1312ecu: goto label_1312ec;
        case 0x1312f0u: goto label_1312f0;
        case 0x1312f4u: goto label_1312f4;
        case 0x1312f8u: goto label_1312f8;
        case 0x1312fcu: goto label_1312fc;
        case 0x131300u: goto label_131300;
        case 0x131304u: goto label_131304;
        case 0x131308u: goto label_131308;
        case 0x13130cu: goto label_13130c;
        case 0x131310u: goto label_131310;
        case 0x131314u: goto label_131314;
        default: break;
    }

    ctx->pc = 0x131288u;

label_131288:
    // 0x131288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13128c:
    // 0x13128c: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x13128cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_131290:
    // 0x131290: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x131290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_131294:
    // 0x131294: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x131294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_131298:
    // 0x131298: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x131298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13129c:
    // 0x13129c: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x13129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
label_1312a0:
    // 0x1312a0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1312a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1312a4:
    // 0x1312a4: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1312a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_1312a8:
    // 0x1312a8: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1312a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1312ac:
    // 0x1312ac: 0x14e60006  bne         $a3, $a2, . + 4 + (0x6 << 2)
label_1312b0:
    if (ctx->pc == 0x1312B0u) {
        ctx->pc = 0x1312B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312ACu;
        // 0x1312b0: 0x8cb002f8  lw          $s0, 0x2F8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1312B4u;
        goto label_1312b4;
    }
    ctx->pc = 0x1312ACu;
    {
        const bool branch_taken_0x1312ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1312B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312ACu;
        // 0x1312b0: 0x8cb002f8  lw          $s0, 0x2F8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312ac) {
            ctx->pc = 0x1312C8u;
            goto label_1312c8;
        }
    }
    ctx->pc = 0x1312B4u;
label_1312b4:
    // 0x1312b4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1312b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1312b8:
    // 0x1312b8: 0xc06a2d4  jal         func_1A8B50
label_1312bc:
    if (ctx->pc == 0x1312BCu) {
        ctx->pc = 0x1312BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312B8u;
        // 0x1312bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1312C0u;
        goto label_1312c0;
    }
    ctx->pc = 0x1312B8u;
    SET_GPR_U32(ctx, 31, 0x1312C0u);
    ctx->pc = 0x1312BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312B8u;
    // 0x1312bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1312B8u, 0x1312C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312C0u;
label_1312c0:
    // 0x1312c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1312c4:
    if (ctx->pc == 0x1312C4u) {
        ctx->pc = 0x1312C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312C0u;
        // 0x1312c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1312C8u;
        goto label_1312c8;
    }
    ctx->pc = 0x1312C0u;
    {
        const bool branch_taken_0x1312c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312C0u;
        // 0x1312c4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312c0) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312C8u;
label_1312c8:
    // 0x1312c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1312c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1312cc:
    // 0x1312cc: 0x54e20008  bnel        $a3, $v0, . + 4 + (0x8 << 2)
label_1312d0:
    if (ctx->pc == 0x1312D0u) {
        ctx->pc = 0x1312D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312CCu;
        // 0x1312d0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1312D4u;
        goto label_1312d4;
    }
    ctx->pc = 0x1312CCu;
    {
        const bool branch_taken_0x1312cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1312cc) {
            ctx->pc = 0x1312D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1312CCu;
            // 0x1312d0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312D4u;
label_1312d4:
    // 0x1312d4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1312d8:
    // 0x1312d8: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x1312d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_1312dc:
    // 0x1312dc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1312dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1312e0:
    // 0x1312e0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1312e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1312e4:
    // 0x1312e4: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1312e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_1312e8:
    // 0x1312e8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1312e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1312ec:
    // 0x1312ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1312ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1312f0:
    // 0x1312f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1312f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1312f4:
    // 0x1312f4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1312f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1312f8:
    // 0x1312f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1312f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1312fc:
    // 0x1312fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1312fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_131300:
    // 0x131300: 0x60f809  jalr        $v1
label_131304:
    if (ctx->pc == 0x131304u) {
        ctx->pc = 0x131304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131300u;
        // 0x131304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131308u;
        goto label_131308;
    }
    ctx->pc = 0x131300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131308u);
        ctx->pc = 0x131304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131300u;
        // 0x131304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131300u, 0x131308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131308u;
label_131308:
    // 0x131308: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x131308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13130c:
    // 0x13130c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_131310:
    // 0x131310: 0x3e00008  jr          $ra
label_131314:
    if (ctx->pc == 0x131314u) {
        ctx->pc = 0x131314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131310u;
        // 0x131314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131318u;
        goto label_fallthrough_0x131310;
    }
    ctx->pc = 0x131310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131310u;
        // 0x131314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x131310:
    ctx->pc = 0x131318u;
}

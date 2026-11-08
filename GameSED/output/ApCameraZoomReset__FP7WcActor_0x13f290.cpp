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

// Function: ApCameraZoomReset__FP7WcActor
// Address: 0x13f290 - 0x13f38c
void ApCameraZoomReset__FP7WcActor_0x13f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraZoomReset__FP7WcActor_0x13f290");
#endif

    switch (ctx->pc) {
        case 0x13f2bcu: goto label_13f2bc;
        case 0x13f318u: goto label_13f318;
        case 0x13f324u: goto label_13f324;
        case 0x13f360u: goto label_13f360;
        default: break;
    }

    ctx->pc = 0x13f290u;

    // 0x13f290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f294: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13f294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13f298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f29c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13f2a4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13f2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13f2a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13f2ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13f2b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13f2b4: 0xc061a46  jal         func_186918
    ctx->pc = 0x13F2B4u;
    SET_GPR_U32(ctx, 31, 0x13F2BCu);
    ctx->pc = 0x13F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F2B4u;
    // 0x13f2b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13F2B4u, 0x13F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2BCu;
label_13f2bc:
    // 0x13f2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F2C0u;
    {
        const bool branch_taken_0x13f2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2C0u;
        // 0x13f2c4: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2c0) {
            ctx->pc = 0x13F2E0u;
            goto label_13f2e0;
        }
    }
    ctx->pc = 0x13F2C8u;
    // 0x13f2c8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13f2cc: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13f2d0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F2D0u;
    {
        const bool branch_taken_0x13f2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f2d0) {
            ctx->pc = 0x13F2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F2D0u;
            // 0x13f2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F2E4u;
            goto label_13f2e4;
        }
    }
    ctx->pc = 0x13F2D8u;
    // 0x13f2d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F2D8u;
    {
        const bool branch_taken_0x13f2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2D8u;
        // 0x13f2dc: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2d8) {
            ctx->pc = 0x13F2E4u;
            goto label_13f2e4;
        }
    }
    ctx->pc = 0x13F2E0u;
label_13f2e0:
    // 0x13f2e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f2e4:
    // 0x13f2e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13f2e8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13f2ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13f2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f2f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f2f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2fc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x13f2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x13f300: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x13F300u;
    {
        const bool branch_taken_0x13f300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x13F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F300u;
        // 0x13f304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f300) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F308u;
    // 0x13f308: 0x8cb00018  lw          $s0, 0x18($a1)
    ctx->pc = 0x13f308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x13f30c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F30Cu;
    {
        const bool branch_taken_0x13f30c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F30Cu;
        // 0x13f310: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f30c) {
            ctx->pc = 0x13F334u;
            goto label_13f334;
        }
    }
    ctx->pc = 0x13F314u;
    // 0x13f314: 0x0  nop
    ctx->pc = 0x13f314u;
    // NOP
label_13f318:
    // 0x13f318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f31c: 0xc050680  jal         func_141A00
    ctx->pc = 0x13F31Cu;
    SET_GPR_U32(ctx, 31, 0x13F324u);
    ctx->pc = 0x13F320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F31Cu;
    // 0x13f320: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x13F31Cu, 0x13F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F324u;
label_13f324:
    // 0x13f324: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F324u;
    {
        const bool branch_taken_0x13f324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F324u;
        // 0x13f328: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f324) {
            ctx->pc = 0x13F338u;
            goto label_13f338;
        }
    }
    ctx->pc = 0x13F32Cu;
    // 0x13f32c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F32Cu;
    {
        const bool branch_taken_0x13f32c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F32Cu;
        // 0x13f330: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f32c) {
            ctx->pc = 0x13F318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f318;
        }
    }
    ctx->pc = 0x13F334u;
label_13f334:
    // 0x13f334: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13f334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f338:
    // 0x13f338: 0xc6200204  lwc1        $f0, 0x204($s1)
    ctx->pc = 0x13f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f33c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f344: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x13f344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x13f348: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x13f348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x13f34c: 0x0  nop
    ctx->pc = 0x13f34cu;
    // NOP
    // 0x13f350: 0x0  nop
    ctx->pc = 0x13f350u;
    // NOP
    // 0x13f354: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13f354u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13f358: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x13F358u;
    SET_GPR_U32(ctx, 31, 0x13F360u);
    ctx->pc = 0x13F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F358u;
    // 0x13f35c: 0xe621015c  swc1        $f1, 0x15C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x13F358u, 0x13F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F360u;
label_13f360:
    // 0x13f360: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x13f364: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x13f364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    // 0x13f368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f36c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13f370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f374: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13f374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13f378: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13f378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f37c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x13f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x13f380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13f380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f384: 0x3e00008  jr          $ra
    ctx->pc = 0x13F384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F384u;
        // 0x13f388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F38Cu;
}

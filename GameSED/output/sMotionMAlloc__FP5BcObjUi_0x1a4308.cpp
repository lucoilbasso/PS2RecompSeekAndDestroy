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

// Function: sMotionMAlloc__FP5BcObjUi
// Address: 0x1a4308 - 0x1a43a0
void sMotionMAlloc__FP5BcObjUi_0x1a4308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sMotionMAlloc__FP5BcObjUi_0x1a4308");
#endif

    switch (ctx->pc) {
        case 0x1a4344u: goto label_1a4344;
        case 0x1a4364u: goto label_1a4364;
        case 0x1a4384u: goto label_1a4384;
        default: break;
    }

    ctx->pc = 0x1a4308u;

    // 0x1a4308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a430c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a430cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4318: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a4318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a431c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a431cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4324: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A4324u;
    {
        const bool branch_taken_0x1a4324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4324u;
        // 0x1a4328: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4324) {
            ctx->pc = 0x1A4388u;
            goto label_1a4388;
        }
    }
    ctx->pc = 0x1A432Cu;
    // 0x1a432c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4330: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4330u;
    {
        const bool branch_taken_0x1a4330 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4330u;
        // 0x1a4334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4330) {
            ctx->pc = 0x1A433Cu;
            goto label_1a433c;
        }
    }
    ctx->pc = 0x1A4338u;
    // 0x1a4338: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a4338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a433c:
    // 0x1a433c: 0xc0680b6  jal         func_1A02D8
    ctx->pc = 0x1A433Cu;
    SET_GPR_U32(ctx, 31, 0x1A4344u);
    ctx->pc = 0x1A02D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02D8u, 0x1A433Cu, 0x1A4344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4344u;
label_1a4344:
    // 0x1a4344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4348: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4348u;
    {
        const bool branch_taken_0x1a4348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4348u;
        // 0x1a434c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4348) {
            ctx->pc = 0x1A4384u;
            goto label_1a4384;
        }
    }
    ctx->pc = 0x1A4350u;
    // 0x1a4350: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4350u;
    {
        const bool branch_taken_0x1a4350 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4350u;
        // 0x1a4354: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4350) {
            ctx->pc = 0x1A435Cu;
            goto label_1a435c;
        }
    }
    ctx->pc = 0x1A4358u;
    // 0x1a4358: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a4358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a435c:
    // 0x1a435c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A435Cu;
    SET_GPR_U32(ctx, 31, 0x1A4364u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A435Cu, 0x1A4364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4364u;
label_1a4364:
    // 0x1a4364: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a4368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a436c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4370: 0x24a59150  addiu       $a1, $a1, -0x6EB0
    ctx->pc = 0x1a4370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938960));
    // 0x1a4374: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4374u;
    {
        const bool branch_taken_0x1a4374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4374u;
        // 0x1a4378: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4374) {
            ctx->pc = 0x1A4384u;
            goto label_1a4384;
        }
    }
    ctx->pc = 0x1A437Cu;
    // 0x1a437c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A437Cu;
    SET_GPR_U32(ctx, 31, 0x1A4384u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A437Cu, 0x1A4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4384u;
label_1a4384:
    // 0x1a4384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a4384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4388:
    // 0x1a4388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a438c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a438cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4390: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a4390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4394: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a4394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4398: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4398u;
        // 0x1a439c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A43A0u;
}

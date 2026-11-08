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

// Function: Cmd_LOAD_EFFECT_Entry__FP15BsSCDEntControl
// Address: 0x143268 - 0x143330
void Cmd_LOAD_EFFECT_Entry__FP15BsSCDEntControl_0x143268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_EFFECT_Entry__FP15BsSCDEntControl_0x143268");
#endif

    switch (ctx->pc) {
        case 0x143290u: goto label_143290;
        case 0x1432a0u: goto label_1432a0;
        case 0x1432c0u: goto label_1432c0;
        case 0x1432c8u: goto label_1432c8;
        case 0x1432e4u: goto label_1432e4;
        case 0x1432f0u: goto label_1432f0;
        case 0x143300u: goto label_143300;
        case 0x143310u: goto label_143310;
        default: break;
    }

    ctx->pc = 0x143268u;

    // 0x143268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14326c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143274: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x143274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x143278: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x143278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14327c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x143280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143284: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x143284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x143288: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x143288u;
    SET_GPR_U32(ctx, 31, 0x143290u);
    ctx->pc = 0x14328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143288u;
    // 0x14328c: 0x8c520048  lw          $s2, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x143288u, 0x143290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143290u;
label_143290:
    // 0x143290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143294: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x143294u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143298: 0xc050d08  jal         func_143420
    ctx->pc = 0x143298u;
    SET_GPR_U32(ctx, 31, 0x1432A0u);
    ctx->pc = 0x14329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143298u;
    // 0x14329c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143420u, 0x143298u, 0x1432A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432A0u;
label_1432a0:
    // 0x1432a0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1432a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1432a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1432a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432a8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1432a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1432ac: 0xae51001c  sw          $s1, 0x1C($s2)
    ctx->pc = 0x1432acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
    // 0x1432b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1432b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1432b4: 0x8e330040  lw          $s3, 0x40($s1)
    ctx->pc = 0x1432b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1432b8: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1432B8u;
    SET_GPR_U32(ctx, 31, 0x1432C0u);
    ctx->pc = 0x1432BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432B8u;
    // 0x1432bc: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1432B8u, 0x1432C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432C0u;
label_1432c0:
    // 0x1432c0: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1432C0u;
    SET_GPR_U32(ctx, 31, 0x1432C8u);
    ctx->pc = 0x1432C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432C0u;
    // 0x1432c4: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1432C0u, 0x1432C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432C8u;
label_1432c8:
    // 0x1432c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1432c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1432ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1432d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1432d4: 0x2442e620  addiu       $v0, $v0, -0x19E0
    ctx->pc = 0x1432d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
    // 0x1432d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1432d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432dc: 0xc040152  jal         func_100548
    ctx->pc = 0x1432DCu;
    SET_GPR_U32(ctx, 31, 0x1432E4u);
    ctx->pc = 0x1432E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432DCu;
    // 0x1432e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100548u, 0x1432DCu, 0x1432E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432E4u;
label_1432e4:
    // 0x1432e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1432e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432e8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1432E8u;
    SET_GPR_U32(ctx, 31, 0x1432F0u);
    ctx->pc = 0x1432ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432E8u;
    // 0x1432ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1432E8u, 0x1432F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432F0u;
label_1432f0:
    // 0x1432f0: 0xae300044  sw          $s0, 0x44($s1)
    ctx->pc = 0x1432f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
    // 0x1432f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1432f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432f8: 0xc050d08  jal         func_143420
    ctx->pc = 0x1432F8u;
    SET_GPR_U32(ctx, 31, 0x143300u);
    ctx->pc = 0x1432FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432F8u;
    // 0x1432fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143420u, 0x1432F8u, 0x143300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143300u;
label_143300:
    // 0x143300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143304: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x143304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x143308: 0xc050c6a  jal         func_1431A8
    ctx->pc = 0x143308u;
    SET_GPR_U32(ctx, 31, 0x143310u);
    ctx->pc = 0x14330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143308u;
    // 0x14330c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1431A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1431A8u, 0x143308u, 0x143310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143310u;
label_143310:
    // 0x143310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143318: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x143318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14331c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14331cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143320: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x143320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143324: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x143324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143328: 0x3e00008  jr          $ra
    ctx->pc = 0x143328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143328u;
        // 0x14332c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143330u;
}

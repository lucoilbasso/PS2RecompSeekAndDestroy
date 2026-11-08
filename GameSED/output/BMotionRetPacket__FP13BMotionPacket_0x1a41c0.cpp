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

// Function: BMotionRetPacket__FP13BMotionPacket
// Address: 0x1a41c0 - 0x1a429c
void BMotionRetPacket__FP13BMotionPacket_0x1a41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionRetPacket__FP13BMotionPacket_0x1a41c0");
#endif

    switch (ctx->pc) {
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a4288u: goto label_1a4288;
        default: break;
    }

    ctx->pc = 0x1a41c0u;

    // 0x1a41c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a41c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a41c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a41c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a41c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a41cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a41ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a41d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a41d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a41d4: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x1a41d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a41d8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a41dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A41DCu;
    {
        const bool branch_taken_0x1a41dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41DCu;
        // 0x1a41e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41dc) {
            ctx->pc = 0x1A41F4u;
            goto label_1a41f4;
        }
    }
    ctx->pc = 0x1A41E4u;
    // 0x1a41e4: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A41E4u;
    SET_GPR_U32(ctx, 31, 0x1A41ECu);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A41E4u, 0x1A41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41ECu;
label_1a41ec:
    // 0x1a41ec: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A41ECu;
    SET_GPR_U32(ctx, 31, 0x1A41F4u);
    ctx->pc = 0x1A41F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41ECu;
    // 0x1a41f0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A41ECu, 0x1A41F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41F4u;
label_1a41f4:
    // 0x1a41f4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1a41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a41f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A41F8u;
    {
        const bool branch_taken_0x1a41f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a41f8) {
            ctx->pc = 0x1A41FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A41F8u;
            // 0x1a41fc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4214u;
            goto label_1a4214;
        }
    }
    ctx->pc = 0x1A4200u;
    // 0x1a4200: 0xc0690e8  jal         func_1A43A0
    ctx->pc = 0x1A4200u;
    SET_GPR_U32(ctx, 31, 0x1A4208u);
    ctx->pc = 0x1A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43A0u, 0x1A4200u, 0x1A4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4208u;
label_1a4208:
    // 0x1a4208: 0xc069612  jal         func_1A5848
    ctx->pc = 0x1A4208u;
    SET_GPR_U32(ctx, 31, 0x1A4210u);
    ctx->pc = 0x1A420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4208u;
    // 0x1a420c: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5848u, 0x1A4208u, 0x1A4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4210u;
label_1a4210:
    // 0x1a4210: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a4214:
    // 0x1a4214: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4214u;
    {
        const bool branch_taken_0x1a4214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4214) {
            ctx->pc = 0x1A4218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4214u;
            // 0x1a4218: 0x8f84918c  lw          $a0, -0x6E74($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4238u;
            goto label_1a4238;
        }
    }
    ctx->pc = 0x1A421Cu;
    // 0x1a421c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1a421cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4220: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a4220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a4224: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4224u;
    {
        const bool branch_taken_0x1a4224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4224) {
            ctx->pc = 0x1A4228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4224u;
            // 0x1a4228: 0x8f84918c  lw          $a0, -0x6E74($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4238u;
            goto label_1a4238;
        }
    }
    ctx->pc = 0x1A422Cu;
    // 0x1a422c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A422Cu;
    SET_GPR_U32(ctx, 31, 0x1A4234u);
    ctx->pc = 0x1A4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A422Cu;
    // 0x1a4230: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A422Cu, 0x1A4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4234u;
label_1a4234:
    // 0x1a4234: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a4234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
label_1a4238:
    // 0x1a4238: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A4238u;
    SET_GPR_U32(ctx, 31, 0x1A4240u);
    ctx->pc = 0x1A423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4238u;
    // 0x1a423c: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A4238u, 0x1A4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4240u;
label_1a4240:
    // 0x1a4240: 0x8f83917c  lw          $v1, -0x6E84($gp)
    ctx->pc = 0x1a4240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939004)));
    // 0x1a4244: 0x8f829184  lw          $v0, -0x6E7C($gp)
    ctx->pc = 0x1a4244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939012)));
    // 0x1a4248: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a4248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    // 0x1a424c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1a424cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1a4250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a4250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a4254: 0xaf90917c  sw          $s0, -0x6E84($gp)
    ctx->pc = 0x1a4254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939004), GPR_U32(ctx, 16));
    // 0x1a4258: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A4258u;
    SET_GPR_U32(ctx, 31, 0x1A4260u);
    ctx->pc = 0x1A425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4258u;
    // 0x1a425c: 0xaf829184  sw          $v0, -0x6E7C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939012), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A4258u, 0x1A4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4260u;
label_1a4260:
    // 0x1a4260: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A4260u;
    SET_GPR_U32(ctx, 31, 0x1A4268u);
    ctx->pc = 0x1A4264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4260u;
    // 0x1a4264: 0x8f849190  lw          $a0, -0x6E70($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A4260u, 0x1A4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4268u;
label_1a4268:
    // 0x1a4268: 0x8f839180  lw          $v1, -0x6E80($gp)
    ctx->pc = 0x1a4268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939008)));
    // 0x1a426c: 0x8f829188  lw          $v0, -0x6E78($gp)
    ctx->pc = 0x1a426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
    // 0x1a4270: 0x8f849190  lw          $a0, -0x6E70($gp)
    ctx->pc = 0x1a4270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    // 0x1a4274: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a4274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a4278: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a4278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a427c: 0xaf919180  sw          $s1, -0x6E80($gp)
    ctx->pc = 0x1a427cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939008), GPR_U32(ctx, 17));
    // 0x1a4280: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1A4280u;
    SET_GPR_U32(ctx, 31, 0x1A4288u);
    ctx->pc = 0x1A4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4280u;
    // 0x1a4284: 0xaf829188  sw          $v0, -0x6E78($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1A4280u, 0x1A4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4288u;
label_1a4288:
    // 0x1a4288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a428c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a428cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4294: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4294u;
        // 0x1a4298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A429Cu;
}

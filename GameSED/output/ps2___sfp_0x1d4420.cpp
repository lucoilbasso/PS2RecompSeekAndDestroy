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

// Function: __sfp
// Address: 0x1d4420 - 0x1d4518
void ps2___sfp_0x1d4420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfp_0x1d4420");
#endif

    switch (ctx->pc) {
        case 0x1d444cu: goto label_1d444c;
        case 0x1d4450u: goto label_1d4450;
        case 0x1d4460u: goto label_1d4460;
        case 0x1d44a0u: goto label_1d44a0;
        default: break;
    }

    ctx->pc = 0x1d4420u;

    // 0x1d4420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d4428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d442c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4430: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d4430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d4434: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d4434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d4438: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1d4438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1d443c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D443Cu;
    {
        const bool branch_taken_0x1d443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D443Cu;
        // 0x1d4440: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d443c) {
            ctx->pc = 0x1D444Cu;
            goto label_1d444c;
        }
    }
    ctx->pc = 0x1D4444u;
    // 0x1d4444: 0xc075156  jal         func_1D4558
    ctx->pc = 0x1D4444u;
    SET_GPR_U32(ctx, 31, 0x1D444Cu);
    ctx->pc = 0x1D4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4558u, 0x1D4444u, 0x1D444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D444Cu;
label_1d444c:
    // 0x1d444c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d4450:
    // 0x1d4450: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d4458: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4458u;
    {
        const bool branch_taken_0x1d4458 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4458u;
        // 0x1d445c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4458) {
            ctx->pc = 0x1D4484u;
            goto label_1d4484;
        }
    }
    ctx->pc = 0x1D4460u;
label_1d4460:
    // 0x1d4460: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x1d4460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d4464: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D4464u;
    {
        const bool branch_taken_0x1d4464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4464u;
        // 0x1d4468: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4464) {
            ctx->pc = 0x1D44C0u;
            goto label_1d44c0;
        }
    }
    ctx->pc = 0x1D446Cu;
    // 0x1d446c: 0x0  nop
    ctx->pc = 0x1d446cu;
    // NOP
    // 0x1d4470: 0x0  nop
    ctx->pc = 0x1d4470u;
    // NOP
    // 0x1d4474: 0x0  nop
    ctx->pc = 0x1d4474u;
    // NOP
    // 0x1d4478: 0x0  nop
    ctx->pc = 0x1d4478u;
    // NOP
    // 0x1d447c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D447Cu;
    {
        const bool branch_taken_0x1d447c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D447Cu;
        // 0x1d4480: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d447c) {
            ctx->pc = 0x1D4460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4460;
        }
    }
    ctx->pc = 0x1D4484u;
label_1d4484:
    // 0x1d4484: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d4484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4488: 0x0  nop
    ctx->pc = 0x1d4488u;
    // NOP
    // 0x1d448c: 0x5480fff0  bnel        $a0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D448Cu;
    {
        const bool branch_taken_0x1d448c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d448c) {
            ctx->pc = 0x1D4490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D448Cu;
            // 0x1d4490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4450;
        }
    }
    ctx->pc = 0x1D4494u;
    // 0x1d4494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4498: 0xc0750ea  jal         func_1D43A8
    ctx->pc = 0x1D4498u;
    SET_GPR_U32(ctx, 31, 0x1D44A0u);
    ctx->pc = 0x1D449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4498u;
    // 0x1d449c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43A8u, 0x1D4498u, 0x1D44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D44A0u;
label_1d44a0:
    // 0x1d44a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d44a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d44a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D44A8u;
    {
        const bool branch_taken_0x1d44a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44A8u;
        // 0x1d44ac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44a8) {
            ctx->pc = 0x1D44B8u;
            goto label_1d44b8;
        }
    }
    ctx->pc = 0x1D44B0u;
    // 0x1d44b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D44B0u;
    {
        const bool branch_taken_0x1d44b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44B0u;
        // 0x1d44b4: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44b0) {
            ctx->pc = 0x1D4500u;
            goto label_1d4500;
        }
    }
    ctx->pc = 0x1D44B8u;
label_1d44b8:
    // 0x1d44b8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D44B8u;
    {
        const bool branch_taken_0x1d44b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44B8u;
        // 0x1d44bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44b8) {
            ctx->pc = 0x1D4450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4450;
        }
    }
    ctx->pc = 0x1D44C0u;
label_1d44c0:
    // 0x1d44c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d44c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d44c8: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1d44c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d44cc: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x1d44ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x1d44d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d44d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d44d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d44d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d44dc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1d44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1d44e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1d44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1d44e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1d44e8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1d44e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1d44ec: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1d44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1d44f0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1d44f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1d44f4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1d44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1d44f8: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x1d44f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d44fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d44fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4500:
    // 0x1d4500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d450c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d450cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d4510: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4510u;
        // 0x1d4514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4518u;
}

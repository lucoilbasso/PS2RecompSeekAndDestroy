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

// Function: Cmd_EFFECT_REQUEST_Entry__FP15BsSCDEntControl
// Address: 0x1313d8 - 0x1314b0
void Cmd_EFFECT_REQUEST_Entry__FP15BsSCDEntControl_0x1313d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EFFECT_REQUEST_Entry__FP15BsSCDEntControl_0x1313d8");
#endif

    switch (ctx->pc) {
        case 0x1313f8u: goto label_1313f8;
        case 0x131410u: goto label_131410;
        case 0x13142cu: goto label_13142c;
        case 0x131458u: goto label_131458;
        case 0x131468u: goto label_131468;
        case 0x131490u: goto label_131490;
        default: break;
    }

    ctx->pc = 0x1313d8u;

    // 0x1313d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1313d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1313dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1313dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1313e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1313e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1313e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1313e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1313e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1313ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1313ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1313f0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x1313F0u;
    SET_GPR_U32(ctx, 31, 0x1313F8u);
    ctx->pc = 0x1313F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313F0u;
    // 0x1313f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x1313F0u, 0x1313F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313F8u;
label_1313f8:
    // 0x1313f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1313f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1313fc: 0x2e2200d0  sltiu       $v0, $s1, 0xD0
    ctx->pc = 0x1313fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)208) ? 1 : 0);
    // 0x131400: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x131400u;
    {
        const bool branch_taken_0x131400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131400) {
            ctx->pc = 0x131404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131400u;
            // 0x131404: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13149Cu;
            goto label_13149c;
        }
    }
    ctx->pc = 0x131408u;
    // 0x131408: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x131408u;
    SET_GPR_U32(ctx, 31, 0x131410u);
    ctx->pc = 0x13140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131408u;
    // 0x13140c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x131408u, 0x131410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131410u;
label_131410:
    // 0x131410: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x131410u;
    {
        const bool branch_taken_0x131410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131410u;
        // 0x131414: 0x8f868a10  lw          $a2, -0x75F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131410) {
            ctx->pc = 0x131480u;
            goto label_131480;
        }
    }
    ctx->pc = 0x131418u;
    // 0x131418: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x131418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13141c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13141cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131420: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x131420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131424: 0xc04110c  jal         func_104430
    ctx->pc = 0x131424u;
    SET_GPR_U32(ctx, 31, 0x13142Cu);
    ctx->pc = 0x131428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131424u;
    // 0x131428: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x131424u, 0x13142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13142Cu;
label_13142c:
    // 0x13142c: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x13142cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x131430: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131434: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x131434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x131438: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x131438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13143c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13143Cu;
    {
        const bool branch_taken_0x13143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x131440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13143Cu;
        // 0x131440: 0x8f868a10  lw          $a2, -0x75F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13143c) {
            ctx->pc = 0x131480u;
            goto label_131480;
        }
    }
    ctx->pc = 0x131444u;
    // 0x131444: 0x8e5001b0  lw          $s0, 0x1B0($s2)
    ctx->pc = 0x131444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x131448: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x131448u;
    {
        const bool branch_taken_0x131448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131448) {
            ctx->pc = 0x13144Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131448u;
            // 0x13144c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13149Cu;
            goto label_13149c;
        }
    }
    ctx->pc = 0x131450u;
    // 0x131450: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x131450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131454: 0x0  nop
    ctx->pc = 0x131454u;
    // NOP
label_131458:
    // 0x131458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13145c: 0x8f868a10  lw          $a2, -0x75F0($gp)
    ctx->pc = 0x13145cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x131460: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x131460u;
    SET_GPR_U32(ctx, 31, 0x131468u);
    ctx->pc = 0x131464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131460u;
    // 0x131464: 0x8f878a14  lw          $a3, -0x75EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x131460u, 0x131468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131468u;
label_131468:
    // 0x131468: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x131468u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13146c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13146Cu;
    {
        const bool branch_taken_0x13146c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13146c) {
            ctx->pc = 0x131470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13146Cu;
            // 0x131470: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131458;
        }
    }
    ctx->pc = 0x131474u;
    // 0x131474: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131474u;
    {
        const bool branch_taken_0x131474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131474u;
        // 0x131478: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131474) {
            ctx->pc = 0x13149Cu;
            goto label_13149c;
        }
    }
    ctx->pc = 0x13147Cu;
    // 0x13147c: 0x0  nop
    ctx->pc = 0x13147cu;
    // NOP
label_131480:
    // 0x131480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131484: 0x8f878a14  lw          $a3, -0x75EC($gp)
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x131488: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x131488u;
    SET_GPR_U32(ctx, 31, 0x131490u);
    ctx->pc = 0x13148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131488u;
    // 0x13148c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x131488u, 0x131490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131490u;
label_131490:
    // 0x131490: 0xaf808a10  sw          $zero, -0x75F0($gp)
    ctx->pc = 0x131490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 0));
    // 0x131494: 0xaf828a08  sw          $v0, -0x75F8($gp)
    ctx->pc = 0x131494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 2));
    // 0x131498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13149c:
    // 0x13149c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13149cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1314a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1314a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1314a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1314a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1314a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1314A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1314ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314A8u;
        // 0x1314ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1314A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1314B0u;
}

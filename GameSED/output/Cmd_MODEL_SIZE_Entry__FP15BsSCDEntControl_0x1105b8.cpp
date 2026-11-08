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

// Function: Cmd_MODEL_SIZE_Entry__FP15BsSCDEntControl
// Address: 0x1105b8 - 0x110648
void Cmd_MODEL_SIZE_Entry__FP15BsSCDEntControl_0x1105b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_SIZE_Entry__FP15BsSCDEntControl_0x1105b8");
#endif

    switch (ctx->pc) {
        case 0x1105e8u: goto label_1105e8;
        case 0x110604u: goto label_110604;
        case 0x11061cu: goto label_11061c;
        case 0x110624u: goto label_110624;
        case 0x110630u: goto label_110630;
        default: break;
    }

    ctx->pc = 0x1105b8u;

    // 0x1105b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1105b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1105bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1105bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1105c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1105c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1105c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1105c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1105c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1105cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1105ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1105d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1105d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1105d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1105d8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1105dc: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x1105dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1105e0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1105E0u;
    SET_GPR_U32(ctx, 31, 0x1105E8u);
    ctx->pc = 0x1105E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105E0u;
    // 0x1105e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1105E0u, 0x1105E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105E8u;
label_1105e8:
    // 0x1105e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1105e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105ec: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1105ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1105f0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1105f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1105f4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1105F4u;
    {
        const bool branch_taken_0x1105f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1105F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105F4u;
        // 0x1105f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105f4) {
            ctx->pc = 0x11061Cu;
            goto label_11061c;
        }
    }
    ctx->pc = 0x1105FCu;
    // 0x1105fc: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1105FCu;
    SET_GPR_U32(ctx, 31, 0x110604u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1105FCu, 0x110604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110604u;
label_110604:
    // 0x110604: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11060c: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x11060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x110610: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x110610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x110614: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x110614u;
    SET_GPR_U32(ctx, 31, 0x11061Cu);
    ctx->pc = 0x110618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110614u;
    // 0x110618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x110614u, 0x11061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11061Cu;
label_11061c:
    // 0x11061c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x11061Cu;
    SET_GPR_U32(ctx, 31, 0x110624u);
    ctx->pc = 0x110620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11061Cu;
    // 0x110620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x11061Cu, 0x110624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110624u;
label_110624:
    // 0x110624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110628: 0xc06546c  jal         func_1951B0
    ctx->pc = 0x110628u;
    SET_GPR_U32(ctx, 31, 0x110630u);
    ctx->pc = 0x11062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110628u;
    // 0x11062c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1951B0u, 0x110628u, 0x110630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110630u;
label_110630:
    // 0x110630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x110638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11063c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110640: 0x3e00008  jr          $ra
    ctx->pc = 0x110640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110640u;
        // 0x110644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110648u;
}

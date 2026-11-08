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

// Function: ApExtGet1CameraPtr__FP15BsSCDEntControl
// Address: 0x110748 - 0x1107bc
void ApExtGet1CameraPtr__FP15BsSCDEntControl_0x110748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApExtGet1CameraPtr__FP15BsSCDEntControl_0x110748");
#endif

    switch (ctx->pc) {
        case 0x110770u: goto label_110770;
        case 0x11078cu: goto label_11078c;
        case 0x1107a4u: goto label_1107a4;
        default: break;
    }

    ctx->pc = 0x110748u;

    // 0x110748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11074c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11074cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110750: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x110754: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11075c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11075cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110760: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x110760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x110764: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x110764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x110768: 0xc04110c  jal         func_104430
    ctx->pc = 0x110768u;
    SET_GPR_U32(ctx, 31, 0x110770u);
    ctx->pc = 0x11076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110768u;
    // 0x11076c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x110768u, 0x110770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110770u;
label_110770:
    // 0x110770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110774: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x110774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x110778: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x110778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11077c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11077Cu;
    {
        const bool branch_taken_0x11077c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x110780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11077Cu;
        // 0x110780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11077c) {
            ctx->pc = 0x1107A4u;
            goto label_1107a4;
        }
    }
    ctx->pc = 0x110784u;
    // 0x110784: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x110784u;
    SET_GPR_U32(ctx, 31, 0x11078Cu);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x110784u, 0x11078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11078Cu;
label_11078c:
    // 0x11078c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11078cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110794: 0x24a53d68  addiu       $a1, $a1, 0x3D68
    ctx->pc = 0x110794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    // 0x110798: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x110798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x11079c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x11079Cu;
    SET_GPR_U32(ctx, 31, 0x1107A4u);
    ctx->pc = 0x1107A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11079Cu;
    // 0x1107a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x11079Cu, 0x1107A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107A4u;
label_1107a4:
    // 0x1107a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1107a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1107a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1107ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1107acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1107b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1107b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1107b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1107B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1107B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107B4u;
        // 0x1107b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1107B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1107BCu;
}

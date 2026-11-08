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

// Function: Cmd_SE_3D_PLAY_Entry__FP15BsSCDEntControl
// Address: 0x145560 - 0x145620
void Cmd_SE_3D_PLAY_Entry__FP15BsSCDEntControl_0x145560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_3D_PLAY_Entry__FP15BsSCDEntControl_0x145560");
#endif

    switch (ctx->pc) {
        case 0x145588u: goto label_145588;
        case 0x14559cu: goto label_14559c;
        case 0x1455bcu: goto label_1455bc;
        case 0x1455dcu: goto label_1455dc;
        case 0x1455fcu: goto label_1455fc;
        default: break;
    }

    ctx->pc = 0x145560u;

    // 0x145560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145564: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14556c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145570: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x145570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x145574: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x145574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x145578: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x145578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14557c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145580: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x145580u;
    SET_GPR_U32(ctx, 31, 0x145588u);
    ctx->pc = 0x145584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145580u;
    // 0x145584: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x145580u, 0x145588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145588u;
label_145588:
    // 0x145588: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14558c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x145590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145594: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x145594u;
    SET_GPR_U32(ctx, 31, 0x14559Cu);
    ctx->pc = 0x145598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145594u;
    // 0x145598: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x145594u, 0x14559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14559Cu;
label_14559c:
    // 0x14559c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1455a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1455a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1455a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1455a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1455a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1455ac: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1455ACu;
    {
        const bool branch_taken_0x1455ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1455B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455ACu;
        // 0x1455b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455ac) {
            ctx->pc = 0x1455C0u;
            goto label_1455c0;
        }
    }
    ctx->pc = 0x1455B4u;
    // 0x1455b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1455B4u;
    SET_GPR_U32(ctx, 31, 0x1455BCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1455B4u, 0x1455BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455BCu;
label_1455bc:
    // 0x1455bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1455bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1455c0:
    // 0x1455c0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1455c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1455c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1455c8: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1455cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1455ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1455d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455d4: 0xc0514c2  jal         func_145308
    ctx->pc = 0x1455D4u;
    SET_GPR_U32(ctx, 31, 0x1455DCu);
    ctx->pc = 0x1455D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455D4u;
    // 0x1455d8: 0x3c100024  lui         $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145308u, 0x1455D4u, 0x1455DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455DCu;
label_1455dc:
    // 0x1455dc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1455e0: 0x2610fcb0  addiu       $s0, $s0, -0x350
    ctx->pc = 0x1455e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966448));
    // 0x1455e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1455e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455e8: 0x8e060414  lw          $a2, 0x414($s0)
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1044)));
    // 0x1455ec: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1455ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1455f0: 0x8e070418  lw          $a3, 0x418($s0)
    ctx->pc = 0x1455f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x1455f4: 0xc0477ba  jal         func_11DEE8
    ctx->pc = 0x1455F4u;
    SET_GPR_U32(ctx, 31, 0x1455FCu);
    ctx->pc = 0x1455F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455F4u;
    // 0x1455f8: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE8u, 0x1455F4u, 0x1455FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455FCu;
label_1455fc:
    // 0x1455fc: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x1455fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
    // 0x145600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145608: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x145608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14560c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14560cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x145610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145614: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x145614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x145618: 0x3e00008  jr          $ra
    ctx->pc = 0x145618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145618u;
        // 0x14561c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145620u;
}

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

// Function: Ap2DPanelStdWindowPanelSetup__FP17WTxPanelFramePagei
// Address: 0x10a4b8 - 0x10a568
void Ap2DPanelStdWindowPanelSetup__FP17WTxPanelFramePagei_0x10a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ap2DPanelStdWindowPanelSetup__FP17WTxPanelFramePagei_0x10a4b8");
#endif

    switch (ctx->pc) {
        case 0x10a4e4u: goto label_10a4e4;
        case 0x10a4ecu: goto label_10a4ec;
        default: break;
    }

    ctx->pc = 0x10a4b8u;

    // 0x10a4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a4bc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x10a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10a4c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a4c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a4cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10a4ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10a4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a4d8: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x10a4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a4dc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10A4DCu;
    SET_GPR_U32(ctx, 31, 0x10A4E4u);
    ctx->pc = 0x10A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4DCu;
    // 0x10a4e0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10A4DCu, 0x10A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4E4u;
label_10a4e4:
    // 0x10a4e4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10A4E4u;
    SET_GPR_U32(ctx, 31, 0x10A4ECu);
    ctx->pc = 0x10A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4E4u;
    // 0x10a4e8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10A4E4u, 0x10A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4ECu;
label_10a4ec:
    // 0x10a4ec: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x10a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10a4f0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x10a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a4f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x10a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x10a4f8: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x10a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x10a4fc: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x10a4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x10a500: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x10a500u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10a504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a508: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x10a508u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x10a50c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a50cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a510: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x10a510u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10a514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10a514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a518: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x10a518u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x10a51c: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x10a51cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10a520: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x10a520u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x10a524: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x10a524u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x10a528: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x10a528u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x10a52c: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x10a52cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x10a530: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x10a530u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x10a534: 0xdca40028  ld          $a0, 0x28($a1)
    ctx->pc = 0x10a534u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x10a538: 0xfe240028  sd          $a0, 0x28($s1)
    ctx->pc = 0x10a538u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 4));
    // 0x10a53c: 0xdca30030  ld          $v1, 0x30($a1)
    ctx->pc = 0x10a53cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x10a540: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x10a540u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x10a544: 0xdca40038  ld          $a0, 0x38($a1)
    ctx->pc = 0x10a544u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x10a548: 0xae26004c  sw          $a2, 0x4C($s1)
    ctx->pc = 0x10a548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 6));
    // 0x10a54c: 0xfe240038  sd          $a0, 0x38($s1)
    ctx->pc = 0x10a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 4));
    // 0x10a550: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x10a550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x10a554: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x10a554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x10a558: 0xae260048  sw          $a2, 0x48($s1)
    ctx->pc = 0x10a558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 6));
    // 0x10a55c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a560: 0x3e00008  jr          $ra
    ctx->pc = 0x10A560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A560u;
        // 0x10a564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A568u;
}

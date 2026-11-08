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

// Function: DDecode__FPUcT0
// Address: 0x1a0558 - 0x1a05dc
void DDecode__FPUcT0_0x1a0558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DDecode__FPUcT0_0x1a0558");
#endif

    switch (ctx->pc) {
        case 0x1a0558u: goto label_1a0558;
        case 0x1a055cu: goto label_1a055c;
        case 0x1a0560u: goto label_1a0560;
        case 0x1a0564u: goto label_1a0564;
        case 0x1a0568u: goto label_1a0568;
        case 0x1a056cu: goto label_1a056c;
        case 0x1a0570u: goto label_1a0570;
        case 0x1a0574u: goto label_1a0574;
        case 0x1a0578u: goto label_1a0578;
        case 0x1a057cu: goto label_1a057c;
        case 0x1a0580u: goto label_1a0580;
        case 0x1a0584u: goto label_1a0584;
        case 0x1a0588u: goto label_1a0588;
        case 0x1a058cu: goto label_1a058c;
        case 0x1a0590u: goto label_1a0590;
        case 0x1a0594u: goto label_1a0594;
        case 0x1a0598u: goto label_1a0598;
        case 0x1a059cu: goto label_1a059c;
        case 0x1a05a0u: goto label_1a05a0;
        case 0x1a05a4u: goto label_1a05a4;
        case 0x1a05a8u: goto label_1a05a8;
        case 0x1a05acu: goto label_1a05ac;
        case 0x1a05b0u: goto label_1a05b0;
        case 0x1a05b4u: goto label_1a05b4;
        case 0x1a05b8u: goto label_1a05b8;
        case 0x1a05bcu: goto label_1a05bc;
        case 0x1a05c0u: goto label_1a05c0;
        case 0x1a05c4u: goto label_1a05c4;
        case 0x1a05c8u: goto label_1a05c8;
        case 0x1a05ccu: goto label_1a05cc;
        case 0x1a05d0u: goto label_1a05d0;
        case 0x1a05d4u: goto label_1a05d4;
        case 0x1a05d8u: goto label_1a05d8;
        default: break;
    }

    ctx->pc = 0x1a0558u;

label_1a0558:
    // 0x1a0558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a055c:
    // 0x1a055c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a055cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0560:
    // 0x1a0560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a0564:
    // 0x1a0564: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1a0564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1a0568:
    // 0x1a0568: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a056c:
    // 0x1a056c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x1a056cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_1a0570:
    // 0x1a0570: 0x3047001f  andi        $a3, $v0, 0x1F
    ctx->pc = 0x1a0570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_1a0574:
    // 0x1a0574: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a0574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1a0578:
    // 0x1a0578: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1a0578u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_1a057c:
    // 0x1a057c: 0xaf87916c  sw          $a3, -0x6E94($gp)
    ctx->pc = 0x1a057cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938988), GPR_U32(ctx, 7));
label_1a0580:
    // 0x1a0580: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1a0580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1a0584:
    // 0x1a0584: 0xaf829164  sw          $v0, -0x6E9C($gp)
    ctx->pc = 0x1a0584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938980), GPR_U32(ctx, 2));
label_1a0588:
    // 0x1a0588: 0xaf839168  sw          $v1, -0x6E98($gp)
    ctx->pc = 0x1a0588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 3));
label_1a058c:
    // 0x1a058c: 0x3c080024  lui         $t0, 0x24
    ctx->pc = 0x1a058cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36 << 16));
label_1a0590:
    // 0x1a0590: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1a0594:
    // 0x1a0594: 0x8d08f660  lw          $t0, -0x9A0($t0)
    ctx->pc = 0x1a0594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294964832)));
label_1a0598:
    // 0x1a0598: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1a0598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1a059c:
    // 0x1a059c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a059cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a05a0:
    // 0x1a05a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1a05a4:
    // 0x1a05a4: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
label_1a05a8:
    // 0x1a05a8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a05a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1a05ac:
    // 0x1a05ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a05acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a05b0:
    // 0x1a05b0: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1a05b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a05b4:
    // 0x1a05b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a05b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a05b8:
    // 0x1a05b8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1a05bc:
    // 0x1a05bc: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
label_1a05c0:
    // 0x1a05c0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a05c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1a05c4:
    // 0x1a05c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a05c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a05c8:
    // 0x1a05c8: 0x100f809  jalr        $t0
label_1a05cc:
    if (ctx->pc == 0x1A05CCu) {
        ctx->pc = 0x1A05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05C8u;
        // 0x1a05cc: 0xaf829170  sw          $v0, -0x6E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05D0u;
        goto label_1a05d0;
    }
    ctx->pc = 0x1A05C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1A05D0u);
        ctx->pc = 0x1A05CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05C8u;
        // 0x1a05cc: 0xaf829170  sw          $v0, -0x6E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05C8u, 0x1A05D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A05D0u;
label_1a05d0:
    // 0x1a05d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a05d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a05d4:
    // 0x1a05d4: 0x3e00008  jr          $ra
label_1a05d8:
    if (ctx->pc == 0x1A05D8u) {
        ctx->pc = 0x1A05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05D4u;
        // 0x1a05d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05DCu;
        goto label_fallthrough_0x1a05d4;
    }
    ctx->pc = 0x1A05D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05D4u;
        // 0x1a05d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a05d4:
    ctx->pc = 0x1A05DCu;
}

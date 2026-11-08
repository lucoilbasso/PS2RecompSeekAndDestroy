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

// Function: ApGameDrSeqSetUpThreadProc__FP8BcThread
// Address: 0x11b5d0 - 0x11b654
void ApGameDrSeqSetUpThreadProc__FP8BcThread_0x11b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApGameDrSeqSetUpThreadProc__FP8BcThread_0x11b5d0");
#endif

    switch (ctx->pc) {
        case 0x11b5d0u: goto label_11b5d0;
        case 0x11b5d4u: goto label_11b5d4;
        case 0x11b5d8u: goto label_11b5d8;
        case 0x11b5dcu: goto label_11b5dc;
        case 0x11b5e0u: goto label_11b5e0;
        case 0x11b5e4u: goto label_11b5e4;
        case 0x11b5e8u: goto label_11b5e8;
        case 0x11b5ecu: goto label_11b5ec;
        case 0x11b5f0u: goto label_11b5f0;
        case 0x11b5f4u: goto label_11b5f4;
        case 0x11b5f8u: goto label_11b5f8;
        case 0x11b5fcu: goto label_11b5fc;
        case 0x11b600u: goto label_11b600;
        case 0x11b604u: goto label_11b604;
        case 0x11b608u: goto label_11b608;
        case 0x11b60cu: goto label_11b60c;
        case 0x11b610u: goto label_11b610;
        case 0x11b614u: goto label_11b614;
        case 0x11b618u: goto label_11b618;
        case 0x11b61cu: goto label_11b61c;
        case 0x11b620u: goto label_11b620;
        case 0x11b624u: goto label_11b624;
        case 0x11b628u: goto label_11b628;
        case 0x11b62cu: goto label_11b62c;
        case 0x11b630u: goto label_11b630;
        case 0x11b634u: goto label_11b634;
        case 0x11b638u: goto label_11b638;
        case 0x11b63cu: goto label_11b63c;
        case 0x11b640u: goto label_11b640;
        case 0x11b644u: goto label_11b644;
        case 0x11b648u: goto label_11b648;
        case 0x11b64cu: goto label_11b64c;
        case 0x11b650u: goto label_11b650;
        default: break;
    }

    ctx->pc = 0x11b5d0u;

label_11b5d0:
    // 0x11b5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11b5d4:
    // 0x11b5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b5d8:
    // 0x11b5d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_11b5dc:
    // 0x11b5dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11b5e0:
    // 0x11b5e0: 0x48800  sll         $s1, $a0, 0
    ctx->pc = 0x11b5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_11b5e4:
    // 0x11b5e4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x11b5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11b5e8:
    // 0x11b5e8: 0xc06bd28  jal         func_1AF4A0
label_11b5ec:
    if (ctx->pc == 0x11B5ECu) {
        ctx->pc = 0x11B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5E8u;
        // 0x11b5ec: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B5F0u;
        goto label_11b5f0;
    }
    ctx->pc = 0x11B5E8u;
    SET_GPR_U32(ctx, 31, 0x11B5F0u);
    ctx->pc = 0x11B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5E8u;
    // 0x11b5ec: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11B5E8u, 0x11B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5F0u;
label_11b5f0:
    // 0x11b5f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11b5f4:
    // 0x11b5f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11b5f8:
    // 0x11b5f8: 0xae0340a8  sw          $v1, 0x40A8($s0)
    ctx->pc = 0x11b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16552), GPR_U32(ctx, 3));
label_11b5fc:
    // 0x11b5fc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x11b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_11b600:
    // 0x11b600: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b604:
    // 0x11b604: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b608:
    // 0x11b608: 0x60f809  jalr        $v1
label_11b60c:
    if (ctx->pc == 0x11B60Cu) {
        ctx->pc = 0x11B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B608u;
        // 0x11b60c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B610u;
        goto label_11b610;
    }
    ctx->pc = 0x11B608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B610u);
        ctx->pc = 0x11B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B608u;
        // 0x11b60c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B608u, 0x11B610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B610u;
label_11b610:
    // 0x11b610: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x11b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_11b614:
    // 0x11b614: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x11b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_11b618:
    // 0x11b618: 0x2407ff00  addiu       $a3, $zero, -0x100
    ctx->pc = 0x11b618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_11b61c:
    // 0x11b61c: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x11b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_11b620:
    // 0x11b620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b624:
    // 0x11b624: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11b624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_11b628:
    // 0x11b628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b62c:
    // 0x11b62c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x11b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_11b630:
    // 0x11b630: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11b634:
    // 0x11b634: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x11b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_11b638:
    // 0x11b638: 0xc06866c  jal         func_1A19B0
label_11b63c:
    if (ctx->pc == 0x11B63Cu) {
        ctx->pc = 0x11B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B638u;
        // 0x11b63c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B640u;
        goto label_11b640;
    }
    ctx->pc = 0x11B638u;
    SET_GPR_U32(ctx, 31, 0x11B640u);
    ctx->pc = 0x11B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B638u;
    // 0x11b63c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x11B638u, 0x11B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B640u;
label_11b640:
    // 0x11b640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b644:
    // 0x11b644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11b648:
    // 0x11b648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b64c:
    // 0x11b64c: 0x3e00008  jr          $ra
label_11b650:
    if (ctx->pc == 0x11B650u) {
        ctx->pc = 0x11B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B64Cu;
        // 0x11b650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B654u;
        goto label_fallthrough_0x11b64c;
    }
    ctx->pc = 0x11B64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B64Cu;
        // 0x11b650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11b64c:
    ctx->pc = 0x11B654u;
}

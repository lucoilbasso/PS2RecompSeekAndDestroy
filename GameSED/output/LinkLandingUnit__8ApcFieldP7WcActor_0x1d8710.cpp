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

// Function: LinkLandingUnit__8ApcFieldP7WcActor
// Address: 0x1d8710 - 0x1d878c
void LinkLandingUnit__8ApcFieldP7WcActor_0x1d8710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinkLandingUnit__8ApcFieldP7WcActor_0x1d8710");
#endif

    switch (ctx->pc) {
        case 0x1d8710u: goto label_1d8710;
        case 0x1d8714u: goto label_1d8714;
        case 0x1d8718u: goto label_1d8718;
        case 0x1d871cu: goto label_1d871c;
        case 0x1d8720u: goto label_1d8720;
        case 0x1d8724u: goto label_1d8724;
        case 0x1d8728u: goto label_1d8728;
        case 0x1d872cu: goto label_1d872c;
        case 0x1d8730u: goto label_1d8730;
        case 0x1d8734u: goto label_1d8734;
        case 0x1d8738u: goto label_1d8738;
        case 0x1d873cu: goto label_1d873c;
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8744u: goto label_1d8744;
        case 0x1d8748u: goto label_1d8748;
        case 0x1d874cu: goto label_1d874c;
        case 0x1d8750u: goto label_1d8750;
        case 0x1d8754u: goto label_1d8754;
        case 0x1d8758u: goto label_1d8758;
        case 0x1d875cu: goto label_1d875c;
        case 0x1d8760u: goto label_1d8760;
        case 0x1d8764u: goto label_1d8764;
        case 0x1d8768u: goto label_1d8768;
        case 0x1d876cu: goto label_1d876c;
        case 0x1d8770u: goto label_1d8770;
        case 0x1d8774u: goto label_1d8774;
        case 0x1d8778u: goto label_1d8778;
        case 0x1d877cu: goto label_1d877c;
        case 0x1d8780u: goto label_1d8780;
        case 0x1d8784u: goto label_1d8784;
        case 0x1d8788u: goto label_1d8788;
        default: break;
    }

    ctx->pc = 0x1d8710u;

label_1d8710:
    // 0x1d8710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d8714:
    // 0x1d8714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d8718:
    // 0x1d8718: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d8718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d871c:
    // 0x1d871c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d8720:
    // 0x1d8720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8724:
    // 0x1d8724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d8724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d8728:
    // 0x1d8728: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x1d8728u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
label_1d872c:
    // 0x1d872c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d872cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1d8730:
    // 0x1d8730: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8734:
    // 0x1d8734: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1d8734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_1d8738:
    // 0x1d8738: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d873c:
    if (ctx->pc == 0x1D873Cu) {
        ctx->pc = 0x1D873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8738u;
        // 0x1d873c: 0x262401fc  addiu       $a0, $s1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 508));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8740u;
        goto label_1d8740;
    }
    ctx->pc = 0x1D8738u;
    {
        const bool branch_taken_0x1d8738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8738u;
        // 0x1d873c: 0x262401fc  addiu       $a0, $s1, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 508));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8738) {
            ctx->pc = 0x1D8754u;
            goto label_1d8754;
        }
    }
    ctx->pc = 0x1D8740u;
label_1d8740:
    // 0x1d8740: 0xc0683b6  jal         func_1A0ED8
label_1d8744:
    if (ctx->pc == 0x1D8744u) {
        ctx->pc = 0x1D8748u;
        goto label_1d8748;
    }
    ctx->pc = 0x1D8740u;
    SET_GPR_U32(ctx, 31, 0x1D8748u);
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1D8740u, 0x1D8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8748u;
label_1d8748:
    // 0x1d8748: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d8748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d874c:
    // 0x1d874c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x1d874cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_1d8750:
    // 0x1d8750: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d8750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1d8754:
    // 0x1d8754: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d8754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d8758:
    // 0x1d8758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d875c:
    // 0x1d875c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8760:
    // 0x1d8760: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1d8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d8764:
    // 0x1d8764: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8768:
    // 0x1d8768: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d876c:
    // 0x1d876c: 0x60f809  jalr        $v1
label_1d8770:
    if (ctx->pc == 0x1D8770u) {
        ctx->pc = 0x1D8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D876Cu;
        // 0x1d8770: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8774u;
        goto label_1d8774;
    }
    ctx->pc = 0x1D876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8774u);
        ctx->pc = 0x1D8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D876Cu;
        // 0x1d8770: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D876Cu, 0x1D8774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8774u;
label_1d8774:
    // 0x1d8774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8778:
    // 0x1d8778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d877c:
    // 0x1d877c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d877cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8780:
    // 0x1d8780: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d8784:
    // 0x1d8784: 0x3e00008  jr          $ra
label_1d8788:
    if (ctx->pc == 0x1D8788u) {
        ctx->pc = 0x1D8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8784u;
        // 0x1d8788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D878Cu;
        goto label_fallthrough_0x1d8784;
    }
    ctx->pc = 0x1D8784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8784u;
        // 0x1d8788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d8784:
    ctx->pc = 0x1D878Cu;
}

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

// Function: ActorInterpEntry__9ApcSCDEntiiP7WcActorP16BsSCDEntLocalVar
// Address: 0x1048a0 - 0x1049b8
void ActorInterpEntry__9ApcSCDEntiiP7WcActorP16BsSCDEntLocalVar_0x1048a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActorInterpEntry__9ApcSCDEntiiP7WcActorP16BsSCDEntLocalVar_0x1048a0");
#endif

    switch (ctx->pc) {
        case 0x104904u: goto label_104904;
        case 0x10491cu: goto label_10491c;
        case 0x10494cu: goto label_10494c;
        default: break;
    }

    ctx->pc = 0x1048a0u;

    // 0x1048a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1048a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1048a4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1048a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1048a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1048a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1048ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1048acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1048b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1048b4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1048b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1048b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1048bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1048bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1048c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1048c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1048c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1048c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1048cc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1048ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1048d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1048d4: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x1048d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x1048d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1048d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1048dc: 0x24651400  addiu       $a1, $v1, 0x1400
    ctx->pc = 0x1048dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x1048e0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1048e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1048e4: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x1048e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1048e8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1048e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1048ec: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1048ECu;
    {
        const bool branch_taken_0x1048ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1048F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048ECu;
        // 0x1048f0: 0xac621400  sw          $v0, 0x1400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048ec) {
            ctx->pc = 0x104910u;
            goto label_104910;
        }
    }
    ctx->pc = 0x1048F4u;
    // 0x1048f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1048f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1048f8: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x1048f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1048fc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1048FCu;
    SET_GPR_U32(ctx, 31, 0x104904u);
    ctx->pc = 0x104900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048FCu;
    // 0x104900: 0x24a53828  addiu       $a1, $a1, 0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1048FCu, 0x104904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104904u;
label_104904:
    // 0x104904: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x104904u;
    {
        const bool branch_taken_0x104904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104904u;
        // 0x104908: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104904) {
            ctx->pc = 0x104920u;
            goto label_104920;
        }
    }
    ctx->pc = 0x10490Cu;
    // 0x10490c: 0x0  nop
    ctx->pc = 0x10490cu;
    // NOP
label_104910:
    // 0x104910: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x104910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104914: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x104914u;
    SET_GPR_U32(ctx, 31, 0x10491Cu);
    ctx->pc = 0x104918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104914u;
    // 0x104918: 0x2485ffb0  addiu       $a1, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x104914u, 0x10491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10491Cu;
label_10491c:
    // 0x10491c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_104920:
    // 0x104920: 0xae130034  sw          $s3, 0x34($s0)
    ctx->pc = 0x104920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 19));
    // 0x104924: 0x2451a430  addiu       $s1, $v0, -0x5BD0
    ctx->pc = 0x104924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x104928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x104928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10492c: 0x8e221400  lw          $v0, 0x1400($s1)
    ctx->pc = 0x10492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5120)));
    // 0x104930: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x104930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104938: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x104938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10493c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x10493cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x104940: 0xac530040  sw          $s3, 0x40($v0)
    ctx->pc = 0x104940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 19));
    // 0x104944: 0xc060e56  jal         func_183958
    ctx->pc = 0x104944u;
    SET_GPR_U32(ctx, 31, 0x10494Cu);
    ctx->pc = 0x104948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104944u;
    // 0x104948: 0xac540048  sw          $s4, 0x48($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x104944u, 0x10494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10494Cu;
label_10494c:
    // 0x10494c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10494cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104950: 0x8e221400  lw          $v0, 0x1400($s1)
    ctx->pc = 0x104950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5120)));
    // 0x104954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104958: 0x24a53840  addiu       $a1, $a1, 0x3840
    ctx->pc = 0x104958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14400));
    // 0x10495c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x10495cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x104960: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x104960u;
    {
        const bool branch_taken_0x104960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x104964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104960u;
        // 0x104964: 0x2443ffb0  addiu       $v1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104960) {
            ctx->pc = 0x104990u;
            goto label_104990;
        }
    }
    ctx->pc = 0x104968u;
    // 0x104968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10496c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10496cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104974: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104978: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x104978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10497c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10497cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x104980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104984: 0x8068186  j           func_1A0618
    ctx->pc = 0x104984u;
    ctx->pc = 0x104988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104984u;
    // 0x104988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x10498Cu;
    // 0x10498c: 0x0  nop
    ctx->pc = 0x10498cu;
    // NOP
label_104990:
    // 0x104990: 0xae231400  sw          $v1, 0x1400($s1)
    ctx->pc = 0x104990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5120), GPR_U32(ctx, 3));
    // 0x104994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10499c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10499cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1049a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1049a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1049a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1049a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1049a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1049a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1049ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1049acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1049b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1049B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1049B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049B0u;
        // 0x1049b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1049B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1049B8u;
}

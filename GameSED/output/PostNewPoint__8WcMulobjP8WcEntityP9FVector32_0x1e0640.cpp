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

// Function: PostNewPoint__8WcMulobjP8WcEntityP9FVector32
// Address: 0x1e0640 - 0x1e0828
void PostNewPoint__8WcMulobjP8WcEntityP9FVector32_0x1e0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PostNewPoint__8WcMulobjP8WcEntityP9FVector32_0x1e0640");
#endif

    switch (ctx->pc) {
        case 0x1e0640u: goto label_1e0640;
        case 0x1e0644u: goto label_1e0644;
        case 0x1e0648u: goto label_1e0648;
        case 0x1e064cu: goto label_1e064c;
        case 0x1e0650u: goto label_1e0650;
        case 0x1e0654u: goto label_1e0654;
        case 0x1e0658u: goto label_1e0658;
        case 0x1e065cu: goto label_1e065c;
        case 0x1e0660u: goto label_1e0660;
        case 0x1e0664u: goto label_1e0664;
        case 0x1e0668u: goto label_1e0668;
        case 0x1e066cu: goto label_1e066c;
        case 0x1e0670u: goto label_1e0670;
        case 0x1e0674u: goto label_1e0674;
        case 0x1e0678u: goto label_1e0678;
        case 0x1e067cu: goto label_1e067c;
        case 0x1e0680u: goto label_1e0680;
        case 0x1e0684u: goto label_1e0684;
        case 0x1e0688u: goto label_1e0688;
        case 0x1e068cu: goto label_1e068c;
        case 0x1e0690u: goto label_1e0690;
        case 0x1e0694u: goto label_1e0694;
        case 0x1e0698u: goto label_1e0698;
        case 0x1e069cu: goto label_1e069c;
        case 0x1e06a0u: goto label_1e06a0;
        case 0x1e06a4u: goto label_1e06a4;
        case 0x1e06a8u: goto label_1e06a8;
        case 0x1e06acu: goto label_1e06ac;
        case 0x1e06b0u: goto label_1e06b0;
        case 0x1e06b4u: goto label_1e06b4;
        case 0x1e06b8u: goto label_1e06b8;
        case 0x1e06bcu: goto label_1e06bc;
        case 0x1e06c0u: goto label_1e06c0;
        case 0x1e06c4u: goto label_1e06c4;
        case 0x1e06c8u: goto label_1e06c8;
        case 0x1e06ccu: goto label_1e06cc;
        case 0x1e06d0u: goto label_1e06d0;
        case 0x1e06d4u: goto label_1e06d4;
        case 0x1e06d8u: goto label_1e06d8;
        case 0x1e06dcu: goto label_1e06dc;
        case 0x1e06e0u: goto label_1e06e0;
        case 0x1e06e4u: goto label_1e06e4;
        case 0x1e06e8u: goto label_1e06e8;
        case 0x1e06ecu: goto label_1e06ec;
        case 0x1e06f0u: goto label_1e06f0;
        case 0x1e06f4u: goto label_1e06f4;
        case 0x1e06f8u: goto label_1e06f8;
        case 0x1e06fcu: goto label_1e06fc;
        case 0x1e0700u: goto label_1e0700;
        case 0x1e0704u: goto label_1e0704;
        case 0x1e0708u: goto label_1e0708;
        case 0x1e070cu: goto label_1e070c;
        case 0x1e0710u: goto label_1e0710;
        case 0x1e0714u: goto label_1e0714;
        case 0x1e0718u: goto label_1e0718;
        case 0x1e071cu: goto label_1e071c;
        case 0x1e0720u: goto label_1e0720;
        case 0x1e0724u: goto label_1e0724;
        case 0x1e0728u: goto label_1e0728;
        case 0x1e072cu: goto label_1e072c;
        case 0x1e0730u: goto label_1e0730;
        case 0x1e0734u: goto label_1e0734;
        case 0x1e0738u: goto label_1e0738;
        case 0x1e073cu: goto label_1e073c;
        case 0x1e0740u: goto label_1e0740;
        case 0x1e0744u: goto label_1e0744;
        case 0x1e0748u: goto label_1e0748;
        case 0x1e074cu: goto label_1e074c;
        case 0x1e0750u: goto label_1e0750;
        case 0x1e0754u: goto label_1e0754;
        case 0x1e0758u: goto label_1e0758;
        case 0x1e075cu: goto label_1e075c;
        case 0x1e0760u: goto label_1e0760;
        case 0x1e0764u: goto label_1e0764;
        case 0x1e0768u: goto label_1e0768;
        case 0x1e076cu: goto label_1e076c;
        case 0x1e0770u: goto label_1e0770;
        case 0x1e0774u: goto label_1e0774;
        case 0x1e0778u: goto label_1e0778;
        case 0x1e077cu: goto label_1e077c;
        case 0x1e0780u: goto label_1e0780;
        case 0x1e0784u: goto label_1e0784;
        case 0x1e0788u: goto label_1e0788;
        case 0x1e078cu: goto label_1e078c;
        case 0x1e0790u: goto label_1e0790;
        case 0x1e0794u: goto label_1e0794;
        case 0x1e0798u: goto label_1e0798;
        case 0x1e079cu: goto label_1e079c;
        case 0x1e07a0u: goto label_1e07a0;
        case 0x1e07a4u: goto label_1e07a4;
        case 0x1e07a8u: goto label_1e07a8;
        case 0x1e07acu: goto label_1e07ac;
        case 0x1e07b0u: goto label_1e07b0;
        case 0x1e07b4u: goto label_1e07b4;
        case 0x1e07b8u: goto label_1e07b8;
        case 0x1e07bcu: goto label_1e07bc;
        case 0x1e07c0u: goto label_1e07c0;
        case 0x1e07c4u: goto label_1e07c4;
        case 0x1e07c8u: goto label_1e07c8;
        case 0x1e07ccu: goto label_1e07cc;
        case 0x1e07d0u: goto label_1e07d0;
        case 0x1e07d4u: goto label_1e07d4;
        case 0x1e07d8u: goto label_1e07d8;
        case 0x1e07dcu: goto label_1e07dc;
        case 0x1e07e0u: goto label_1e07e0;
        case 0x1e07e4u: goto label_1e07e4;
        case 0x1e07e8u: goto label_1e07e8;
        case 0x1e07ecu: goto label_1e07ec;
        case 0x1e07f0u: goto label_1e07f0;
        case 0x1e07f4u: goto label_1e07f4;
        case 0x1e07f8u: goto label_1e07f8;
        case 0x1e07fcu: goto label_1e07fc;
        case 0x1e0800u: goto label_1e0800;
        case 0x1e0804u: goto label_1e0804;
        case 0x1e0808u: goto label_1e0808;
        case 0x1e080cu: goto label_1e080c;
        case 0x1e0810u: goto label_1e0810;
        case 0x1e0814u: goto label_1e0814;
        case 0x1e0818u: goto label_1e0818;
        case 0x1e081cu: goto label_1e081c;
        case 0x1e0820u: goto label_1e0820;
        case 0x1e0824u: goto label_1e0824;
        default: break;
    }

    ctx->pc = 0x1e0640u;

label_1e0640:
    // 0x1e0640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e0644:
    // 0x1e0644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e0648:
    // 0x1e0648: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e064c:
    // 0x1e064c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e064cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0650:
    // 0x1e0650: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e0650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1e0654:
    // 0x1e0654: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e0654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e0658:
    // 0x1e0658: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e0658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1e065c:
    // 0x1e065c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e065cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e0660:
    // 0x1e0660: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1e0664:
    // 0x1e0664: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1e0664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e0668:
    // 0x1e0668: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1e0668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1e066c:
    // 0x1e066c: 0x265001b4  addiu       $s0, $s2, 0x1B4
    ctx->pc = 0x1e066cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
label_1e0670:
    // 0x1e0670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e0674:
    // 0x1e0674: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1e0678:
    // 0x1e0678: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x1e0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
label_1e067c:
    // 0x1e067c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1e067cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e0680:
    // 0x1e0680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e0684:
    // 0x1e0684: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x1e0684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
label_1e0688:
    // 0x1e0688: 0x16200028  bnez        $s1, . + 4 + (0x28 << 2)
label_1e068c:
    if (ctx->pc == 0x1E068Cu) {
        ctx->pc = 0x1E068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0688u;
        // 0x1e068c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0690u;
        goto label_1e0690;
    }
    ctx->pc = 0x1E0688u;
    {
        const bool branch_taken_0x1e0688 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0688u;
        // 0x1e068c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0688) {
            ctx->pc = 0x1E072Cu;
            goto label_1e072c;
        }
    }
    ctx->pc = 0x1E0690u;
label_1e0690:
    // 0x1e0690: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1e0690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e0694:
    // 0x1e0694: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_1e0698:
    if (ctx->pc == 0x1E0698u) {
        ctx->pc = 0x1E0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0694u;
        // 0x1e0698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E069Cu;
        goto label_1e069c;
    }
    ctx->pc = 0x1E0694u;
    {
        const bool branch_taken_0x1e0694 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0694u;
        // 0x1e0698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0694) {
            ctx->pc = 0x1E06A0u;
            goto label_1e06a0;
        }
    }
    ctx->pc = 0x1E069Cu;
label_1e069c:
    // 0x1e069c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e06a0:
    // 0x1e06a0: 0xc068086  jal         func_1A0218
label_1e06a4:
    if (ctx->pc == 0x1E06A4u) {
        ctx->pc = 0x1E06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06A0u;
        // 0x1e06a4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E06A8u;
        goto label_1e06a8;
    }
    ctx->pc = 0x1E06A0u;
    SET_GPR_U32(ctx, 31, 0x1E06A8u);
    ctx->pc = 0x1E06A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06A0u;
    // 0x1e06a4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1E06A0u, 0x1E06A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06A8u;
label_1e06a8:
    // 0x1e06a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e06a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e06ac:
    // 0x1e06ac: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
label_1e06b0:
    if (ctx->pc == 0x1E06B0u) {
        ctx->pc = 0x1E06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06ACu;
        // 0x1e06b0: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E06B4u;
        goto label_1e06b4;
    }
    ctx->pc = 0x1E06ACu;
    {
        const bool branch_taken_0x1e06ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e06ac) {
            ctx->pc = 0x1E06B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E06ACu;
            // 0x1e06b0: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E06D0u;
            goto label_1e06d0;
        }
    }
    ctx->pc = 0x1E06B4u;
label_1e06b4:
    // 0x1e06b4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e06b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1e06b8:
    // 0x1e06b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e06b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e06bc:
    // 0x1e06bc: 0x24a583b8  addiu       $a1, $a1, -0x7C48
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935480));
label_1e06c0:
    // 0x1e06c0: 0xc068186  jal         func_1A0618
label_1e06c4:
    if (ctx->pc == 0x1E06C4u) {
        ctx->pc = 0x1E06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06C0u;
        // 0x1e06c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E06C8u;
        goto label_1e06c8;
    }
    ctx->pc = 0x1E06C0u;
    SET_GPR_U32(ctx, 31, 0x1E06C8u);
    ctx->pc = 0x1E06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06C0u;
    // 0x1e06c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E06C0u, 0x1E06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06C8u;
label_1e06c8:
    // 0x1e06c8: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e06cc:
    if (ctx->pc == 0x1E06CCu) {
        ctx->pc = 0x1E06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06C8u;
        // 0x1e06cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E06D0u;
        goto label_1e06d0;
    }
    ctx->pc = 0x1E06C8u;
    {
        const bool branch_taken_0x1e06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06C8u;
        // 0x1e06cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06c8) {
            ctx->pc = 0x1E0728u;
            goto label_1e0728;
        }
    }
    ctx->pc = 0x1E06D0u;
label_1e06d0:
    // 0x1e06d0: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1e06d4:
    // 0x1e06d4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e06d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e06d8:
    // 0x1e06d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e06d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e06dc:
    // 0x1e06dc: 0x0  nop
    ctx->pc = 0x1e06dcu;
    // NOP
label_1e06e0:
    // 0x1e06e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1e06e4:
    // 0x1e06e4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1e06e8:
    if (ctx->pc == 0x1E06E8u) {
        ctx->pc = 0x1E06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06E4u;
        // 0x1e06e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E06ECu;
        goto label_1e06ec;
    }
    ctx->pc = 0x1E06E4u;
    {
        const bool branch_taken_0x1e06e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06E4u;
        // 0x1e06e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06e4) {
            ctx->pc = 0x1E06F8u;
            goto label_1e06f8;
        }
    }
    ctx->pc = 0x1E06ECu;
label_1e06ec:
    // 0x1e06ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e06f0:
    if (ctx->pc == 0x1E06F0u) {
        ctx->pc = 0x1E06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06ECu;
        // 0x1e06f0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E06F4u;
        goto label_1e06f4;
    }
    ctx->pc = 0x1E06ECu;
    {
        const bool branch_taken_0x1e06ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06ECu;
        // 0x1e06f0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06ec) {
            ctx->pc = 0x1E06FCu;
            goto label_1e06fc;
        }
    }
    ctx->pc = 0x1E06F4u;
label_1e06f4:
    // 0x1e06f4: 0x0  nop
    ctx->pc = 0x1e06f4u;
    // NOP
label_1e06f8:
    // 0x1e06f8: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x1e06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1e06fc:
    // 0x1e06fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e0700:
    // 0x1e0700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e0704:
    // 0x1e0704: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x1e0704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
label_1e0708:
    // 0x1e0708: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1e070c:
    if (ctx->pc == 0x1E070Cu) {
        ctx->pc = 0x1E070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0708u;
        // 0x1e070c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0710u;
        goto label_1e0710;
    }
    ctx->pc = 0x1E0708u;
    {
        const bool branch_taken_0x1e0708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0708u;
        // 0x1e070c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0708) {
            ctx->pc = 0x1E06E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e06e0;
        }
    }
    ctx->pc = 0x1E0710u;
label_1e0710:
    // 0x1e0710: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x1e0710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1e0714:
    // 0x1e0714: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e0714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e0718:
    // 0x1e0718: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e0718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1e071c:
    // 0x1e071c: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x1e071cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
label_1e0720:
    // 0x1e0720: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e0724:
    // 0x1e0724: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1e0724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_1e0728:
    // 0x1e0728: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e0728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e072c:
    // 0x1e072c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0730:
    // 0x1e0730: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e0730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e0734:
    // 0x1e0734: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0738:
    // 0x1e0738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e073c:
    // 0x1e073c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e073cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1e0740:
    // 0x1e0740: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0744:
    // 0x1e0744: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_1e0748:
    if (ctx->pc == 0x1E0748u) {
        ctx->pc = 0x1E0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0744u;
        // 0x1e0748: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E074Cu;
        goto label_1e074c;
    }
    ctx->pc = 0x1E0744u;
    {
        const bool branch_taken_0x1e0744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0744u;
        // 0x1e0748: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0744) {
            ctx->pc = 0x1E0798u;
            goto label_1e0798;
        }
    }
    ctx->pc = 0x1E074Cu;
label_1e074c:
    // 0x1e074c: 0xc05bedc  jal         func_16FB70
label_1e0750:
    if (ctx->pc == 0x1E0750u) {
        ctx->pc = 0x1E0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E074Cu;
        // 0x1e0750: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0754u;
        goto label_1e0754;
    }
    ctx->pc = 0x1E074Cu;
    SET_GPR_U32(ctx, 31, 0x1E0754u);
    ctx->pc = 0x1E0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E074Cu;
    // 0x1e0750: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1E074Cu, 0x1E0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0754u;
label_1e0754:
    // 0x1e0754: 0xc0682b2  jal         func_1A0AC8
label_1e0758:
    if (ctx->pc == 0x1E0758u) {
        ctx->pc = 0x1E0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0754u;
        // 0x1e0758: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E075Cu;
        goto label_1e075c;
    }
    ctx->pc = 0x1E0754u;
    SET_GPR_U32(ctx, 31, 0x1E075Cu);
    ctx->pc = 0x1E0758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0754u;
    // 0x1e0758: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1E0754u, 0x1E075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E075Cu;
label_1e075c:
    // 0x1e075c: 0xc0682b6  jal         func_1A0AD8
label_1e0760:
    if (ctx->pc == 0x1E0760u) {
        ctx->pc = 0x1E0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E075Cu;
        // 0x1e0760: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0764u;
        goto label_1e0764;
    }
    ctx->pc = 0x1E075Cu;
    SET_GPR_U32(ctx, 31, 0x1E0764u);
    ctx->pc = 0x1E0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E075Cu;
    // 0x1e0760: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1E075Cu, 0x1E0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0764u;
label_1e0764:
    // 0x1e0764: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e0764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e0768:
    // 0x1e0768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e076c:
    // 0x1e076c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e0770:
    // 0x1e0770: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x1e0770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
label_1e0774:
    // 0x1e0774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0778:
    // 0x1e0778: 0xc06586e  jal         func_1961B8
label_1e077c:
    if (ctx->pc == 0x1E077Cu) {
        ctx->pc = 0x1E077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0778u;
        // 0x1e077c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0780u;
        goto label_1e0780;
    }
    ctx->pc = 0x1E0778u;
    SET_GPR_U32(ctx, 31, 0x1E0780u);
    ctx->pc = 0x1E077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0778u;
    // 0x1e077c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x1E0778u, 0x1E0780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0780u;
label_1e0780:
    // 0x1e0780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0784:
    // 0x1e0784: 0xc06825c  jal         func_1A0970
label_1e0788:
    if (ctx->pc == 0x1E0788u) {
        ctx->pc = 0x1E0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0784u;
        // 0x1e0788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E078Cu;
        goto label_1e078c;
    }
    ctx->pc = 0x1E0784u;
    SET_GPR_U32(ctx, 31, 0x1E078Cu);
    ctx->pc = 0x1E0788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0784u;
    // 0x1e0788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1E0784u, 0x1E078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E078Cu;
label_1e078c:
    // 0x1e078c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1e078cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1e0790:
    // 0x1e0790: 0xc05bedc  jal         func_16FB70
label_1e0794:
    if (ctx->pc == 0x1E0794u) {
        ctx->pc = 0x1E0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0790u;
        // 0x1e0794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0798u;
        goto label_1e0798;
    }
    ctx->pc = 0x1E0790u;
    SET_GPR_U32(ctx, 31, 0x1E0798u);
    ctx->pc = 0x1E0794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0790u;
    // 0x1e0794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1E0790u, 0x1E0798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0798u;
label_1e0798:
    // 0x1e0798: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x1e0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
label_1e079c:
    // 0x1e079c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e079cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e07a0:
    // 0x1e07a0: 0xae360008  sw          $s6, 0x8($s1)
    ctx->pc = 0x1e07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 22));
label_1e07a4:
    // 0x1e07a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1e07a8:
    // 0x1e07a8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_1e07ac:
    if (ctx->pc == 0x1E07ACu) {
        ctx->pc = 0x1E07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07A8u;
        // 0x1e07ac: 0xae5101b0  sw          $s1, 0x1B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07B0u;
        goto label_1e07b0;
    }
    ctx->pc = 0x1E07A8u;
    {
        const bool branch_taken_0x1e07a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07A8u;
        // 0x1e07ac: 0xae5101b0  sw          $s1, 0x1B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07a8) {
            ctx->pc = 0x1E07F8u;
            goto label_1e07f8;
        }
    }
    ctx->pc = 0x1E07B0u;
label_1e07b0:
    // 0x1e07b0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1e07b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e07b4:
    // 0x1e07b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e07b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e07b8:
    // 0x1e07b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e07b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e07bc:
    // 0x1e07bc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1e07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1e07c0:
    // 0x1e07c0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1e07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1e07c4:
    // 0x1e07c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e07c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e07c8:
    // 0x1e07c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e07cc:
    // 0x1e07cc: 0x60f809  jalr        $v1
label_1e07d0:
    if (ctx->pc == 0x1E07D0u) {
        ctx->pc = 0x1E07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07CCu;
        // 0x1e07d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07D4u;
        goto label_1e07d4;
    }
    ctx->pc = 0x1E07CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E07D4u);
        ctx->pc = 0x1E07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07CCu;
        // 0x1e07d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E07CCu, 0x1E07D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E07D4u;
label_1e07d4:
    // 0x1e07d4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1e07d8:
    if (ctx->pc == 0x1E07D8u) {
        ctx->pc = 0x1E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D4u;
        // 0x1e07d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07DCu;
        goto label_1e07dc;
    }
    ctx->pc = 0x1E07D4u;
    {
        const bool branch_taken_0x1e07d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D4u;
        // 0x1e07d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07d4) {
            ctx->pc = 0x1E07F8u;
            goto label_1e07f8;
        }
    }
    ctx->pc = 0x1E07DCu;
label_1e07dc:
    // 0x1e07dc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e07e0:
    // 0x1e07e0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1e07e4:
    // 0x1e07e4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1e07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1e07e8:
    // 0x1e07e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e07e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e07ec:
    // 0x1e07ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e07f0:
    // 0x1e07f0: 0x60f809  jalr        $v1
label_1e07f4:
    if (ctx->pc == 0x1E07F4u) {
        ctx->pc = 0x1E07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07F0u;
        // 0x1e07f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07F8u;
        goto label_1e07f8;
    }
    ctx->pc = 0x1E07F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E07F8u);
        ctx->pc = 0x1E07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07F0u;
        // 0x1e07f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E07F0u, 0x1E07F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E07F8u;
label_1e07f8:
    // 0x1e07f8: 0xae5001c4  sw          $s0, 0x1C4($s2)
    ctx->pc = 0x1e07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 16));
label_1e07fc:
    // 0x1e07fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e07fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0800:
    // 0x1e0800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e0804:
    // 0x1e0804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0808:
    // 0x1e0808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e080c:
    // 0x1e080c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e080cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e0810:
    // 0x1e0810: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e0810u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0814:
    // 0x1e0814: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e0814u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1e0818:
    // 0x1e0818: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e0818u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e081c:
    // 0x1e081c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e081cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1e0820:
    // 0x1e0820: 0x3e00008  jr          $ra
label_1e0824:
    if (ctx->pc == 0x1E0824u) {
        ctx->pc = 0x1E0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0820u;
        // 0x1e0824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0828u;
        goto label_fallthrough_0x1e0820;
    }
    ctx->pc = 0x1E0820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0820u;
        // 0x1e0824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0820:
    ctx->pc = 0x1E0828u;
}

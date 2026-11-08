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

// Function: WWorldMakeStdLight__FP7WcWorldi
// Address: 0x188568 - 0x1887d0
void WWorldMakeStdLight__FP7WcWorldi_0x188568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WWorldMakeStdLight__FP7WcWorldi_0x188568");
#endif

    switch (ctx->pc) {
        case 0x188568u: goto label_188568;
        case 0x18856cu: goto label_18856c;
        case 0x188570u: goto label_188570;
        case 0x188574u: goto label_188574;
        case 0x188578u: goto label_188578;
        case 0x18857cu: goto label_18857c;
        case 0x188580u: goto label_188580;
        case 0x188584u: goto label_188584;
        case 0x188588u: goto label_188588;
        case 0x18858cu: goto label_18858c;
        case 0x188590u: goto label_188590;
        case 0x188594u: goto label_188594;
        case 0x188598u: goto label_188598;
        case 0x18859cu: goto label_18859c;
        case 0x1885a0u: goto label_1885a0;
        case 0x1885a4u: goto label_1885a4;
        case 0x1885a8u: goto label_1885a8;
        case 0x1885acu: goto label_1885ac;
        case 0x1885b0u: goto label_1885b0;
        case 0x1885b4u: goto label_1885b4;
        case 0x1885b8u: goto label_1885b8;
        case 0x1885bcu: goto label_1885bc;
        case 0x1885c0u: goto label_1885c0;
        case 0x1885c4u: goto label_1885c4;
        case 0x1885c8u: goto label_1885c8;
        case 0x1885ccu: goto label_1885cc;
        case 0x1885d0u: goto label_1885d0;
        case 0x1885d4u: goto label_1885d4;
        case 0x1885d8u: goto label_1885d8;
        case 0x1885dcu: goto label_1885dc;
        case 0x1885e0u: goto label_1885e0;
        case 0x1885e4u: goto label_1885e4;
        case 0x1885e8u: goto label_1885e8;
        case 0x1885ecu: goto label_1885ec;
        case 0x1885f0u: goto label_1885f0;
        case 0x1885f4u: goto label_1885f4;
        case 0x1885f8u: goto label_1885f8;
        case 0x1885fcu: goto label_1885fc;
        case 0x188600u: goto label_188600;
        case 0x188604u: goto label_188604;
        case 0x188608u: goto label_188608;
        case 0x18860cu: goto label_18860c;
        case 0x188610u: goto label_188610;
        case 0x188614u: goto label_188614;
        case 0x188618u: goto label_188618;
        case 0x18861cu: goto label_18861c;
        case 0x188620u: goto label_188620;
        case 0x188624u: goto label_188624;
        case 0x188628u: goto label_188628;
        case 0x18862cu: goto label_18862c;
        case 0x188630u: goto label_188630;
        case 0x188634u: goto label_188634;
        case 0x188638u: goto label_188638;
        case 0x18863cu: goto label_18863c;
        case 0x188640u: goto label_188640;
        case 0x188644u: goto label_188644;
        case 0x188648u: goto label_188648;
        case 0x18864cu: goto label_18864c;
        case 0x188650u: goto label_188650;
        case 0x188654u: goto label_188654;
        case 0x188658u: goto label_188658;
        case 0x18865cu: goto label_18865c;
        case 0x188660u: goto label_188660;
        case 0x188664u: goto label_188664;
        case 0x188668u: goto label_188668;
        case 0x18866cu: goto label_18866c;
        case 0x188670u: goto label_188670;
        case 0x188674u: goto label_188674;
        case 0x188678u: goto label_188678;
        case 0x18867cu: goto label_18867c;
        case 0x188680u: goto label_188680;
        case 0x188684u: goto label_188684;
        case 0x188688u: goto label_188688;
        case 0x18868cu: goto label_18868c;
        case 0x188690u: goto label_188690;
        case 0x188694u: goto label_188694;
        case 0x188698u: goto label_188698;
        case 0x18869cu: goto label_18869c;
        case 0x1886a0u: goto label_1886a0;
        case 0x1886a4u: goto label_1886a4;
        case 0x1886a8u: goto label_1886a8;
        case 0x1886acu: goto label_1886ac;
        case 0x1886b0u: goto label_1886b0;
        case 0x1886b4u: goto label_1886b4;
        case 0x1886b8u: goto label_1886b8;
        case 0x1886bcu: goto label_1886bc;
        case 0x1886c0u: goto label_1886c0;
        case 0x1886c4u: goto label_1886c4;
        case 0x1886c8u: goto label_1886c8;
        case 0x1886ccu: goto label_1886cc;
        case 0x1886d0u: goto label_1886d0;
        case 0x1886d4u: goto label_1886d4;
        case 0x1886d8u: goto label_1886d8;
        case 0x1886dcu: goto label_1886dc;
        case 0x1886e0u: goto label_1886e0;
        case 0x1886e4u: goto label_1886e4;
        case 0x1886e8u: goto label_1886e8;
        case 0x1886ecu: goto label_1886ec;
        case 0x1886f0u: goto label_1886f0;
        case 0x1886f4u: goto label_1886f4;
        case 0x1886f8u: goto label_1886f8;
        case 0x1886fcu: goto label_1886fc;
        case 0x188700u: goto label_188700;
        case 0x188704u: goto label_188704;
        case 0x188708u: goto label_188708;
        case 0x18870cu: goto label_18870c;
        case 0x188710u: goto label_188710;
        case 0x188714u: goto label_188714;
        case 0x188718u: goto label_188718;
        case 0x18871cu: goto label_18871c;
        case 0x188720u: goto label_188720;
        case 0x188724u: goto label_188724;
        case 0x188728u: goto label_188728;
        case 0x18872cu: goto label_18872c;
        case 0x188730u: goto label_188730;
        case 0x188734u: goto label_188734;
        case 0x188738u: goto label_188738;
        case 0x18873cu: goto label_18873c;
        case 0x188740u: goto label_188740;
        case 0x188744u: goto label_188744;
        case 0x188748u: goto label_188748;
        case 0x18874cu: goto label_18874c;
        case 0x188750u: goto label_188750;
        case 0x188754u: goto label_188754;
        case 0x188758u: goto label_188758;
        case 0x18875cu: goto label_18875c;
        case 0x188760u: goto label_188760;
        case 0x188764u: goto label_188764;
        case 0x188768u: goto label_188768;
        case 0x18876cu: goto label_18876c;
        case 0x188770u: goto label_188770;
        case 0x188774u: goto label_188774;
        case 0x188778u: goto label_188778;
        case 0x18877cu: goto label_18877c;
        case 0x188780u: goto label_188780;
        case 0x188784u: goto label_188784;
        case 0x188788u: goto label_188788;
        case 0x18878cu: goto label_18878c;
        case 0x188790u: goto label_188790;
        case 0x188794u: goto label_188794;
        case 0x188798u: goto label_188798;
        case 0x18879cu: goto label_18879c;
        case 0x1887a0u: goto label_1887a0;
        case 0x1887a4u: goto label_1887a4;
        case 0x1887a8u: goto label_1887a8;
        case 0x1887acu: goto label_1887ac;
        case 0x1887b0u: goto label_1887b0;
        case 0x1887b4u: goto label_1887b4;
        case 0x1887b8u: goto label_1887b8;
        case 0x1887bcu: goto label_1887bc;
        case 0x1887c0u: goto label_1887c0;
        case 0x1887c4u: goto label_1887c4;
        case 0x1887c8u: goto label_1887c8;
        case 0x1887ccu: goto label_1887cc;
        default: break;
    }

    ctx->pc = 0x188568u;

label_188568:
    // 0x188568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18856c:
    // 0x18856c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_188570:
    // 0x188570: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x188570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188574:
    // 0x188574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_188578:
    // 0x188578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x188578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18857c:
    // 0x18857c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_188580:
    // 0x188580: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x188580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_188584:
    // 0x188584: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x188584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_188588:
    // 0x188588: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x188588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_18858c:
    // 0x18858c: 0x10a00064  beqz        $a1, . + 4 + (0x64 << 2)
label_188590:
    if (ctx->pc == 0x188590u) {
        ctx->pc = 0x188590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18858Cu;
        // 0x188590: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188594u;
        goto label_188594;
    }
    ctx->pc = 0x18858Cu;
    {
        const bool branch_taken_0x18858c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x188590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18858Cu;
        // 0x188590: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18858c) {
            ctx->pc = 0x188720u;
            goto label_188720;
        }
    }
    ctx->pc = 0x188594u;
label_188594:
    // 0x188594: 0xae8501b8  sw          $a1, 0x1B8($s4)
    ctx->pc = 0x188594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 440), GPR_U32(ctx, 5));
label_188598:
    // 0x188598: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18859c:
    // 0x18859c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x18859cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1885a0:
    // 0x1885a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1885a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1885a4:
    // 0x1885a4: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1885a8:
    if (ctx->pc == 0x1885A8u) {
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885ACu;
        goto label_1885ac;
    }
    ctx->pc = 0x1885A4u;
    {
        const bool branch_taken_0x1885a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885a4) {
            ctx->pc = 0x1885B0u;
            goto label_1885b0;
        }
    }
    ctx->pc = 0x1885ACu;
label_1885ac:
    // 0x1885ac: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1885b0:
    // 0x1885b0: 0xc068086  jal         func_1A0218
label_1885b4:
    if (ctx->pc == 0x1885B4u) {
        ctx->pc = 0x1885B8u;
        goto label_1885b8;
    }
    ctx->pc = 0x1885B0u;
    SET_GPR_U32(ctx, 31, 0x1885B8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1885B0u, 0x1885B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885B8u;
label_1885b8:
    // 0x1885b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1885bc:
    if (ctx->pc == 0x1885BCu) {
        ctx->pc = 0x1885BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885B8u;
        // 0x1885bc: 0xae4201bc  sw          $v0, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885C0u;
        goto label_1885c0;
    }
    ctx->pc = 0x1885B8u;
    {
        const bool branch_taken_0x1885b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885B8u;
        // 0x1885bc: 0xae4201bc  sw          $v0, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885b8) {
            ctx->pc = 0x1885D4u;
            goto label_1885d4;
        }
    }
    ctx->pc = 0x1885C0u;
label_1885c0:
    // 0x1885c0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1885c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1885c4:
    // 0x1885c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1885c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1885c8:
    // 0x1885c8: 0x24a57f30  addiu       $a1, $a1, 0x7F30
    ctx->pc = 0x1885c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32560));
label_1885cc:
    // 0x1885cc: 0xc068186  jal         func_1A0618
label_1885d0:
    if (ctx->pc == 0x1885D0u) {
        ctx->pc = 0x1885D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885CCu;
        // 0x1885d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885D4u;
        goto label_1885d4;
    }
    ctx->pc = 0x1885CCu;
    SET_GPR_U32(ctx, 31, 0x1885D4u);
    ctx->pc = 0x1885D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885CCu;
    // 0x1885d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1885CCu, 0x1885D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885D4u;
label_1885d4:
    // 0x1885d4: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1885d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_1885d8:
    // 0x1885d8: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_1885dc:
    if (ctx->pc == 0x1885DCu) {
        ctx->pc = 0x1885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885D8u;
        // 0x1885dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885E0u;
        goto label_1885e0;
    }
    ctx->pc = 0x1885D8u;
    {
        const bool branch_taken_0x1885d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1885DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885D8u;
        // 0x1885dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885d8) {
            ctx->pc = 0x188640u;
            goto label_188640;
        }
    }
    ctx->pc = 0x1885E0u;
label_1885e0:
    // 0x1885e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1885e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1885e4:
    // 0x1885e4: 0x2455ffb0  addiu       $s5, $v0, -0x50
    ctx->pc = 0x1885e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
label_1885e8:
    // 0x1885e8: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x1885e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_1885ec:
    // 0x1885ec: 0x0  nop
    ctx->pc = 0x1885ecu;
    // NOP
label_1885f0:
    // 0x1885f0: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x1885f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1885f4:
    // 0x1885f4: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1885f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1885f8:
    // 0x1885f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1885f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1885fc:
    // 0x1885fc: 0xc0682b2  jal         func_1A0AC8
label_188600:
    if (ctx->pc == 0x188600u) {
        ctx->pc = 0x188600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885FCu;
        // 0x188600: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188604u;
        goto label_188604;
    }
    ctx->pc = 0x1885FCu;
    SET_GPR_U32(ctx, 31, 0x188604u);
    ctx->pc = 0x188600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885FCu;
    // 0x188600: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1885FCu, 0x188604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188604u;
label_188604:
    // 0x188604: 0xc0682b6  jal         func_1A0AD8
label_188608:
    if (ctx->pc == 0x188608u) {
        ctx->pc = 0x188608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188604u;
        // 0x188608: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18860Cu;
        goto label_18860c;
    }
    ctx->pc = 0x188604u;
    SET_GPR_U32(ctx, 31, 0x18860Cu);
    ctx->pc = 0x188608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188604u;
    // 0x188608: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x188604u, 0x18860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18860Cu;
label_18860c:
    // 0x18860c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18860cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_188610:
    // 0x188610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188614:
    // 0x188614: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x188614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
label_188618:
    // 0x188618: 0xc0624a8  jal         func_1892A0
label_18861c:
    if (ctx->pc == 0x18861Cu) {
        ctx->pc = 0x18861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188618u;
        // 0x18861c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188620u;
        goto label_188620;
    }
    ctx->pc = 0x188618u;
    SET_GPR_U32(ctx, 31, 0x188620u);
    ctx->pc = 0x18861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188618u;
    // 0x18861c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x188618u, 0x188620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188620u;
label_188620:
    // 0x188620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188624:
    // 0x188624: 0xc06825c  jal         func_1A0970
label_188628:
    if (ctx->pc == 0x188628u) {
        ctx->pc = 0x188628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188624u;
        // 0x188628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18862Cu;
        goto label_18862c;
    }
    ctx->pc = 0x188624u;
    SET_GPR_U32(ctx, 31, 0x18862Cu);
    ctx->pc = 0x188628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188624u;
    // 0x188628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x188624u, 0x18862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18862Cu;
label_18862c:
    // 0x18862c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x18862cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_188630:
    // 0x188630: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x188630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_188634:
    // 0x188634: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x188634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_188638:
    // 0x188638: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_18863c:
    if (ctx->pc == 0x18863Cu) {
        ctx->pc = 0x18863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188638u;
        // 0x18863c: 0x8e4201bc  lw          $v0, 0x1BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188640u;
        goto label_188640;
    }
    ctx->pc = 0x188638u;
    {
        const bool branch_taken_0x188638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188638) {
            ctx->pc = 0x18863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188638u;
            // 0x18863c: 0x8e4201bc  lw          $v0, 0x1BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1885F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1885f0;
        }
    }
    ctx->pc = 0x188640u;
label_188640:
    // 0x188640: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x188640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_188644:
    // 0x188644: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x188644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_188648:
    // 0x188648: 0x8e4401bc  lw          $a0, 0x1BC($s2)
    ctx->pc = 0x188648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_18864c:
    // 0x18864c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18864cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188650:
    // 0x188650: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x188650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_188654:
    // 0x188654: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x188654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
label_188658:
    // 0x188658: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18865c:
    // 0x18865c: 0x8e8201b8  lw          $v0, 0x1B8($s4)
    ctx->pc = 0x18865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_188660:
    // 0x188660: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
label_188664:
    if (ctx->pc == 0x188664u) {
        ctx->pc = 0x188664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188660u;
        // 0x188664: 0xae4301c0  sw          $v1, 0x1C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188668u;
        goto label_188668;
    }
    ctx->pc = 0x188660u;
    {
        const bool branch_taken_0x188660 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x188664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188660u;
        // 0x188664: 0xae4301c0  sw          $v1, 0x1C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188660) {
            ctx->pc = 0x1887A8u;
            goto label_1887a8;
        }
    }
    ctx->pc = 0x188668u;
label_188668:
    // 0x188668: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x188668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_18866c:
    // 0x18866c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18866cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_188670:
    // 0x188670: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x188670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_188674:
    // 0x188674: 0x244cecf0  addiu       $t4, $v0, -0x1310
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962416));
label_188678:
    // 0x188678: 0x246eed00  addiu       $t6, $v1, -0x1300
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962432));
label_18867c:
    // 0x18867c: 0x248ded30  addiu       $t5, $a0, -0x12D0
    ctx->pc = 0x18867cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962480));
label_188680:
    // 0x188680: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x188680u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
label_188684:
    // 0x188684: 0x8e8301bc  lw          $v1, 0x1BC($s4)
    ctx->pc = 0x188684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
label_188688:
    // 0x188688: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x188688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_18868c:
    // 0x18868c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188690:
    // 0x188690: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x188690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188694:
    // 0x188694: 0x248301e0  addiu       $v1, $a0, 0x1E0
    ctx->pc = 0x188694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
label_188698:
    // 0x188698: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x188698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_18869c:
    // 0x18869c: 0x79820000  lq          $v0, 0x0($t4)
    ctx->pc = 0x18869cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 0)));
label_1886a0:
    // 0x1886a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1886a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1886a4:
    // 0x1886a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1886a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1886a8:
    // 0x1886a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1886ac:
    // 0x1886ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1886acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1886b0:
    // 0x1886b0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1886b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_1886b4:
    // 0x1886b4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1886b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1886b8:
    // 0x1886b8: 0x93100  sll         $a2, $t1, 4
    ctx->pc = 0x1886b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1886bc:
    // 0x1886bc: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x1886bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1886c0:
    // 0x1886c0: 0xce2021  addu        $a0, $a2, $t6
    ctx->pc = 0x1886c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_1886c4:
    // 0x1886c4: 0x24e300d0  addiu       $v1, $a3, 0xD0
    ctx->pc = 0x1886c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
label_1886c8:
    // 0x1886c8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1886c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1886cc:
    // 0x1886cc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1886ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1886d0:
    // 0x1886d0: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1886d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1886d4:
    // 0x1886d4: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x1886d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
label_1886d8:
    // 0x1886d8: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_1886dc:
    // 0x1886dc: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1886dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_1886e0:
    // 0x1886e0: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x1886e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
label_1886e4:
    // 0x1886e4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1886e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1886e8:
    // 0x1886e8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1886e8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_1886ec:
    // 0x1886ec: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1886ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1886f0:
    // 0x1886f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1886f4:
    // 0x1886f4: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_1886f8:
    // 0x1886f8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1886f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_1886fc:
    // 0x1886fc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_188700:
    if (ctx->pc == 0x188700u) {
        ctx->pc = 0x188700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886FCu;
        // 0x188700: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188704u;
        goto label_188704;
    }
    ctx->pc = 0x1886FCu;
    {
        const bool branch_taken_0x1886fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886FCu;
        // 0x188700: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886fc) {
            ctx->pc = 0x1886B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1886b8;
        }
    }
    ctx->pc = 0x188704u;
label_188704:
    // 0x188704: 0x8e8201b8  lw          $v0, 0x1B8($s4)
    ctx->pc = 0x188704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_188708:
    // 0x188708: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x188708u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_18870c:
    // 0x18870c: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x18870cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_188710:
    // 0x188710: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
label_188714:
    if (ctx->pc == 0x188714u) {
        ctx->pc = 0x188714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188710u;
        // 0x188714: 0x8e8301bc  lw          $v1, 0x1BC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188718u;
        goto label_188718;
    }
    ctx->pc = 0x188710u;
    {
        const bool branch_taken_0x188710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188710) {
            ctx->pc = 0x188714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188710u;
            // 0x188714: 0x8e8301bc  lw          $v1, 0x1BC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188688;
        }
    }
    ctx->pc = 0x188718u;
label_188718:
    // 0x188718: 0x10000024  b           . + 4 + (0x24 << 2)
label_18871c:
    if (ctx->pc == 0x18871Cu) {
        ctx->pc = 0x18871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188718u;
        // 0x18871c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188720u;
        goto label_188720;
    }
    ctx->pc = 0x188718u;
    {
        const bool branch_taken_0x188718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188718u;
        // 0x18871c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188718) {
            ctx->pc = 0x1887ACu;
            goto label_1887ac;
        }
    }
    ctx->pc = 0x188720u;
label_188720:
    // 0x188720: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x188720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_188724:
    // 0x188724: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_188728:
    // 0x188728: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_18872c:
    // 0x18872c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_188730:
    // 0x188730: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_188734:
    if (ctx->pc == 0x188734u) {
        ctx->pc = 0x188734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188730u;
        // 0x188734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188738u;
        goto label_188738;
    }
    ctx->pc = 0x188730u;
    {
        const bool branch_taken_0x188730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188730) {
            ctx->pc = 0x188734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188730u;
            // 0x188734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1887ACu;
            goto label_1887ac;
        }
    }
    ctx->pc = 0x188738u;
label_188738:
    // 0x188738: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_18873c:
    // 0x18873c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_188740:
    if (ctx->pc == 0x188740u) {
        ctx->pc = 0x188740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18873Cu;
        // 0x188740: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188744u;
        goto label_188744;
    }
    ctx->pc = 0x18873Cu;
    {
        const bool branch_taken_0x18873c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x188740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18873Cu;
        // 0x188740: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18873c) {
            ctx->pc = 0x188784u;
            goto label_188784;
        }
    }
    ctx->pc = 0x188744u;
label_188744:
    // 0x188744: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x188744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_188748:
    // 0x188748: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x188748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18874c:
    // 0x18874c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18874cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188750:
    // 0x188750: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_188754:
    // 0x188754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_188758:
    // 0x188758: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18875c:
    // 0x18875c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_188760:
    // 0x188760: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x188760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_188764:
    // 0x188764: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x188764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188768:
    // 0x188768: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18876c:
    // 0x18876c: 0x60f809  jalr        $v1
label_188770:
    if (ctx->pc == 0x188770u) {
        ctx->pc = 0x188770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18876Cu;
        // 0x188770: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188774u;
        goto label_188774;
    }
    ctx->pc = 0x18876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188774u);
        ctx->pc = 0x188770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18876Cu;
        // 0x188770: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18876Cu, 0x188774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188774u;
label_188774:
    // 0x188774: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x188774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_188778:
    // 0x188778: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x188778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18877c:
    // 0x18877c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_188780:
    if (ctx->pc == 0x188780u) {
        ctx->pc = 0x188780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18877Cu;
        // 0x188780: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188784u;
        goto label_188784;
    }
    ctx->pc = 0x18877Cu;
    {
        const bool branch_taken_0x18877c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18877c) {
            ctx->pc = 0x188780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18877Cu;
            // 0x188780: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188748;
        }
    }
    ctx->pc = 0x188784u;
label_188784:
    // 0x188784: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x188784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_188788:
    // 0x188788: 0xc067f04  jal         func_19FC10
label_18878c:
    if (ctx->pc == 0x18878Cu) {
        ctx->pc = 0x18878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188788u;
        // 0x18878c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188790u;
        goto label_188790;
    }
    ctx->pc = 0x188788u;
    SET_GPR_U32(ctx, 31, 0x188790u);
    ctx->pc = 0x18878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188788u;
    // 0x18878c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x188788u, 0x188790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188790u;
label_188790:
    // 0x188790: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x188790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
label_188794:
    // 0x188794: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x188794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_188798:
    // 0x188798: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_18879c:
    // 0x18879c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18879cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1887a0:
    // 0x1887a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1887a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1887a4:
    // 0x1887a4: 0xae030150  sw          $v1, 0x150($s0)
    ctx->pc = 0x1887a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 3));
label_1887a8:
    // 0x1887a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1887a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1887ac:
    // 0x1887ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1887acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1887b0:
    // 0x1887b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1887b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1887b4:
    // 0x1887b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1887b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1887b8:
    // 0x1887b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1887b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1887bc:
    // 0x1887bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1887bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1887c0:
    // 0x1887c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1887c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1887c4:
    // 0x1887c4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1887c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1887c8:
    // 0x1887c8: 0x3e00008  jr          $ra
label_1887cc:
    if (ctx->pc == 0x1887CCu) {
        ctx->pc = 0x1887CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887C8u;
        // 0x1887cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887D0u;
        goto label_fallthrough_0x1887c8;
    }
    ctx->pc = 0x1887C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1887CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887C8u;
        // 0x1887cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1887C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1887c8:
    ctx->pc = 0x1887D0u;
}

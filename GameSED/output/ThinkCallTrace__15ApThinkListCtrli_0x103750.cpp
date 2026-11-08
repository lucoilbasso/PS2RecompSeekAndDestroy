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

// Function: ThinkCallTrace__15ApThinkListCtrli
// Address: 0x103750 - 0x103860
void ThinkCallTrace__15ApThinkListCtrli_0x103750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ThinkCallTrace__15ApThinkListCtrli_0x103750");
#endif

    switch (ctx->pc) {
        case 0x103750u: goto label_103750;
        case 0x103754u: goto label_103754;
        case 0x103758u: goto label_103758;
        case 0x10375cu: goto label_10375c;
        case 0x103760u: goto label_103760;
        case 0x103764u: goto label_103764;
        case 0x103768u: goto label_103768;
        case 0x10376cu: goto label_10376c;
        case 0x103770u: goto label_103770;
        case 0x103774u: goto label_103774;
        case 0x103778u: goto label_103778;
        case 0x10377cu: goto label_10377c;
        case 0x103780u: goto label_103780;
        case 0x103784u: goto label_103784;
        case 0x103788u: goto label_103788;
        case 0x10378cu: goto label_10378c;
        case 0x103790u: goto label_103790;
        case 0x103794u: goto label_103794;
        case 0x103798u: goto label_103798;
        case 0x10379cu: goto label_10379c;
        case 0x1037a0u: goto label_1037a0;
        case 0x1037a4u: goto label_1037a4;
        case 0x1037a8u: goto label_1037a8;
        case 0x1037acu: goto label_1037ac;
        case 0x1037b0u: goto label_1037b0;
        case 0x1037b4u: goto label_1037b4;
        case 0x1037b8u: goto label_1037b8;
        case 0x1037bcu: goto label_1037bc;
        case 0x1037c0u: goto label_1037c0;
        case 0x1037c4u: goto label_1037c4;
        case 0x1037c8u: goto label_1037c8;
        case 0x1037ccu: goto label_1037cc;
        case 0x1037d0u: goto label_1037d0;
        case 0x1037d4u: goto label_1037d4;
        case 0x1037d8u: goto label_1037d8;
        case 0x1037dcu: goto label_1037dc;
        case 0x1037e0u: goto label_1037e0;
        case 0x1037e4u: goto label_1037e4;
        case 0x1037e8u: goto label_1037e8;
        case 0x1037ecu: goto label_1037ec;
        case 0x1037f0u: goto label_1037f0;
        case 0x1037f4u: goto label_1037f4;
        case 0x1037f8u: goto label_1037f8;
        case 0x1037fcu: goto label_1037fc;
        case 0x103800u: goto label_103800;
        case 0x103804u: goto label_103804;
        case 0x103808u: goto label_103808;
        case 0x10380cu: goto label_10380c;
        case 0x103810u: goto label_103810;
        case 0x103814u: goto label_103814;
        case 0x103818u: goto label_103818;
        case 0x10381cu: goto label_10381c;
        case 0x103820u: goto label_103820;
        case 0x103824u: goto label_103824;
        case 0x103828u: goto label_103828;
        case 0x10382cu: goto label_10382c;
        case 0x103830u: goto label_103830;
        case 0x103834u: goto label_103834;
        case 0x103838u: goto label_103838;
        case 0x10383cu: goto label_10383c;
        case 0x103840u: goto label_103840;
        case 0x103844u: goto label_103844;
        case 0x103848u: goto label_103848;
        case 0x10384cu: goto label_10384c;
        case 0x103850u: goto label_103850;
        case 0x103854u: goto label_103854;
        case 0x103858u: goto label_103858;
        case 0x10385cu: goto label_10385c;
        default: break;
    }

    ctx->pc = 0x103750u;

label_103750:
    // 0x103750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_103754:
    // 0x103754: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_103758:
    // 0x103758: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10375c:
    // 0x10375c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_103760:
    // 0x103760: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x103760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_103764:
    // 0x103764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_103768:
    // 0x103768: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x103768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_10376c:
    // 0x10376c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_103770:
    // 0x103770: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x103770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_103774:
    // 0x103774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x103774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_103778:
    // 0x103778: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x103778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10377c:
    // 0x10377c: 0x640000a  bltz        $s2, . + 4 + (0xA << 2)
label_103780:
    if (ctx->pc == 0x103780u) {
        ctx->pc = 0x103780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10377Cu;
        // 0x103780: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103784u;
        goto label_103784;
    }
    ctx->pc = 0x10377Cu;
    {
        const bool branch_taken_0x10377c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x103780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10377Cu;
        // 0x103780: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10377c) {
            ctx->pc = 0x1037A8u;
            goto label_1037a8;
        }
    }
    ctx->pc = 0x103784u;
label_103784:
    // 0x103784: 0x32520003  andi        $s2, $s2, 0x3
    ctx->pc = 0x103784u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_103788:
    // 0x103788: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x103788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_10378c:
    // 0x10378c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_103790:
    // 0x103790: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x103790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_103794:
    // 0x103794: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x103794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_103798:
    // 0x103798: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x103798u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_10379c:
    // 0x10379c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x10379cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1037a0:
    // 0x1037a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1037a4:
    if (ctx->pc == 0x1037A4u) {
        ctx->pc = 0x1037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037A0u;
        // 0x1037a4: 0x39883  sra         $s3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037A8u;
        goto label_1037a8;
    }
    ctx->pc = 0x1037A0u;
    {
        const bool branch_taken_0x1037a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037A0u;
        // 0x1037a4: 0x39883  sra         $s3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037a0) {
            ctx->pc = 0x1037ACu;
            goto label_1037ac;
        }
    }
    ctx->pc = 0x1037A8u;
label_1037a8:
    // 0x1037a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1037a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1037ac:
    // 0x1037ac: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_1037b0:
    if (ctx->pc == 0x1037B0u) {
        ctx->pc = 0x1037B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037ACu;
        // 0x1037b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037B4u;
        goto label_1037b4;
    }
    ctx->pc = 0x1037ACu;
    {
        const bool branch_taken_0x1037ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037ACu;
        // 0x1037b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037ac) {
            ctx->pc = 0x10383Cu;
            goto label_10383c;
        }
    }
    ctx->pc = 0x1037B4u;
label_1037b4:
    // 0x1037b4: 0x3c147fff  lui         $s4, 0x7FFF
    ctx->pc = 0x1037b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32767 << 16));
label_1037b8:
    // 0x1037b8: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1037b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1037bc:
    // 0x1037bc: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1037bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_1037c0:
    // 0x1037c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1037c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1037c4:
    // 0x1037c4: 0x0  nop
    ctx->pc = 0x1037c4u;
    // NOP
label_1037c8:
    // 0x1037c8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1037c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_1037cc:
    // 0x1037cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1037d0:
    if (ctx->pc == 0x1037D0u) {
        ctx->pc = 0x1037D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037CCu;
        // 0x1037d0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037D4u;
        goto label_1037d4;
    }
    ctx->pc = 0x1037CCu;
    {
        const bool branch_taken_0x1037cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1037D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037CCu;
        // 0x1037d0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037cc) {
            ctx->pc = 0x103834u;
            goto label_103834;
        }
    }
    ctx->pc = 0x1037D4u;
label_1037d4:
    // 0x1037d4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_1037d8:
    if (ctx->pc == 0x1037D8u) {
        ctx->pc = 0x1037DCu;
        goto label_1037dc;
    }
    ctx->pc = 0x1037D4u;
    {
        const bool branch_taken_0x1037d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1037d4) {
            ctx->pc = 0x1037E8u;
            goto label_1037e8;
        }
    }
    ctx->pc = 0x1037DCu;
label_1037dc:
    // 0x1037dc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1037dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1037e0:
    // 0x1037e0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1037e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_1037e4:
    // 0x1037e4: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1037e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_1037e8:
    // 0x1037e8: 0x52550006  beql        $s2, $s5, . + 4 + (0x6 << 2)
label_1037ec:
    if (ctx->pc == 0x1037ECu) {
        ctx->pc = 0x1037ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037E8u;
        // 0x1037ec: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1037F0u;
        goto label_1037f0;
    }
    ctx->pc = 0x1037E8u;
    {
        const bool branch_taken_0x1037e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        if (branch_taken_0x1037e8) {
            ctx->pc = 0x1037ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037E8u;
            // 0x1037ec: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103804u;
            goto label_103804;
        }
    }
    ctx->pc = 0x1037F0u;
label_1037f0:
    // 0x1037f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1037f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1037f4:
    // 0x1037f4: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1037f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1037f8:
    // 0x1037f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1037fc:
    if (ctx->pc == 0x1037FCu) {
        ctx->pc = 0x1037FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037F8u;
        // 0x1037fc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103800u;
        goto label_103800;
    }
    ctx->pc = 0x1037F8u;
    {
        const bool branch_taken_0x1037f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1037f8) {
            ctx->pc = 0x1037FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037F8u;
            // 0x1037fc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10382Cu;
            goto label_10382c;
        }
    }
    ctx->pc = 0x103800u;
label_103800:
    // 0x103800: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x103800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_103804:
    // 0x103804: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x103804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_103808:
    // 0x103808: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_10380c:
    if (ctx->pc == 0x10380Cu) {
        ctx->pc = 0x10380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103808u;
        // 0x10380c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103810u;
        goto label_103810;
    }
    ctx->pc = 0x103808u;
    {
        const bool branch_taken_0x103808 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103808u;
        // 0x10380c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103808) {
            ctx->pc = 0x103828u;
            goto label_103828;
        }
    }
    ctx->pc = 0x103810u;
label_103810:
    // 0x103810: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x103810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_103814:
    // 0x103814: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x103814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_103818:
    // 0x103818: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x103818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_10381c:
    // 0x10381c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10381cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103820:
    // 0x103820: 0x40f809  jalr        $v0
label_103824:
    if (ctx->pc == 0x103824u) {
        ctx->pc = 0x103824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103820u;
        // 0x103824: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103828u;
        goto label_103828;
    }
    ctx->pc = 0x103820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x103828u);
        ctx->pc = 0x103824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103820u;
        // 0x103824: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103820u, 0x103828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103828u;
label_103828:
    // 0x103828: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x103828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10382c:
    // 0x10382c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_103830:
    // 0x103830: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x103830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_103834:
    // 0x103834: 0x5600ffe4  bnel        $s0, $zero, . + 4 + (-0x1C << 2)
label_103838:
    if (ctx->pc == 0x103838u) {
        ctx->pc = 0x103838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103834u;
        // 0x103838: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10383Cu;
        goto label_10383c;
    }
    ctx->pc = 0x103834u;
    {
        const bool branch_taken_0x103834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x103834) {
            ctx->pc = 0x103838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103834u;
            // 0x103838: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1037C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1037c8;
        }
    }
    ctx->pc = 0x10383Cu;
label_10383c:
    // 0x10383c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10383cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103840:
    // 0x103840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_103844:
    // 0x103844: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103848:
    // 0x103848: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10384c:
    // 0x10384c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10384cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_103850:
    // 0x103850: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x103850u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_103854:
    // 0x103854: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x103854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_103858:
    // 0x103858: 0x3e00008  jr          $ra
label_10385c:
    if (ctx->pc == 0x10385Cu) {
        ctx->pc = 0x10385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103858u;
        // 0x10385c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103860u;
        goto label_fallthrough_0x103858;
    }
    ctx->pc = 0x103858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103858u;
        // 0x10385c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x103858:
    ctx->pc = 0x103860u;
}

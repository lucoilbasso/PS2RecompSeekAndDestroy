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

// Function: __throw_type_match_rtti_2
// Address: 0x1ce820 - 0x1ced2c
void ps2___throw_type_match_rtti_2_0x1ce820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_type_match_rtti_2_0x1ce820");
#endif

    switch (ctx->pc) {
        case 0x1ce864u: goto label_1ce864;
        case 0x1ce8a0u: goto label_1ce8a0;
        case 0x1ce91cu: goto label_1ce91c;
        case 0x1ce95cu: goto label_1ce95c;
        case 0x1ce9a0u: goto label_1ce9a0;
        case 0x1ce9e4u: goto label_1ce9e4;
        case 0x1cea28u: goto label_1cea28;
        case 0x1cea38u: goto label_1cea38;
        case 0x1cea44u: goto label_1cea44;
        case 0x1cea7cu: goto label_1cea7c;
        case 0x1ceab8u: goto label_1ceab8;
        case 0x1ceb34u: goto label_1ceb34;
        case 0x1ceb74u: goto label_1ceb74;
        case 0x1ceba0u: goto label_1ceba0;
        case 0x1cebccu: goto label_1cebcc;
        case 0x1cec08u: goto label_1cec08;
        case 0x1cec68u: goto label_1cec68;
        case 0x1cec9cu: goto label_1cec9c;
        case 0x1cecccu: goto label_1ceccc;
        default: break;
    }

    ctx->pc = 0x1ce820u;

    // 0x1ce820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ce820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce824: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ce824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ce828: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ce828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce82c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ce82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ce830: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1ce830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce838: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce83c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ce848: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ce848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ce84c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ce84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ce850: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ce850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ce854: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1ce854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1ce858: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ce858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1ce85c: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CE85Cu;
    SET_GPR_U32(ctx, 31, 0x1CE864u);
    ctx->pc = 0x1CE860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE85Cu;
    // 0x1ce860: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CE85Cu, 0x1CE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE864u;
label_1ce864:
    // 0x1ce864: 0x14400125  bnez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x1CE864u;
    {
        const bool branch_taken_0x1ce864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE864u;
        // 0x1ce868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce864) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CE86Cu;
    // 0x1ce86c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE86Cu;
    {
        const bool branch_taken_0x1ce86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE86Cu;
        // 0x1ce870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce86c) {
            ctx->pc = 0x1CE8A0u;
            goto label_1ce8a0;
        }
    }
    ctx->pc = 0x1CE874u;
    // 0x1ce874: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce878: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce87c: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce87cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce880: 0x24a51998  addiu       $a1, $a1, 0x1998
    ctx->pc = 0x1ce880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6552));
    // 0x1ce884: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce884u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce888: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce88c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce894: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ce898: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE898u;
    SET_GPR_U32(ctx, 31, 0x1CE8A0u);
    ctx->pc = 0x1CE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE898u;
    // 0x1ce89c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE898u, 0x1CE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8A0u;
label_1ce8a0:
    // 0x1ce8a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CE8A0u;
    {
        const bool branch_taken_0x1ce8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8A0u;
        // 0x1ce8a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8a0) {
            ctx->pc = 0x1CE8E8u;
            goto label_1ce8e8;
        }
    }
    ctx->pc = 0x1CE8A8u;
    // 0x1ce8a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce8ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ce8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ce8b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce8b4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ce8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ce8b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ce8bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce8bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce8c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce8c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce8c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce8c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce8cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ce8ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce8d0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ce8d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce8d4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ce8d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce8d8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ce8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce8dc: 0x8072f52  j           func_1CBD48
    ctx->pc = 0x1CE8DCu;
    ctx->pc = 0x1CE8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE8DCu;
    // 0x1ce8e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD48u;
    upcast__C16__user_type_infoRC9type_infoPvPPv_0x1cbd48(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE8E4u;
    // 0x1ce8e4: 0x0  nop
    ctx->pc = 0x1ce8e4u;
    // NOP
label_1ce8e8:
    // 0x1ce8e8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE8E8u;
    {
        const bool branch_taken_0x1ce8e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8E8u;
        // 0x1ce8ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8e8) {
            ctx->pc = 0x1CE920u;
            goto label_1ce920;
        }
    }
    ctx->pc = 0x1CE8F0u;
    // 0x1ce8f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce8f4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce8f8: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce8fc: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ce8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ce900: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce904: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce908: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce90c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ce90cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce910: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ce910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ce914: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE914u;
    SET_GPR_U32(ctx, 31, 0x1CE91Cu);
    ctx->pc = 0x1CE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE914u;
    // 0x1ce918: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE914u, 0x1CE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE91Cu;
label_1ce91c:
    // 0x1ce91c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ce91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce920:
    // 0x1ce920: 0x124000f6  beqz        $s2, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1CE920u;
    {
        const bool branch_taken_0x1ce920 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE920u;
        // 0x1ce924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce920) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CE928u;
    // 0x1ce928: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE928u;
    {
        const bool branch_taken_0x1ce928 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE928u;
        // 0x1ce92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce928) {
            ctx->pc = 0x1CE960u;
            goto label_1ce960;
        }
    }
    ctx->pc = 0x1CE930u;
    // 0x1ce930: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ce930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce934: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce938: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce93c: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ce940: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce940u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce944: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce948: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce94c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ce94cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce950: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1ce950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ce954: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE954u;
    SET_GPR_U32(ctx, 31, 0x1CE95Cu);
    ctx->pc = 0x1CE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE954u;
    // 0x1ce958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE954u, 0x1CE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE95Cu;
label_1ce95c:
    // 0x1ce95c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce960:
    // 0x1ce960: 0x108000e6  beqz        $a0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1CE960u;
    {
        const bool branch_taken_0x1ce960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE960u;
        // 0x1ce964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce960) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CE968u;
    // 0x1ce968: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1ce968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ce96c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE96Cu;
    {
        const bool branch_taken_0x1ce96c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE96Cu;
        // 0x1ce970: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce96c) {
            ctx->pc = 0x1CE9A0u;
            goto label_1ce9a0;
        }
    }
    ctx->pc = 0x1CE974u;
    // 0x1ce974: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce978: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce97c: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce97cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce980: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x1ce980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    // 0x1ce984: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce984u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce988: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce98c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce994: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ce994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ce998: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE998u;
    SET_GPR_U32(ctx, 31, 0x1CE9A0u);
    ctx->pc = 0x1CE99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE998u;
    // 0x1ce99c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE998u, 0x1CE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9A0u;
label_1ce9a0:
    // 0x1ce9a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9A0u;
    {
        const bool branch_taken_0x1ce9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9a0) {
            ctx->pc = 0x1CE9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE9A0u;
            // 0x1ce9a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE9B0u;
            goto label_1ce9b0;
        }
    }
    ctx->pc = 0x1CE9A8u;
    // 0x1ce9a8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1ce9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce9ac: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ce9b0:
    // 0x1ce9b0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE9B0u;
    {
        const bool branch_taken_0x1ce9b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9B0u;
        // 0x1ce9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9b0) {
            ctx->pc = 0x1CE9E4u;
            goto label_1ce9e4;
        }
    }
    ctx->pc = 0x1CE9B8u;
    // 0x1ce9b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ce9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce9bc: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce9c0: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce9c4: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x1ce9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    // 0x1ce9c8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce9c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce9cc: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce9d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce9d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9d8: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ce9dc: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE9DCu;
    SET_GPR_U32(ctx, 31, 0x1CE9E4u);
    ctx->pc = 0x1CE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9DCu;
    // 0x1ce9e0: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE9DCu, 0x1CE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9E4u;
label_1ce9e4:
    // 0x1ce9e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9E4u;
    {
        const bool branch_taken_0x1ce9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9e4) {
            ctx->pc = 0x1CE9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE9E4u;
            // 0x1ce9e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE9F4u;
            goto label_1ce9f4;
        }
    }
    ctx->pc = 0x1CE9ECu;
    // 0x1ce9ec: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1ce9ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce9f0: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1ce9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1ce9f4:
    // 0x1ce9f4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1ce9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1ce9f8: 0x32560001  andi        $s6, $s2, 0x1
    ctx->pc = 0x1ce9f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1ce9fc: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1ce9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cea00: 0x144000be  bnez        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1CEA00u;
    {
        const bool branch_taken_0x1cea00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA00u;
        // 0x1cea04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea00) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEA08u;
    // 0x1cea08: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x1cea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1cea0c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x1cea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x1cea10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1cea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cea14: 0x544000b9  bnel        $v0, $zero, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1CEA14u;
    {
        const bool branch_taken_0x1cea14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cea14) {
            ctx->pc = 0x1CEA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEA14u;
            // 0x1cea18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEA1Cu;
    // 0x1cea1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea20: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CEA20u;
    SET_GPR_U32(ctx, 31, 0x1CEA28u);
    ctx->pc = 0x1CEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA20u;
    // 0x1cea24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CEA20u, 0x1CEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA28u;
label_1cea28:
    // 0x1cea28: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1CEA28u;
    {
        const bool branch_taken_0x1cea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA28u;
        // 0x1cea2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea28) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEA30u;
    // 0x1cea30: 0xc073be2  jal         func_1CEF88
    ctx->pc = 0x1CEA30u;
    SET_GPR_U32(ctx, 31, 0x1CEA38u);
    ctx->pc = 0x1CEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF88u, 0x1CEA30u, 0x1CEA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA38u;
label_1cea38:
    // 0x1cea38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea3c: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA44u);
    ctx->pc = 0x1CEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA3Cu;
    // 0x1cea40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CEA3Cu, 0x1CEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA44u;
label_1cea44:
    // 0x1cea44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CEA44u;
    {
        const bool branch_taken_0x1cea44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea44) {
            ctx->pc = 0x1CEA84u;
            goto label_1cea84;
        }
    }
    ctx->pc = 0x1CEA4Cu;
    // 0x1cea4c: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1CEA4Cu;
    {
        const bool branch_taken_0x1cea4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA4Cu;
        // 0x1cea50: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea4c) {
            ctx->pc = 0x1CEB88u;
            goto label_1ceb88;
        }
    }
    ctx->pc = 0x1CEA54u;
    // 0x1cea54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cea58: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1cea5c: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    // 0x1cea60: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cea60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cea64: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1cea68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cea6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cea6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea70: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1cea74: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEA74u;
    SET_GPR_U32(ctx, 31, 0x1CEA7Cu);
    ctx->pc = 0x1CEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA74u;
    // 0x1cea78: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEA74u, 0x1CEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA7Cu;
label_1cea7c:
    // 0x1cea7c: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1CEA7Cu;
    {
        const bool branch_taken_0x1cea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA7Cu;
        // 0x1cea80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea7c) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEA84u;
label_1cea84:
    // 0x1cea84: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEA84u;
    {
        const bool branch_taken_0x1cea84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA84u;
        // 0x1cea88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea84) {
            ctx->pc = 0x1CEAB8u;
            goto label_1ceab8;
        }
    }
    ctx->pc = 0x1CEA8Cu;
    // 0x1cea8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cea90: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1cea90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1cea94: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1cea94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1cea98: 0x24a51998  addiu       $a1, $a1, 0x1998
    ctx->pc = 0x1cea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6552));
    // 0x1cea9c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cea9cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceaa0: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ceaa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ceaa4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ceaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ceaa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ceaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceaac: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ceaacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ceab0: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEAB0u;
    SET_GPR_U32(ctx, 31, 0x1CEAB8u);
    ctx->pc = 0x1CEAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAB0u;
    // 0x1ceab4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEAB0u, 0x1CEAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAB8u;
label_1ceab8:
    // 0x1ceab8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CEAB8u;
    {
        const bool branch_taken_0x1ceab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAB8u;
        // 0x1ceabc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceab8) {
            ctx->pc = 0x1CEB00u;
            goto label_1ceb00;
        }
    }
    ctx->pc = 0x1CEAC0u;
    // 0x1ceac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ceac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ceac4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ceac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ceac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceacc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ceaccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cead0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cead0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cead4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cead4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cead8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceadc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ceadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceae0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ceae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ceae4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ceae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ceae8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ceae8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceaec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ceaecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ceaf0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ceaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ceaf4: 0x8072f52  j           func_1CBD48
    ctx->pc = 0x1CEAF4u;
    ctx->pc = 0x1CEAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAF4u;
    // 0x1ceaf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD48u;
    upcast__C16__user_type_infoRC9type_infoPvPPv_0x1cbd48(rdram, ctx, runtime); return;
    ctx->pc = 0x1CEAFCu;
    // 0x1ceafc: 0x0  nop
    ctx->pc = 0x1ceafcu;
    // NOP
label_1ceb00:
    // 0x1ceb00: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CEB00u;
    {
        const bool branch_taken_0x1ceb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB00u;
        // 0x1ceb04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb00) {
            ctx->pc = 0x1CEB38u;
            goto label_1ceb38;
        }
    }
    ctx->pc = 0x1CEB08u;
    // 0x1ceb08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ceb0c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ceb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb10: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ceb10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb14: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ceb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ceb18: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ceb18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb1c: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ceb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ceb20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ceb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ceb24: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ceb24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb28: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ceb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ceb2c: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEB2Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB34u);
    ctx->pc = 0x1CEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB2Cu;
    // 0x1ceb30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEB2Cu, 0x1CEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB34u;
label_1ceb34:
    // 0x1ceb34: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ceb34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ceb38:
    // 0x1ceb38: 0x12800070  beqz        $s4, . + 4 + (0x70 << 2)
    ctx->pc = 0x1CEB38u;
    {
        const bool branch_taken_0x1ceb38 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB38u;
        // 0x1ceb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb38) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEB40u;
    // 0x1ceb40: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CEB40u;
    {
        const bool branch_taken_0x1ceb40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB40u;
        // 0x1ceb44: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb40) {
            ctx->pc = 0x1CEB78u;
            goto label_1ceb78;
        }
    }
    ctx->pc = 0x1CEB48u;
    // 0x1ceb48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ceb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ceb4c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ceb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb50: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ceb50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb54: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ceb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ceb58: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb5c: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ceb60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ceb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ceb64: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1ceb64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb68: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1ceb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ceb6c: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB74u);
    ctx->pc = 0x1CEB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB6Cu;
    // 0x1ceb70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEB6Cu, 0x1CEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB74u;
label_1ceb74:
    // 0x1ceb74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ceb74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ceb78:
    // 0x1ceb78: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEB78u;
    {
        const bool branch_taken_0x1ceb78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb78) {
            ctx->pc = 0x1CEB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEB78u;
            // 0x1ceb7c: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEB90u;
            goto label_1ceb90;
        }
    }
    ctx->pc = 0x1CEB80u;
    // 0x1ceb80: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1CEB80u;
    {
        const bool branch_taken_0x1ceb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB80u;
        // 0x1ceb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb80) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEB88u;
label_1ceb88:
    // 0x1ceb88: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1CEB88u;
    {
        const bool branch_taken_0x1ceb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB88u;
        // 0x1ceb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb88) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEB90u;
label_1ceb90:
    // 0x1ceb90: 0x3c1e001e  lui         $fp, 0x1E
    ctx->pc = 0x1ceb90u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb94: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1ceb94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1ceb98: 0x3c15001e  lui         $s5, 0x1E
    ctx->pc = 0x1ceb98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)30 << 16));
    // 0x1ceb9c: 0x3c17001e  lui         $s7, 0x1E
    ctx->pc = 0x1ceb9cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)30 << 16));
label_1ceba0:
    // 0x1ceba0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CEBA0u;
    {
        const bool branch_taken_0x1ceba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBA0u;
        // 0x1ceba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceba0) {
            ctx->pc = 0x1CEBCCu;
            goto label_1cebcc;
        }
    }
    ctx->pc = 0x1CEBA8u;
    // 0x1ceba8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cebac: 0x27c51ea0  addiu       $a1, $fp, 0x1EA0
    ctx->pc = 0x1cebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 7840));
    // 0x1cebb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cebb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebb4: 0x26a81780  addiu       $t0, $s5, 0x1780
    ctx->pc = 0x1cebb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 6016));
    // 0x1cebb8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cebbc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1cebbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cebc4: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEBC4u;
    SET_GPR_U32(ctx, 31, 0x1CEBCCu);
    ctx->pc = 0x1CEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBC4u;
    // 0x1cebc8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEBC4u, 0x1CEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBCCu;
label_1cebcc:
    // 0x1cebcc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEBCCu;
    {
        const bool branch_taken_0x1cebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebcc) {
            ctx->pc = 0x1CEBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEBCCu;
            // 0x1cebd0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEBDCu;
            goto label_1cebdc;
        }
    }
    ctx->pc = 0x1CEBD4u;
    // 0x1cebd4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cebd8: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1cebdc:
    // 0x1cebdc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CEBDCu;
    {
        const bool branch_taken_0x1cebdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBDCu;
        // 0x1cebe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebdc) {
            ctx->pc = 0x1CEC08u;
            goto label_1cec08;
        }
    }
    ctx->pc = 0x1CEBE4u;
    // 0x1cebe4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cebe8: 0x27c51ea0  addiu       $a1, $fp, 0x1EA0
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 7840));
    // 0x1cebec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cebecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebf0: 0x26a81780  addiu       $t0, $s5, 0x1780
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 6016));
    // 0x1cebf4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cebf4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cebf8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1cebf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cec00: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEC00u;
    SET_GPR_U32(ctx, 31, 0x1CEC08u);
    ctx->pc = 0x1CEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC00u;
    // 0x1cec04: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEC00u, 0x1CEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC08u;
label_1cec08:
    // 0x1cec08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEC08u;
    {
        const bool branch_taken_0x1cec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec08) {
            ctx->pc = 0x1CEC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEC08u;
            // 0x1cec0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEC18u;
            goto label_1cec18;
        }
    }
    ctx->pc = 0x1CEC10u;
    // 0x1cec10: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1cec10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cec14: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1cec14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1cec18:
    // 0x1cec18: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1cec18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1cec1c: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x1cec1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1cec20: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1cec20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1cec24: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CEC24u;
    {
        const bool branch_taken_0x1cec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC24u;
        // 0x1cec28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec24) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEC2Cu;
    // 0x1cec2c: 0x32640002  andi        $a0, $s3, 0x2
    ctx->pc = 0x1cec2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1cec30: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x1cec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x1cec34: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1cec34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cec38: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CEC38u;
    {
        const bool branch_taken_0x1cec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC38u;
        // 0x1cec3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec38) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEC40u;
    // 0x1cec40: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEC40u;
    {
        const bool branch_taken_0x1cec40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cec40) {
            ctx->pc = 0x1CEC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEC40u;
            // 0x1cec44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEC60u;
            goto label_1cec60;
        }
    }
    ctx->pc = 0x1CEC48u;
    // 0x1cec48: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1cec48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1cec4c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CEC4Cu;
    {
        const bool branch_taken_0x1cec4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC4Cu;
        // 0x1cec50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec4c) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEC54u;
    // 0x1cec54: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1cec54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cec58: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CEC58u;
    {
        const bool branch_taken_0x1cec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC58u;
        // 0x1cec5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec58) {
            ctx->pc = 0x1CECF8u;
            goto label_1cecf8;
        }
    }
    ctx->pc = 0x1CEC60u;
label_1cec60:
    // 0x1cec60: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CEC60u;
    SET_GPR_U32(ctx, 31, 0x1CEC68u);
    ctx->pc = 0x1CEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC60u;
    // 0x1cec64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CEC60u, 0x1CEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC68u;
label_1cec68:
    // 0x1cec68: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CEC68u;
    {
        const bool branch_taken_0x1cec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC68u;
        // 0x1cec6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec68) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CEC70u;
    // 0x1cec70: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CEC70u;
    {
        const bool branch_taken_0x1cec70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC70u;
        // 0x1cec74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec70) {
            ctx->pc = 0x1CECA0u;
            goto label_1ceca0;
        }
    }
    ctx->pc = 0x1CEC78u;
    // 0x1cec78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cec7c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1cec7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec80: 0x26e51de8  addiu       $a1, $s7, 0x1DE8
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7656));
    // 0x1cec84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cec84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec88: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cec88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cec8c: 0x26a81780  addiu       $t0, $s5, 0x1780
    ctx->pc = 0x1cec8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 6016));
    // 0x1cec90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cec94: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEC94u;
    SET_GPR_U32(ctx, 31, 0x1CEC9Cu);
    ctx->pc = 0x1CEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC94u;
    // 0x1cec98: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEC94u, 0x1CEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC9Cu;
label_1cec9c:
    // 0x1cec9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cec9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ceca0:
    // 0x1ceca0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CECA0u;
    {
        const bool branch_taken_0x1ceca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECA0u;
        // 0x1ceca4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceca0) {
            ctx->pc = 0x1CECD0u;
            goto label_1cecd0;
        }
    }
    ctx->pc = 0x1CECA8u;
    // 0x1ceca8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ceca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cecac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1cecacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecb0: 0x26e51de8  addiu       $a1, $s7, 0x1DE8
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7656));
    // 0x1cecb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cecb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cecb8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cecb8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cecbc: 0x26a81780  addiu       $t0, $s5, 0x1780
    ctx->pc = 0x1cecbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 6016));
    // 0x1cecc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cecc4: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CECC4u;
    SET_GPR_U32(ctx, 31, 0x1CECCCu);
    ctx->pc = 0x1CECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CECC4u;
    // 0x1cecc8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CECC4u, 0x1CECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CECCCu;
label_1ceccc:
    // 0x1ceccc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cecccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cecd0:
    // 0x1cecd0: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1CECD0u;
    {
        const bool branch_taken_0x1cecd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECD0u;
        // 0x1cecd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecd0) {
            ctx->pc = 0x1CECFCu;
            goto label_1cecfc;
        }
    }
    ctx->pc = 0x1CECD8u;
    // 0x1cecd8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CECD8u;
    {
        const bool branch_taken_0x1cecd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECD8u;
        // 0x1cecdc: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecd8) {
            ctx->pc = 0x1CECF8u;
            goto label_1cecf8;
        }
    }
    ctx->pc = 0x1CECE0u;
    // 0x1cece0: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x1cece0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cece4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cece8: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1cecec: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x1CECECu;
    {
        const bool branch_taken_0x1cecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECECu;
        // 0x1cecf0: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecec) {
            ctx->pc = 0x1CEBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ceba0;
        }
    }
    ctx->pc = 0x1CECF4u;
    // 0x1cecf4: 0x0  nop
    ctx->pc = 0x1cecf4u;
    // NOP
label_1cecf8:
    // 0x1cecf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cecf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cecfc:
    // 0x1cecfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cecfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ced00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ced04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ced04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ced08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ced08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ced0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ced0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ced10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ced10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ced14: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ced14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ced18: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ced18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ced1c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ced1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ced20: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ced20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ced24: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED24u;
        // 0x1ced28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CED2Cu;
}

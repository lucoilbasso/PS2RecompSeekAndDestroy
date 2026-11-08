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

// Function: do_find_public_subobj__C17__class_type_infoiRC9type_infoPvT3
// Address: 0x1cc900 - 0x1cca64
void do_find_public_subobj__C17__class_type_infoiRC9type_infoPvT3_0x1cc900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_find_public_subobj__C17__class_type_infoiRC9type_infoPvT3_0x1cc900");
#endif

    switch (ctx->pc) {
        case 0x1cc900u: goto label_1cc900;
        case 0x1cc904u: goto label_1cc904;
        case 0x1cc908u: goto label_1cc908;
        case 0x1cc90cu: goto label_1cc90c;
        case 0x1cc910u: goto label_1cc910;
        case 0x1cc914u: goto label_1cc914;
        case 0x1cc918u: goto label_1cc918;
        case 0x1cc91cu: goto label_1cc91c;
        case 0x1cc920u: goto label_1cc920;
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc928u: goto label_1cc928;
        case 0x1cc92cu: goto label_1cc92c;
        case 0x1cc930u: goto label_1cc930;
        case 0x1cc934u: goto label_1cc934;
        case 0x1cc938u: goto label_1cc938;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc940u: goto label_1cc940;
        case 0x1cc944u: goto label_1cc944;
        case 0x1cc948u: goto label_1cc948;
        case 0x1cc94cu: goto label_1cc94c;
        case 0x1cc950u: goto label_1cc950;
        case 0x1cc954u: goto label_1cc954;
        case 0x1cc958u: goto label_1cc958;
        case 0x1cc95cu: goto label_1cc95c;
        case 0x1cc960u: goto label_1cc960;
        case 0x1cc964u: goto label_1cc964;
        case 0x1cc968u: goto label_1cc968;
        case 0x1cc96cu: goto label_1cc96c;
        case 0x1cc970u: goto label_1cc970;
        case 0x1cc974u: goto label_1cc974;
        case 0x1cc978u: goto label_1cc978;
        case 0x1cc97cu: goto label_1cc97c;
        case 0x1cc980u: goto label_1cc980;
        case 0x1cc984u: goto label_1cc984;
        case 0x1cc988u: goto label_1cc988;
        case 0x1cc98cu: goto label_1cc98c;
        case 0x1cc990u: goto label_1cc990;
        case 0x1cc994u: goto label_1cc994;
        case 0x1cc998u: goto label_1cc998;
        case 0x1cc99cu: goto label_1cc99c;
        case 0x1cc9a0u: goto label_1cc9a0;
        case 0x1cc9a4u: goto label_1cc9a4;
        case 0x1cc9a8u: goto label_1cc9a8;
        case 0x1cc9acu: goto label_1cc9ac;
        case 0x1cc9b0u: goto label_1cc9b0;
        case 0x1cc9b4u: goto label_1cc9b4;
        case 0x1cc9b8u: goto label_1cc9b8;
        case 0x1cc9bcu: goto label_1cc9bc;
        case 0x1cc9c0u: goto label_1cc9c0;
        case 0x1cc9c4u: goto label_1cc9c4;
        case 0x1cc9c8u: goto label_1cc9c8;
        case 0x1cc9ccu: goto label_1cc9cc;
        case 0x1cc9d0u: goto label_1cc9d0;
        case 0x1cc9d4u: goto label_1cc9d4;
        case 0x1cc9d8u: goto label_1cc9d8;
        case 0x1cc9dcu: goto label_1cc9dc;
        case 0x1cc9e0u: goto label_1cc9e0;
        case 0x1cc9e4u: goto label_1cc9e4;
        case 0x1cc9e8u: goto label_1cc9e8;
        case 0x1cc9ecu: goto label_1cc9ec;
        case 0x1cc9f0u: goto label_1cc9f0;
        case 0x1cc9f4u: goto label_1cc9f4;
        case 0x1cc9f8u: goto label_1cc9f8;
        case 0x1cc9fcu: goto label_1cc9fc;
        case 0x1cca00u: goto label_1cca00;
        case 0x1cca04u: goto label_1cca04;
        case 0x1cca08u: goto label_1cca08;
        case 0x1cca0cu: goto label_1cca0c;
        case 0x1cca10u: goto label_1cca10;
        case 0x1cca14u: goto label_1cca14;
        case 0x1cca18u: goto label_1cca18;
        case 0x1cca1cu: goto label_1cca1c;
        case 0x1cca20u: goto label_1cca20;
        case 0x1cca24u: goto label_1cca24;
        case 0x1cca28u: goto label_1cca28;
        case 0x1cca2cu: goto label_1cca2c;
        case 0x1cca30u: goto label_1cca30;
        case 0x1cca34u: goto label_1cca34;
        case 0x1cca38u: goto label_1cca38;
        case 0x1cca3cu: goto label_1cca3c;
        case 0x1cca40u: goto label_1cca40;
        case 0x1cca44u: goto label_1cca44;
        case 0x1cca48u: goto label_1cca48;
        case 0x1cca4cu: goto label_1cca4c;
        case 0x1cca50u: goto label_1cca50;
        case 0x1cca54u: goto label_1cca54;
        case 0x1cca58u: goto label_1cca58;
        case 0x1cca5cu: goto label_1cca5c;
        case 0x1cca60u: goto label_1cca60;
        default: break;
    }

    ctx->pc = 0x1cc900u;

label_1cc900:
    // 0x1cc900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cc900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cc904:
    // 0x1cc904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cc908:
    // 0x1cc908: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cc908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cc90c:
    // 0x1cc90c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1cc90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1cc910:
    // 0x1cc910: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1cc910u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cc914:
    // 0x1cc914: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cc918:
    // 0x1cc918: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cc918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc91c:
    // 0x1cc91c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1cc920:
    // 0x1cc920: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cc920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc924:
    // 0x1cc924: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cc924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1cc928:
    // 0x1cc928: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1cc928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc92c:
    // 0x1cc92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cc930:
    // 0x1cc930: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cc934:
    // 0x1cc934: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1cc934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1cc938:
    // 0x1cc938: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1cc938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1cc93c:
    // 0x1cc93c: 0x1636000e  bne         $s1, $s6, . + 4 + (0xE << 2)
label_1cc940:
    if (ctx->pc == 0x1CC940u) {
        ctx->pc = 0x1CC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC93Cu;
        // 0x1cc940: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC944u;
        goto label_1cc944;
    }
    ctx->pc = 0x1CC93Cu;
    {
        const bool branch_taken_0x1cc93c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x1CC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC93Cu;
        // 0x1cc940: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc93c) {
            ctx->pc = 0x1CC978u;
            goto label_1cc978;
        }
    }
    ctx->pc = 0x1CC944u;
label_1cc944:
    // 0x1cc944: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cc944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc948:
    // 0x1cc948: 0xc072f28  jal         func_1CBCA0
label_1cc94c:
    if (ctx->pc == 0x1CC94Cu) {
        ctx->pc = 0x1CC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC948u;
        // 0x1cc94c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC950u;
        goto label_1cc950;
    }
    ctx->pc = 0x1CC948u;
    SET_GPR_U32(ctx, 31, 0x1CC950u);
    ctx->pc = 0x1CC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC948u;
    // 0x1cc94c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC948u, 0x1CC950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC950u;
label_1cc950:
    // 0x1cc950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cc954:
    if (ctx->pc == 0x1CC954u) {
        ctx->pc = 0x1CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC950u;
        // 0x1cc954: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC958u;
        goto label_1cc958;
    }
    ctx->pc = 0x1CC950u;
    {
        const bool branch_taken_0x1cc950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC950u;
        // 0x1cc954: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc950) {
            ctx->pc = 0x1CC978u;
            goto label_1cc978;
        }
    }
    ctx->pc = 0x1CC958u;
label_1cc958:
    // 0x1cc958: 0x10000037  b           . + 4 + (0x37 << 2)
label_1cc95c:
    if (ctx->pc == 0x1CC95Cu) {
        ctx->pc = 0x1CC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC958u;
        // 0x1cc95c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC960u;
        goto label_1cc960;
    }
    ctx->pc = 0x1CC958u;
    {
        const bool branch_taken_0x1cc958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC958u;
        // 0x1cc95c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc958) {
            ctx->pc = 0x1CCA38u;
            goto label_1cca38;
        }
    }
    ctx->pc = 0x1CC960u;
label_1cc960:
    // 0x1cc960: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1cc960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1cc964:
    // 0x1cc964: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc968:
    // 0x1cc968: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1cc968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_1cc96c:
    // 0x1cc96c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1cc970:
    // 0x1cc970: 0x10000030  b           . + 4 + (0x30 << 2)
label_1cc974:
    if (ctx->pc == 0x1CC974u) {
        ctx->pc = 0x1CC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC970u;
        // 0x1cc974: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC978u;
        goto label_1cc978;
    }
    ctx->pc = 0x1CC970u;
    {
        const bool branch_taken_0x1cc970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC970u;
        // 0x1cc974: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc970) {
            ctx->pc = 0x1CCA34u;
            goto label_1cca34;
        }
    }
    ctx->pc = 0x1CC978u;
label_1cc978:
    // 0x1cc978: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x1cc978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1cc97c:
    // 0x1cc97c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cc980:
    // 0x1cc980: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1cc980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1cc984:
    // 0x1cc984: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
label_1cc988:
    if (ctx->pc == 0x1CC988u) {
        ctx->pc = 0x1CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC984u;
        // 0x1cc988: 0x241efffd  addiu       $fp, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC98Cu;
        goto label_1cc98c;
    }
    ctx->pc = 0x1CC984u;
    {
        const bool branch_taken_0x1cc984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC984u;
        // 0x1cc988: 0x241efffd  addiu       $fp, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc984) {
            ctx->pc = 0x1CCA30u;
            goto label_1cca30;
        }
    }
    ctx->pc = 0x1CC98Cu;
label_1cc98c:
    // 0x1cc98c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1cc98cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cc990:
    // 0x1cc990: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1cc990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1cc994:
    // 0x1cc994: 0x0  nop
    ctx->pc = 0x1cc994u;
    // NOP
label_1cc998:
    // 0x1cc998: 0x1090c0  sll         $s2, $s0, 3
    ctx->pc = 0x1cc998u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1cc99c:
    // 0x1cc99c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc9a0:
    // 0x1cc9a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1cc9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1cc9a4:
    // 0x1cc9a4: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1cc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1cc9a8:
    // 0x1cc9a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cc9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cc9ac:
    // 0x1cc9ac: 0x41f42  srl         $v1, $a0, 29
    ctx->pc = 0x1cc9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 29));
label_1cc9b0:
    // 0x1cc9b0: 0x41782  srl         $v0, $a0, 30
    ctx->pc = 0x1cc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 30));
label_1cc9b4:
    // 0x1cc9b4: 0x1446001c  bne         $v0, $a2, . + 4 + (0x1C << 2)
label_1cc9b8:
    if (ctx->pc == 0x1CC9B8u) {
        ctx->pc = 0x1CC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9B4u;
        // 0x1cc9b8: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9BCu;
        goto label_1cc9bc;
    }
    ctx->pc = 0x1CC9B4u;
    {
        const bool branch_taken_0x1cc9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9B4u;
        // 0x1cc9b8: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9b4) {
            ctx->pc = 0x1CCA28u;
            goto label_1cca28;
        }
    }
    ctx->pc = 0x1CC9BCu;
label_1cc9bc:
    // 0x1cc9bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1cc9c0:
    if (ctx->pc == 0x1CC9C0u) {
        ctx->pc = 0x1CC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9BCu;
        // 0x1cc9c0: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9C4u;
        goto label_1cc9c4;
    }
    ctx->pc = 0x1CC9BCu;
    {
        const bool branch_taken_0x1cc9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9BCu;
        // 0x1cc9c0: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9bc) {
            ctx->pc = 0x1CC9CCu;
            goto label_1cc9cc;
        }
    }
    ctx->pc = 0x1CC9C4u;
label_1cc9c4:
    // 0x1cc9c4: 0x129e0018  beq         $s4, $fp, . + 4 + (0x18 << 2)
label_1cc9c8:
    if (ctx->pc == 0x1CC9C8u) {
        ctx->pc = 0x1CC9CCu;
        goto label_1cc9cc;
    }
    ctx->pc = 0x1CC9C4u;
    {
        const bool branch_taken_0x1cc9c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 30));
        if (branch_taken_0x1cc9c4) {
            ctx->pc = 0x1CCA28u;
            goto label_1cca28;
        }
    }
    ctx->pc = 0x1CC9CCu;
label_1cc9cc:
    // 0x1cc9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9d0:
    // 0x1cc9d0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1cc9d4:
    if (ctx->pc == 0x1CC9D4u) {
        ctx->pc = 0x1CC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D0u;
        // 0x1cc9d4: 0x210c3  sra         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9D8u;
        goto label_1cc9d8;
    }
    ctx->pc = 0x1CC9D0u;
    {
        const bool branch_taken_0x1cc9d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D0u;
        // 0x1cc9d4: 0x210c3  sra         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9d0) {
            ctx->pc = 0x1CC9E8u;
            goto label_1cc9e8;
        }
    }
    ctx->pc = 0x1CC9D8u;
label_1cc9d8:
    // 0x1cc9d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1cc9dc:
    if (ctx->pc == 0x1CC9DCu) {
        ctx->pc = 0x1CC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D8u;
        // 0x1cc9dc: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC9E0u;
        goto label_1cc9e0;
    }
    ctx->pc = 0x1CC9D8u;
    {
        const bool branch_taken_0x1cc9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D8u;
        // 0x1cc9dc: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9d8) {
            ctx->pc = 0x1CC9E8u;
            goto label_1cc9e8;
        }
    }
    ctx->pc = 0x1CC9E0u;
label_1cc9e0:
    // 0x1cc9e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1cc9e4:
    // 0x1cc9e4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc9e8:
    // 0x1cc9e8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1cc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1cc9ec:
    // 0x1cc9ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9f0:
    // 0x1cc9f0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1cc9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc9f4:
    // 0x1cc9f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cc9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9f8:
    // 0x1cc9f8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1cc9f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9fc:
    // 0x1cc9fc: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cc9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1cca00:
    // 0x1cca00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cca04:
    // 0x1cca04: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cca04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cca08:
    // 0x1cca08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cca0c:
    // 0x1cca0c: 0x40f809  jalr        $v0
label_1cca10:
    if (ctx->pc == 0x1CCA10u) {
        ctx->pc = 0x1CCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA0Cu;
        // 0x1cca10: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA14u;
        goto label_1cca14;
    }
    ctx->pc = 0x1CCA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCA14u);
        ctx->pc = 0x1CCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA0Cu;
        // 0x1cca10: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA0Cu, 0x1CCA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCA14u;
label_1cca14:
    // 0x1cca14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cca14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cca18:
    // 0x1cca18: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1cca18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cca1c:
    // 0x1cca1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cca20:
    // 0x1cca20: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
label_1cca24:
    if (ctx->pc == 0x1CCA24u) {
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA28u;
        goto label_1cca28;
    }
    ctx->pc = 0x1CCA20u;
    {
        const bool branch_taken_0x1cca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cca20) {
            ctx->pc = 0x1CCA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCA20u;
            // 0x1cca24: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc960;
        }
    }
    ctx->pc = 0x1CCA28u;
label_1cca28:
    // 0x1cca28: 0x5617ffdb  bnel        $s0, $s7, . + 4 + (-0x25 << 2)
label_1cca2c:
    if (ctx->pc == 0x1CCA2Cu) {
        ctx->pc = 0x1CCA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA28u;
        // 0x1cca2c: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA30u;
        goto label_1cca30;
    }
    ctx->pc = 0x1CCA28u;
    {
        const bool branch_taken_0x1cca28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x1cca28) {
            ctx->pc = 0x1CCA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCA28u;
            // 0x1cca2c: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc998;
        }
    }
    ctx->pc = 0x1CCA30u;
label_1cca30:
    // 0x1cca30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cca34:
    // 0x1cca34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cca34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cca38:
    // 0x1cca38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cca38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cca3c:
    // 0x1cca3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cca3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cca40:
    // 0x1cca40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cca40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cca44:
    // 0x1cca44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cca44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cca48:
    // 0x1cca48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cca48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cca4c:
    // 0x1cca4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cca4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cca50:
    // 0x1cca50: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1cca50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cca54:
    // 0x1cca54: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1cca54u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cca58:
    // 0x1cca58: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1cca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1cca5c:
    // 0x1cca5c: 0x3e00008  jr          $ra
label_1cca60:
    if (ctx->pc == 0x1CCA60u) {
        ctx->pc = 0x1CCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA5Cu;
        // 0x1cca60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA64u;
        goto label_fallthrough_0x1cca5c;
    }
    ctx->pc = 0x1CCA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA5Cu;
        // 0x1cca60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cca5c:
    ctx->pc = 0x1CCA64u;
}

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

// Function: Cmd_OBJ_LOCALPOST_Entry__FP15BsSCDEntControl
// Address: 0x107038 - 0x10717c
void Cmd_OBJ_LOCALPOST_Entry__FP15BsSCDEntControl_0x107038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_LOCALPOST_Entry__FP15BsSCDEntControl_0x107038");
#endif

    switch (ctx->pc) {
        case 0x107038u: goto label_107038;
        case 0x10703cu: goto label_10703c;
        case 0x107040u: goto label_107040;
        case 0x107044u: goto label_107044;
        case 0x107048u: goto label_107048;
        case 0x10704cu: goto label_10704c;
        case 0x107050u: goto label_107050;
        case 0x107054u: goto label_107054;
        case 0x107058u: goto label_107058;
        case 0x10705cu: goto label_10705c;
        case 0x107060u: goto label_107060;
        case 0x107064u: goto label_107064;
        case 0x107068u: goto label_107068;
        case 0x10706cu: goto label_10706c;
        case 0x107070u: goto label_107070;
        case 0x107074u: goto label_107074;
        case 0x107078u: goto label_107078;
        case 0x10707cu: goto label_10707c;
        case 0x107080u: goto label_107080;
        case 0x107084u: goto label_107084;
        case 0x107088u: goto label_107088;
        case 0x10708cu: goto label_10708c;
        case 0x107090u: goto label_107090;
        case 0x107094u: goto label_107094;
        case 0x107098u: goto label_107098;
        case 0x10709cu: goto label_10709c;
        case 0x1070a0u: goto label_1070a0;
        case 0x1070a4u: goto label_1070a4;
        case 0x1070a8u: goto label_1070a8;
        case 0x1070acu: goto label_1070ac;
        case 0x1070b0u: goto label_1070b0;
        case 0x1070b4u: goto label_1070b4;
        case 0x1070b8u: goto label_1070b8;
        case 0x1070bcu: goto label_1070bc;
        case 0x1070c0u: goto label_1070c0;
        case 0x1070c4u: goto label_1070c4;
        case 0x1070c8u: goto label_1070c8;
        case 0x1070ccu: goto label_1070cc;
        case 0x1070d0u: goto label_1070d0;
        case 0x1070d4u: goto label_1070d4;
        case 0x1070d8u: goto label_1070d8;
        case 0x1070dcu: goto label_1070dc;
        case 0x1070e0u: goto label_1070e0;
        case 0x1070e4u: goto label_1070e4;
        case 0x1070e8u: goto label_1070e8;
        case 0x1070ecu: goto label_1070ec;
        case 0x1070f0u: goto label_1070f0;
        case 0x1070f4u: goto label_1070f4;
        case 0x1070f8u: goto label_1070f8;
        case 0x1070fcu: goto label_1070fc;
        case 0x107100u: goto label_107100;
        case 0x107104u: goto label_107104;
        case 0x107108u: goto label_107108;
        case 0x10710cu: goto label_10710c;
        case 0x107110u: goto label_107110;
        case 0x107114u: goto label_107114;
        case 0x107118u: goto label_107118;
        case 0x10711cu: goto label_10711c;
        case 0x107120u: goto label_107120;
        case 0x107124u: goto label_107124;
        case 0x107128u: goto label_107128;
        case 0x10712cu: goto label_10712c;
        case 0x107130u: goto label_107130;
        case 0x107134u: goto label_107134;
        case 0x107138u: goto label_107138;
        case 0x10713cu: goto label_10713c;
        case 0x107140u: goto label_107140;
        case 0x107144u: goto label_107144;
        case 0x107148u: goto label_107148;
        case 0x10714cu: goto label_10714c;
        case 0x107150u: goto label_107150;
        case 0x107154u: goto label_107154;
        case 0x107158u: goto label_107158;
        case 0x10715cu: goto label_10715c;
        case 0x107160u: goto label_107160;
        case 0x107164u: goto label_107164;
        case 0x107168u: goto label_107168;
        case 0x10716cu: goto label_10716c;
        case 0x107170u: goto label_107170;
        case 0x107174u: goto label_107174;
        case 0x107178u: goto label_107178;
        default: break;
    }

    ctx->pc = 0x107038u;

label_107038:
    // 0x107038: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x107038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10703c:
    // 0x10703c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10703cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107040:
    // 0x107040: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x107040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_107044:
    // 0x107044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107048:
    // 0x107048: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x107048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_10704c:
    // 0x10704c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10704cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107050:
    // 0x107050: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x107050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_107054:
    // 0x107054: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x107054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_107058:
    // 0x107058: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x107058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_10705c:
    // 0x10705c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x10705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_107060:
    // 0x107060: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x107060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_107064:
    // 0x107064: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x107064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_107068:
    // 0x107068: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x107068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_10706c:
    // 0x10706c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10706cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107070:
    // 0x107070: 0xc04110c  jal         func_104430
label_107074:
    if (ctx->pc == 0x107074u) {
        ctx->pc = 0x107074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107070u;
        // 0x107074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107078u;
        goto label_107078;
    }
    ctx->pc = 0x107070u;
    SET_GPR_U32(ctx, 31, 0x107078u);
    ctx->pc = 0x107074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107070u;
    // 0x107074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x107070u, 0x107078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107078u;
label_107078:
    // 0x107078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10707c:
    // 0x10707c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10707cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107080:
    // 0x107080: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x107080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107084:
    // 0x107084: 0xc04110c  jal         func_104430
label_107088:
    if (ctx->pc == 0x107088u) {
        ctx->pc = 0x107088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107084u;
        // 0x107088: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10708Cu;
        goto label_10708c;
    }
    ctx->pc = 0x107084u;
    SET_GPR_U32(ctx, 31, 0x10708Cu);
    ctx->pc = 0x107088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107084u;
    // 0x107088: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x107084u, 0x10708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10708Cu;
label_10708c:
    // 0x10708c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10708cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107090:
    // 0x107090: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x107090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_107094:
    // 0x107094: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x107094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_107098:
    // 0x107098: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x107098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_10709c:
    // 0x10709c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1070a0:
    if (ctx->pc == 0x1070A0u) {
        ctx->pc = 0x1070A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10709Cu;
        // 0x1070a0: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070A4u;
        goto label_1070a4;
    }
    ctx->pc = 0x10709Cu;
    {
        const bool branch_taken_0x10709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10709Cu;
        // 0x1070a0: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10709c) {
            ctx->pc = 0x107158u;
            goto label_107158;
        }
    }
    ctx->pc = 0x1070A4u;
label_1070a4:
    // 0x1070a4: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x1070a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_1070a8:
    // 0x1070a8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1070a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_1070ac:
    // 0x1070ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1070b0:
    if (ctx->pc == 0x1070B0u) {
        ctx->pc = 0x1070B4u;
        goto label_1070b4;
    }
    ctx->pc = 0x1070ACu;
    {
        const bool branch_taken_0x1070ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1070ac) {
            ctx->pc = 0x1070BCu;
            goto label_1070bc;
        }
    }
    ctx->pc = 0x1070B4u;
label_1070b4:
    // 0x1070b4: 0xc061920  jal         func_186480
label_1070b8:
    if (ctx->pc == 0x1070B8u) {
        ctx->pc = 0x1070B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070B4u;
        // 0x1070b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070BCu;
        goto label_1070bc;
    }
    ctx->pc = 0x1070B4u;
    SET_GPR_U32(ctx, 31, 0x1070BCu);
    ctx->pc = 0x1070B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070B4u;
    // 0x1070b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1070B4u, 0x1070BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070BCu;
label_1070bc:
    // 0x1070bc: 0xc061422  jal         func_185088
label_1070c0:
    if (ctx->pc == 0x1070C0u) {
        ctx->pc = 0x1070C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070BCu;
        // 0x1070c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070C4u;
        goto label_1070c4;
    }
    ctx->pc = 0x1070BCu;
    SET_GPR_U32(ctx, 31, 0x1070C4u);
    ctx->pc = 0x1070C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070BCu;
    // 0x1070c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1070BCu, 0x1070C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070C4u;
label_1070c4:
    // 0x1070c4: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_1070c8:
    // 0x1070c8: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x1070c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1070cc:
    // 0x1070cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1070ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1070d0:
    // 0x1070d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1070d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1070d4:
    // 0x1070d4: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1070d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1070d8:
    // 0x1070d8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1070d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_1070dc:
    // 0x1070dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1070dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1070e0:
    // 0x1070e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1070e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1070e4:
    // 0x1070e4: 0xc0614f6  jal         func_1853D8
label_1070e8:
    if (ctx->pc == 0x1070E8u) {
        ctx->pc = 0x1070E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070E4u;
        // 0x1070e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070ECu;
        goto label_1070ec;
    }
    ctx->pc = 0x1070E4u;
    SET_GPR_U32(ctx, 31, 0x1070ECu);
    ctx->pc = 0x1070E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070E4u;
    // 0x1070e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x1070E4u, 0x1070ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070ECu;
label_1070ec:
    // 0x1070ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1070ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1070f0:
    // 0x1070f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1070f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1070f4:
    // 0x1070f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1070f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1070f8:
    // 0x1070f8: 0xc061468  jal         func_1851A0
label_1070fc:
    if (ctx->pc == 0x1070FCu) {
        ctx->pc = 0x1070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070F8u;
        // 0x1070fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107100u;
        goto label_107100;
    }
    ctx->pc = 0x1070F8u;
    SET_GPR_U32(ctx, 31, 0x107100u);
    ctx->pc = 0x1070FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070F8u;
    // 0x1070fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x1070F8u, 0x107100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107100u;
label_107100:
    // 0x107100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x107100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107104:
    // 0x107104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107108:
    // 0x107108: 0xc0674a2  jal         func_19D288
label_10710c:
    if (ctx->pc == 0x10710Cu) {
        ctx->pc = 0x10710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107108u;
        // 0x10710c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107110u;
        goto label_107110;
    }
    ctx->pc = 0x107108u;
    SET_GPR_U32(ctx, 31, 0x107110u);
    ctx->pc = 0x10710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107108u;
    // 0x10710c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x107108u, 0x107110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107110u;
label_107110:
    // 0x107110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_107114:
    // 0x107114: 0xc041160  jal         func_104580
label_107118:
    if (ctx->pc == 0x107118u) {
        ctx->pc = 0x107118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107114u;
        // 0x107118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10711Cu;
        goto label_10711c;
    }
    ctx->pc = 0x107114u;
    SET_GPR_U32(ctx, 31, 0x10711Cu);
    ctx->pc = 0x107118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107114u;
    // 0x107118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x107114u, 0x10711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10711Cu;
label_10711c:
    // 0x10711c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_107120:
    // 0x107120: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x107120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_107124:
    // 0x107124: 0xc04112e  jal         func_1044B8
label_107128:
    if (ctx->pc == 0x107128u) {
        ctx->pc = 0x107128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107124u;
        // 0x107128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10712Cu;
        goto label_10712c;
    }
    ctx->pc = 0x107124u;
    SET_GPR_U32(ctx, 31, 0x10712Cu);
    ctx->pc = 0x107128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107124u;
    // 0x107128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x107124u, 0x10712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10712Cu;
label_10712c:
    // 0x10712c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x10712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_107130:
    // 0x107130: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_107134:
    // 0x107134: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x107134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_107138:
    // 0x107138: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10713c:
    // 0x10713c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107140:
    // 0x107140: 0x60f809  jalr        $v1
label_107144:
    if (ctx->pc == 0x107144u) {
        ctx->pc = 0x107144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107140u;
        // 0x107144: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107148u;
        goto label_107148;
    }
    ctx->pc = 0x107140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107148u);
        ctx->pc = 0x107144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107140u;
        // 0x107144: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107140u, 0x107148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107148u;
label_107148:
    // 0x107148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10714c:
    // 0x10714c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10714cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107150:
    // 0x107150: 0xc0618da  jal         func_186368
label_107154:
    if (ctx->pc == 0x107154u) {
        ctx->pc = 0x107154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107150u;
        // 0x107154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107158u;
        goto label_107158;
    }
    ctx->pc = 0x107150u;
    SET_GPR_U32(ctx, 31, 0x107158u);
    ctx->pc = 0x107154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107150u;
    // 0x107154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x107150u, 0x107158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107158u;
label_107158:
    // 0x107158: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x107158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10715c:
    // 0x10715c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x10715cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_107160:
    // 0x107160: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x107160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_107164:
    // 0x107164: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x107164u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_107168:
    // 0x107168: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107168u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10716c:
    // 0x10716c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x10716cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_107170:
    // 0x107170: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x107170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_107174:
    // 0x107174: 0x3e00008  jr          $ra
label_107178:
    if (ctx->pc == 0x107178u) {
        ctx->pc = 0x107178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107174u;
        // 0x107178: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10717Cu;
        goto label_fallthrough_0x107174;
    }
    ctx->pc = 0x107174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107174u;
        // 0x107178: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x107174:
    ctx->pc = 0x10717Cu;
}

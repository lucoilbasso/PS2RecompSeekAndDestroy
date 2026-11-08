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

// Function: initAll
// Address: 0x1704d0 - 0x170858
void initAll_0x1704d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initAll_0x1704d0");
#endif

    switch (ctx->pc) {
        case 0x170510u: goto label_170510;
        case 0x170518u: goto label_170518;
        case 0x170564u: goto label_170564;
        case 0x170588u: goto label_170588;
        case 0x1705a8u: goto label_1705a8;
        case 0x1705d8u: goto label_1705d8;
        case 0x170638u: goto label_170638;
        case 0x170708u: goto label_170708;
        case 0x170750u: goto label_170750;
        case 0x170760u: goto label_170760;
        case 0x17079cu: goto label_17079c;
        case 0x1707acu: goto label_1707ac;
        case 0x1707b0u: goto label_1707b0;
        case 0x1707bcu: goto label_1707bc;
        case 0x1707d4u: goto label_1707d4;
        case 0x1707e4u: goto label_1707e4;
        case 0x170804u: goto label_170804;
        case 0x170810u: goto label_170810;
        case 0x170828u: goto label_170828;
        case 0x170834u: goto label_170834;
        default: break;
    }

    ctx->pc = 0x1704d0u;

    // 0x1704d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1704d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1704d4: 0x8f8291a4  lw          $v0, -0x6E5C($gp)
    ctx->pc = 0x1704d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x1704d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1704d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1704dc: 0x3c1000a8  lui         $s0, 0xA8
    ctx->pc = 0x1704dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)168 << 16));
    // 0x1704e0: 0x361096c0  ori         $s0, $s0, 0x96C0
    ctx->pc = 0x1704e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)38592);
    // 0x1704e4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1704e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1704e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1704e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704ec: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1704ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1704f0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1704f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1704f4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1704f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1704f8: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1704f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1704fc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1704fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x170500: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x170500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x170504: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x170504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x170508: 0xc05c324  jal         func_170C90
    ctx->pc = 0x170508u;
    SET_GPR_U32(ctx, 31, 0x170510u);
    ctx->pc = 0x17050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170508u;
    // 0x17050c: 0x26911368  addiu       $s1, $s4, 0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170C90u, 0x170508u, 0x170510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170510u;
label_170510:
    // 0x170510: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x170510u;
    SET_GPR_U32(ctx, 31, 0x170518u);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x170510u, 0x170518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170518u;
label_170518:
    // 0x170518: 0x8f8791a4  lw          $a3, -0x6E5C($gp)
    ctx->pc = 0x170518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x17051c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x170520: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x170520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x170524: 0x3c0a00b6  lui         $t2, 0xB6
    ctx->pc = 0x170524u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)182 << 16));
    // 0x170528: 0x354a9700  ori         $t2, $t2, 0x9700
    ctx->pc = 0x170528u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)38656);
    // 0x17052c: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x17052cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x170530: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x170530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x170534: 0x35084f00  ori         $t0, $t0, 0x4F00
    ctx->pc = 0x170534u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20224);
    // 0x170538: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x170538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17053c: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x17053cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x170540: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x170540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x170544: 0x34a55f40  ori         $a1, $a1, 0x5F40
    ctx->pc = 0x170544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24384);
    // 0x170548: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x170548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17054c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17054cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170550: 0x3c0100ae  lui         $at, 0xAE
    ctx->pc = 0x170550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)174 << 16));
    // 0x170554: 0x34215700  ori         $at, $at, 0x5700
    ctx->pc = 0x170554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22272);
    // 0x170558: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x170558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x17055c: 0xc05c590  jal         func_171640
    ctx->pc = 0x17055Cu;
    SET_GPR_U32(ctx, 31, 0x170564u);
    ctx->pc = 0x170560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17055Cu;
    // 0x170560: 0x34c62f68  ori         $a2, $a2, 0x2F68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12136);
    ctx->in_delay_slot = false;
    ctx->pc = 0x171640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171640u, 0x17055Cu, 0x170564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170564u;
label_170564:
    // 0x170564: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x170564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170568: 0x8f8591a4  lw          $a1, -0x6E5C($gp)
    ctx->pc = 0x170568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x17056c: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x17056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x170570: 0x3406c000  ori         $a2, $zero, 0xC000
    ctx->pc = 0x170570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x170574: 0x3c0100ad  lui         $at, 0xAD
    ctx->pc = 0x170574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)173 << 16));
    // 0x170578: 0x34219700  ori         $at, $at, 0x9700
    ctx->pc = 0x170578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38656);
    // 0x17057c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x17057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x170580: 0xc05c382  jal         func_170E08
    ctx->pc = 0x170580u;
    SET_GPR_U32(ctx, 31, 0x170588u);
    ctx->pc = 0x170584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170580u;
    // 0x170584: 0x24076000  addiu       $a3, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170E08u, 0x170580u, 0x170588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170588u;
label_170588:
    // 0x170588: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x170588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x17058c: 0x8f8891a4  lw          $t0, -0x6E5C($gp)
    ctx->pc = 0x17058cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170590: 0x24e70968  addiu       $a3, $a3, 0x968
    ctx->pc = 0x170590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2408));
    // 0x170594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17059c: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x17059cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1705a0: 0xc05c5d8  jal         func_171760
    ctx->pc = 0x1705A0u;
    SET_GPR_U32(ctx, 31, 0x1705A8u);
    ctx->pc = 0x1705A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1705A0u;
    // 0x1705a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171760u, 0x1705A0u, 0x1705A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705A8u;
label_1705a8:
    // 0x1705a8: 0x8f838bd8  lw          $v1, -0x7428($gp)
    ctx->pc = 0x1705a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937560)));
    // 0x1705ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1705ACu;
    {
        const bool branch_taken_0x1705ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705ACu;
        // 0x1705b0: 0x8f8891a4  lw          $t0, -0x6E5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705ac) {
            ctx->pc = 0x1705D8u;
            goto label_1705d8;
        }
    }
    ctx->pc = 0x1705B4u;
    // 0x1705b4: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x1705b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x1705b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1705b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705bc: 0x24e70a88  addiu       $a3, $a3, 0xA88
    ctx->pc = 0x1705bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2696));
    // 0x1705c0: 0x3c0100a8  lui         $at, 0xA8
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)168 << 16));
    // 0x1705c4: 0x342196c0  ori         $at, $at, 0x96C0
    ctx->pc = 0x1705c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38592);
    // 0x1705c8: 0x284021  addu        $t0, $at, $t0
    ctx->pc = 0x1705c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 8)));
    // 0x1705cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1705ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1705d0: 0xc05c5d8  jal         func_171760
    ctx->pc = 0x1705D0u;
    SET_GPR_U32(ctx, 31, 0x1705D8u);
    ctx->pc = 0x1705D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1705D0u;
    // 0x1705d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171760u, 0x1705D0u, 0x1705D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705D8u;
label_1705d8:
    // 0x1705d8: 0x3c130023  lui         $s3, 0x23
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35 << 16));
    // 0x1705dc: 0x3c120023  lui         $s2, 0x23
    ctx->pc = 0x1705dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)35 << 16));
    // 0x1705e0: 0x3c190023  lui         $t9, 0x23
    ctx->pc = 0x1705e0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)35 << 16));
    // 0x1705e4: 0x3c180042  lui         $t8, 0x42
    ctx->pc = 0x1705e4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)66 << 16));
    // 0x1705e8: 0x3c110023  lui         $s1, 0x23
    ctx->pc = 0x1705e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)35 << 16));
    // 0x1705ec: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x1705ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x1705f0: 0x3c0f0023  lui         $t7, 0x23
    ctx->pc = 0x1705f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)35 << 16));
    // 0x1705f4: 0x3c0e007a  lui         $t6, 0x7A
    ctx->pc = 0x1705f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)122 << 16));
    // 0x1705f8: 0x3c0d0004  lui         $t5, 0x4
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4 << 16));
    // 0x1705fc: 0x3c0c0006  lui         $t4, 0x6
    ctx->pc = 0x1705fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)6 << 16));
    // 0x170600: 0x36732840  ori         $s3, $s3, 0x2840
    ctx->pc = 0x170600u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)10304);
    // 0x170604: 0x36522e00  ori         $s2, $s2, 0x2E00
    ctx->pc = 0x170604u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)11776);
    // 0x170608: 0x373929c0  ori         $t9, $t9, 0x29C0
    ctx->pc = 0x170608u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)10688);
    // 0x17060c: 0x37188200  ori         $t8, $t8, 0x8200
    ctx->pc = 0x17060cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)33280);
    // 0x170610: 0x36312b40  ori         $s1, $s1, 0x2B40
    ctx->pc = 0x170610u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)11072);
    // 0x170614: 0x3610d600  ori         $s0, $s0, 0xD600
    ctx->pc = 0x170614u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54784);
    // 0x170618: 0x35ef2cc0  ori         $t7, $t7, 0x2CC0
    ctx->pc = 0x170618u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)11456);
    // 0x17061c: 0x35ce9280  ori         $t6, $t6, 0x9280
    ctx->pc = 0x17061cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)37504);
    // 0x170620: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17062c: 0x35adf280  ori         $t5, $t5, 0xF280
    ctx->pc = 0x17062cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)62080);
    // 0x170630: 0x358c4400  ori         $t4, $t4, 0x4400
    ctx->pc = 0x170630u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)17408);
    // 0x170634: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x170634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_170638:
    // 0x170638: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x170638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x17063c: 0x1132021  addu        $a0, $t0, $s3
    ctx->pc = 0x17063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x170640: 0x1192821  addu        $a1, $t0, $t9
    ctx->pc = 0x170640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x170644: 0x1113021  addu        $a2, $t0, $s1
    ctx->pc = 0x170644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x170648: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x170648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17064c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170650: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x170650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170654: 0x10f3821  addu        $a3, $t0, $t7
    ctx->pc = 0x170654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x170658: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x170658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17065c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x17065cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x170660: 0x25080044  addiu       $t0, $t0, 0x44
    ctx->pc = 0x170660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
    // 0x170664: 0x8f8291a4  lw          $v0, -0x6E5C($gp)
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170668: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x170668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17066c: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x17066cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x170670: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x170670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170674: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x170674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x170678: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x170678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17067c: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x17067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170680: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x170684: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x170684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170688: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x170688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17068c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17068cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x170690: 0x8f8491a4  lw          $a0, -0x6E5C($gp)
    ctx->pc = 0x170690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170694: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x170694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x170698: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x170698u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x17069c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x17069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1706a0: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x1706a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1706a4: 0x561ffe4  bgez        $t3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1706A4u;
    {
        const bool branch_taken_0x1706a4 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1706A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706A4u;
        // 0x1706a8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706a4) {
            ctx->pc = 0x170638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170638;
        }
    }
    ctx->pc = 0x1706ACu;
    // 0x1706ac: 0x8f8891a4  lw          $t0, -0x6E5C($gp)
    ctx->pc = 0x1706acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x1706b0: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x1706b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x1706b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1706b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1706b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1706b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1706bc: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x1706bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1706c0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1706c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1706c4: 0x3c090023  lui         $t1, 0x23
    ctx->pc = 0x1706c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)35 << 16));
    // 0x1706c8: 0x35292c80  ori         $t1, $t1, 0x2C80
    ctx->pc = 0x1706c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11392);
    // 0x1706cc: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1706ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1706d0: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1706d4: 0x34c62800  ori         $a2, $a2, 0x2800
    ctx->pc = 0x1706d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10240);
    // 0x1706d8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1706d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1706dc: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x1706dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x1706e0: 0x34e72980  ori         $a3, $a3, 0x2980
    ctx->pc = 0x1706e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10624);
    // 0x1706e4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1706e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1706e8: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1706e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1706ec: 0x34212b00  ori         $at, $at, 0x2B00
    ctx->pc = 0x1706ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11008);
    // 0x1706f0: 0x284021  addu        $t0, $at, $t0
    ctx->pc = 0x1706f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 8)));
    // 0x1706f4: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x1706f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1706f8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1706f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1706fc: 0x248412a8  addiu       $a0, $a0, 0x12A8
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
    // 0x170700: 0xc05cf36  jal         func_173CD8
    ctx->pc = 0x170700u;
    SET_GPR_U32(ctx, 31, 0x170708u);
    ctx->pc = 0x170704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170700u;
    // 0x170704: 0x24110023  addiu       $s1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173CD8u, 0x170700u, 0x170708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170708u;
label_170708:
    // 0x170708: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x170708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x17070c: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x17070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x170710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170714: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x170714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x170718: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x170718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x17071c: 0x3c0100a8  lui         $at, 0xA8
    ctx->pc = 0x17071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)168 << 16));
    // 0x170720: 0x34218ec0  ori         $at, $at, 0x8EC0
    ctx->pc = 0x170720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36544);
    // 0x170724: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x170728: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x170728u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x17072c: 0x26104870  addiu       $s0, $s0, 0x4870
    ctx->pc = 0x17072cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18544));
    // 0x170730: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x170730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x170734: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x170734u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x170738: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x170738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x17073c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17073cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x170740: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x170740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x170744: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x170744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x170748: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x170748u;
    SET_GPR_U32(ctx, 31, 0x170750u);
    ctx->pc = 0x17074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170748u;
    // 0x17074c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x170748u, 0x170750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170750u;
label_170750:
    // 0x170750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170758: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x170758u;
    SET_GPR_U32(ctx, 31, 0x170760u);
    ctx->pc = 0x17075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170758u;
    // 0x17075c: 0xaf829198  sw          $v0, -0x6E68($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939032), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x170758u, 0x170760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170760u;
label_170760:
    // 0x170760: 0x8f8391a4  lw          $v1, -0x6E5C($gp)
    ctx->pc = 0x170760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170764: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x170764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x170768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x170768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17076c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x17076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x170770: 0x3c0100b6  lui         $at, 0xB6
    ctx->pc = 0x170770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)182 << 16));
    // 0x170774: 0x34215700  ori         $at, $at, 0x5700
    ctx->pc = 0x170774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22272);
    // 0x170778: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x170778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x17077c: 0x244219b8  addiu       $v0, $v0, 0x19B8
    ctx->pc = 0x17077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6584));
    // 0x170780: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x170780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x170784: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x170784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x170788: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x170788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17078c: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x17078cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x170790: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x170790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x170794: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x170794u;
    SET_GPR_U32(ctx, 31, 0x17079Cu);
    ctx->pc = 0x170798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170794u;
    // 0x170798: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x170794u, 0x17079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17079Cu;
label_17079c:
    // 0x17079c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17079cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707a0: 0x26851368  addiu       $a1, $s4, 0x1368
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4968));
    // 0x1707a4: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x1707A4u;
    SET_GPR_U32(ctx, 31, 0x1707ACu);
    ctx->pc = 0x1707A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707A4u;
    // 0x1707a8: 0xaf82919c  sw          $v0, -0x6E64($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x1707A4u, 0x1707ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707ACu;
label_1707ac:
    // 0x1707ac: 0xaf808bf0  sw          $zero, -0x7410($gp)
    ctx->pc = 0x1707acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937584), GPR_U32(ctx, 0));
label_1707b0:
    // 0x1707b0: 0x26441438  addiu       $a0, $s2, 0x1438
    ctx->pc = 0x1707b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5176));
    // 0x1707b4: 0xc05d308  jal         func_174C20
    ctx->pc = 0x1707B4u;
    SET_GPR_U32(ctx, 31, 0x1707BCu);
    ctx->pc = 0x1707B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707B4u;
    // 0x1707b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C20u, 0x1707B4u, 0x1707BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707BCu;
label_1707bc:
    // 0x1707bc: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1707BCu;
    {
        const bool branch_taken_0x1707bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707BCu;
        // 0x1707c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707bc) {
            ctx->pc = 0x1707B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1707b0;
        }
    }
    ctx->pc = 0x1707C4u;
    // 0x1707c4: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1707c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1707c8: 0x24a54a00  addiu       $a1, $a1, 0x4A00
    ctx->pc = 0x1707c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18944));
    // 0x1707cc: 0xc06bc50  jal         func_1AF140
    ctx->pc = 0x1707CCu;
    SET_GPR_U32(ctx, 31, 0x1707D4u);
    ctx->pc = 0x1707D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707CCu;
    // 0x1707d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF140u, 0x1707CCu, 0x1707D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707D4u;
label_1707d4:
    // 0x1707d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1707d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1707d8: 0x26901368  addiu       $s0, $s4, 0x1368
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4968));
    // 0x1707dc: 0xc06bfea  jal         func_1AFFA8
    ctx->pc = 0x1707DCu;
    SET_GPR_U32(ctx, 31, 0x1707E4u);
    ctx->pc = 0x1707E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707DCu;
    // 0x1707e0: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFFA8u, 0x1707DCu, 0x1707E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707E4u;
label_1707e4:
    // 0x1707e4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1707e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1707e8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1707e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1707ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1707ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1707f0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1707f0u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1707f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1707f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1707f8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1707f8u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x1707fc: 0xc06af3e  jal         func_1ABCF8
    ctx->pc = 0x1707FCu;
    SET_GPR_U32(ctx, 31, 0x170804u);
    ctx->pc = 0x1ABCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCF8u, 0x1707FCu, 0x170804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170804u;
label_170804:
    // 0x170804: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x170804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x170808: 0xc06af0c  jal         func_1ABC30
    ctx->pc = 0x170808u;
    SET_GPR_U32(ctx, 31, 0x170810u);
    ctx->pc = 0x17080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170808u;
    // 0x17080c: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC30u, 0x170808u, 0x170810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170810u;
label_170810:
    // 0x170810: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x170810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x170814: 0x24a54b88  addiu       $a1, $a1, 0x4B88
    ctx->pc = 0x170814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19336));
    // 0x170818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17081c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170820: 0xc06bc50  jal         func_1AF140
    ctx->pc = 0x170820u;
    SET_GPR_U32(ctx, 31, 0x170828u);
    ctx->pc = 0x170824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170820u;
    // 0x170824: 0xff8291a8  sd          $v0, -0x6E58($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294939048), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF140u, 0x170820u, 0x170828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170828u;
label_170828:
    // 0x170828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17082c: 0xc06bfea  jal         func_1AFFA8
    ctx->pc = 0x17082Cu;
    SET_GPR_U32(ctx, 31, 0x170834u);
    ctx->pc = 0x170830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17082Cu;
    // 0x170830: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFFA8u, 0x17082Cu, 0x170834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170834u;
label_170834:
    // 0x170834: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x170834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170838: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x170838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17083c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x17083cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170840: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x170840u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x170844: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x170844u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170848: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x170848u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17084c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170850: 0x3e00008  jr          $ra
    ctx->pc = 0x170850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170850u;
        // 0x170854: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170858u;
}

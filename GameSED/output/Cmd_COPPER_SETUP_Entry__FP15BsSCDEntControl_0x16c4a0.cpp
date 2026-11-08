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

// Function: Cmd_COPPER_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x16c4a0 - 0x16c700
void Cmd_COPPER_SETUP_Entry__FP15BsSCDEntControl_0x16c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_COPPER_SETUP_Entry__FP15BsSCDEntControl_0x16c4a0");
#endif

    switch (ctx->pc) {
        case 0x16c4a0u: goto label_16c4a0;
        case 0x16c4a4u: goto label_16c4a4;
        case 0x16c4a8u: goto label_16c4a8;
        case 0x16c4acu: goto label_16c4ac;
        case 0x16c4b0u: goto label_16c4b0;
        case 0x16c4b4u: goto label_16c4b4;
        case 0x16c4b8u: goto label_16c4b8;
        case 0x16c4bcu: goto label_16c4bc;
        case 0x16c4c0u: goto label_16c4c0;
        case 0x16c4c4u: goto label_16c4c4;
        case 0x16c4c8u: goto label_16c4c8;
        case 0x16c4ccu: goto label_16c4cc;
        case 0x16c4d0u: goto label_16c4d0;
        case 0x16c4d4u: goto label_16c4d4;
        case 0x16c4d8u: goto label_16c4d8;
        case 0x16c4dcu: goto label_16c4dc;
        case 0x16c4e0u: goto label_16c4e0;
        case 0x16c4e4u: goto label_16c4e4;
        case 0x16c4e8u: goto label_16c4e8;
        case 0x16c4ecu: goto label_16c4ec;
        case 0x16c4f0u: goto label_16c4f0;
        case 0x16c4f4u: goto label_16c4f4;
        case 0x16c4f8u: goto label_16c4f8;
        case 0x16c4fcu: goto label_16c4fc;
        case 0x16c500u: goto label_16c500;
        case 0x16c504u: goto label_16c504;
        case 0x16c508u: goto label_16c508;
        case 0x16c50cu: goto label_16c50c;
        case 0x16c510u: goto label_16c510;
        case 0x16c514u: goto label_16c514;
        case 0x16c518u: goto label_16c518;
        case 0x16c51cu: goto label_16c51c;
        case 0x16c520u: goto label_16c520;
        case 0x16c524u: goto label_16c524;
        case 0x16c528u: goto label_16c528;
        case 0x16c52cu: goto label_16c52c;
        case 0x16c530u: goto label_16c530;
        case 0x16c534u: goto label_16c534;
        case 0x16c538u: goto label_16c538;
        case 0x16c53cu: goto label_16c53c;
        case 0x16c540u: goto label_16c540;
        case 0x16c544u: goto label_16c544;
        case 0x16c548u: goto label_16c548;
        case 0x16c54cu: goto label_16c54c;
        case 0x16c550u: goto label_16c550;
        case 0x16c554u: goto label_16c554;
        case 0x16c558u: goto label_16c558;
        case 0x16c55cu: goto label_16c55c;
        case 0x16c560u: goto label_16c560;
        case 0x16c564u: goto label_16c564;
        case 0x16c568u: goto label_16c568;
        case 0x16c56cu: goto label_16c56c;
        case 0x16c570u: goto label_16c570;
        case 0x16c574u: goto label_16c574;
        case 0x16c578u: goto label_16c578;
        case 0x16c57cu: goto label_16c57c;
        case 0x16c580u: goto label_16c580;
        case 0x16c584u: goto label_16c584;
        case 0x16c588u: goto label_16c588;
        case 0x16c58cu: goto label_16c58c;
        case 0x16c590u: goto label_16c590;
        case 0x16c594u: goto label_16c594;
        case 0x16c598u: goto label_16c598;
        case 0x16c59cu: goto label_16c59c;
        case 0x16c5a0u: goto label_16c5a0;
        case 0x16c5a4u: goto label_16c5a4;
        case 0x16c5a8u: goto label_16c5a8;
        case 0x16c5acu: goto label_16c5ac;
        case 0x16c5b0u: goto label_16c5b0;
        case 0x16c5b4u: goto label_16c5b4;
        case 0x16c5b8u: goto label_16c5b8;
        case 0x16c5bcu: goto label_16c5bc;
        case 0x16c5c0u: goto label_16c5c0;
        case 0x16c5c4u: goto label_16c5c4;
        case 0x16c5c8u: goto label_16c5c8;
        case 0x16c5ccu: goto label_16c5cc;
        case 0x16c5d0u: goto label_16c5d0;
        case 0x16c5d4u: goto label_16c5d4;
        case 0x16c5d8u: goto label_16c5d8;
        case 0x16c5dcu: goto label_16c5dc;
        case 0x16c5e0u: goto label_16c5e0;
        case 0x16c5e4u: goto label_16c5e4;
        case 0x16c5e8u: goto label_16c5e8;
        case 0x16c5ecu: goto label_16c5ec;
        case 0x16c5f0u: goto label_16c5f0;
        case 0x16c5f4u: goto label_16c5f4;
        case 0x16c5f8u: goto label_16c5f8;
        case 0x16c5fcu: goto label_16c5fc;
        case 0x16c600u: goto label_16c600;
        case 0x16c604u: goto label_16c604;
        case 0x16c608u: goto label_16c608;
        case 0x16c60cu: goto label_16c60c;
        case 0x16c610u: goto label_16c610;
        case 0x16c614u: goto label_16c614;
        case 0x16c618u: goto label_16c618;
        case 0x16c61cu: goto label_16c61c;
        case 0x16c620u: goto label_16c620;
        case 0x16c624u: goto label_16c624;
        case 0x16c628u: goto label_16c628;
        case 0x16c62cu: goto label_16c62c;
        case 0x16c630u: goto label_16c630;
        case 0x16c634u: goto label_16c634;
        case 0x16c638u: goto label_16c638;
        case 0x16c63cu: goto label_16c63c;
        case 0x16c640u: goto label_16c640;
        case 0x16c644u: goto label_16c644;
        case 0x16c648u: goto label_16c648;
        case 0x16c64cu: goto label_16c64c;
        case 0x16c650u: goto label_16c650;
        case 0x16c654u: goto label_16c654;
        case 0x16c658u: goto label_16c658;
        case 0x16c65cu: goto label_16c65c;
        case 0x16c660u: goto label_16c660;
        case 0x16c664u: goto label_16c664;
        case 0x16c668u: goto label_16c668;
        case 0x16c66cu: goto label_16c66c;
        case 0x16c670u: goto label_16c670;
        case 0x16c674u: goto label_16c674;
        case 0x16c678u: goto label_16c678;
        case 0x16c67cu: goto label_16c67c;
        case 0x16c680u: goto label_16c680;
        case 0x16c684u: goto label_16c684;
        case 0x16c688u: goto label_16c688;
        case 0x16c68cu: goto label_16c68c;
        case 0x16c690u: goto label_16c690;
        case 0x16c694u: goto label_16c694;
        case 0x16c698u: goto label_16c698;
        case 0x16c69cu: goto label_16c69c;
        case 0x16c6a0u: goto label_16c6a0;
        case 0x16c6a4u: goto label_16c6a4;
        case 0x16c6a8u: goto label_16c6a8;
        case 0x16c6acu: goto label_16c6ac;
        case 0x16c6b0u: goto label_16c6b0;
        case 0x16c6b4u: goto label_16c6b4;
        case 0x16c6b8u: goto label_16c6b8;
        case 0x16c6bcu: goto label_16c6bc;
        case 0x16c6c0u: goto label_16c6c0;
        case 0x16c6c4u: goto label_16c6c4;
        case 0x16c6c8u: goto label_16c6c8;
        case 0x16c6ccu: goto label_16c6cc;
        case 0x16c6d0u: goto label_16c6d0;
        case 0x16c6d4u: goto label_16c6d4;
        case 0x16c6d8u: goto label_16c6d8;
        case 0x16c6dcu: goto label_16c6dc;
        case 0x16c6e0u: goto label_16c6e0;
        case 0x16c6e4u: goto label_16c6e4;
        case 0x16c6e8u: goto label_16c6e8;
        case 0x16c6ecu: goto label_16c6ec;
        case 0x16c6f0u: goto label_16c6f0;
        case 0x16c6f4u: goto label_16c6f4;
        case 0x16c6f8u: goto label_16c6f8;
        case 0x16c6fcu: goto label_16c6fc;
        default: break;
    }

    ctx->pc = 0x16c4a0u;

label_16c4a0:
    // 0x16c4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16c4a4:
    // 0x16c4a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16c4a8:
    // 0x16c4a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16c4ac:
    // 0x16c4ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16c4acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c4b0:
    // 0x16c4b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16c4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_16c4b4:
    // 0x16c4b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_16c4b8:
    // 0x16c4b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16c4bc:
    // 0x16c4bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16c4c0:
    // 0x16c4c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16c4c4:
    // 0x16c4c4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_16c4c8:
    // 0x16c4c8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x16c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_16c4cc:
    // 0x16c4cc: 0xc06a26e  jal         func_1A89B8
label_16c4d0:
    if (ctx->pc == 0x16C4D0u) {
        ctx->pc = 0x16C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4CCu;
        // 0x16c4d0: 0x8c540044  lw          $s4, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C4D4u;
        goto label_16c4d4;
    }
    ctx->pc = 0x16C4CCu;
    SET_GPR_U32(ctx, 31, 0x16C4D4u);
    ctx->pc = 0x16C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4CCu;
    // 0x16c4d0: 0x8c540044  lw          $s4, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16C4CCu, 0x16C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4D4u;
label_16c4d4:
    // 0x16c4d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16c4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16c4d8:
    // 0x16c4d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16c4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c4dc:
    // 0x16c4dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16c4e0:
    // 0x16c4e0: 0xc04110c  jal         func_104430
label_16c4e4:
    if (ctx->pc == 0x16C4E4u) {
        ctx->pc = 0x16C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4E0u;
        // 0x16c4e4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C4E8u;
        goto label_16c4e8;
    }
    ctx->pc = 0x16C4E0u;
    SET_GPR_U32(ctx, 31, 0x16C4E8u);
    ctx->pc = 0x16C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4E0u;
    // 0x16c4e4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16C4E0u, 0x16C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4E8u;
label_16c4e8:
    // 0x16c4e8: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x16c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
label_16c4ec:
    // 0x16c4ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16c4ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c4f0:
    // 0x16c4f0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x16c4f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_16c4f4:
    // 0x16c4f4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_16c4f8:
    if (ctx->pc == 0x16C4F8u) {
        ctx->pc = 0x16C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4F4u;
        // 0x16c4f8: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C4FCu;
        goto label_16c4fc;
    }
    ctx->pc = 0x16C4F4u;
    {
        const bool branch_taken_0x16c4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4F4u;
        // 0x16c4f8: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4f4) {
            ctx->pc = 0x16C51Cu;
            goto label_16c51c;
        }
    }
    ctx->pc = 0x16C4FCu;
label_16c4fc:
    // 0x16c4fc: 0xc04112c  jal         func_1044B0
label_16c500:
    if (ctx->pc == 0x16C500u) {
        ctx->pc = 0x16C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4FCu;
        // 0x16c500: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C504u;
        goto label_16c504;
    }
    ctx->pc = 0x16C4FCu;
    SET_GPR_U32(ctx, 31, 0x16C504u);
    ctx->pc = 0x16C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4FCu;
    // 0x16c500: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x16C4FCu, 0x16C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C504u;
label_16c504:
    // 0x16c504: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16c504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_16c508:
    // 0x16c508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16c508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c50c:
    // 0x16c50c: 0x24a57448  addiu       $a1, $a1, 0x7448
    ctx->pc = 0x16c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29768));
label_16c510:
    // 0x16c510: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x16c510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_16c514:
    // 0x16c514: 0xc0415ec  jal         func_1057B0
label_16c518:
    if (ctx->pc == 0x16C518u) {
        ctx->pc = 0x16C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C514u;
        // 0x16c518: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C51Cu;
        goto label_16c51c;
    }
    ctx->pc = 0x16C514u;
    SET_GPR_U32(ctx, 31, 0x16C51Cu);
    ctx->pc = 0x16C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C514u;
    // 0x16c518: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16C514u, 0x16C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C51Cu;
label_16c51c:
    // 0x16c51c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_16c520:
    // 0x16c520: 0x24041306  addiu       $a0, $zero, 0x1306
    ctx->pc = 0x16c520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4870));
label_16c524:
    // 0x16c524: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x16c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_16c528:
    // 0x16c528: 0xc0682b2  jal         func_1A0AC8
label_16c52c:
    if (ctx->pc == 0x16C52Cu) {
        ctx->pc = 0x16C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C528u;
        // 0x16c52c: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C530u;
        goto label_16c530;
    }
    ctx->pc = 0x16C528u;
    SET_GPR_U32(ctx, 31, 0x16C530u);
    ctx->pc = 0x16C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C528u;
    // 0x16c52c: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16C528u, 0x16C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C530u;
label_16c530:
    // 0x16c530: 0xc0682b6  jal         func_1A0AD8
label_16c534:
    if (ctx->pc == 0x16C534u) {
        ctx->pc = 0x16C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C530u;
        // 0x16c534: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C538u;
        goto label_16c538;
    }
    ctx->pc = 0x16C530u;
    SET_GPR_U32(ctx, 31, 0x16C538u);
    ctx->pc = 0x16C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C530u;
    // 0x16c534: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16C530u, 0x16C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C538u;
label_16c538:
    // 0x16c538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c53c:
    // 0x16c53c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16c540:
    // 0x16c540: 0x2442f750  addiu       $v0, $v0, -0x8B0
    ctx->pc = 0x16c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
label_16c544:
    // 0x16c544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c548:
    // 0x16c548: 0xc061258  jal         func_184960
label_16c54c:
    if (ctx->pc == 0x16C54Cu) {
        ctx->pc = 0x16C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C548u;
        // 0x16c54c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C550u;
        goto label_16c550;
    }
    ctx->pc = 0x16C548u;
    SET_GPR_U32(ctx, 31, 0x16C550u);
    ctx->pc = 0x16C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C548u;
    // 0x16c54c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x16C548u, 0x16C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C550u;
label_16c550:
    // 0x16c550: 0x24020306  addiu       $v0, $zero, 0x306
    ctx->pc = 0x16c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16c554:
    // 0x16c554: 0xc780846c  lwc1        $f0, -0x7B94($gp)
    ctx->pc = 0x16c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c558:
    // 0x16c558: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x16c558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_16c55c:
    // 0x16c55c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16c560:
    // 0x16c560: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x16c560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_16c564:
    // 0x16c564: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x16c564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_16c568:
    // 0x16c568: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x16c568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_16c56c:
    // 0x16c56c: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x16c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_16c570:
    // 0x16c570: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x16c570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_16c574:
    // 0x16c574: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x16c574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_16c578:
    // 0x16c578: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x16c578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_16c57c:
    // 0x16c57c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16c57cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16c580:
    // 0x16c580: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x16c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_16c584:
    // 0x16c584: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16c584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16c588:
    // 0x16c588: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_16c58c:
    // 0x16c58c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16c58cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16c590:
    // 0x16c590: 0x260202a0  addiu       $v0, $s0, 0x2A0
    ctx->pc = 0x16c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_16c594:
    // 0x16c594: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16c594u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16c598:
    // 0x16c598: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16c59c:
    // 0x16c59c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x16c59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c5a0:
    // 0x16c5a0: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x16c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
label_16c5a4:
    // 0x16c5a4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16c5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16c5a8:
    // 0x16c5a8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x16c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16c5ac:
    // 0x16c5ac: 0xa0f809  jalr        $a1
label_16c5b0:
    if (ctx->pc == 0x16C5B0u) {
        ctx->pc = 0x16C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ACu;
        // 0x16c5b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5B4u;
        goto label_16c5b4;
    }
    ctx->pc = 0x16C5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x16C5B4u);
        ctx->pc = 0x16C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ACu;
        // 0x16c5b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C5ACu, 0x16C5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C5B4u;
label_16c5b4:
    // 0x16c5b4: 0x24021306  addiu       $v0, $zero, 0x1306
    ctx->pc = 0x16c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4870));
label_16c5b8:
    // 0x16c5b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16c5bc:
    // 0x16c5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c5c0:
    // 0x16c5c0: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x16c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_16c5c4:
    // 0x16c5c4: 0xc06825c  jal         func_1A0970
label_16c5c8:
    if (ctx->pc == 0x16C5C8u) {
        ctx->pc = 0x16C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5C4u;
        // 0x16c5c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5CCu;
        goto label_16c5cc;
    }
    ctx->pc = 0x16C5C4u;
    SET_GPR_U32(ctx, 31, 0x16C5CCu);
    ctx->pc = 0x16C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5C4u;
    // 0x16c5c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16C5C4u, 0x16C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5CCu;
label_16c5cc:
    // 0x16c5cc: 0xc06a26e  jal         func_1A89B8
label_16c5d0:
    if (ctx->pc == 0x16C5D0u) {
        ctx->pc = 0x16C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5CCu;
        // 0x16c5d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5D4u;
        goto label_16c5d4;
    }
    ctx->pc = 0x16C5CCu;
    SET_GPR_U32(ctx, 31, 0x16C5D4u);
    ctx->pc = 0x16C5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5CCu;
    // 0x16c5d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16C5CCu, 0x16C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5D4u;
label_16c5d4:
    // 0x16c5d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_16c5d8:
    if (ctx->pc == 0x16C5D8u) {
        ctx->pc = 0x16C5DCu;
        goto label_16c5dc;
    }
    ctx->pc = 0x16C5D4u;
    {
        const bool branch_taken_0x16c5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c5d4) {
            ctx->pc = 0x16C5E8u;
            goto label_16c5e8;
        }
    }
    ctx->pc = 0x16C5DCu;
label_16c5dc:
    // 0x16c5dc: 0x10000011  b           . + 4 + (0x11 << 2)
label_16c5e0:
    if (ctx->pc == 0x16C5E0u) {
        ctx->pc = 0x16C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5DCu;
        // 0x16c5e0: 0x8e4201b4  lw          $v0, 0x1B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5E4u;
        goto label_16c5e4;
    }
    ctx->pc = 0x16C5DCu;
    {
        const bool branch_taken_0x16c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5DCu;
        // 0x16c5e0: 0x8e4201b4  lw          $v0, 0x1B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5dc) {
            ctx->pc = 0x16C624u;
            goto label_16c624;
        }
    }
    ctx->pc = 0x16C5E4u;
label_16c5e4:
    // 0x16c5e4: 0x0  nop
    ctx->pc = 0x16c5e4u;
    // NOP
label_16c5e8:
    // 0x16c5e8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_16c5ec:
    if (ctx->pc == 0x16C5ECu) {
        ctx->pc = 0x16C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5E8u;
        // 0x16c5ec: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C5F0u;
        goto label_16c5f0;
    }
    ctx->pc = 0x16C5E8u;
    {
        const bool branch_taken_0x16c5e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16c5e8) {
            ctx->pc = 0x16C5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C5E8u;
            // 0x16c5ec: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C600u;
            goto label_16c600;
        }
    }
    ctx->pc = 0x16C5F0u;
label_16c5f0:
    // 0x16c5f0: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x16c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
label_16c5f4:
    // 0x16c5f4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16c5f8:
    // 0x16c5f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_16c5fc:
    if (ctx->pc == 0x16C5FCu) {
        ctx->pc = 0x16C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5F8u;
        // 0x16c5fc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C600u;
        goto label_16c600;
    }
    ctx->pc = 0x16C5F8u;
    {
        const bool branch_taken_0x16c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5F8u;
        // 0x16c5fc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5f8) {
            ctx->pc = 0x16C624u;
            goto label_16c624;
        }
    }
    ctx->pc = 0x16C600u;
label_16c600:
    // 0x16c600: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_16c604:
    // 0x16c604: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16c604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
label_16c608:
    // 0x16c608: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_16c60c:
    if (ctx->pc == 0x16C60Cu) {
        ctx->pc = 0x16C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C608u;
        // 0x16c60c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C610u;
        goto label_16c610;
    }
    ctx->pc = 0x16C608u;
    {
        const bool branch_taken_0x16c608 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C608u;
        // 0x16c60c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c608) {
            ctx->pc = 0x16C620u;
            goto label_16c620;
        }
    }
    ctx->pc = 0x16C610u;
label_16c610:
    // 0x16c610: 0x8ea301b4  lw          $v1, 0x1B4($s5)
    ctx->pc = 0x16c610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
label_16c614:
    // 0x16c614: 0x10000003  b           . + 4 + (0x3 << 2)
label_16c618:
    if (ctx->pc == 0x16C618u) {
        ctx->pc = 0x16C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C614u;
        // 0x16c618: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C61Cu;
        goto label_16c61c;
    }
    ctx->pc = 0x16C614u;
    {
        const bool branch_taken_0x16c614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C614u;
        // 0x16c618: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c614) {
            ctx->pc = 0x16C624u;
            goto label_16c624;
        }
    }
    ctx->pc = 0x16C61Cu;
label_16c61c:
    // 0x16c61c: 0x0  nop
    ctx->pc = 0x16c61cu;
    // NOP
label_16c620:
    // 0x16c620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16c620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c624:
    // 0x16c624: 0xae2202b0  sw          $v0, 0x2B0($s1)
    ctx->pc = 0x16c624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
label_16c628:
    // 0x16c628: 0x26260230  addiu       $a2, $s1, 0x230
    ctx->pc = 0x16c628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_16c62c:
    // 0x16c62c: 0xc7808470  lwc1        $f0, -0x7B90($gp)
    ctx->pc = 0x16c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c630:
    // 0x16c630: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16c630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16c634:
    // 0x16c634: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16c634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16c638:
    // 0x16c638: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16c638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16c63c:
    // 0x16c63c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16c640:
    // 0x16c640: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16c640u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16c644:
    // 0x16c644: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16c644u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16c648:
    // 0x16c648: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16c648u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16c64c:
    // 0x16c64c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_16c650:
    // 0x16c650: 0x26270240  addiu       $a3, $s1, 0x240
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
label_16c654:
    // 0x16c654: 0xc7818474  lwc1        $f1, -0x7B8C($gp)
    ctx->pc = 0x16c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c658:
    // 0x16c658: 0xc7828478  lwc1        $f2, -0x7B88($gp)
    ctx->pc = 0x16c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16c65c:
    // 0x16c65c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16c65cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16c660:
    // 0x16c660: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16c660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16c664:
    // 0x16c664: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16c664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16c668:
    // 0x16c668: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16c668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16c66c:
    // 0x16c66c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16c66cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16c670:
    // 0x16c670: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16c670u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16c674:
    // 0x16c674: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16c674u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16c678:
    // 0x16c678: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x16c678u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_16c67c:
    // 0x16c67c: 0x26260290  addiu       $a2, $s1, 0x290
    ctx->pc = 0x16c67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
label_16c680:
    // 0x16c680: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16c680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16c684:
    // 0x16c684: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16c684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16c688:
    // 0x16c688: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16c688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16c68c:
    // 0x16c68c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16c690:
    // 0x16c690: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16c690u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16c694:
    // 0x16c694: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16c694u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16c698:
    // 0x16c698: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16c698u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16c69c:
    // 0x16c69c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16c69cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_16c6a0:
    // 0x16c6a0: 0x262702a0  addiu       $a3, $s1, 0x2A0
    ctx->pc = 0x16c6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
label_16c6a4:
    // 0x16c6a4: 0xc780847c  lwc1        $f0, -0x7B84($gp)
    ctx->pc = 0x16c6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c6a8:
    // 0x16c6a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16c6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16c6ac:
    // 0x16c6ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16c6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16c6b0:
    // 0x16c6b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16c6b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16c6b4:
    // 0x16c6b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16c6b8:
    // 0x16c6b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16c6b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16c6bc:
    // 0x16c6bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16c6bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16c6c0:
    // 0x16c6c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16c6c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16c6c4:
    // 0x16c6c4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x16c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_16c6c8:
    // 0x16c6c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16c6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16c6cc:
    // 0x16c6cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16c6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16c6d0:
    // 0x16c6d0: 0xc040ce8  jal         func_1033A0
label_16c6d4:
    if (ctx->pc == 0x16C6D4u) {
        ctx->pc = 0x16C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6D0u;
        // 0x16c6d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C6D8u;
        goto label_16c6d8;
    }
    ctx->pc = 0x16C6D0u;
    SET_GPR_U32(ctx, 31, 0x16C6D8u);
    ctx->pc = 0x16C6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6D0u;
    // 0x16c6d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16C6D0u, 0x16C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6D8u;
label_16c6d8:
    // 0x16c6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c6dc:
    // 0x16c6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16c6e0:
    // 0x16c6e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c6e4:
    // 0x16c6e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c6e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16c6e8:
    // 0x16c6e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16c6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c6ec:
    // 0x16c6ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16c6ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16c6f0:
    // 0x16c6f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16c6f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16c6f4:
    // 0x16c6f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16c6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16c6f8:
    // 0x16c6f8: 0x3e00008  jr          $ra
label_16c6fc:
    if (ctx->pc == 0x16C6FCu) {
        ctx->pc = 0x16C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6F8u;
        // 0x16c6fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C700u;
        goto label_fallthrough_0x16c6f8;
    }
    ctx->pc = 0x16C6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6F8u;
        // 0x16c6fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c6f8:
    ctx->pc = 0x16C700u;
}

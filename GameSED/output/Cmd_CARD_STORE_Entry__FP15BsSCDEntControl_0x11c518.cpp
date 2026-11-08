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

// Function: Cmd_CARD_STORE_Entry__FP15BsSCDEntControl
// Address: 0x11c518 - 0x11c720
void Cmd_CARD_STORE_Entry__FP15BsSCDEntControl_0x11c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_STORE_Entry__FP15BsSCDEntControl_0x11c518");
#endif

    switch (ctx->pc) {
        case 0x11c538u: goto label_11c538;
        case 0x11c54cu: goto label_11c54c;
        case 0x11c56cu: goto label_11c56c;
        case 0x11c5b8u: goto label_11c5b8;
        case 0x11c608u: goto label_11c608;
        case 0x11c64cu: goto label_11c64c;
        case 0x11c6a4u: goto label_11c6a4;
        case 0x11c708u: goto label_11c708;
        default: break;
    }

    ctx->pc = 0x11c518u;

    // 0x11c518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c51c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11c524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11c528: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x11c528u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11c52c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11c530: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C530u;
    SET_GPR_U32(ctx, 31, 0x11C538u);
    ctx->pc = 0x11C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C530u;
    // 0x11c534: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C530u, 0x11C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C538u;
label_11c538:
    // 0x11c538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11c538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11c53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c540: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11c544: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C544u;
    SET_GPR_U32(ctx, 31, 0x11C54Cu);
    ctx->pc = 0x11C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C544u;
    // 0x11c548: 0x8c520048  lw          $s2, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C544u, 0x11C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C54Cu;
label_11c54c:
    // 0x11c54c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x11c550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c554: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11c554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11c558: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c55c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C55Cu;
    {
        const bool branch_taken_0x11c55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C55Cu;
        // 0x11c560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c55c) {
            ctx->pc = 0x11C570u;
            goto label_11c570;
        }
    }
    ctx->pc = 0x11C564u;
    // 0x11c564: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11C564u;
    SET_GPR_U32(ctx, 31, 0x11C56Cu);
    ctx->pc = 0x11C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C564u;
    // 0x11c568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11C564u, 0x11C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C56Cu;
label_11c56c:
    // 0x11c56c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c570:
    // 0x11c570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c574: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11C574u;
    {
        const bool branch_taken_0x11c574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C574u;
        // 0x11c578: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c574) {
            ctx->pc = 0x11C5F8u;
            goto label_11c5f8;
        }
    }
    ctx->pc = 0x11C57Cu;
    // 0x11c57c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x11c57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c580: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C580u;
    {
        const bool branch_taken_0x11c580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c580) {
            ctx->pc = 0x11C584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C580u;
            // 0x11c584: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C598u;
            goto label_11c598;
        }
    }
    ctx->pc = 0x11C588u;
    // 0x11c588: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C588u;
    {
        const bool branch_taken_0x11c588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C588u;
        // 0x11c58c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c588) {
            ctx->pc = 0x11C5A8u;
            goto label_11c5a8;
        }
    }
    ctx->pc = 0x11C590u;
    // 0x11c590: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x11C590u;
    {
        const bool branch_taken_0x11c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C590u;
        // 0x11c594: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c590) {
            ctx->pc = 0x11C710u;
            goto label_11c710;
        }
    }
    ctx->pc = 0x11C598u;
label_11c598:
    // 0x11c598: 0x12020059  beq         $s0, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x11C598u;
    {
        const bool branch_taken_0x11c598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C598u;
        // 0x11c59c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c598) {
            ctx->pc = 0x11C700u;
            goto label_11c700;
        }
    }
    ctx->pc = 0x11C5A0u;
    // 0x11c5a0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x11C5A0u;
    {
        const bool branch_taken_0x11c5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5A0u;
        // 0x11c5a4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5a0) {
            ctx->pc = 0x11C710u;
            goto label_11c710;
        }
    }
    ctx->pc = 0x11C5A8u;
label_11c5a8:
    // 0x11c5a8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11c5ac: 0x264349c0  addiu       $v1, $s2, 0x49C0
    ctx->pc = 0x11c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 18880));
    // 0x11c5b0: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x11c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x11c5b4: 0x26444600  addiu       $a0, $s2, 0x4600
    ctx->pc = 0x11c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17920));
label_11c5b8:
    // 0x11c5b8: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x11c5b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c5bc: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x11c5bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11c5c0: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x11c5c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11c5c4: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x11c5c4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11c5c8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x11c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x11c5cc: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x11c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x11c5d0: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x11c5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x11c5d4: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x11c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x11c5d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c5dc: 0x0  nop
    ctx->pc = 0x11c5dcu;
    // NOP
    // 0x11c5e0: 0x0  nop
    ctx->pc = 0x11c5e0u;
    // NOP
    // 0x11c5e4: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C5E4u;
    {
        const bool branch_taken_0x11c5e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5E4u;
        // 0x11c5e8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5e4) {
            ctx->pc = 0x11C5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c5b8;
        }
    }
    ctx->pc = 0x11C5ECu;
    // 0x11c5ec: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x11C5ECu;
    {
        const bool branch_taken_0x11c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5ECu;
        // 0x11c5f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5ec) {
            ctx->pc = 0x11C70Cu;
            goto label_11c70c;
        }
    }
    ctx->pc = 0x11C5F4u;
    // 0x11c5f4: 0x0  nop
    ctx->pc = 0x11c5f4u;
    // NOP
label_11c5f8:
    // 0x11c5f8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11c5fc: 0x264349c0  addiu       $v1, $s2, 0x49C0
    ctx->pc = 0x11c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 18880));
    // 0x11c600: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x11c604: 0x26444600  addiu       $a0, $s2, 0x4600
    ctx->pc = 0x11c604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17920));
label_11c608:
    // 0x11c608: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x11c608u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c60c: 0xdc8a0008  ld          $t2, 0x8($a0)
    ctx->pc = 0x11c60cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11c610: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x11c610u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11c614: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x11c614u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11c618: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x11c618u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x11c61c: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x11c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x11c620: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x11c620u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x11c624: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x11c624u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x11c628: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c62c: 0x0  nop
    ctx->pc = 0x11c62cu;
    // NOP
    // 0x11c630: 0x0  nop
    ctx->pc = 0x11c630u;
    // NOP
    // 0x11c634: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C634u;
    {
        const bool branch_taken_0x11c634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C634u;
        // 0x11c638: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c634) {
            ctx->pc = 0x11C608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c608;
        }
    }
    ctx->pc = 0x11C63Cu;
    // 0x11c63c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11c640: 0x24c34600  addiu       $v1, $a2, 0x4600
    ctx->pc = 0x11c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 17920));
    // 0x11c644: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x11c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x11c648: 0x24c449c0  addiu       $a0, $a2, 0x49C0
    ctx->pc = 0x11c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 18880));
label_11c64c:
    // 0x11c64c: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x11c64cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c650: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x11c650u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11c654: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x11c654u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11c658: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x11c658u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11c65c: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x11c65cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x11c660: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x11c660u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x11c664: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x11c664u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x11c668: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x11c668u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x11c66c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x11c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x11c670: 0x0  nop
    ctx->pc = 0x11c670u;
    // NOP
    // 0x11c674: 0x0  nop
    ctx->pc = 0x11c674u;
    // NOP
    // 0x11c678: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C678u;
    {
        const bool branch_taken_0x11c678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C678u;
        // 0x11c67c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c678) {
            ctx->pc = 0x11C64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c64c;
        }
    }
    ctx->pc = 0x11C680u;
    // 0x11c680: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11c684: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11c684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11c688: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c68c: 0x2464c540  addiu       $a0, $v1, -0x3AC0
    ctx->pc = 0x11c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x11c690: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x11c690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x11c694: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11c694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c698: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11c69c: 0x244672c0  addiu       $a2, $v0, 0x72C0
    ctx->pc = 0x11c69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29376));
    // 0x11c6a0: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x11c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
label_11c6a4:
    // 0x11c6a4: 0xdc490000  ld          $t1, 0x0($v0)
    ctx->pc = 0x11c6a4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c6a8: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x11c6a8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c6ac: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x11c6acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11c6b0: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x11c6b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11c6b4: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x11c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x11c6b8: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x11c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x11c6bc: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x11c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x11c6c0: 0xfca70018  sd          $a3, 0x18($a1)
    ctx->pc = 0x11c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 7));
    // 0x11c6c4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x11c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x11c6c8: 0x0  nop
    ctx->pc = 0x11c6c8u;
    // NOP
    // 0x11c6cc: 0x0  nop
    ctx->pc = 0x11c6ccu;
    // NOP
    // 0x11c6d0: 0x1446fff4  bne         $v0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C6D0u;
    {
        const bool branch_taken_0x11c6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x11C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6D0u;
        // 0x11c6d4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6d0) {
            ctx->pc = 0x11C6A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c6a4;
        }
    }
    ctx->pc = 0x11C6D8u;
    // 0x11c6d8: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x11c6d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c6dc: 0xdc490008  ld          $t1, 0x8($v0)
    ctx->pc = 0x11c6dcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c6e0: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x11c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x11c6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c6e8: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x11c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x11c6ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c6f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c6f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11c6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c6f8: 0x80452be  j           func_114AF8
    ctx->pc = 0x11C6F8u;
    ctx->pc = 0x11C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6F8u;
    // 0x11c6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114AF8u;
    LoadPackage2System__10ApSavePack_0x114af8(rdram, ctx, runtime); return;
    ctx->pc = 0x11C700u;
label_11c700:
    // 0x11c700: 0xc04702e  jal         func_11C0B8
    ctx->pc = 0x11C700u;
    SET_GPR_U32(ctx, 31, 0x11C708u);
    ctx->pc = 0x11C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C700u;
    // 0x11c704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0B8u, 0x11C700u, 0x11C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C708u;
label_11c708:
    // 0x11c708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11c70c:
    // 0x11c70c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11c710:
    // 0x11c710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c714: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11c714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c718: 0x3e00008  jr          $ra
    ctx->pc = 0x11C718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C718u;
        // 0x11c71c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C720u;
}

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

// Function: _raise_r
// Address: 0x1d0480 - 0x1d0558
void _raise_r_0x1d0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_raise_r_0x1d0480");
#endif

    switch (ctx->pc) {
        case 0x1d0480u: goto label_1d0480;
        case 0x1d0484u: goto label_1d0484;
        case 0x1d0488u: goto label_1d0488;
        case 0x1d048cu: goto label_1d048c;
        case 0x1d0490u: goto label_1d0490;
        case 0x1d0494u: goto label_1d0494;
        case 0x1d0498u: goto label_1d0498;
        case 0x1d049cu: goto label_1d049c;
        case 0x1d04a0u: goto label_1d04a0;
        case 0x1d04a4u: goto label_1d04a4;
        case 0x1d04a8u: goto label_1d04a8;
        case 0x1d04acu: goto label_1d04ac;
        case 0x1d04b0u: goto label_1d04b0;
        case 0x1d04b4u: goto label_1d04b4;
        case 0x1d04b8u: goto label_1d04b8;
        case 0x1d04bcu: goto label_1d04bc;
        case 0x1d04c0u: goto label_1d04c0;
        case 0x1d04c4u: goto label_1d04c4;
        case 0x1d04c8u: goto label_1d04c8;
        case 0x1d04ccu: goto label_1d04cc;
        case 0x1d04d0u: goto label_1d04d0;
        case 0x1d04d4u: goto label_1d04d4;
        case 0x1d04d8u: goto label_1d04d8;
        case 0x1d04dcu: goto label_1d04dc;
        case 0x1d04e0u: goto label_1d04e0;
        case 0x1d04e4u: goto label_1d04e4;
        case 0x1d04e8u: goto label_1d04e8;
        case 0x1d04ecu: goto label_1d04ec;
        case 0x1d04f0u: goto label_1d04f0;
        case 0x1d04f4u: goto label_1d04f4;
        case 0x1d04f8u: goto label_1d04f8;
        case 0x1d04fcu: goto label_1d04fc;
        case 0x1d0500u: goto label_1d0500;
        case 0x1d0504u: goto label_1d0504;
        case 0x1d0508u: goto label_1d0508;
        case 0x1d050cu: goto label_1d050c;
        case 0x1d0510u: goto label_1d0510;
        case 0x1d0514u: goto label_1d0514;
        case 0x1d0518u: goto label_1d0518;
        case 0x1d051cu: goto label_1d051c;
        case 0x1d0520u: goto label_1d0520;
        case 0x1d0524u: goto label_1d0524;
        case 0x1d0528u: goto label_1d0528;
        case 0x1d052cu: goto label_1d052c;
        case 0x1d0530u: goto label_1d0530;
        case 0x1d0534u: goto label_1d0534;
        case 0x1d0538u: goto label_1d0538;
        case 0x1d053cu: goto label_1d053c;
        case 0x1d0540u: goto label_1d0540;
        case 0x1d0544u: goto label_1d0544;
        case 0x1d0548u: goto label_1d0548;
        case 0x1d054cu: goto label_1d054c;
        case 0x1d0550u: goto label_1d0550;
        case 0x1d0554u: goto label_1d0554;
        default: break;
    }

    ctx->pc = 0x1d0480u;

label_1d0480:
    // 0x1d0480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d0484:
    // 0x1d0484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d0488:
    // 0x1d0488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d048c:
    // 0x1d048c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1d048cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1d0490:
    // 0x1d0490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d0494:
    // 0x1d0494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d0498:
    // 0x1d0498: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d049c:
    if (ctx->pc == 0x1D049Cu) {
        ctx->pc = 0x1D049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0498u;
        // 0x1d049c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04A0u;
        goto label_1d04a0;
    }
    ctx->pc = 0x1D0498u;
    {
        const bool branch_taken_0x1d0498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0498u;
        // 0x1d049c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0498) {
            ctx->pc = 0x1D04B0u;
            goto label_1d04b0;
        }
    }
    ctx->pc = 0x1D04A0u;
label_1d04a0:
    // 0x1d04a0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1d04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d04a4:
    // 0x1d04a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d04a8:
    // 0x1d04a8: 0x10000026  b           . + 4 + (0x26 << 2)
label_1d04ac:
    if (ctx->pc == 0x1D04ACu) {
        ctx->pc = 0x1D04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04A8u;
        // 0x1d04ac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04B0u;
        goto label_1d04b0;
    }
    ctx->pc = 0x1D04A8u;
    {
        const bool branch_taken_0x1d04a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04A8u;
        // 0x1d04ac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04a8) {
            ctx->pc = 0x1D0544u;
            goto label_1d0544;
        }
    }
    ctx->pc = 0x1D04B0u;
label_1d04b0:
    // 0x1d04b0: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x1d04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1d04b4:
    // 0x1d04b4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1d04b8:
    if (ctx->pc == 0x1D04B8u) {
        ctx->pc = 0x1D04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04B4u;
        // 0x1d04b8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04BCu;
        goto label_1d04bc;
    }
    ctx->pc = 0x1D04B4u;
    {
        const bool branch_taken_0x1d04b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04B4u;
        // 0x1d04b8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04b4) {
            ctx->pc = 0x1D04D4u;
            goto label_1d04d4;
        }
    }
    ctx->pc = 0x1D04BCu;
label_1d04bc:
    // 0x1d04bc: 0xc0740e4  jal         func_1D0390
label_1d04c0:
    if (ctx->pc == 0x1D04C0u) {
        ctx->pc = 0x1D04C4u;
        goto label_1d04c4;
    }
    ctx->pc = 0x1D04BCu;
    SET_GPR_U32(ctx, 31, 0x1D04C4u);
    ctx->pc = 0x1D0390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0390u, 0x1D04BCu, 0x1D04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04C4u;
label_1d04c4:
    // 0x1d04c4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1d04c8:
    if (ctx->pc == 0x1D04C8u) {
        ctx->pc = 0x1D04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C4u;
        // 0x1d04c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04CCu;
        goto label_1d04cc;
    }
    ctx->pc = 0x1D04C4u;
    {
        const bool branch_taken_0x1d04c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C4u;
        // 0x1d04c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04c4) {
            ctx->pc = 0x1D0544u;
            goto label_1d0544;
        }
    }
    ctx->pc = 0x1D04CCu;
label_1d04cc:
    // 0x1d04cc: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x1d04ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1d04d0:
    // 0x1d04d0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1d04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1d04d4:
    // 0x1d04d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d04d8:
    // 0x1d04d8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d04d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d04dc:
    // 0x1d04dc: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
label_1d04e0:
    if (ctx->pc == 0x1D04E0u) {
        ctx->pc = 0x1D04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04DCu;
        // 0x1d04e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04E4u;
        goto label_1d04e4;
    }
    ctx->pc = 0x1D04DCu;
    {
        const bool branch_taken_0x1d04dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d04dc) {
            ctx->pc = 0x1D04E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D04DCu;
            // 0x1d04e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0510u;
            goto label_1d0510;
        }
    }
    ctx->pc = 0x1D04E4u;
label_1d04e4:
    // 0x1d04e4: 0xc0741b6  jal         func_1D06D8
label_1d04e8:
    if (ctx->pc == 0x1D04E8u) {
        ctx->pc = 0x1D04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04E4u;
        // 0x1d04e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04ECu;
        goto label_1d04ec;
    }
    ctx->pc = 0x1D04E4u;
    SET_GPR_U32(ctx, 31, 0x1D04ECu);
    ctx->pc = 0x1D04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04E4u;
    // 0x1d04e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06D8u, 0x1D04E4u, 0x1D04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d04ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d04f0:
    // 0x1d04f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d04f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d04f4:
    // 0x1d04f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d04f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d04f8:
    // 0x1d04f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d04f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d04fc:
    // 0x1d04fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d04fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0500:
    // 0x1d0500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0504:
    // 0x1d0504: 0x807419e  j           func_1D0678
label_1d0508:
    if (ctx->pc == 0x1D0508u) {
        ctx->pc = 0x1D0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0504u;
        // 0x1d0508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D050Cu;
        goto label_1d050c;
    }
    ctx->pc = 0x1D0504u;
    ctx->pc = 0x1D0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0504u;
    // 0x1d0508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0678u;
    _kill_r_0x1d0678(rdram, ctx, runtime); return;
    ctx->pc = 0x1D050Cu;
label_1d050c:
    // 0x1d050c: 0x0  nop
    ctx->pc = 0x1d050cu;
    // NOP
label_1d0510:
    // 0x1d0510: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_1d0514:
    if (ctx->pc == 0x1D0514u) {
        ctx->pc = 0x1D0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0510u;
        // 0x1d0514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0518u;
        goto label_1d0518;
    }
    ctx->pc = 0x1D0510u;
    {
        const bool branch_taken_0x1d0510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0510u;
        // 0x1d0514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0510) {
            ctx->pc = 0x1D0544u;
            goto label_1d0544;
        }
    }
    ctx->pc = 0x1D0518u;
label_1d0518:
    // 0x1d0518: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d051c:
    // 0x1d051c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_1d0520:
    if (ctx->pc == 0x1D0520u) {
        ctx->pc = 0x1D0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D051Cu;
        // 0x1d0520: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0524u;
        goto label_1d0524;
    }
    ctx->pc = 0x1D051Cu;
    {
        const bool branch_taken_0x1d051c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d051c) {
            ctx->pc = 0x1D0520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D051Cu;
            // 0x1d0520: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0538u;
            goto label_1d0538;
        }
    }
    ctx->pc = 0x1D0524u;
label_1d0524:
    // 0x1d0524: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1d0524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d0528:
    // 0x1d0528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d052c:
    // 0x1d052c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d0530:
    if (ctx->pc == 0x1D0530u) {
        ctx->pc = 0x1D0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D052Cu;
        // 0x1d0530: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0534u;
        goto label_1d0534;
    }
    ctx->pc = 0x1D052Cu;
    {
        const bool branch_taken_0x1d052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D052Cu;
        // 0x1d0530: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d052c) {
            ctx->pc = 0x1D0544u;
            goto label_1d0544;
        }
    }
    ctx->pc = 0x1D0534u;
label_1d0534:
    // 0x1d0534: 0x0  nop
    ctx->pc = 0x1d0534u;
    // NOP
label_1d0538:
    // 0x1d0538: 0xa0f809  jalr        $a1
label_1d053c:
    if (ctx->pc == 0x1D053Cu) {
        ctx->pc = 0x1D053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0538u;
        // 0x1d053c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0540u;
        goto label_1d0540;
    }
    ctx->pc = 0x1D0538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1D0540u);
        ctx->pc = 0x1D053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0538u;
        // 0x1d053c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0538u, 0x1D0540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0540u;
label_1d0540:
    // 0x1d0540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0544:
    // 0x1d0544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0548:
    // 0x1d0548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d054c:
    // 0x1d054c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d054cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0550:
    // 0x1d0550: 0x3e00008  jr          $ra
label_1d0554:
    if (ctx->pc == 0x1D0554u) {
        ctx->pc = 0x1D0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0550u;
        // 0x1d0554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0558u;
        goto label_fallthrough_0x1d0550;
    }
    ctx->pc = 0x1D0550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0550u;
        // 0x1d0554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d0550:
    ctx->pc = 0x1D0558u;
}

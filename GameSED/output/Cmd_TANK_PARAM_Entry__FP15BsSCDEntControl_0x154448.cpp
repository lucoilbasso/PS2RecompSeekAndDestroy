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

// Function: Cmd_TANK_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x154448 - 0x15470c
void Cmd_TANK_PARAM_Entry__FP15BsSCDEntControl_0x154448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_PARAM_Entry__FP15BsSCDEntControl_0x154448");
#endif

    switch (ctx->pc) {
        case 0x154498u: goto label_154498;
        case 0x1544a0u: goto label_1544a0;
        case 0x1544c4u: goto label_1544c4;
        case 0x1544d8u: goto label_1544d8;
        case 0x154588u: goto label_154588;
        case 0x15458cu: goto label_15458c;
        case 0x15459cu: goto label_15459c;
        case 0x154658u: goto label_154658;
        case 0x1546a8u: goto label_1546a8;
        case 0x1546d0u: goto label_1546d0;
        case 0x1546ecu: goto label_1546ec;
        default: break;
    }

    ctx->pc = 0x154448u;

    // 0x154448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x154448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15444c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x15444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x154450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x154450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x154454: 0x24051118  addiu       $a1, $zero, 0x1118
    ctx->pc = 0x154454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x154458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x154458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15445c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15445cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154460: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x154460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x154464: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x154464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x154468: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x154468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15446c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15446cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x154470: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x154470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x154474: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x154474u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x154478: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x154478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15447c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x15447cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154480: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154480u;
    {
        const bool branch_taken_0x154480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x154484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154480u;
        // 0x154484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154480) {
            ctx->pc = 0x154498u;
            goto label_154498;
        }
    }
    ctx->pc = 0x154488u;
    // 0x154488: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x154488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x15448c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x15448cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x154490: 0xc068186  jal         func_1A0618
    ctx->pc = 0x154490u;
    SET_GPR_U32(ctx, 31, 0x154498u);
    ctx->pc = 0x154494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154490u;
    // 0x154494: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x154490u, 0x154498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154498u;
label_154498:
    // 0x154498: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154498u;
    SET_GPR_U32(ctx, 31, 0x1544A0u);
    ctx->pc = 0x15449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154498u;
    // 0x15449c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154498u, 0x1544A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544A0u;
label_1544a0:
    // 0x1544a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1544a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1544a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1544a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544a8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1544a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1544ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1544acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1544b0: 0x5043008e  beql        $v0, $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x1544B0u;
    {
        const bool branch_taken_0x1544b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1544b0) {
            ctx->pc = 0x1544B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1544B0u;
            // 0x1544b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546ECu;
            goto label_1546ec;
        }
    }
    ctx->pc = 0x1544B8u;
    // 0x1544b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1544b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544bc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1544BCu;
    SET_GPR_U32(ctx, 31, 0x1544C4u);
    ctx->pc = 0x1544C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544BCu;
    // 0x1544c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1544BCu, 0x1544C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544C4u;
label_1544c4:
    // 0x1544c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1544c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544c8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1544C8u;
    {
        const bool branch_taken_0x1544c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1544CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544C8u;
        // 0x1544cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544c8) {
            ctx->pc = 0x1544E0u;
            goto label_1544e0;
        }
    }
    ctx->pc = 0x1544D0u;
    // 0x1544d0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1544D0u;
    SET_GPR_U32(ctx, 31, 0x1544D8u);
    ctx->pc = 0x1544D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544D0u;
    // 0x1544d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1544D0u, 0x1544D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544D8u;
label_1544d8:
    // 0x1544d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1544D8u;
    {
        const bool branch_taken_0x1544d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544D8u;
        // 0x1544dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544d8) {
            ctx->pc = 0x1544F0u;
            goto label_1544f0;
        }
    }
    ctx->pc = 0x1544E0u;
label_1544e0:
    // 0x1544e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1544e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1544e4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1544E4u;
    {
        const bool branch_taken_0x1544e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1544E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544E4u;
        // 0x1544e8: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544e4) {
            ctx->pc = 0x1544F4u;
            goto label_1544f4;
        }
    }
    ctx->pc = 0x1544ECu;
    // 0x1544ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1544ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1544f0:
    // 0x1544f0: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_1544f4:
    // 0x1544f4: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x1544f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x1544f8: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1544F8u;
    {
        const bool branch_taken_0x1544f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544F8u;
        // 0x1544fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544f8) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154500u;
    // 0x154500: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x154500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x154504: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x154504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x154508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x154508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15450c: 0x8c636d10  lw          $v1, 0x6D10($v1)
    ctx->pc = 0x15450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27920)));
    // 0x154510: 0x600008  jr          $v1
    ctx->pc = 0x154510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154518u: goto label_154518;
            case 0x154520u: goto label_154520;
            case 0x154528u: goto label_154528;
            case 0x154558u: goto label_154558;
            case 0x1545A8u: goto label_1545a8;
            case 0x1545B0u: goto label_1545b0;
            case 0x1545C0u: goto label_1545c0;
            case 0x1545C8u: goto label_1545c8;
            case 0x1545D8u: goto label_1545d8;
            case 0x1545E8u: goto label_1545e8;
            case 0x1545F0u: goto label_1545f0;
            case 0x154600u: goto label_154600;
            case 0x154610u: goto label_154610;
            case 0x154618u: goto label_154618;
            case 0x154620u: goto label_154620;
            case 0x154628u: goto label_154628;
            case 0x154630u: goto label_154630;
            case 0x154680u: goto label_154680;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154510u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x154518u;
label_154518:
    // 0x154518: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x154518u;
    {
        const bool branch_taken_0x154518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154518u;
        // 0x15451c: 0x26120268  addiu       $s2, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154518) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154520u;
label_154520:
    // 0x154520: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x154520u;
    {
        const bool branch_taken_0x154520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154520u;
        // 0x154524: 0x2612026c  addiu       $s2, $s0, 0x26C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154520) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154528u;
label_154528:
    // 0x154528: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x154528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15452c: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x15452cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x154530: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x154530u;
    {
        const bool branch_taken_0x154530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154530u;
        // 0x154534: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154530) {
            ctx->pc = 0x154588u;
            goto label_154588;
        }
    }
    ctx->pc = 0x154538u;
    // 0x154538: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x154538u;
    {
        const bool branch_taken_0x154538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154538u;
        // 0x15453c: 0x24021846  addiu       $v0, $zero, 0x1846 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154538) {
            ctx->pc = 0x154588u;
            goto label_154588;
        }
    }
    ctx->pc = 0x154540u;
    // 0x154540: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x154540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154544: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x154544u;
    {
        const bool branch_taken_0x154544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154544u;
        // 0x154548: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154544) {
            ctx->pc = 0x15458Cu;
            goto label_15458c;
        }
    }
    ctx->pc = 0x15454Cu;
    // 0x15454c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x15454Cu;
    {
        const bool branch_taken_0x15454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15454Cu;
        // 0x154550: 0x24921ac0  addiu       $s2, $a0, 0x1AC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 6848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15454c) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154554u;
    // 0x154554: 0x0  nop
    ctx->pc = 0x154554u;
    // NOP
label_154558:
    // 0x154558: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x154558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15455c: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x15455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x154560: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x154560u;
    {
        const bool branch_taken_0x154560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154560u;
        // 0x154564: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154560) {
            ctx->pc = 0x154588u;
            goto label_154588;
        }
    }
    ctx->pc = 0x154568u;
    // 0x154568: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154568u;
    {
        const bool branch_taken_0x154568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154568u;
        // 0x15456c: 0x24021846  addiu       $v0, $zero, 0x1846 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154568) {
            ctx->pc = 0x154588u;
            goto label_154588;
        }
    }
    ctx->pc = 0x154570u;
    // 0x154570: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x154570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154574: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154574u;
    {
        const bool branch_taken_0x154574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154574u;
        // 0x154578: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154574) {
            ctx->pc = 0x15458Cu;
            goto label_15458c;
        }
    }
    ctx->pc = 0x15457Cu;
    // 0x15457c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x15457Cu;
    {
        const bool branch_taken_0x15457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15457Cu;
        // 0x154580: 0x24921ac4  addiu       $s2, $a0, 0x1AC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 6852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15457c) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154584u;
    // 0x154584: 0x0  nop
    ctx->pc = 0x154584u;
    // NOP
label_154588:
    // 0x154588: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x154588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15458c:
    // 0x15458c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15458cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154590: 0x24a56d00  addiu       $a1, $a1, 0x6D00
    ctx->pc = 0x154590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
    // 0x154594: 0xc068186  jal         func_1A0618
    ctx->pc = 0x154594u;
    SET_GPR_U32(ctx, 31, 0x15459Cu);
    ctx->pc = 0x154598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154594u;
    // 0x154598: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x154594u, 0x15459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15459Cu;
label_15459c:
    // 0x15459c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x15459Cu;
    {
        const bool branch_taken_0x15459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15459c) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x1545A4u;
    // 0x1545a4: 0x0  nop
    ctx->pc = 0x1545a4u;
    // NOP
label_1545a8:
    // 0x1545a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1545A8u;
    {
        const bool branch_taken_0x1545a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545A8u;
        // 0x1545ac: 0xe6140280  swc1        $f20, 0x280($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545a8) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x1545B0u;
label_1545b0:
    // 0x1545b0: 0x26020304  addiu       $v0, $s0, 0x304
    ctx->pc = 0x1545b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
    // 0x1545b4: 0x26120300  addiu       $s2, $s0, 0x300
    ctx->pc = 0x1545b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1545b8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1545B8u;
    {
        const bool branch_taken_0x1545b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545B8u;
        // 0x1545bc: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545b8) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x1545C0u;
label_1545c0:
    // 0x1545c0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1545C0u;
    {
        const bool branch_taken_0x1545c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545C0u;
        // 0x1545c4: 0x2612030c  addiu       $s2, $s0, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545c0) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x1545C8u;
label_1545c8:
    // 0x1545c8: 0x26020320  addiu       $v0, $s0, 0x320
    ctx->pc = 0x1545c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x1545cc: 0x26120314  addiu       $s2, $s0, 0x314
    ctx->pc = 0x1545ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    // 0x1545d0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1545D0u;
    {
        const bool branch_taken_0x1545d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545D0u;
        // 0x1545d4: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545d0) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x1545D8u;
label_1545d8:
    // 0x1545d8: 0x26020324  addiu       $v0, $s0, 0x324
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
    // 0x1545dc: 0x26120318  addiu       $s2, $s0, 0x318
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    // 0x1545e0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1545E0u;
    {
        const bool branch_taken_0x1545e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545E0u;
        // 0x1545e4: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545e0) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x1545E8u;
label_1545e8:
    // 0x1545e8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1545E8u;
    {
        const bool branch_taken_0x1545e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545E8u;
        // 0x1545ec: 0x2612031c  addiu       $s2, $s0, 0x31C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545e8) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x1545F0u;
label_1545f0:
    // 0x1545f0: 0x26020340  addiu       $v0, $s0, 0x340
    ctx->pc = 0x1545f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x1545f4: 0x26120334  addiu       $s2, $s0, 0x334
    ctx->pc = 0x1545f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 820));
    // 0x1545f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1545F8u;
    {
        const bool branch_taken_0x1545f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F8u;
        // 0x1545fc: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545f8) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154600u;
label_154600:
    // 0x154600: 0x26020344  addiu       $v0, $s0, 0x344
    ctx->pc = 0x154600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 836));
    // 0x154604: 0x26120338  addiu       $s2, $s0, 0x338
    ctx->pc = 0x154604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
    // 0x154608: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x154608u;
    {
        const bool branch_taken_0x154608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154608u;
        // 0x15460c: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154608) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154610u;
label_154610:
    // 0x154610: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x154610u;
    {
        const bool branch_taken_0x154610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154610u;
        // 0x154614: 0x2612033c  addiu       $s2, $s0, 0x33C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 828));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154610) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154618u;
label_154618:
    // 0x154618: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x154618u;
    {
        const bool branch_taken_0x154618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154618u;
        // 0x15461c: 0x26120354  addiu       $s2, $s0, 0x354 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 852));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154618) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154620u;
label_154620:
    // 0x154620: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x154620u;
    {
        const bool branch_taken_0x154620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154620u;
        // 0x154624: 0x26120358  addiu       $s2, $s0, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154620) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154628u;
label_154628:
    // 0x154628: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x154628u;
    {
        const bool branch_taken_0x154628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154628u;
        // 0x15462c: 0x26120364  addiu       $s2, $s0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154628) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154630u;
label_154630:
    // 0x154630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x154630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154634: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x154634u;
    {
        const bool branch_taken_0x154634 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x154638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154634u;
        // 0x154638: 0x2403ff1f  addiu       $v1, $zero, -0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154634) {
            ctx->pc = 0x154658u;
            goto label_154658;
        }
    }
    ctx->pc = 0x15463Cu;
    // 0x15463c: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x15463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154640: 0x2404f8ff  addiu       $a0, $zero, -0x701
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965503));
    // 0x154644: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154648: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x154648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15464c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15464Cu;
    {
        const bool branch_taken_0x15464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15464Cu;
        // 0x154650: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15464c) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154654u;
    // 0x154654: 0x0  nop
    ctx->pc = 0x154654u;
    // NOP
label_154658:
    // 0x154658: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154658u;
    {
        const bool branch_taken_0x154658 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x15465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154658u;
        // 0x15465c: 0x8e020264  lw          $v0, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154658) {
            ctx->pc = 0x154670u;
            goto label_154670;
        }
    }
    ctx->pc = 0x154660u;
    // 0x154660: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x154660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x154664: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x154664u;
    {
        const bool branch_taken_0x154664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154664u;
        // 0x154668: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154664) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x15466Cu;
    // 0x15466c: 0x0  nop
    ctx->pc = 0x15466cu;
    // NOP
label_154670:
    // 0x154670: 0x111827  nor         $v1, $zero, $s1
    ctx->pc = 0x154670u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x154674: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154678: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x154678u;
    {
        const bool branch_taken_0x154678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154678u;
        // 0x15467c: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154678) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154680u;
label_154680:
    // 0x154680: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x154680u;
    {
        const bool branch_taken_0x154680 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x154680) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x154688u;
    // 0x154688: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x15468c: 0x24441a60  addiu       $a0, $v0, 0x1A60
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
    // 0x154690: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x154690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x154694: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x154694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x154698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154698u;
    {
        const bool branch_taken_0x154698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154698) {
            ctx->pc = 0x1546A8u;
            goto label_1546a8;
        }
    }
    ctx->pc = 0x1546A0u;
    // 0x1546a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1546A0u;
    {
        const bool branch_taken_0x1546a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546A0u;
        // 0x1546a4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546a0) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x1546A8u;
label_1546a8:
    // 0x1546a8: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1546A8u;
    {
        const bool branch_taken_0x1546a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546a8) {
            ctx->pc = 0x1546ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1546A8u;
            // 0x1546ac: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546B4u;
            goto label_1546b4;
        }
    }
    ctx->pc = 0x1546B0u;
    // 0x1546b0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1546b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1546b4:
    // 0x1546b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1546b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1546b8:
    // 0x1546b8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1546B8u;
    {
        const bool branch_taken_0x1546b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546B8u;
        // 0x1546bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546b8) {
            ctx->pc = 0x1546ECu;
            goto label_1546ec;
        }
    }
    ctx->pc = 0x1546C0u;
    // 0x1546c0: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1546C0u;
    {
        const bool branch_taken_0x1546c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1546c0) {
            ctx->pc = 0x1546C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1546C0u;
            // 0x1546c4: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546D0u;
            goto label_1546d0;
        }
    }
    ctx->pc = 0x1546C8u;
    // 0x1546c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1546C8u;
    {
        const bool branch_taken_0x1546c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546C8u;
        // 0x1546cc: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546c8) {
            ctx->pc = 0x1546ECu;
            goto label_1546ec;
        }
    }
    ctx->pc = 0x1546D0u;
label_1546d0:
    // 0x1546d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1546d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1546d4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1546d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1546d8: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1546d8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1546dc: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1546dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1546e0: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1546e4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1546e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1546e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1546e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1546ec:
    // 0x1546ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1546ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1546f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1546f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1546f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1546f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1546f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1546f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1546fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1546fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x154700: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x154700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154704: 0x3e00008  jr          $ra
    ctx->pc = 0x154704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154704u;
        // 0x154708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15470Cu;
}

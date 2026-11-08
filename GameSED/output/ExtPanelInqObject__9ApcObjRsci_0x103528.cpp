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

// Function: ExtPanelInqObject__9ApcObjRsci
// Address: 0x103528 - 0x103660
void ExtPanelInqObject__9ApcObjRsci_0x103528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtPanelInqObject__9ApcObjRsci_0x103528");
#endif

    switch (ctx->pc) {
        case 0x103590u: goto label_103590;
        case 0x10362cu: goto label_10362c;
        default: break;
    }

    ctx->pc = 0x103528u;

    // 0x103528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10352c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x10352cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103534: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103538: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x103538u;
    {
        const bool branch_taken_0x103538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103538u;
        // 0x10353c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103538) {
            ctx->pc = 0x103550u;
            goto label_103550;
        }
    }
    ctx->pc = 0x103540u;
    // 0x103540: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x103540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x103544: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x103544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x103548: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x103548u;
    {
        const bool branch_taken_0x103548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103548u;
        // 0x10354c: 0x8c620044  lw          $v0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103548) {
            ctx->pc = 0x10364Cu;
            goto label_10364c;
        }
    }
    ctx->pc = 0x103550u;
label_103550:
    // 0x103550: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x103550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x103554: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x103554u;
    {
        const bool branch_taken_0x103554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103554u;
        // 0x103558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103554) {
            ctx->pc = 0x1035A8u;
            goto label_1035a8;
        }
    }
    ctx->pc = 0x10355Cu;
    // 0x10355c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x103560: 0x30b10fff  andi        $s1, $a1, 0xFFF
    ctx->pc = 0x103560u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x103564: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x103564u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x103568: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x103568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x10356c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x10356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x103570: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x103570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103574: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x103574u;
    {
        const bool branch_taken_0x103574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103574) {
            ctx->pc = 0x103578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103574u;
            // 0x103578: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103594u;
            goto label_103594;
        }
    }
    ctx->pc = 0x10357Cu;
    // 0x10357c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10357cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x103580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103584: 0x24a51c00  addiu       $a1, $a1, 0x1C00
    ctx->pc = 0x103584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7168));
    // 0x103588: 0xc068186  jal         func_1A0618
    ctx->pc = 0x103588u;
    SET_GPR_U32(ctx, 31, 0x103590u);
    ctx->pc = 0x10358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103588u;
    // 0x10358c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x103588u, 0x103590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103590u;
label_103590:
    // 0x103590: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x103590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_103594:
    // 0x103594: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x103594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x103598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10359c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x10359Cu;
    {
        const bool branch_taken_0x10359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10359Cu;
        // 0x1035a0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10359c) {
            ctx->pc = 0x10364Cu;
            goto label_10364c;
        }
    }
    ctx->pc = 0x1035A4u;
    // 0x1035a4: 0x0  nop
    ctx->pc = 0x1035a4u;
    // NOP
label_1035a8:
    // 0x1035a8: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1035A8u;
    {
        const bool branch_taken_0x1035a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1035a8) {
            ctx->pc = 0x1035ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1035A8u;
            // 0x1035ac: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1035C0u;
            goto label_1035c0;
        }
    }
    ctx->pc = 0x1035B0u;
    // 0x1035b0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1035b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1035b4: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1035b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1035b8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1035B8u;
    {
        const bool branch_taken_0x1035b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035B8u;
        // 0x1035bc: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035b8) {
            ctx->pc = 0x10364Cu;
            goto label_10364c;
        }
    }
    ctx->pc = 0x1035C0u;
label_1035c0:
    // 0x1035c0: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1035C0u;
    {
        const bool branch_taken_0x1035c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1035c0) {
            ctx->pc = 0x1035C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1035C0u;
            // 0x1035c4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1035E0u;
            goto label_1035e0;
        }
    }
    ctx->pc = 0x1035C8u;
    // 0x1035c8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1035c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1035cc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1035ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1035d0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1035d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1035d4: 0x8c850160  lw          $a1, 0x160($a0)
    ctx->pc = 0x1035d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1035d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1035D8u;
    {
        const bool branch_taken_0x1035d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035D8u;
        // 0x1035dc: 0x8ca20090  lw          $v0, 0x90($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035d8) {
            ctx->pc = 0x10364Cu;
            goto label_10364c;
        }
    }
    ctx->pc = 0x1035E0u;
label_1035e0:
    // 0x1035e0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1035E0u;
    {
        const bool branch_taken_0x1035e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1035E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035E0u;
        // 0x1035e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035e0) {
            ctx->pc = 0x1035F8u;
            goto label_1035f8;
        }
    }
    ctx->pc = 0x1035E8u;
    // 0x1035e8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1035e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1035ec: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1035ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1035f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1035F0u;
    {
        const bool branch_taken_0x1035f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035F0u;
        // 0x1035f4: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035f0) {
            ctx->pc = 0x10364Cu;
            goto label_10364c;
        }
    }
    ctx->pc = 0x1035F8u;
label_1035f8:
    // 0x1035f8: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1035F8u;
    {
        const bool branch_taken_0x1035f8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1035FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035F8u;
        // 0x1035fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035f8) {
            ctx->pc = 0x103610u;
            goto label_103610;
        }
    }
    ctx->pc = 0x103600u;
    // 0x103600: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x103600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x103604: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x103604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x103608: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103608u;
    {
        const bool branch_taken_0x103608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103608) {
            ctx->pc = 0x103614u;
            goto label_103614;
        }
    }
    ctx->pc = 0x103610u;
label_103610:
    // 0x103610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x103610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103614:
    // 0x103614: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x103614u;
    {
        const bool branch_taken_0x103614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x103618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103614u;
        // 0x103618: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103614) {
            ctx->pc = 0x103638u;
            goto label_103638;
        }
    }
    ctx->pc = 0x10361Cu;
    // 0x10361c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x10361cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x103620: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x103620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    // 0x103624: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x103624u;
    SET_GPR_U32(ctx, 31, 0x10362Cu);
    ctx->pc = 0x103628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103624u;
    // 0x103628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x103624u, 0x10362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10362Cu;
label_10362c:
    // 0x10362c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10362Cu;
    {
        const bool branch_taken_0x10362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10362Cu;
        // 0x103630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10362c) {
            ctx->pc = 0x103648u;
            goto label_103648;
        }
    }
    ctx->pc = 0x103634u;
    // 0x103634: 0x0  nop
    ctx->pc = 0x103634u;
    // NOP
label_103638:
    // 0x103638: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x103638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10363c: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x10363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x103640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x103640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x103644: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x103644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_103648:
    // 0x103648: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x103648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10364c:
    // 0x10364c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10364cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103658: 0x3e00008  jr          $ra
    ctx->pc = 0x103658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103658u;
        // 0x10365c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103660u;
}

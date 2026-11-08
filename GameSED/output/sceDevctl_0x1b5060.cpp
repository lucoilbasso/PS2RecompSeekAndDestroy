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

// Function: sceDevctl
// Address: 0x1b5060 - 0x1b5298
void sceDevctl_0x1b5060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevctl_0x1b5060");
#endif

    switch (ctx->pc) {
        case 0x1b50acu: goto label_1b50ac;
        case 0x1b50ccu: goto label_1b50cc;
        case 0x1b50e8u: goto label_1b50e8;
        case 0x1b513cu: goto label_1b513c;
        case 0x1b5160u: goto label_1b5160;
        case 0x1b51c0u: goto label_1b51c0;
        case 0x1b51e8u: goto label_1b51e8;
        case 0x1b5210u: goto label_1b5210;
        case 0x1b5220u: goto label_1b5220;
        case 0x1b5228u: goto label_1b5228;
        case 0x1b523cu: goto label_1b523c;
        case 0x1b524cu: goto label_1b524c;
        case 0x1b525cu: goto label_1b525c;
        case 0x1b5264u: goto label_1b5264;
        default: break;
    }

    ctx->pc = 0x1b5060u;

    // 0x1b5060: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b5060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b5064: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b5064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b5068: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1b5068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1b506c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b506cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5070: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b5070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b5074: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1b5074u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5078: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b5078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b507c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1b507cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5080: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b5080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b5084: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1b5084u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5088: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b5088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b508c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b508cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5090: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b5090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b5094: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b5094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5098: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1b5098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1b509c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1b509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1b50a0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b50a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b50a4: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B50A4u;
    SET_GPR_U32(ctx, 31, 0x1B50ACu);
    ctx->pc = 0x1B50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50A4u;
    // 0x1b50a8: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B50A4u, 0x1B50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50ACu;
label_1b50ac:
    // 0x1b50ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b50acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b50b0: 0x24529a80  addiu       $s2, $v0, -0x6580
    ctx->pc = 0x1b50b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x1b50b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b50b8: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b50bc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B50BCu;
    {
        const bool branch_taken_0x1b50bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b50bc) {
            ctx->pc = 0x1B50C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B50BCu;
            // 0x1b50c0: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B50D0u;
            goto label_1b50d0;
        }
    }
    ctx->pc = 0x1B50C4u;
    // 0x1b50c4: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B50C4u;
    SET_GPR_U32(ctx, 31, 0x1B50CCu);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B50C4u, 0x1B50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50CCu;
label_1b50cc:
    // 0x1b50cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b50ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b50d0:
    // 0x1b50d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b50d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50d4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b50d8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B50D8u;
    {
        const bool branch_taken_0x1b50d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50D8u;
        // 0x1b50dc: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50d8) {
            ctx->pc = 0x1B5114u;
            goto label_1b5114;
        }
    }
    ctx->pc = 0x1B50E0u;
    // 0x1b50e0: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x1b50e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1b50e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b50e8:
    // 0x1b50e8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b50e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b50ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B50ECu;
    {
        const bool branch_taken_0x1b50ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50ECu;
        // 0x1b50f0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50ec) {
            ctx->pc = 0x1B5118u;
            goto label_1b5118;
        }
    }
    ctx->pc = 0x1B50F4u;
    // 0x1b50f4: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1b50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1b50f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b50f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b50fc: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1b50fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5100: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b5100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b5104: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B5104u;
    {
        const bool branch_taken_0x1b5104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5104) {
            ctx->pc = 0x1B5108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5104u;
            // 0x1b5108: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b50e8;
        }
    }
    ctx->pc = 0x1B510Cu;
    // 0x1b510c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B510Cu;
    {
        const bool branch_taken_0x1b510c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B510Cu;
        // 0x1b5110: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b510c) {
            ctx->pc = 0x1B511Cu;
            goto label_1b511c;
        }
    }
    ctx->pc = 0x1B5114u;
label_1b5114:
    // 0x1b5114: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x1b5114u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_1b5118:
    // 0x1b5118: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b5118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b511c:
    // 0x1b511c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B511Cu;
    {
        const bool branch_taken_0x1b511c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b511c) {
            ctx->pc = 0x1B5120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B511Cu;
            // 0x1b5120: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5124u;
            goto label_1b5124;
        }
    }
    ctx->pc = 0x1B5124u;
label_1b5124:
    // 0x1b5124: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5124u;
    {
        const bool branch_taken_0x1b5124 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5124u;
        // 0x1b5128: 0x2ec20401  sltiu       $v0, $s6, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5124) {
            ctx->pc = 0x1B5134u;
            goto label_1b5134;
        }
    }
    ctx->pc = 0x1B512Cu;
    // 0x1b512c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B512Cu;
    {
        const bool branch_taken_0x1b512c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b512c) {
            ctx->pc = 0x1B5144u;
            goto label_1b5144;
        }
    }
    ctx->pc = 0x1B5134u;
label_1b5134:
    // 0x1b5134: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B5134u;
    SET_GPR_U32(ctx, 31, 0x1B513Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B5134u, 0x1B513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B513Cu;
label_1b513c:
    // 0x1b513c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1B513Cu;
    {
        const bool branch_taken_0x1b513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B513Cu;
        // 0x1b5140: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b513c) {
            ctx->pc = 0x1B5268u;
            goto label_1b5268;
        }
    }
    ctx->pc = 0x1B5144u;
label_1b5144:
    // 0x1b5144: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B5144u;
    {
        const bool branch_taken_0x1b5144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5144u;
        // 0x1b5148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5144) {
            ctx->pc = 0x1B5188u;
            goto label_1b5188;
        }
    }
    ctx->pc = 0x1B514Cu;
    // 0x1b514c: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1b514cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1b5150: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b5150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5154: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b5154u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b5158: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b5158u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b515c: 0x0  nop
    ctx->pc = 0x1b515cu;
    // NOP
label_1b5160:
    // 0x1b5160: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1b5164: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b5168: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b5168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b516c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b5170: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x1b5170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1b5174: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b5174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5178: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B5178u;
    {
        const bool branch_taken_0x1b5178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5178) {
            ctx->pc = 0x1B5160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5160;
        }
    }
    ctx->pc = 0x1B5180u;
    // 0x1b5180: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5180u;
    {
        const bool branch_taken_0x1b5180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5180u;
        // 0x1b5184: 0xae500810  sw          $s0, 0x810($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5180) {
            ctx->pc = 0x1B5198u;
            goto label_1b5198;
        }
    }
    ctx->pc = 0x1B5188u;
label_1b5188:
    // 0x1b5188: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b5188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b518c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b518cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b5190: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b5194: 0xae500810  sw          $s0, 0x810($s2)
    ctx->pc = 0x1b5194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 16));
label_1b5198:
    // 0x1b5198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b519c: 0xae57080c  sw          $s7, 0x80C($s2)
    ctx->pc = 0x1b519cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 23));
    // 0x1b51a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b51a4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b51a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b51a8: 0x2634a6c0  addiu       $s4, $s1, -0x5940
    ctx->pc = 0x1b51a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944448));
    // 0x1b51ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b51acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b51b0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b51b4: 0x24509a80  addiu       $s0, $v0, -0x6580
    ctx->pc = 0x1b51b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x1b51b8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B51B8u;
    SET_GPR_U32(ctx, 31, 0x1B51C0u);
    ctx->pc = 0x1B51BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51B8u;
    // 0x1b51bc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B51B8u, 0x1B51C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51C0u;
label_1b51c0:
    // 0x1b51c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b51c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51c4: 0xae560818  sw          $s6, 0x818($s2)
    ctx->pc = 0x1b51c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2072), GPR_U32(ctx, 22));
    // 0x1b51c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b51cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b51ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51d0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b51d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b51d4: 0x2405081c  addiu       $a1, $zero, 0x81C
    ctx->pc = 0x1b51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x1b51d8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b51d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b51dc: 0xae5e0814  sw          $fp, 0x814($s2)
    ctx->pc = 0x1b51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 30));
    // 0x1b51e0: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B51E0u;
    SET_GPR_U32(ctx, 31, 0x1B51E8u);
    ctx->pc = 0x1B51E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51E0u;
    // 0x1b51e4: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B51E0u, 0x1B51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51E8u;
label_1b51e8:
    // 0x1b51e8: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b51e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b51ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b51ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b51f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b51f4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1b51f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1b51f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b51f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51fc: 0x2408081c  addiu       $t0, $zero, 0x81C
    ctx->pc = 0x1b51fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x1b5200: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b5200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5204: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5208: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5208u;
    SET_GPR_U32(ctx, 31, 0x1B5210u);
    ctx->pc = 0x1B520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5208u;
    // 0x1b520c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5208u, 0x1B5210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5210u;
label_1b5210:
    // 0x1b5210: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5210u;
    {
        const bool branch_taken_0x1b5210 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5210u;
        // 0x1b5214: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5210) {
            ctx->pc = 0x1B5230u;
            goto label_1b5230;
        }
    }
    ctx->pc = 0x1B5218u;
    // 0x1b5218: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5218u;
    SET_GPR_U32(ctx, 31, 0x1B5220u);
    ctx->pc = 0x1B521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5218u;
    // 0x1b521c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5218u, 0x1B5220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5220u;
label_1b5220:
    // 0x1b5220: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B5220u;
    SET_GPR_U32(ctx, 31, 0x1B5228u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B5220u, 0x1B5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5228u;
label_1b5228:
    // 0x1b5228: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B5228u;
    {
        const bool branch_taken_0x1b5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5228u;
        // 0x1b522c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5228) {
            ctx->pc = 0x1B5268u;
            goto label_1b5268;
        }
    }
    ctx->pc = 0x1B5230u;
label_1b5230:
    // 0x1b5230: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b5234: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B5234u;
    SET_GPR_U32(ctx, 31, 0x1B523Cu);
    ctx->pc = 0x1B5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5234u;
    // 0x1b5238: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B5234u, 0x1B523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B523Cu;
label_1b523c:
    // 0x1b523c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B523Cu;
    {
        const bool branch_taken_0x1b523c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b523c) {
            ctx->pc = 0x1B5254u;
            goto label_1b5254;
        }
    }
    ctx->pc = 0x1B5244u;
    // 0x1b5244: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5244u;
    SET_GPR_U32(ctx, 31, 0x1B524Cu);
    ctx->pc = 0x1B5248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5244u;
    // 0x1b5248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5244u, 0x1B524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B524Cu;
label_1b524c:
    // 0x1b524c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B524Cu;
    {
        const bool branch_taken_0x1b524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B524Cu;
        // 0x1b5250: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b524c) {
            ctx->pc = 0x1B5268u;
            goto label_1b5268;
        }
    }
    ctx->pc = 0x1B5254u;
label_1b5254:
    // 0x1b5254: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B5254u;
    SET_GPR_U32(ctx, 31, 0x1B525Cu);
    ctx->pc = 0x1B5258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5254u;
    // 0x1b5258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B5254u, 0x1B525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B525Cu;
label_1b525c:
    // 0x1b525c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B525Cu;
    SET_GPR_U32(ctx, 31, 0x1B5264u);
    ctx->pc = 0x1B5260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B525Cu;
    // 0x1b5260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B525Cu, 0x1B5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5264u;
label_1b5264:
    // 0x1b5264: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5268:
    // 0x1b5268: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1b5268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b526c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1b526cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b5270: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b5270u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b5274: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b5274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5278: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b5278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b527c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b527cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5280: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b5280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b5284: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b5284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5288: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b5288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b528c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b528cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5290: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5290u;
        // 0x1b5294: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5298u;
}

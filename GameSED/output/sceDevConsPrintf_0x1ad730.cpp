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

// Function: sceDevConsPrintf
// Address: 0x1ad730 - 0x1ad984
void sceDevConsPrintf_0x1ad730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsPrintf_0x1ad730");
#endif

    switch (ctx->pc) {
        case 0x1ad778u: goto label_1ad778;
        case 0x1ad798u: goto label_1ad798;
        case 0x1ad7f4u: goto label_1ad7f4;
        case 0x1ad8acu: goto label_1ad8ac;
        case 0x1ad8bcu: goto label_1ad8bc;
        case 0x1ad8ccu: goto label_1ad8cc;
        case 0x1ad8dcu: goto label_1ad8dc;
        case 0x1ad8ecu: goto label_1ad8ec;
        case 0x1ad924u: goto label_1ad924;
        case 0x1ad934u: goto label_1ad934;
        default: break;
    }

    ctx->pc = 0x1ad730u;

    // 0x1ad730: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x1ad730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x1ad734: 0xffb10410  sd          $s1, 0x410($sp)
    ctx->pc = 0x1ad734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 17));
    // 0x1ad738: 0xffa60490  sd          $a2, 0x490($sp)
    ctx->pc = 0x1ad738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 6));
    // 0x1ad73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ad73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad740: 0xffb30430  sd          $s3, 0x430($sp)
    ctx->pc = 0x1ad740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 19));
    // 0x1ad744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ad744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad748: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x1ad748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x1ad74c: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x1ad74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x1ad750: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x1ad750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
    // 0x1ad754: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad758: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x1ad758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
    // 0x1ad75c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ad75cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad760: 0xffa70498  sd          $a3, 0x498($sp)
    ctx->pc = 0x1ad760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1176), GPR_U64(ctx, 7));
    // 0x1ad764: 0xffa804a0  sd          $t0, 0x4A0($sp)
    ctx->pc = 0x1ad764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 8));
    // 0x1ad768: 0xffa904a8  sd          $t1, 0x4A8($sp)
    ctx->pc = 0x1ad768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1192), GPR_U64(ctx, 9));
    // 0x1ad76c: 0xffaa04b0  sd          $t2, 0x4B0($sp)
    ctx->pc = 0x1ad76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 10));
    // 0x1ad770: 0xc074af6  jal         func_1D2BD8
    ctx->pc = 0x1AD770u;
    SET_GPR_U32(ctx, 31, 0x1AD778u);
    ctx->pc = 0x1AD774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD770u;
    // 0x1ad774: 0xffab04b8  sd          $t3, 0x4B8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 1208), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2BD8u, 0x1AD770u, 0x1AD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD778u;
label_1ad778:
    // 0x1ad778: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x1ad778u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad77c: 0x10c00079  beqz        $a2, . + 4 + (0x79 << 2)
    ctx->pc = 0x1AD77Cu;
    {
        const bool branch_taken_0x1ad77c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD77Cu;
        // 0x1ad780: 0x27b00001  addiu       $s0, $sp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad77c) {
            ctx->pc = 0x1AD964u;
            goto label_1ad964;
        }
    }
    ctx->pc = 0x1AD784u;
    // 0x1ad784: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1ad784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ad788: 0x14c2001a  bne         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AD788u;
    {
        const bool branch_taken_0x1ad788 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD788u;
        // 0x1ad78c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad788) {
            ctx->pc = 0x1AD7F4u;
            goto label_1ad7f4;
        }
    }
    ctx->pc = 0x1AD790u;
    // 0x1ad790: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1AD790u;
    {
        const bool branch_taken_0x1ad790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD790u;
        // 0x1ad794: 0x93a20001  lbu         $v0, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad790) {
            ctx->pc = 0x1AD954u;
            goto label_1ad954;
        }
    }
    ctx->pc = 0x1AD798u;
label_1ad798:
    // 0x1ad798: 0x24032442  addiu       $v1, $zero, 0x2442
    ctx->pc = 0x1ad798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9282));
    // 0x1ad79c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1ad79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ad7a0: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1AD7A0u;
    {
        const bool branch_taken_0x1ad7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7A0u;
        // 0x1ad7a4: 0x28a22443  slti        $v0, $a1, 0x2443 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9283) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7a0) {
            ctx->pc = 0x1AD7DCu;
            goto label_1ad7dc;
        }
    }
    ctx->pc = 0x1AD7A8u;
    // 0x1ad7a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD7A8u;
    {
        const bool branch_taken_0x1ad7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7A8u;
        // 0x1ad7ac: 0x24022440  addiu       $v0, $zero, 0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7a8) {
            ctx->pc = 0x1AD7C0u;
            goto label_1ad7c0;
        }
    }
    ctx->pc = 0x1AD7B0u;
    // 0x1ad7b0: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD7B0u;
    {
        const bool branch_taken_0x1ad7b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad7b0) {
            ctx->pc = 0x1AD7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD7B0u;
            // 0x1ad7b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD7E0u;
            goto label_1ad7e0;
        }
    }
    ctx->pc = 0x1AD7B8u;
    // 0x1ad7b8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1AD7B8u;
    {
        const bool branch_taken_0x1ad7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7b8) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD7C0u;
label_1ad7c0:
    // 0x1ad7c0: 0x24022840  addiu       $v0, $zero, 0x2840
    ctx->pc = 0x1ad7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10304));
    // 0x1ad7c4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD7C4u;
    {
        const bool branch_taken_0x1ad7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7C4u;
        // 0x1ad7c8: 0x24022842  addiu       $v0, $zero, 0x2842 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10306));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7c4) {
            ctx->pc = 0x1AD7E8u;
            goto label_1ad7e8;
        }
    }
    ctx->pc = 0x1AD7CCu;
    // 0x1ad7cc: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD7CCu;
    {
        const bool branch_taken_0x1ad7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad7cc) {
            ctx->pc = 0x1AD7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD7CCu;
            // 0x1ad7d0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD7ECu;
            goto label_1ad7ec;
        }
    }
    ctx->pc = 0x1AD7D4u;
    // 0x1ad7d4: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AD7D4u;
    {
        const bool branch_taken_0x1ad7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7d4) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD7DCu;
label_1ad7dc:
    // 0x1ad7dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ad7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad7e0:
    // 0x1ad7e0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1AD7E0u;
    {
        const bool branch_taken_0x1ad7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7E0u;
        // 0x1ad7e4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7e0) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD7E8u;
label_1ad7e8:
    // 0x1ad7e8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ad7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad7ec:
    // 0x1ad7ec: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1AD7ECu;
    {
        const bool branch_taken_0x1ad7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7ECu;
        // 0x1ad7f0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7ec) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD7F4u;
label_1ad7f4:
    // 0x1ad7f4: 0x14c20011  bne         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD7F4u;
    {
        const bool branch_taken_0x1ad7f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7F4u;
        // 0x1ad7f8: 0x2cc20080  sltiu       $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7f4) {
            ctx->pc = 0x1AD83Cu;
            goto label_1ad83c;
        }
    }
    ctx->pc = 0x1AD7FCu;
    // 0x1ad7fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1ad7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad800: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1AD800u;
    {
        const bool branch_taken_0x1ad800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD800u;
        // 0x1ad804: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad800) {
            ctx->pc = 0x1AD964u;
            goto label_1ad964;
        }
    }
    ctx->pc = 0x1AD808u;
    // 0x1ad808: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x1ad808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1ad80c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1ad80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ad810: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1ad810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ad814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD814u;
    {
        const bool branch_taken_0x1ad814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad814) {
            ctx->pc = 0x1AD82Cu;
            goto label_1ad82c;
        }
    }
    ctx->pc = 0x1AD81Cu;
    // 0x1ad81c: 0x56200046  bnel        $s1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1AD81Cu;
    {
        const bool branch_taken_0x1ad81c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad81c) {
            ctx->pc = 0x1AD820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD81Cu;
            // 0x1ad820: 0xa224000c  sb          $a0, 0xC($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD938u;
            goto label_1ad938;
        }
    }
    ctx->pc = 0x1AD824u;
    // 0x1ad824: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1AD824u;
    {
        const bool branch_taken_0x1ad824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD824u;
        // 0x1ad828: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad824) {
            ctx->pc = 0x1AD93Cu;
            goto label_1ad93c;
        }
    }
    ctx->pc = 0x1AD82Cu;
label_1ad82c:
    // 0x1ad82c: 0x54660043  bnel        $v1, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x1AD82Cu;
    {
        const bool branch_taken_0x1ad82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ad82c) {
            ctx->pc = 0x1AD830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD82Cu;
            // 0x1ad830: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD93Cu;
            goto label_1ad93c;
        }
    }
    ctx->pc = 0x1AD834u;
    // 0x1ad834: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1AD834u;
    {
        const bool branch_taken_0x1ad834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad834) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD83Cu;
label_1ad83c:
    // 0x1ad83c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AD83Cu;
    {
        const bool branch_taken_0x1ad83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD83Cu;
        // 0x1ad840: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad83c) {
            ctx->pc = 0x1AD8F4u;
            goto label_1ad8f4;
        }
    }
    ctx->pc = 0x1AD844u;
    // 0x1ad844: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1ad844u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad848: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1AD848u;
    {
        const bool branch_taken_0x1ad848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD848u;
        // 0x1ad84c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad848) {
            ctx->pc = 0x1AD964u;
            goto label_1ad964;
        }
    }
    ctx->pc = 0x1AD850u;
    // 0x1ad850: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ad854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad858: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ad858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ad85c: 0x1243001d  beq         $s2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AD85Cu;
    {
        const bool branch_taken_0x1ad85c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD85Cu;
        // 0x1ad860: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad85c) {
            ctx->pc = 0x1AD8D4u;
            goto label_1ad8d4;
        }
    }
    ctx->pc = 0x1AD864u;
    // 0x1ad864: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD864u;
    {
        const bool branch_taken_0x1ad864 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD864u;
        // 0x1ad868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad864) {
            ctx->pc = 0x1AD87Cu;
            goto label_1ad87c;
        }
    }
    ctx->pc = 0x1AD86Cu;
    // 0x1ad86c: 0x1242001d  beq         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AD86Cu;
    {
        const bool branch_taken_0x1ad86c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad86c) {
            ctx->pc = 0x1AD8E4u;
            goto label_1ad8e4;
        }
    }
    ctx->pc = 0x1AD874u;
    // 0x1ad874: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1AD874u;
    {
        const bool branch_taken_0x1ad874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad874) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD87Cu;
label_1ad87c:
    // 0x1ad87c: 0x2cc200a0  sltiu       $v0, $a2, 0xA0
    ctx->pc = 0x1ad87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x1ad880: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD880u;
    {
        const bool branch_taken_0x1ad880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD880u;
        // 0x1ad884: 0x24c2ff20  addiu       $v0, $a2, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad880) {
            ctx->pc = 0x1AD8A4u;
            goto label_1ad8a4;
        }
    }
    ctx->pc = 0x1AD888u;
    // 0x1ad888: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ad888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ad88c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ad890: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD890u;
    {
        const bool branch_taken_0x1ad890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD890u;
        // 0x1ad894: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad890) {
            ctx->pc = 0x1AD8C4u;
            goto label_1ad8c4;
        }
    }
    ctx->pc = 0x1AD898u;
    // 0x1ad898: 0x2c4200a1  sltiu       $v0, $v0, 0xA1
    ctx->pc = 0x1ad898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)161) ? 1 : 0);
    // 0x1ad89c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD89Cu;
    {
        const bool branch_taken_0x1ad89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad89c) {
            ctx->pc = 0x1AD8B4u;
            goto label_1ad8b4;
        }
    }
    ctx->pc = 0x1AD8A4u;
label_1ad8a4:
    // 0x1ad8a4: 0xc06b820  jal         func_1AE080
    ctx->pc = 0x1AD8A4u;
    SET_GPR_U32(ctx, 31, 0x1AD8ACu);
    ctx->pc = 0x1AD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8A4u;
    // 0x1ad8a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE080u, 0x1AD8A4u, 0x1AD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8ACu;
label_1ad8ac:
    // 0x1ad8ac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AD8ACu;
    {
        const bool branch_taken_0x1ad8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8ACu;
        // 0x1ad8b0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8ac) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD8B4u;
label_1ad8b4:
    // 0x1ad8b4: 0xc06b81c  jal         func_1AE070
    ctx->pc = 0x1AD8B4u;
    SET_GPR_U32(ctx, 31, 0x1AD8BCu);
    ctx->pc = 0x1AD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8B4u;
    // 0x1ad8b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE070u, 0x1AD8B4u, 0x1AD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8BCu;
label_1ad8bc:
    // 0x1ad8bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AD8BCu;
    {
        const bool branch_taken_0x1ad8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8BCu;
        // 0x1ad8c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8bc) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD8C4u;
label_1ad8c4:
    // 0x1ad8c4: 0xc06b81c  jal         func_1AE070
    ctx->pc = 0x1AD8C4u;
    SET_GPR_U32(ctx, 31, 0x1AD8CCu);
    ctx->pc = 0x1AD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8C4u;
    // 0x1ad8c8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE070u, 0x1AD8C4u, 0x1AD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8CCu;
label_1ad8cc:
    // 0x1ad8cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD8CCu;
    {
        const bool branch_taken_0x1ad8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8CCu;
        // 0x1ad8d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8cc) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD8D4u;
label_1ad8d4:
    // 0x1ad8d4: 0xc06b820  jal         func_1AE080
    ctx->pc = 0x1AD8D4u;
    SET_GPR_U32(ctx, 31, 0x1AD8DCu);
    ctx->pc = 0x1AE080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE080u, 0x1AD8D4u, 0x1AD8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8DCu;
label_1ad8dc:
    // 0x1ad8dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AD8DCu;
    {
        const bool branch_taken_0x1ad8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8DCu;
        // 0x1ad8e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8dc) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD8E4u;
label_1ad8e4:
    // 0x1ad8e4: 0xc06b81c  jal         func_1AE070
    ctx->pc = 0x1AD8E4u;
    SET_GPR_U32(ctx, 31, 0x1AD8ECu);
    ctx->pc = 0x1AE070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE070u, 0x1AD8E4u, 0x1AD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8ECu;
label_1ad8ec:
    // 0x1ad8ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD8ECu;
    {
        const bool branch_taken_0x1ad8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8ECu;
        // 0x1ad8f0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8ec) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD8F4u;
label_1ad8f4:
    // 0x1ad8f4: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD8F4u;
    {
        const bool branch_taken_0x1ad8f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad8f4) {
            ctx->pc = 0x1AD914u;
            goto label_1ad914;
        }
    }
    ctx->pc = 0x1AD8FCu;
    // 0x1ad8fc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1ad8fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad900: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AD900u;
    {
        const bool branch_taken_0x1ad900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD900u;
        // 0x1ad904: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad900) {
            ctx->pc = 0x1AD964u;
            goto label_1ad964;
        }
    }
    ctx->pc = 0x1AD908u;
    // 0x1ad908: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ad90c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ad90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ad910: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1ad910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1ad914:
    // 0x1ad914: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD914u;
    {
        const bool branch_taken_0x1ad914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad914) {
            ctx->pc = 0x1AD918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD914u;
            // 0x1ad918: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD938u;
            goto label_1ad938;
        }
    }
    ctx->pc = 0x1AD91Cu;
    // 0x1ad91c: 0xc06b93a  jal         func_1AE4E8
    ctx->pc = 0x1AD91Cu;
    SET_GPR_U32(ctx, 31, 0x1AD924u);
    ctx->pc = 0x1AD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD91Cu;
    // 0x1ad920: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE4E8u, 0x1AD91Cu, 0x1AD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD924u;
label_1ad924:
    // 0x1ad924: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x1ad924u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ad928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad92c: 0xc06b66e  jal         func_1AD9B8
    ctx->pc = 0x1AD92Cu;
    SET_GPR_U32(ctx, 31, 0x1AD934u);
    ctx->pc = 0x1AD930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD92Cu;
    // 0x1ad930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD9B8u, 0x1AD92Cu, 0x1AD934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD934u;
label_1ad934:
    // 0x1ad934: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ad938:
    // 0x1ad938: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1ad938u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ad93c:
    // 0x1ad93c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD93Cu;
    {
        const bool branch_taken_0x1ad93c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD93Cu;
        // 0x1ad940: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad93c) {
            ctx->pc = 0x1AD964u;
            goto label_1ad964;
        }
    }
    ctx->pc = 0x1AD944u;
    // 0x1ad944: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1ad944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ad948: 0x14c2ffaa  bne         $a2, $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x1AD948u;
    {
        const bool branch_taken_0x1ad948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD948u;
        // 0x1ad94c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad948) {
            ctx->pc = 0x1AD7F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad7f4;
        }
    }
    ctx->pc = 0x1AD950u;
    // 0x1ad950: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ad950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ad954:
    // 0x1ad954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD954u;
    {
        const bool branch_taken_0x1ad954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD954u;
        // 0x1ad958: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad954) {
            ctx->pc = 0x1AD964u;
            goto label_1ad964;
        }
    }
    ctx->pc = 0x1AD95Cu;
    // 0x1ad95c: 0x14a0ff8e  bnez        $a1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x1AD95Cu;
    {
        const bool branch_taken_0x1ad95c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD95Cu;
        // 0x1ad960: 0x21200  sll         $v0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad95c) {
            ctx->pc = 0x1AD798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad798;
        }
    }
    ctx->pc = 0x1AD964u;
label_1ad964:
    // 0x1ad964: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ad964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad968: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x1ad968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1ad96c: 0xdfb30430  ld          $s3, 0x430($sp)
    ctx->pc = 0x1ad96cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1ad970: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x1ad970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1ad974: 0xdfb10410  ld          $s1, 0x410($sp)
    ctx->pc = 0x1ad974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1ad978: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x1ad978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1ad97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD97Cu;
        // 0x1ad980: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD984u;
}

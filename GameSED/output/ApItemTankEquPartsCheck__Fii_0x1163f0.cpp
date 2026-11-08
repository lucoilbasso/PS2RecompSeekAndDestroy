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

// Function: ApItemTankEquPartsCheck__Fii
// Address: 0x1163f0 - 0x1164c8
void ApItemTankEquPartsCheck__Fii_0x1163f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemTankEquPartsCheck__Fii_0x1163f0");
#endif

    switch (ctx->pc) {
        case 0x116424u: goto label_116424;
        case 0x116434u: goto label_116434;
        case 0x116458u: goto label_116458;
        case 0x116478u: goto label_116478;
        case 0x11648cu: goto label_11648c;
        default: break;
    }

    ctx->pc = 0x1163f0u;

    // 0x1163f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1163f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1163f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1163f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1163f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1163f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1163fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116400: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x116400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116404: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11640c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x116410: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x116410u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x116414: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x116414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x116418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11641c: 0xc041882  jal         func_106208
    ctx->pc = 0x11641Cu;
    SET_GPR_U32(ctx, 31, 0x116424u);
    ctx->pc = 0x116420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11641Cu;
    // 0x116420: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11641Cu, 0x116424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116424u;
label_116424:
    // 0x116424: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116428: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11642c: 0xc041882  jal         func_106208
    ctx->pc = 0x11642Cu;
    SET_GPR_U32(ctx, 31, 0x116434u);
    ctx->pc = 0x116430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11642Cu;
    // 0x116430: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11642Cu, 0x116434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116434u;
label_116434:
    // 0x116434: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x116434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x116438: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x116438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11643c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116440: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x116440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    // 0x116444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116448: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116448u;
    {
        const bool branch_taken_0x116448 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116448u;
        // 0x11644c: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116448) {
            ctx->pc = 0x116458u;
            goto label_116458;
        }
    }
    ctx->pc = 0x116450u;
    // 0x116450: 0xc068186  jal         func_1A0618
    ctx->pc = 0x116450u;
    SET_GPR_U32(ctx, 31, 0x116458u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x116450u, 0x116458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116458u;
label_116458:
    // 0x116458: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x116458u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x11645c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116460: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x116460u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116464: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x116464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x116468: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x116468u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x11646c: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x11646cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x116470: 0xc041882  jal         func_106208
    ctx->pc = 0x116470u;
    SET_GPR_U32(ctx, 31, 0x116478u);
    ctx->pc = 0x116474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116470u;
    // 0x116474: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116470u, 0x116478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116478u;
label_116478:
    // 0x116478: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x116478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11647c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116480: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x116480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116484: 0xc041882  jal         func_106208
    ctx->pc = 0x116484u;
    SET_GPR_U32(ctx, 31, 0x11648Cu);
    ctx->pc = 0x116488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116484u;
    // 0x116488: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116484u, 0x11648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11648Cu;
label_11648c:
    // 0x11648c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x11648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x116490: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x116490u;
    {
        const bool branch_taken_0x116490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116490u;
        // 0x116494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116490) {
            ctx->pc = 0x1164ACu;
            goto label_1164ac;
        }
    }
    ctx->pc = 0x116498u;
    // 0x116498: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x116498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11649c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11649cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1164a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1164a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1164a4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1164a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1164a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1164a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1164ac:
    // 0x1164ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1164acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1164b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1164b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1164b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1164b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1164b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1164b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1164bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1164bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1164c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1164C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164C0u;
        // 0x1164c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1164C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1164C8u;
}

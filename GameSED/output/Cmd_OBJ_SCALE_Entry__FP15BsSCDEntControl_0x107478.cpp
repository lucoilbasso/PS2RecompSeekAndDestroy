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

// Function: Cmd_OBJ_SCALE_Entry__FP15BsSCDEntControl
// Address: 0x107478 - 0x107544
void Cmd_OBJ_SCALE_Entry__FP15BsSCDEntControl_0x107478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_SCALE_Entry__FP15BsSCDEntControl_0x107478");
#endif

    switch (ctx->pc) {
        case 0x1074a4u: goto label_1074a4;
        case 0x1074ccu: goto label_1074cc;
        case 0x1074e0u: goto label_1074e0;
        case 0x107500u: goto label_107500;
        case 0x107510u: goto label_107510;
        case 0x10752cu: goto label_10752c;
        default: break;
    }

    ctx->pc = 0x107478u;

    // 0x107478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x107478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10747c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10747cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107480: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x107480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x107484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107488: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x107488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10748c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10748cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107490: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x107490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x107494: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x107494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x107498: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x107498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10749c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10749Cu;
    SET_GPR_U32(ctx, 31, 0x1074A4u);
    ctx->pc = 0x1074A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10749Cu;
    // 0x1074a0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10749Cu, 0x1074A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074A4u;
label_1074a4:
    // 0x1074a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1074a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074a8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1074a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1074ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1074acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1074b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1074b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1074b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1074b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1074bc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1074BCu;
    {
        const bool branch_taken_0x1074bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074BCu;
        // 0x1074c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074bc) {
            ctx->pc = 0x1074E8u;
            goto label_1074e8;
        }
    }
    ctx->pc = 0x1074C4u;
    // 0x1074c4: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x1074C4u;
    SET_GPR_U32(ctx, 31, 0x1074CCu);
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x1074C4u, 0x1074CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074CCu;
label_1074cc:
    // 0x1074cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1074ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1074d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1074d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1074d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074d8: 0xc061372  jal         func_184DC8
    ctx->pc = 0x1074D8u;
    SET_GPR_U32(ctx, 31, 0x1074E0u);
    ctx->pc = 0x1074DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1074D8u;
    // 0x1074dc: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x1074D8u, 0x1074E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074E0u;
label_1074e0:
    // 0x1074e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1074E0u;
    {
        const bool branch_taken_0x1074e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074E0u;
        // 0x1074e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074e0) {
            ctx->pc = 0x107530u;
            goto label_107530;
        }
    }
    ctx->pc = 0x1074E8u;
label_1074e8:
    // 0x1074e8: 0x1467000b  bne         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1074E8u;
    {
        const bool branch_taken_0x1074e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1074ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074E8u;
        // 0x1074ec: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074e8) {
            ctx->pc = 0x107518u;
            goto label_107518;
        }
    }
    ctx->pc = 0x1074F0u;
    // 0x1074f0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1074f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1074f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1074f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1074f8: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x1074F8u;
    SET_GPR_U32(ctx, 31, 0x107500u);
    ctx->pc = 0x1074FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1074F8u;
    // 0x1074fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x1074F8u, 0x107500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107500u;
label_107500:
    // 0x107500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107508: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x107508u;
    SET_GPR_U32(ctx, 31, 0x107510u);
    ctx->pc = 0x10750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107508u;
    // 0x10750c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x107508u, 0x107510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107510u;
label_107510:
    // 0x107510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107510u;
    {
        const bool branch_taken_0x107510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107510u;
        // 0x107514: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107510) {
            ctx->pc = 0x107530u;
            goto label_107530;
        }
    }
    ctx->pc = 0x107518u;
label_107518:
    // 0x107518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10751c: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x10751cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x107520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107524: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x107524u;
    SET_GPR_U32(ctx, 31, 0x10752Cu);
    ctx->pc = 0x107528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107524u;
    // 0x107528: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x107524u, 0x10752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10752Cu;
label_10752c:
    // 0x10752c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10752cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_107530:
    // 0x107530: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x107530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x107534: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107538: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x107538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10753c: 0x3e00008  jr          $ra
    ctx->pc = 0x10753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10753Cu;
        // 0x107540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107544u;
}

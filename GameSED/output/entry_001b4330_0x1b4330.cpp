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

// Function: entry_001b4330
// Address: 0x1b4330 - 0x1b43bc
void entry_001b4330_0x1b4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4330_0x1b4330");
#endif

    switch (ctx->pc) {
        case 0x1b4350u: goto label_1b4350;
        case 0x1b439cu: goto label_1b439c;
        case 0x1b43acu: goto label_1b43ac;
        case 0x1b43b4u: goto label_1b43b4;
        default: break;
    }

    ctx->pc = 0x1b4330u;

    // 0x1b4330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4334: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1b4334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1b4338: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b433c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1b433cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1b4340: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1b4340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1b4344: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b4344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4348: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4348u;
    SET_GPR_U32(ctx, 31, 0x1B4350u);
    ctx->pc = 0x1B434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4348u;
    // 0x1b434c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4348u, 0x1B4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4350u;
label_1b4350:
    // 0x1b4350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4354: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b4354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4358: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b435c: 0xae719a80  sw          $s1, -0x6580($s3)
    ctx->pc = 0x1b435cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294941312), GPR_U32(ctx, 17));
    // 0x1b4360: 0x2450a6c0  addiu       $s0, $v0, -0x5940
    ctx->pc = 0x1b4360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x1b4364: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b4364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b4368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b436c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1b436cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1b4370: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b4374: 0x2484b180  addiu       $a0, $a0, -0x4E80
    ctx->pc = 0x1b4374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    // 0x1b4378: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b4378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b437c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b4380: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4388: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1b4388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b438c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b438cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4390: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4394: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4394u;
    SET_GPR_U32(ctx, 31, 0x1B439Cu);
    ctx->pc = 0x1B4398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4394u;
    // 0x1b4398: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4394u, 0x1B439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B439Cu;
label_1b439c:
    // 0x1b439c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B439Cu;
    {
        const bool branch_taken_0x1b439c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B439Cu;
        // 0x1b43a0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b439c) {
            ctx->pc = 0x1B43BCu;
            return;
        }
    }
    ctx->pc = 0x1B43A4u;
    // 0x1b43a4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B43A4u;
    SET_GPR_U32(ctx, 31, 0x1B43ACu);
    ctx->pc = 0x1B43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43A4u;
    // 0x1b43a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B43A4u, 0x1B43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43ACu;
label_1b43ac:
    // 0x1b43ac: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B43ACu;
    SET_GPR_U32(ctx, 31, 0x1B43B4u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B43ACu, 0x1B43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43B4u;
label_1b43b4:
    // 0x1b43b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B43B4u;
    {
        const bool branch_taken_0x1b43b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B4u;
        // 0x1b43b8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43b4) {
            ctx->pc = 0x1B43F4u;
            return;
        }
    }
    ctx->pc = 0x1B43BCu;
}

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

// Function: entry_001b3678
// Address: 0x1b3678 - 0x1b36fc
void entry_001b3678_0x1b3678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3678_0x1b3678");
#endif

    switch (ctx->pc) {
        case 0x1b3690u: goto label_1b3690;
        case 0x1b36b4u: goto label_1b36b4;
        case 0x1b36dcu: goto label_1b36dc;
        case 0x1b36ecu: goto label_1b36ec;
        case 0x1b36f4u: goto label_1b36f4;
        default: break;
    }

    ctx->pc = 0x1b3678u;

    // 0x1b3678: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b3678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b367c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b367cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b3680: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3684: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b3684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b3688: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3688u;
    SET_GPR_U32(ctx, 31, 0x1B3690u);
    ctx->pc = 0x1B368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3688u;
    // 0x1b368c: 0x2634a6c0  addiu       $s4, $s1, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3688u, 0x1B3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3690u;
label_1b3690:
    // 0x1b3690: 0x26d09a80  addiu       $s0, $s6, -0x6580
    ctx->pc = 0x1b3690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b3694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b369c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b36a0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1b36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1b36a4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1b36a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1b36a8: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x1b36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1b36ac: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B36ACu;
    SET_GPR_U32(ctx, 31, 0x1B36B4u);
    ctx->pc = 0x1B36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36ACu;
    // 0x1b36b0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B36ACu, 0x1B36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36B4u;
label_1b36b4:
    // 0x1b36b4: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b36b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b36b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b36c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b36c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b36c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b36c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36c8: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1b36c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1b36cc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b36ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36d0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b36d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b36d4: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B36D4u;
    SET_GPR_U32(ctx, 31, 0x1B36DCu);
    ctx->pc = 0x1B36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36D4u;
    // 0x1b36d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B36D4u, 0x1B36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36DCu;
label_1b36dc:
    // 0x1b36dc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B36DCu;
    {
        const bool branch_taken_0x1b36dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36DCu;
        // 0x1b36e0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36dc) {
            ctx->pc = 0x1B36FCu;
            return;
        }
    }
    ctx->pc = 0x1B36E4u;
    // 0x1b36e4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B36E4u;
    SET_GPR_U32(ctx, 31, 0x1B36ECu);
    ctx->pc = 0x1B36E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36E4u;
    // 0x1b36e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B36E4u, 0x1B36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36ECu;
label_1b36ec:
    // 0x1b36ec: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B36ECu;
    SET_GPR_U32(ctx, 31, 0x1B36F4u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B36ECu, 0x1B36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36F4u;
label_1b36f4:
    // 0x1b36f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B36F4u;
    {
        const bool branch_taken_0x1b36f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36F4u;
        // 0x1b36f8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36f4) {
            ctx->pc = 0x1B3734u;
            return;
        }
    }
    ctx->pc = 0x1B36FCu;
}

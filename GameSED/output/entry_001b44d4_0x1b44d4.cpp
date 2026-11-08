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

// Function: entry_001b44d4
// Address: 0x1b44d4 - 0x1b454c
void entry_001b44d4_0x1b44d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b44d4_0x1b44d4");
#endif

    switch (ctx->pc) {
        case 0x1b44f0u: goto label_1b44f0;
        case 0x1b452cu: goto label_1b452c;
        case 0x1b453cu: goto label_1b453c;
        case 0x1b4544u: goto label_1b4544;
        default: break;
    }

    ctx->pc = 0x1b44d4u;

    // 0x1b44d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b44d8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b44dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b44dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b44e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b44e4: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b44e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b44e8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B44E8u;
    SET_GPR_U32(ctx, 31, 0x1B44F0u);
    ctx->pc = 0x1B44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44E8u;
    // 0x1b44ec: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B44E8u, 0x1B44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44F0u;
label_1b44f0:
    // 0x1b44f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b44f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44f4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b44f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b44fc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b4500: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4500u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b4504: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b4504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b4508: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b4508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b450c: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1b450cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1b4510: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4514: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b4514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b4518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b451c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b451cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4520: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4524: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4524u;
    SET_GPR_U32(ctx, 31, 0x1B452Cu);
    ctx->pc = 0x1B4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4524u;
    // 0x1b4528: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4524u, 0x1B452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B452Cu;
label_1b452c:
    // 0x1b452c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B452Cu;
    {
        const bool branch_taken_0x1b452c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B452Cu;
        // 0x1b4530: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b452c) {
            ctx->pc = 0x1B454Cu;
            return;
        }
    }
    ctx->pc = 0x1B4534u;
    // 0x1b4534: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4534u;
    SET_GPR_U32(ctx, 31, 0x1B453Cu);
    ctx->pc = 0x1B4538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4534u;
    // 0x1b4538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4534u, 0x1B453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B453Cu;
label_1b453c:
    // 0x1b453c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B453Cu;
    SET_GPR_U32(ctx, 31, 0x1B4544u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B453Cu, 0x1B4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4544u;
label_1b4544:
    // 0x1b4544: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4544u;
    {
        const bool branch_taken_0x1b4544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4544u;
        // 0x1b4548: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4544) {
            ctx->pc = 0x1B4584u;
            return;
        }
    }
    ctx->pc = 0x1B454Cu;
}

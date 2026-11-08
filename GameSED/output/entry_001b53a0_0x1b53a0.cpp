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

// Function: entry_001b53a0
// Address: 0x1b53a0 - 0x1b5418
void entry_001b53a0_0x1b53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b53a0_0x1b53a0");
#endif

    switch (ctx->pc) {
        case 0x1b53bcu: goto label_1b53bc;
        case 0x1b53f8u: goto label_1b53f8;
        case 0x1b5408u: goto label_1b5408;
        case 0x1b5410u: goto label_1b5410;
        default: break;
    }

    ctx->pc = 0x1b53a0u;

    // 0x1b53a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b53a4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b53a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b53ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b53acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b53b0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b53b4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B53B4u;
    SET_GPR_U32(ctx, 31, 0x1B53BCu);
    ctx->pc = 0x1B53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53B4u;
    // 0x1b53b8: 0x2690a6c0  addiu       $s0, $s4, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B53B4u, 0x1B53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53BCu;
label_1b53bc:
    // 0x1b53bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b53bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53c0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b53c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b53c8: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b53cc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b53ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b53d0: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b53d4: 0x26c79a80  addiu       $a3, $s6, -0x6580
    ctx->pc = 0x1b53d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b53d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1b53d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b53dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b53e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b53e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53e4: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1b53e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1b53e8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b53e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53ec: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b53ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b53f0: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B53F0u;
    SET_GPR_U32(ctx, 31, 0x1B53F8u);
    ctx->pc = 0x1B53F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53F0u;
    // 0x1b53f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B53F0u, 0x1B53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53F8u;
label_1b53f8:
    // 0x1b53f8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B53F8u;
    {
        const bool branch_taken_0x1b53f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53F8u;
        // 0x1b53fc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53f8) {
            ctx->pc = 0x1B5418u;
            return;
        }
    }
    ctx->pc = 0x1B5400u;
    // 0x1b5400: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5400u;
    SET_GPR_U32(ctx, 31, 0x1B5408u);
    ctx->pc = 0x1B5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5400u;
    // 0x1b5404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5400u, 0x1B5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5408u;
label_1b5408:
    // 0x1b5408: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B5408u;
    SET_GPR_U32(ctx, 31, 0x1B5410u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B5408u, 0x1B5410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5410u;
label_1b5410:
    // 0x1b5410: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B5410u;
    {
        const bool branch_taken_0x1b5410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5410u;
        // 0x1b5414: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5410) {
            ctx->pc = 0x1B5450u;
            return;
        }
    }
    ctx->pc = 0x1B5418u;
}

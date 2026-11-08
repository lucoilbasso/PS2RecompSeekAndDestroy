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

// Function: entry_001b5198
// Address: 0x1b5198 - 0x1b5230
void entry_001b5198_0x1b5198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5198_0x1b5198");
#endif

    switch (ctx->pc) {
        case 0x1b51c0u: goto label_1b51c0;
        case 0x1b51e8u: goto label_1b51e8;
        case 0x1b5210u: goto label_1b5210;
        case 0x1b5220u: goto label_1b5220;
        case 0x1b5228u: goto label_1b5228;
        default: break;
    }

    ctx->pc = 0x1b5198u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1B5230u;
}

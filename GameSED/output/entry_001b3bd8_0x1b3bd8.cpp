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

// Function: entry_001b3bd8
// Address: 0x1b3bd8 - 0x1b3c50
void entry_001b3bd8_0x1b3bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3bd8_0x1b3bd8");
#endif

    switch (ctx->pc) {
        case 0x1b3bf4u: goto label_1b3bf4;
        case 0x1b3c30u: goto label_1b3c30;
        case 0x1b3c40u: goto label_1b3c40;
        case 0x1b3c48u: goto label_1b3c48;
        default: break;
    }

    ctx->pc = 0x1b3bd8u;

    // 0x1b3bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3bdc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b3be0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3be4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b3be8: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b3be8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b3bec: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3BECu;
    SET_GPR_U32(ctx, 31, 0x1B3BF4u);
    ctx->pc = 0x1B3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BECu;
    // 0x1b3bf0: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3BECu, 0x1B3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BF4u;
label_1b3bf4:
    // 0x1b3bf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bf8: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b3bfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3c00: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b3c04: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b3c08: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b3c0c: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b3c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3c10: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1b3c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1b3c14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3c18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b3c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c20: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b3c20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b3c24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3c28: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3C28u;
    SET_GPR_U32(ctx, 31, 0x1B3C30u);
    ctx->pc = 0x1B3C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C28u;
    // 0x1b3c2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3C28u, 0x1B3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C30u;
label_1b3c30:
    // 0x1b3c30: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3C30u;
    {
        const bool branch_taken_0x1b3c30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C30u;
        // 0x1b3c34: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c30) {
            ctx->pc = 0x1B3C50u;
            return;
        }
    }
    ctx->pc = 0x1B3C38u;
    // 0x1b3c38: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3C38u;
    SET_GPR_U32(ctx, 31, 0x1B3C40u);
    ctx->pc = 0x1B3C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C38u;
    // 0x1b3c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3C38u, 0x1B3C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C40u;
label_1b3c40:
    // 0x1b3c40: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3C40u;
    SET_GPR_U32(ctx, 31, 0x1B3C48u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3C40u, 0x1B3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C48u;
label_1b3c48:
    // 0x1b3c48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3C48u;
    {
        const bool branch_taken_0x1b3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C48u;
        // 0x1b3c4c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c48) {
            ctx->pc = 0x1B3C88u;
            return;
        }
    }
    ctx->pc = 0x1B3C50u;
}

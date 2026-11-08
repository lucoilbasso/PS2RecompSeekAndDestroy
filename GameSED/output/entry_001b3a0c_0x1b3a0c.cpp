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

// Function: entry_001b3a0c
// Address: 0x1b3a0c - 0x1b3a80
void entry_001b3a0c_0x1b3a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3a0c_0x1b3a0c");
#endif

    switch (ctx->pc) {
        case 0x1b3a24u: goto label_1b3a24;
        case 0x1b3a60u: goto label_1b3a60;
        case 0x1b3a70u: goto label_1b3a70;
        case 0x1b3a78u: goto label_1b3a78;
        default: break;
    }

    ctx->pc = 0x1b3a0cu;

    // 0x1b3a0c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b3a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b3a10: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b3a14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3a18: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b3a1c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A24u);
    ctx->pc = 0x1B3A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A1Cu;
    // 0x1b3a20: 0x2694a6c0  addiu       $s4, $s4, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3A1Cu, 0x1B3A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A24u;
label_1b3a24:
    // 0x1b3a24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a28: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b3a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b3a2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3a30: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b3a34: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b3a38: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b3a3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b3a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a40: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b3a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3a44: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1b3a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1b3a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3a50: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b3a50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a54: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b3a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3a58: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3A58u;
    SET_GPR_U32(ctx, 31, 0x1B3A60u);
    ctx->pc = 0x1B3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A58u;
    // 0x1b3a5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3A58u, 0x1B3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A60u;
label_1b3a60:
    // 0x1b3a60: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3A60u;
    {
        const bool branch_taken_0x1b3a60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A60u;
        // 0x1b3a64: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a60) {
            ctx->pc = 0x1B3A80u;
            return;
        }
    }
    ctx->pc = 0x1B3A68u;
    // 0x1b3a68: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3A68u;
    SET_GPR_U32(ctx, 31, 0x1B3A70u);
    ctx->pc = 0x1B3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A68u;
    // 0x1b3a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3A68u, 0x1B3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A70u;
label_1b3a70:
    // 0x1b3a70: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3A70u;
    SET_GPR_U32(ctx, 31, 0x1B3A78u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3A70u, 0x1B3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A78u;
label_1b3a78:
    // 0x1b3a78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3A78u;
    {
        const bool branch_taken_0x1b3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A78u;
        // 0x1b3a7c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a78) {
            ctx->pc = 0x1B3AB8u;
            return;
        }
    }
    ctx->pc = 0x1B3A80u;
}

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

// Function: entry_001b3e58
// Address: 0x1b3e58 - 0x1b3ee0
void entry_001b3e58_0x1b3e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3e58_0x1b3e58");
#endif

    switch (ctx->pc) {
        case 0x1b3e78u: goto label_1b3e78;
        case 0x1b3e98u: goto label_1b3e98;
        case 0x1b3ec0u: goto label_1b3ec0;
        case 0x1b3ed0u: goto label_1b3ed0;
        case 0x1b3ed8u: goto label_1b3ed8;
        default: break;
    }

    ctx->pc = 0x1b3e58u;

    // 0x1b3e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3e5c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b3e60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3e64: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b3e68: 0x26f09a80  addiu       $s0, $s7, -0x6580
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3e6c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b3e70: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3E70u;
    SET_GPR_U32(ctx, 31, 0x1B3E78u);
    ctx->pc = 0x1B3E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E70u;
    // 0x1b3e74: 0x2694a6c0  addiu       $s4, $s4, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3E70u, 0x1B3E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E78u;
label_1b3e78:
    // 0x1b3e78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3e84: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1b3e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1b3e88: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1b3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1b3e8c: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x1b3e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1b3e90: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B3E90u;
    SET_GPR_U32(ctx, 31, 0x1B3E98u);
    ctx->pc = 0x1B3E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E90u;
    // 0x1b3e94: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B3E90u, 0x1B3E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E98u;
label_1b3e98:
    // 0x1b3e98: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b3e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b3e9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b3e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ea0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3ea4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b3ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3eac: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1b3eb0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b3eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3eb4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b3eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3eb8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3EB8u;
    SET_GPR_U32(ctx, 31, 0x1B3EC0u);
    ctx->pc = 0x1B3EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EB8u;
    // 0x1b3ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3EB8u, 0x1B3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EC0u;
label_1b3ec0:
    // 0x1b3ec0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3EC0u;
    {
        const bool branch_taken_0x1b3ec0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EC0u;
        // 0x1b3ec4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ec0) {
            ctx->pc = 0x1B3EE0u;
            return;
        }
    }
    ctx->pc = 0x1B3EC8u;
    // 0x1b3ec8: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3EC8u;
    SET_GPR_U32(ctx, 31, 0x1B3ED0u);
    ctx->pc = 0x1B3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3EC8u;
    // 0x1b3ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3EC8u, 0x1B3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3ED0u;
label_1b3ed0:
    // 0x1b3ed0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3ED0u;
    SET_GPR_U32(ctx, 31, 0x1B3ED8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3ED0u, 0x1B3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3ED8u;
label_1b3ed8:
    // 0x1b3ed8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3ED8u;
    {
        const bool branch_taken_0x1b3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3ED8u;
        // 0x1b3edc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ed8) {
            ctx->pc = 0x1B3F18u;
            return;
        }
    }
    ctx->pc = 0x1B3EE0u;
}

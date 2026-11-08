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

// Function: entry_00147428
// Address: 0x147428 - 0x147488
void entry_00147428_0x147428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147428_0x147428");
#endif

    switch (ctx->pc) {
        case 0x147440u: goto label_147440;
        case 0x14745cu: goto label_14745c;
        default: break;
    }

    ctx->pc = 0x147428u;

    // 0x147428: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x147428u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14742c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147430: 0x56420027  bnel        $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x147430u;
    {
        const bool branch_taken_0x147430 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x147430) {
            ctx->pc = 0x147434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147430u;
            // 0x147434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474D0u;
            return;
        }
    }
    ctx->pc = 0x147438u;
    // 0x147438: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x147438u;
    SET_GPR_U32(ctx, 31, 0x147440u);
    ctx->pc = 0x14743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147438u;
    // 0x14743c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147438u, 0x147440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147440u;
label_147440:
    // 0x147440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147444: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x147444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x147448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14744c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14744cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x147450: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x147450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x147454: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x147454u;
    SET_GPR_U32(ctx, 31, 0x14745Cu);
    ctx->pc = 0x147458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147454u;
    // 0x147458: 0x24700070  addiu       $s0, $v1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147454u, 0x14745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14745Cu;
label_14745c:
    // 0x14745c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14745cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147464: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x147464u;
    {
        const bool branch_taken_0x147464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x147464) {
            ctx->pc = 0x147468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147464u;
            // 0x147468: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474B0u;
            return;
        }
    }
    ctx->pc = 0x14746Cu;
    // 0x14746c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x14746cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x147470: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x147470u;
    {
        const bool branch_taken_0x147470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147470) {
            ctx->pc = 0x147488u;
            return;
        }
    }
    ctx->pc = 0x147478u;
    // 0x147478: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x147478u;
    {
        const bool branch_taken_0x147478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147478) {
            ctx->pc = 0x14747Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147478u;
            // 0x14747c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1474A8u;
            return;
        }
    }
    ctx->pc = 0x147480u;
    // 0x147480: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x147480u;
    {
        const bool branch_taken_0x147480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147480u;
        // 0x147484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147480) {
            ctx->pc = 0x1474D0u;
            return;
        }
    }
    ctx->pc = 0x147488u;
}

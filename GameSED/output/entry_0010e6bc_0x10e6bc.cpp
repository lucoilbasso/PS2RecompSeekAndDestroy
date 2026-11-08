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

// Function: entry_0010e6bc
// Address: 0x10e6bc - 0x10e700
void entry_0010e6bc_0x10e6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e6bc_0x10e6bc");
#endif

    switch (ctx->pc) {
        case 0x10e6d4u: goto label_10e6d4;
        case 0x10e6f8u: goto label_10e6f8;
        default: break;
    }

    ctx->pc = 0x10e6bcu;

    // 0x10e6bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10e6c0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10E6C0u;
    {
        const bool branch_taken_0x10e6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6C0u;
        // 0x10e6c4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6c0) {
            ctx->pc = 0x10E720u;
            return;
        }
    }
    ctx->pc = 0x10E6C8u;
    // 0x10e6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6cc: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x10E6CCu;
    SET_GPR_U32(ctx, 31, 0x10E6D4u);
    ctx->pc = 0x10E6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6CCu;
    // 0x10e6d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x10E6CCu, 0x10E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6D4u;
label_10e6d4:
    // 0x10e6d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6d8: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E6D8u;
    {
        const bool branch_taken_0x10e6d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e6d8) {
            ctx->pc = 0x10E6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E6D8u;
            // 0x10e6dc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E700u;
            return;
        }
    }
    ctx->pc = 0x10E6E0u;
    // 0x10e6e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e6e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e6e8: 0x24a53d68  addiu       $a1, $a1, 0x3D68
    ctx->pc = 0x10e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    // 0x10e6ec: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e6f0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E6F0u;
    SET_GPR_U32(ctx, 31, 0x10E6F8u);
    ctx->pc = 0x10E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6F0u;
    // 0x10e6f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E6F0u, 0x10E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6F8u;
label_10e6f8:
    // 0x10e6f8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x10E6F8u;
    {
        const bool branch_taken_0x10e6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6F8u;
        // 0x10e6fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6f8) {
            ctx->pc = 0x10E888u;
            return;
        }
    }
    ctx->pc = 0x10E700u;
}

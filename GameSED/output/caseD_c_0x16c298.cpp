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

// Function: caseD_c
// Address: 0x16c298 - 0x16c2d0
void caseD_c_0x16c298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x16c298");
#endif

    switch (ctx->pc) {
        case 0x16c2b0u: goto label_16c2b0;
        case 0x16c2bcu: goto label_16c2bc;
        case 0x16c2c8u: goto label_16c2c8;
        default: break;
    }

    ctx->pc = 0x16c298u;

    // 0x16c298: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c29c: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16C29Cu;
    {
        const bool branch_taken_0x16c29c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c29c) {
            ctx->pc = 0x16C2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C29Cu;
            // 0x16c2a0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C2D0u;
            return;
        }
    }
    ctx->pc = 0x16C2A4u;
    // 0x16c2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2a8: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C2A8u;
    SET_GPR_U32(ctx, 31, 0x16C2B0u);
    ctx->pc = 0x16C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2A8u;
    // 0x16c2ac: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C2A8u, 0x16C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2B0u;
label_16c2b0:
    // 0x16c2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2b4: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C2B4u;
    SET_GPR_U32(ctx, 31, 0x16C2BCu);
    ctx->pc = 0x16C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2B4u;
    // 0x16c2b8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C2B4u, 0x16C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2BCu;
label_16c2bc:
    // 0x16c2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2c0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C2C0u;
    SET_GPR_U32(ctx, 31, 0x16C2C8u);
    ctx->pc = 0x16C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2C0u;
    // 0x16c2c4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C2C0u, 0x16C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2C8u;
label_16c2c8:
    // 0x16c2c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16C2C8u;
    {
        const bool branch_taken_0x16c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2C8u;
        // 0x16c2cc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2c8) {
            ctx->pc = 0x16C2D8u;
            return;
        }
    }
    ctx->pc = 0x16C2D0u;
}

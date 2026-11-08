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

// Function: caseD_7
// Address: 0x163e58 - 0x163e88
void caseD_7_0x163e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x163e58");
#endif

    switch (ctx->pc) {
        case 0x163e70u: goto label_163e70;
        case 0x163e7cu: goto label_163e7c;
        default: break;
    }

    ctx->pc = 0x163e58u;

    // 0x163e58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163e5c: 0x54c2000a  bnel        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x163E5Cu;
    {
        const bool branch_taken_0x163e5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x163e5c) {
            ctx->pc = 0x163E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163E5Cu;
            // 0x163e60: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163E88u;
            return;
        }
    }
    ctx->pc = 0x163E64u;
    // 0x163e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e68: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x163E68u;
    SET_GPR_U32(ctx, 31, 0x163E70u);
    ctx->pc = 0x163E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E68u;
    // 0x163e6c: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163E68u, 0x163E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E70u;
label_163e70:
    // 0x163e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e74: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x163E74u;
    SET_GPR_U32(ctx, 31, 0x163E7Cu);
    ctx->pc = 0x163E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E74u;
    // 0x163e78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163E74u, 0x163E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E7Cu;
label_163e7c:
    // 0x163e7c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x163e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x163e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163E80u;
    {
        const bool branch_taken_0x163e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E80u;
        // 0x163e84: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e80) {
            ctx->pc = 0x163E90u;
            return;
        }
    }
    ctx->pc = 0x163E88u;
}

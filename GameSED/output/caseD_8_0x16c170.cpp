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

// Function: caseD_8
// Address: 0x16c170 - 0x16c1a0
void caseD_8_0x16c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x16c170");
#endif

    switch (ctx->pc) {
        case 0x16c188u: goto label_16c188;
        case 0x16c194u: goto label_16c194;
        default: break;
    }

    ctx->pc = 0x16c170u;

    // 0x16c170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c174: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16C174u;
    {
        const bool branch_taken_0x16c174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c174) {
            ctx->pc = 0x16C178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C174u;
            // 0x16c178: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C1A0u;
            return;
        }
    }
    ctx->pc = 0x16C17Cu;
    // 0x16c17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c180: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C180u;
    SET_GPR_U32(ctx, 31, 0x16C188u);
    ctx->pc = 0x16C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C180u;
    // 0x16c184: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C180u, 0x16C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C188u;
label_16c188:
    // 0x16c188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c18c: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C18Cu;
    SET_GPR_U32(ctx, 31, 0x16C194u);
    ctx->pc = 0x16C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C18Cu;
    // 0x16c190: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C18Cu, 0x16C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C194u;
label_16c194:
    // 0x16c194: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16c198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16C198u;
    {
        const bool branch_taken_0x16c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C198u;
        // 0x16c19c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c198) {
            ctx->pc = 0x16C1A8u;
            return;
        }
    }
    ctx->pc = 0x16C1A0u;
}

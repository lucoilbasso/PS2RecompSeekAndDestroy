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

// Function: entry_0010e85c
// Address: 0x10e85c - 0x10e884
void entry_0010e85c_0x10e85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e85c_0x10e85c");
#endif

    switch (ctx->pc) {
        case 0x10e87cu: goto label_10e87c;
        default: break;
    }

    ctx->pc = 0x10e85cu;

    // 0x10e85c: 0x8e6401a4  lw          $a0, 0x1A4($s3)
    ctx->pc = 0x10e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 420)));
    // 0x10e860: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e864: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E864u;
    {
        const bool branch_taken_0x10e864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E864u;
        // 0x10e868: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e864) {
            ctx->pc = 0x10E888u;
            return;
        }
    }
    ctx->pc = 0x10E86Cu;
    // 0x10e86c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e870: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x10e870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e874: 0xc064f00  jal         func_193C00
    ctx->pc = 0x10E874u;
    SET_GPR_U32(ctx, 31, 0x10E87Cu);
    ctx->pc = 0x10E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E874u;
    // 0x10e878: 0x8ca60194  lw          $a2, 0x194($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x10E874u, 0x10E87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E87Cu;
label_10e87c:
    // 0x10e87c: 0xc0654ea  jal         func_1953A8
    ctx->pc = 0x10E87Cu;
    SET_GPR_U32(ctx, 31, 0x10E884u);
    ctx->pc = 0x10E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E87Cu;
    // 0x10e880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1953A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953A8u, 0x10E87Cu, 0x10E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E884u;
}

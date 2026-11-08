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

// Function: MoveToFBuffer__7WcImageib
// Address: 0x17e840 - 0x17e890
void MoveToFBuffer__7WcImageib_0x17e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveToFBuffer__7WcImageib_0x17e840");
#endif

    switch (ctx->pc) {
        case 0x17e878u: goto label_17e878;
        case 0x17e880u: goto label_17e880;
        default: break;
    }

    ctx->pc = 0x17e840u;

    // 0x17e840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e84c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E84Cu;
    {
        const bool branch_taken_0x17e84c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E84Cu;
        // 0x17e850: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e84c) {
            ctx->pc = 0x17E870u;
            goto label_17e870;
        }
    }
    ctx->pc = 0x17E854u;
    // 0x17e854: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17e854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17e858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e85c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17e85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17e860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e864: 0x24c6e820  addiu       $a2, $a2, -0x17E0
    ctx->pc = 0x17e864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961184));
    // 0x17e868: 0x805f820  j           func_17E080
    ctx->pc = 0x17E868u;
    ctx->pc = 0x17E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E868u;
    // 0x17e86c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    TransferToFBuffer__7WcImageiPFP7WcImagePv_vPv_0x17e080(rdram, ctx, runtime); return;
    ctx->pc = 0x17E870u;
label_17e870:
    // 0x17e870: 0xc05f820  jal         func_17E080
    ctx->pc = 0x17E870u;
    SET_GPR_U32(ctx, 31, 0x17E878u);
    ctx->pc = 0x17E874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E870u;
    // 0x17e874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x17E870u, 0x17E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E878u;
label_17e878:
    // 0x17e878: 0xc05f452  jal         func_17D148
    ctx->pc = 0x17E878u;
    SET_GPR_U32(ctx, 31, 0x17E880u);
    ctx->pc = 0x17E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E878u;
    // 0x17e87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D148u, 0x17E878u, 0x17E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E880u;
label_17e880:
    // 0x17e880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e884: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17e884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e888: 0x3e00008  jr          $ra
    ctx->pc = 0x17E888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E888u;
        // 0x17e88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E890u;
}

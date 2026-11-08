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

// Function: Finish__6WcPoly
// Address: 0x190298 - 0x190324
void Finish__6WcPoly_0x190298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__6WcPoly_0x190298");
#endif

    switch (ctx->pc) {
        case 0x1902bcu: goto label_1902bc;
        case 0x1902d0u: goto label_1902d0;
        case 0x1902e4u: goto label_1902e4;
        case 0x1902f8u: goto label_1902f8;
        case 0x19030cu: goto label_19030c;
        case 0x190314u: goto label_190314;
        default: break;
    }

    ctx->pc = 0x190298u;

    // 0x190298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19029c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1902a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1902a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1902a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1902a8: 0x8e0401c8  lw          $a0, 0x1C8($s0)
    ctx->pc = 0x1902a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x1902ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1902ACu;
    {
        const bool branch_taken_0x1902ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902ac) {
            ctx->pc = 0x1902B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1902ACu;
            // 0x1902b0: 0x8e0401cc  lw          $a0, 0x1CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902C0u;
            goto label_1902c0;
        }
    }
    ctx->pc = 0x1902B4u;
    // 0x1902b4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1902B4u;
    SET_GPR_U32(ctx, 31, 0x1902BCu);
    ctx->pc = 0x1902B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902B4u;
    // 0x1902b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1902B4u, 0x1902BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902BCu;
label_1902bc:
    // 0x1902bc: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x1902bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_1902c0:
    // 0x1902c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1902C0u;
    {
        const bool branch_taken_0x1902c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902c0) {
            ctx->pc = 0x1902C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1902C0u;
            // 0x1902c4: 0x8e0401d0  lw          $a0, 0x1D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902D4u;
            goto label_1902d4;
        }
    }
    ctx->pc = 0x1902C8u;
    // 0x1902c8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1902C8u;
    SET_GPR_U32(ctx, 31, 0x1902D0u);
    ctx->pc = 0x1902CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902C8u;
    // 0x1902cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1902C8u, 0x1902D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902D0u;
label_1902d0:
    // 0x1902d0: 0x8e0401d0  lw          $a0, 0x1D0($s0)
    ctx->pc = 0x1902d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_1902d4:
    // 0x1902d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1902D4u;
    {
        const bool branch_taken_0x1902d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902d4) {
            ctx->pc = 0x1902D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1902D4u;
            // 0x1902d8: 0x8e0401d4  lw          $a0, 0x1D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902E8u;
            goto label_1902e8;
        }
    }
    ctx->pc = 0x1902DCu;
    // 0x1902dc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1902DCu;
    SET_GPR_U32(ctx, 31, 0x1902E4u);
    ctx->pc = 0x1902E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902DCu;
    // 0x1902e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1902DCu, 0x1902E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902E4u;
label_1902e4:
    // 0x1902e4: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x1902e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1902e8:
    // 0x1902e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1902E8u;
    {
        const bool branch_taken_0x1902e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902e8) {
            ctx->pc = 0x1902ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1902E8u;
            // 0x1902ec: 0x8e0401d8  lw          $a0, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902FCu;
            goto label_1902fc;
        }
    }
    ctx->pc = 0x1902F0u;
    // 0x1902f0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1902F0u;
    SET_GPR_U32(ctx, 31, 0x1902F8u);
    ctx->pc = 0x1902F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902F0u;
    // 0x1902f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1902F0u, 0x1902F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902F8u;
label_1902f8:
    // 0x1902f8: 0x8e0401d8  lw          $a0, 0x1D8($s0)
    ctx->pc = 0x1902f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_1902fc:
    // 0x1902fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1902FCu;
    {
        const bool branch_taken_0x1902fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902fc) {
            ctx->pc = 0x19030Cu;
            goto label_19030c;
        }
    }
    ctx->pc = 0x190304u;
    // 0x190304: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x190304u;
    SET_GPR_U32(ctx, 31, 0x19030Cu);
    ctx->pc = 0x190308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190304u;
    // 0x190308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x190304u, 0x19030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19030Cu;
label_19030c:
    // 0x19030c: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x19030Cu;
    SET_GPR_U32(ctx, 31, 0x190314u);
    ctx->pc = 0x190310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19030Cu;
    // 0x190310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x19030Cu, 0x190314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190314u;
label_190314:
    // 0x190314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190318: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x190318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19031c: 0x3e00008  jr          $ra
    ctx->pc = 0x19031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19031Cu;
        // 0x190320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190324u;
}

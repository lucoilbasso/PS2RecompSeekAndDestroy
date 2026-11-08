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

// Function: entry_00118bb0
// Address: 0x118bb0 - 0x118be8
void entry_00118bb0_0x118bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118bb0_0x118bb0");
#endif

    switch (ctx->pc) {
        case 0x118bbcu: goto label_118bbc;
        case 0x118bc8u: goto label_118bc8;
        default: break;
    }

    ctx->pc = 0x118bb0u;

    // 0x118bb0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x118bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x118bb4: 0xc04632a  jal         func_118CA8
    ctx->pc = 0x118BB4u;
    SET_GPR_U32(ctx, 31, 0x118BBCu);
    ctx->pc = 0x118BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BB4u;
    // 0x118bb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CA8u, 0x118BB4u, 0x118BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BBCu;
label_118bbc:
    // 0x118bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bc0: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x118BC0u;
    SET_GPR_U32(ctx, 31, 0x118BC8u);
    ctx->pc = 0x118BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BC0u;
    // 0x118bc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x118BC0u, 0x118BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BC8u;
label_118bc8:
    // 0x118bc8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x118bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x118bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118bd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x118bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118bd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118bd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118bdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118be0: 0x3e00008  jr          $ra
    ctx->pc = 0x118BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BE0u;
        // 0x118be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118BE8u;
}

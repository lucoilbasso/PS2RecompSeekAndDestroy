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

// Function: Finish__8WcExtent
// Address: 0x189668 - 0x1896a8
void Finish__8WcExtent_0x189668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8WcExtent_0x189668");
#endif

    switch (ctx->pc) {
        case 0x189690u: goto label_189690;
        case 0x189698u: goto label_189698;
        default: break;
    }

    ctx->pc = 0x189668u;

    // 0x189668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18966c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x189670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189674: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x189674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x189678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18967c: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x18967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x189680: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189680u;
    {
        const bool branch_taken_0x189680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189680u;
        // 0x189684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189680) {
            ctx->pc = 0x189690u;
            goto label_189690;
        }
    }
    ctx->pc = 0x189688u;
    // 0x189688: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x189688u;
    SET_GPR_U32(ctx, 31, 0x189690u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x189688u, 0x189690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189690u;
label_189690:
    // 0x189690: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x189690u;
    SET_GPR_U32(ctx, 31, 0x189698u);
    ctx->pc = 0x189694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189690u;
    // 0x189694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x189690u, 0x189698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189698u;
label_189698:
    // 0x189698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x189698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18969c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18969cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1896a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1896A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1896A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896A0u;
        // 0x1896a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1896A8u;
}

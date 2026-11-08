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

// Function: _sceFs_Poff_Intr
// Address: 0x1b2588 - 0x1b25b4
void _sceFs_Poff_Intr_0x1b2588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFs_Poff_Intr_0x1b2588");
#endif

    switch (ctx->pc) {
        case 0x1b2588u: goto label_1b2588;
        case 0x1b258cu: goto label_1b258c;
        case 0x1b2590u: goto label_1b2590;
        case 0x1b2594u: goto label_1b2594;
        case 0x1b2598u: goto label_1b2598;
        case 0x1b259cu: goto label_1b259c;
        case 0x1b25a0u: goto label_1b25a0;
        case 0x1b25a4u: goto label_1b25a4;
        case 0x1b25a8u: goto label_1b25a8;
        case 0x1b25acu: goto label_1b25ac;
        case 0x1b25b0u: goto label_1b25b0;
        default: break;
    }

    ctx->pc = 0x1b2588u;

label_1b2588:
    // 0x1b2588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b258c:
    // 0x1b258c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b2590:
    // 0x1b2590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b2594:
    if (ctx->pc == 0x1B2594u) {
        ctx->pc = 0x1B2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2590u;
        // 0x1b2594: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2598u;
        goto label_1b2598;
    }
    ctx->pc = 0x1B2590u;
    {
        const bool branch_taken_0x1b2590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2590u;
        // 0x1b2594: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2590) {
            ctx->pc = 0x1B25A0u;
            goto label_1b25a0;
        }
    }
    ctx->pc = 0x1B2598u;
label_1b2598:
    // 0x1b2598: 0x40f809  jalr        $v0
label_1b259c:
    if (ctx->pc == 0x1B259Cu) {
        ctx->pc = 0x1B259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2598u;
        // 0x1b259c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B25A0u;
        goto label_1b25a0;
    }
    ctx->pc = 0x1B2598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B25A0u);
        ctx->pc = 0x1B259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2598u;
        // 0x1b259c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2598u, 0x1B25A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B25A0u;
label_1b25a0:
    // 0x1b25a0: 0xf  sync
    ctx->pc = 0x1b25a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1b25a4:
    // 0x1b25a4: 0x42000038  ei
    ctx->pc = 0x1b25a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1b25a8:
    // 0x1b25a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b25a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b25ac:
    // 0x1b25ac: 0x3e00008  jr          $ra
label_1b25b0:
    if (ctx->pc == 0x1B25B0u) {
        ctx->pc = 0x1B25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25ACu;
        // 0x1b25b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B25B4u;
        goto label_fallthrough_0x1b25ac;
    }
    ctx->pc = 0x1B25ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25ACu;
        // 0x1b25b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B25ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b25ac:
    ctx->pc = 0x1B25B4u;
}

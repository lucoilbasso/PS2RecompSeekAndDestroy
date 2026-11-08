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

// Function: Finish__7WcBoard
// Address: 0x191388 - 0x1913c8
void Finish__7WcBoard_0x191388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcBoard_0x191388");
#endif

    switch (ctx->pc) {
        case 0x1913b0u: goto label_1913b0;
        case 0x1913b8u: goto label_1913b8;
        default: break;
    }

    ctx->pc = 0x191388u;

    // 0x191388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19138c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19138cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191394: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x191394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x191398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19139c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1913a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1913A0u;
    {
        const bool branch_taken_0x1913a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913A0u;
        // 0x1913a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913a0) {
            ctx->pc = 0x1913B0u;
            goto label_1913b0;
        }
    }
    ctx->pc = 0x1913A8u;
    // 0x1913a8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1913A8u;
    SET_GPR_U32(ctx, 31, 0x1913B0u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1913A8u, 0x1913B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913B0u;
label_1913b0:
    // 0x1913b0: 0xc062ce8  jal         func_18B3A0
    ctx->pc = 0x1913B0u;
    SET_GPR_U32(ctx, 31, 0x1913B8u);
    ctx->pc = 0x1913B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913B0u;
    // 0x1913b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B3A0u, 0x1913B0u, 0x1913B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913B8u;
label_1913b8:
    // 0x1913b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1913b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1913bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1913bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1913c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1913C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1913C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913C0u;
        // 0x1913c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1913C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1913C8u;
}

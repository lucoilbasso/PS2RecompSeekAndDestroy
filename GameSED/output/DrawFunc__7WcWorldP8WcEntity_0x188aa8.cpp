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

// Function: DrawFunc__7WcWorldP8WcEntity
// Address: 0x188aa8 - 0x188ad8
void DrawFunc__7WcWorldP8WcEntity_0x188aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__7WcWorldP8WcEntity_0x188aa8");
#endif

    switch (ctx->pc) {
        case 0x188aa8u: goto label_188aa8;
        case 0x188aacu: goto label_188aac;
        case 0x188ab0u: goto label_188ab0;
        case 0x188ab4u: goto label_188ab4;
        case 0x188ab8u: goto label_188ab8;
        case 0x188abcu: goto label_188abc;
        case 0x188ac0u: goto label_188ac0;
        case 0x188ac4u: goto label_188ac4;
        case 0x188ac8u: goto label_188ac8;
        case 0x188accu: goto label_188acc;
        case 0x188ad0u: goto label_188ad0;
        case 0x188ad4u: goto label_188ad4;
        default: break;
    }

    ctx->pc = 0x188aa8u;

label_188aa8:
    // 0x188aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188aac:
    // 0x188aac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x188aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188ab0:
    // 0x188ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188ab4:
    // 0x188ab4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x188ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_188ab8:
    // 0x188ab8: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x188ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_188abc:
    // 0x188abc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x188abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188ac0:
    // 0x188ac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188ac4:
    // 0x188ac4: 0x60f809  jalr        $v1
label_188ac8:
    if (ctx->pc == 0x188AC8u) {
        ctx->pc = 0x188AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AC4u;
        // 0x188ac8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188ACCu;
        goto label_188acc;
    }
    ctx->pc = 0x188AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188ACCu);
        ctx->pc = 0x188AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AC4u;
        // 0x188ac8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188AC4u, 0x188ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188ACCu;
label_188acc:
    // 0x188acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188ad0:
    // 0x188ad0: 0x3e00008  jr          $ra
label_188ad4:
    if (ctx->pc == 0x188AD4u) {
        ctx->pc = 0x188AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AD0u;
        // 0x188ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AD8u;
        goto label_fallthrough_0x188ad0;
    }
    ctx->pc = 0x188AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AD0u;
        // 0x188ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x188ad0:
    ctx->pc = 0x188AD8u;
}

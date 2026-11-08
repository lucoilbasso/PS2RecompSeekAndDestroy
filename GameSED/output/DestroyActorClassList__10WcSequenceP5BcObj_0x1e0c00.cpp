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

// Function: DestroyActorClassList__10WcSequenceP5BcObj
// Address: 0x1e0c00 - 0x1e0c34
void DestroyActorClassList__10WcSequenceP5BcObj_0x1e0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DestroyActorClassList__10WcSequenceP5BcObj_0x1e0c00");
#endif

    switch (ctx->pc) {
        case 0x1e0c00u: goto label_1e0c00;
        case 0x1e0c04u: goto label_1e0c04;
        case 0x1e0c08u: goto label_1e0c08;
        case 0x1e0c0cu: goto label_1e0c0c;
        case 0x1e0c10u: goto label_1e0c10;
        case 0x1e0c14u: goto label_1e0c14;
        case 0x1e0c18u: goto label_1e0c18;
        case 0x1e0c1cu: goto label_1e0c1c;
        case 0x1e0c20u: goto label_1e0c20;
        case 0x1e0c24u: goto label_1e0c24;
        case 0x1e0c28u: goto label_1e0c28;
        case 0x1e0c2cu: goto label_1e0c2c;
        case 0x1e0c30u: goto label_1e0c30;
        default: break;
    }

    ctx->pc = 0x1e0c00u;

label_1e0c00:
    // 0x1e0c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e0c04:
    // 0x1e0c04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e0c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c08:
    // 0x1e0c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0c0c:
    // 0x1e0c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c10:
    // 0x1e0c10: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1e0c14:
    // 0x1e0c14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e0c18:
    // 0x1e0c18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e0c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0c1c:
    // 0x1e0c1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e0c20:
    // 0x1e0c20: 0x60f809  jalr        $v1
label_1e0c24:
    if (ctx->pc == 0x1E0C24u) {
        ctx->pc = 0x1E0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C20u;
        // 0x1e0c24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C28u;
        goto label_1e0c28;
    }
    ctx->pc = 0x1E0C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0C28u);
        ctx->pc = 0x1E0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C20u;
        // 0x1e0c24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0C20u, 0x1E0C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0C28u;
label_1e0c28:
    // 0x1e0c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0c2c:
    // 0x1e0c2c: 0x3e00008  jr          $ra
label_1e0c30:
    if (ctx->pc == 0x1E0C30u) {
        ctx->pc = 0x1E0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C2Cu;
        // 0x1e0c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C34u;
        goto label_fallthrough_0x1e0c2c;
    }
    ctx->pc = 0x1E0C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C2Cu;
        // 0x1e0c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0c2c:
    ctx->pc = 0x1E0C34u;
}

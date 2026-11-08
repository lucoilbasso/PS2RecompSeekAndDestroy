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

// Function: Destroy__7WcMCard
// Address: 0x179588 - 0x1795b8
void Destroy__7WcMCard_0x179588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Destroy__7WcMCard_0x179588");
#endif

    switch (ctx->pc) {
        case 0x179588u: goto label_179588;
        case 0x17958cu: goto label_17958c;
        case 0x179590u: goto label_179590;
        case 0x179594u: goto label_179594;
        case 0x179598u: goto label_179598;
        case 0x17959cu: goto label_17959c;
        case 0x1795a0u: goto label_1795a0;
        case 0x1795a4u: goto label_1795a4;
        case 0x1795a8u: goto label_1795a8;
        case 0x1795acu: goto label_1795ac;
        case 0x1795b0u: goto label_1795b0;
        case 0x1795b4u: goto label_1795b4;
        default: break;
    }

    ctx->pc = 0x179588u;

label_179588:
    // 0x179588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17958c:
    // 0x17958c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17958cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179590:
    // 0x179590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_179594:
    // 0x179594: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x179594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_179598:
    // 0x179598: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x179598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_17959c:
    // 0x17959c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x17959cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1795a0:
    // 0x1795a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1795a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1795a4:
    // 0x1795a4: 0x60f809  jalr        $v1
label_1795a8:
    if (ctx->pc == 0x1795A8u) {
        ctx->pc = 0x1795A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795A4u;
        // 0x1795a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795ACu;
        goto label_1795ac;
    }
    ctx->pc = 0x1795A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1795ACu);
        ctx->pc = 0x1795A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795A4u;
        // 0x1795a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795A4u, 0x1795ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1795ACu;
label_1795ac:
    // 0x1795ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1795acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1795b0:
    // 0x1795b0: 0x3e00008  jr          $ra
label_1795b4:
    if (ctx->pc == 0x1795B4u) {
        ctx->pc = 0x1795B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795B0u;
        // 0x1795b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795B8u;
        goto label_fallthrough_0x1795b0;
    }
    ctx->pc = 0x1795B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1795B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795B0u;
        // 0x1795b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1795b0:
    ctx->pc = 0x1795B8u;
}

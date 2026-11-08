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

// Function: entry_001312f0
// Address: 0x1312f0 - 0x131318
void entry_001312f0_0x1312f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001312f0_0x1312f0");
#endif

    switch (ctx->pc) {
        case 0x131308u: goto label_131308;
        default: break;
    }

    ctx->pc = 0x1312f0u;

label_1312f0:
    // 0x1312f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1312f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1312f4:
    // 0x1312f4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1312f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1312f8:
    // 0x1312f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1312f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1312fc:
    // 0x1312fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1312fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_131300:
    // 0x131300: 0x60f809  jalr        $v1
label_131304:
    if (ctx->pc == 0x131304u) {
        ctx->pc = 0x131304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131300u;
        // 0x131304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131308u;
        goto label_131308;
    }
    ctx->pc = 0x131300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131308u);
        ctx->pc = 0x131304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131300u;
        // 0x131304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131300u, 0x131308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131308u;
label_131308:
    // 0x131308: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x131308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13130c:
    // 0x13130c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_131310:
    // 0x131310: 0x3e00008  jr          $ra
label_131314:
    if (ctx->pc == 0x131314u) {
        ctx->pc = 0x131314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131310u;
        // 0x131314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131318u;
        goto label_fallthrough_0x131310;
    }
    ctx->pc = 0x131310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131310u;
        // 0x131314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x131310:
    ctx->pc = 0x131318u;
}

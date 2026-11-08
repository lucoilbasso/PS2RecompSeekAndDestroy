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

// Function: Destroy__5WcRsc
// Address: 0x17a2f0 - 0x17a330
void Destroy__5WcRsc_0x17a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Destroy__5WcRsc_0x17a2f0");
#endif

    switch (ctx->pc) {
        case 0x17a2f0u: goto label_17a2f0;
        case 0x17a2f4u: goto label_17a2f4;
        case 0x17a2f8u: goto label_17a2f8;
        case 0x17a2fcu: goto label_17a2fc;
        case 0x17a300u: goto label_17a300;
        case 0x17a304u: goto label_17a304;
        case 0x17a308u: goto label_17a308;
        case 0x17a30cu: goto label_17a30c;
        case 0x17a310u: goto label_17a310;
        case 0x17a314u: goto label_17a314;
        case 0x17a318u: goto label_17a318;
        case 0x17a31cu: goto label_17a31c;
        case 0x17a320u: goto label_17a320;
        case 0x17a324u: goto label_17a324;
        case 0x17a328u: goto label_17a328;
        case 0x17a32cu: goto label_17a32c;
        default: break;
    }

    ctx->pc = 0x17a2f0u;

label_17a2f0:
    // 0x17a2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17a2f4:
    // 0x17a2f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a2f8:
    // 0x17a2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17a2fc:
    // 0x17a2fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_17a300:
    // 0x17a300: 0xc0684fe  jal         func_1A13F8
label_17a304:
    if (ctx->pc == 0x17A304u) {
        ctx->pc = 0x17A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A300u;
        // 0x17a304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A308u;
        goto label_17a308;
    }
    ctx->pc = 0x17A300u;
    SET_GPR_U32(ctx, 31, 0x17A308u);
    ctx->pc = 0x17A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A300u;
    // 0x17a304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x17A300u, 0x17A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A308u;
label_17a308:
    // 0x17a308: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17a30c:
    // 0x17a30c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_17a310:
    // 0x17a310: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x17a310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_17a314:
    // 0x17a314: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17a318:
    // 0x17a318: 0x60f809  jalr        $v1
label_17a31c:
    if (ctx->pc == 0x17A31Cu) {
        ctx->pc = 0x17A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A318u;
        // 0x17a31c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A320u;
        goto label_17a320;
    }
    ctx->pc = 0x17A318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17A320u);
        ctx->pc = 0x17A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A318u;
        // 0x17a31c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A318u, 0x17A320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A320u;
label_17a320:
    // 0x17a320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a324:
    // 0x17a324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17a324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17a328:
    // 0x17a328: 0x3e00008  jr          $ra
label_17a32c:
    if (ctx->pc == 0x17A32Cu) {
        ctx->pc = 0x17A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A328u;
        // 0x17a32c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A330u;
        goto label_fallthrough_0x17a328;
    }
    ctx->pc = 0x17A328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A328u;
        // 0x17a32c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a328:
    ctx->pc = 0x17A330u;
}

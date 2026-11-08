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

// Function: Cmd_GET_SHOCK_LEVEL_Entry__FP15BsSCDEntControl
// Address: 0x11a100 - 0x11a138
void Cmd_GET_SHOCK_LEVEL_Entry__FP15BsSCDEntControl_0x11a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_SHOCK_LEVEL_Entry__FP15BsSCDEntControl_0x11a100");
#endif

    switch (ctx->pc) {
        case 0x11a110u: goto label_11a110;
        default: break;
    }

    ctx->pc = 0x11a100u;

    // 0x11a100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a108: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A108u;
    SET_GPR_U32(ctx, 31, 0x11A110u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A108u, 0x11A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A110u;
label_11a110:
    // 0x11a110: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x11a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11a114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a118: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11a118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11a11c: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x11a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x11a120: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a124: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11a128: 0x8484d170  lh          $a0, -0x2E90($a0)
    ctx->pc = 0x11a128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294955376)));
    // 0x11a12c: 0xaca400b0  sw          $a0, 0xB0($a1)
    ctx->pc = 0x11a12cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x11a130: 0x3e00008  jr          $ra
    ctx->pc = 0x11A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A130u;
        // 0x11a134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A138u;
}

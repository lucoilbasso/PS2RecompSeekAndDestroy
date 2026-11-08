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

// Function: WModelReverseNormal__FP5PBHDR
// Address: 0x17f6e8 - 0x17f71c
void WModelReverseNormal__FP5PBHDR_0x17f6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelReverseNormal__FP5PBHDR_0x17f6e8");
#endif

    switch (ctx->pc) {
        case 0x17f6f8u: goto label_17f6f8;
        default: break;
    }

    ctx->pc = 0x17f6e8u;

    // 0x17f6e8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x17f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17f6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6f0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F6F0u;
    {
        const bool branch_taken_0x17f6f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6F0u;
        // 0x17f6f4: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6f0) {
            ctx->pc = 0x17F714u;
            goto label_17f714;
        }
    }
    ctx->pc = 0x17F6F8u;
label_17f6f8:
    // 0x17f6f8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f6fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17f6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17f700: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x17f700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17f704: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17f704u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17f708: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x17f708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17f70c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17F70Cu;
    {
        const bool branch_taken_0x17f70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F70Cu;
        // 0x17f710: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f70c) {
            ctx->pc = 0x17F6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f6f8;
        }
    }
    ctx->pc = 0x17F714u;
label_17f714:
    // 0x17f714: 0x3e00008  jr          $ra
    ctx->pc = 0x17F714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F71Cu;
}

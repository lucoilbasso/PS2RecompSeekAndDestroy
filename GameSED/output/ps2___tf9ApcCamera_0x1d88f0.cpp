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

// Function: __tf9ApcCamera
// Address: 0x1d88f0 - 0x1d8940
void ps2___tf9ApcCamera_0x1d88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcCamera_0x1d88f0");
#endif

    switch (ctx->pc) {
        case 0x1d8914u: goto label_1d8914;
        case 0x1d892cu: goto label_1d892c;
        default: break;
    }

    ctx->pc = 0x1d88f0u;

    // 0x1d88f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d88f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d88f4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d88f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d88f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d88fc: 0x24500f80  addiu       $s0, $v0, 0xF80
    ctx->pc = 0x1d88fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
    // 0x1d8900: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410F80u));
    // 0x1d8904: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8904u;
    {
        const bool branch_taken_0x1d8904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8904u;
        // 0x1d8908: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8904) {
            ctx->pc = 0x1D892Cu;
            goto label_1d892c;
        }
    }
    ctx->pc = 0x1D890Cu;
    // 0x1d890c: 0xc07755a  jal         func_1DD568
    ctx->pc = 0x1D890Cu;
    SET_GPR_U32(ctx, 31, 0x1D8914u);
    ctx->pc = 0x1DD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD568u, 0x1D890Cu, 0x1D8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8914u;
label_1d8914:
    // 0x1d8914: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d8918: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d8918u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d891c: 0x24a56900  addiu       $a1, $a1, 0x6900
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
    // 0x1d8920: 0x24c615d8  addiu       $a2, $a2, 0x15D8
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5592));
    // 0x1d8924: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D8924u;
    SET_GPR_U32(ctx, 31, 0x1D892Cu);
    ctx->pc = 0x1D8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8924u;
    // 0x1d8928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D8924u, 0x1D892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D892Cu;
label_1d892c:
    // 0x1d892c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d892cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8934: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8938: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8938u;
        // 0x1d893c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8940u;
}

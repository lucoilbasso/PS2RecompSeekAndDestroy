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

// Function: __tf9ApcObjRsc
// Address: 0x1d67c0 - 0x1d680c
void ps2___tf9ApcObjRsc_0x1d67c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcObjRsc_0x1d67c0");
#endif

    switch (ctx->pc) {
        case 0x1d67e4u: goto label_1d67e4;
        case 0x1d67f8u: goto label_1d67f8;
        default: break;
    }

    ctx->pc = 0x1d67c0u;

    // 0x1d67c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67c4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d67c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67cc: 0x24500600  addiu       $s0, $v0, 0x600
    ctx->pc = 0x1d67ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x1d67d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410600u));
    // 0x1d67d4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D67D4u;
    {
        const bool branch_taken_0x1d67d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67D4u;
        // 0x1d67d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67d4) {
            ctx->pc = 0x1D67F8u;
            goto label_1d67f8;
        }
    }
    ctx->pc = 0x1D67DCu;
    // 0x1d67dc: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1D67DCu;
    SET_GPR_U32(ctx, 31, 0x1D67E4u);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1D67DCu, 0x1D67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E4u;
label_1d67e4:
    // 0x1d67e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d67e8: 0x24a51c38  addiu       $a1, $a1, 0x1C38
    ctx->pc = 0x1d67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7224));
    // 0x1d67ec: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1d67ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1d67f0: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D67F0u;
    SET_GPR_U32(ctx, 31, 0x1D67F8u);
    ctx->pc = 0x1D67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67F0u;
    // 0x1d67f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D67F0u, 0x1D67F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F8u;
label_1d67f8:
    // 0x1d67f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d67f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6800: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d6800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6804: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6804u;
        // 0x1d6808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D680Cu;
}

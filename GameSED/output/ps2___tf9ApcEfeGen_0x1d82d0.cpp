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

// Function: __tf9ApcEfeGen
// Address: 0x1d82d0 - 0x1d8320
void ps2___tf9ApcEfeGen_0x1d82d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcEfeGen_0x1d82d0");
#endif

    switch (ctx->pc) {
        case 0x1d82f4u: goto label_1d82f4;
        case 0x1d830cu: goto label_1d830c;
        default: break;
    }

    ctx->pc = 0x1d82d0u;

    // 0x1d82d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d82d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d82d4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d82d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d82d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d82dc: 0x24500f40  addiu       $s0, $v0, 0xF40
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x1d82e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410F40u));
    // 0x1d82e4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D82E4u;
    {
        const bool branch_taken_0x1d82e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82E4u;
        // 0x1d82e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82e4) {
            ctx->pc = 0x1D830Cu;
            goto label_1d830c;
        }
    }
    ctx->pc = 0x1D82ECu;
    // 0x1d82ec: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1D82ECu;
    SET_GPR_U32(ctx, 31, 0x1D82F4u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1D82ECu, 0x1D82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82F4u;
label_1d82f4:
    // 0x1d82f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d82f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d82f8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d82f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d82fc: 0x24a56350  addiu       $a1, $a1, 0x6350
    ctx->pc = 0x1d82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25424));
    // 0x1d8300: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1d8300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1d8304: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D8304u;
    SET_GPR_U32(ctx, 31, 0x1D830Cu);
    ctx->pc = 0x1D8308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8304u;
    // 0x1d8308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D8304u, 0x1D830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D830Cu;
label_1d830c:
    // 0x1d830c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d830cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8314: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8318: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8318u;
        // 0x1d831c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8320u;
}

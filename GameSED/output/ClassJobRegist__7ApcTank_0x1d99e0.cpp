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

// Function: ClassJobRegist__7ApcTank
// Address: 0x1d99e0 - 0x1d9a20
void ClassJobRegist__7ApcTank_0x1d99e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRegist__7ApcTank_0x1d99e0");
#endif

    switch (ctx->pc) {
        case 0x1d9a00u: goto label_1d9a00;
        case 0x1d9a10u: goto label_1d9a10;
        default: break;
    }

    ctx->pc = 0x1d99e0u;

    // 0x1d99e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d99e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d99e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d99e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d99e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99ec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1d99ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1d99f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d99f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d99f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d99f8: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1D99F8u;
    SET_GPR_U32(ctx, 31, 0x1D9A00u);
    ctx->pc = 0x1D99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D99F8u;
    // 0x1d99fc: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1D99F8u, 0x1D9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A00u;
label_1d9a00:
    // 0x1d9a00: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1d9a04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a08: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1D9A08u;
    SET_GPR_U32(ctx, 31, 0x1D9A10u);
    ctx->pc = 0x1D9A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A08u;
    // 0x1d9a0c: 0x24840fd8  addiu       $a0, $a0, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1D9A08u, 0x1D9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A10u;
label_1d9a10:
    // 0x1d9a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9a14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A18u;
        // 0x1d9a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9A20u;
}

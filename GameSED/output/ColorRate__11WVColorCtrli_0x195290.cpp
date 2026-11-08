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

// Function: ColorRate__11WVColorCtrli
// Address: 0x195290 - 0x1952c4
void ColorRate__11WVColorCtrli_0x195290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColorRate__11WVColorCtrli_0x195290");
#endif

    switch (ctx->pc) {
        case 0x1952acu: goto label_1952ac;
        default: break;
    }

    ctx->pc = 0x195290u;

    // 0x195290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195294: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x195294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19529c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19529cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1952a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1952a4: 0xc064ffa  jal         func_193FE8
    ctx->pc = 0x1952A4u;
    SET_GPR_U32(ctx, 31, 0x1952ACu);
    ctx->pc = 0x1952A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952A4u;
    // 0x1952a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE8u, 0x1952A4u, 0x1952ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952ACu;
label_1952ac:
    // 0x1952ac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1952acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1952b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1952b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1952b4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1952b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1952b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1952b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1952bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1952BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1952C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952BCu;
        // 0x1952c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1952BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1952C4u;
}

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

// Function: __tf9ApcCqpart
// Address: 0x1dac30 - 0x1dac80
void ps2___tf9ApcCqpart_0x1dac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcCqpart_0x1dac30");
#endif

    switch (ctx->pc) {
        case 0x1dac54u: goto label_1dac54;
        case 0x1dac6cu: goto label_1dac6c;
        default: break;
    }

    ctx->pc = 0x1dac30u;

    // 0x1dac30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dac34: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dac34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dac38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dac3c: 0x245011f8  addiu       $s0, $v0, 0x11F8
    ctx->pc = 0x1dac3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4600));
    // 0x1dac40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dac40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4111F8u));
    // 0x1dac44: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DAC44u;
    {
        const bool branch_taken_0x1dac44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC44u;
        // 0x1dac48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac44) {
            ctx->pc = 0x1DAC6Cu;
            goto label_1dac6c;
        }
    }
    ctx->pc = 0x1DAC4Cu;
    // 0x1dac4c: 0xc0780c4  jal         func_1E0310
    ctx->pc = 0x1DAC4Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC54u);
    ctx->pc = 0x1E0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0310u, 0x1DAC4Cu, 0x1DAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC54u;
label_1dac54:
    // 0x1dac54: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dac54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dac58: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1dac58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1dac5c: 0x24a573d0  addiu       $a1, $a1, 0x73D0
    ctx->pc = 0x1dac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29648));
    // 0x1dac60: 0x24c61c80  addiu       $a2, $a2, 0x1C80
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7296));
    // 0x1dac64: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DAC64u;
    SET_GPR_U32(ctx, 31, 0x1DAC6Cu);
    ctx->pc = 0x1DAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC64u;
    // 0x1dac68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DAC64u, 0x1DAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC6Cu;
label_1dac6c:
    // 0x1dac6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dac6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dac70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dac74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dac74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dac78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC78u;
        // 0x1dac7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAC80u;
}

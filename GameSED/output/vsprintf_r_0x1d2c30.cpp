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

// Function: vsprintf_r
// Address: 0x1d2c30 - 0x1d2c84
void vsprintf_r_0x1d2c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vsprintf_r_0x1d2c30");
#endif

    switch (ctx->pc) {
        case 0x1d2c70u: goto label_1d2c70;
        default: break;
    }

    ctx->pc = 0x1d2c30u;

    // 0x1d2c30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d2c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d2c34: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1d2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1d2c38: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1d2c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c3c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d2c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d2c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d2c44: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x1d2c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x1d2c48: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d2c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c4c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x1d2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x1d2c50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d2c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d2c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d2c58: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1d2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1d2c5c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1d2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1d2c60: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x1d2c60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d2c64: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1d2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1d2c68: 0xc074494  jal         func_1D1250
    ctx->pc = 0x1D2C68u;
    SET_GPR_U32(ctx, 31, 0x1D2C70u);
    ctx->pc = 0x1D2C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C68u;
    // 0x1d2c6c: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x1D2C68u, 0x1D2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C70u;
label_1d2c70:
    // 0x1d2c70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2c74: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d2c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d2c78: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1d2c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d2c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C7Cu;
        // 0x1d2c80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2C84u;
}

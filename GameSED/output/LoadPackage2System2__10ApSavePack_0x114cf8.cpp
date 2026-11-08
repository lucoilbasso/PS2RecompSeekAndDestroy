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

// Function: LoadPackage2System2__10ApSavePack
// Address: 0x114cf8 - 0x114d48
void LoadPackage2System2__10ApSavePack_0x114cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPackage2System2__10ApSavePack_0x114cf8");
#endif

    switch (ctx->pc) {
        case 0x114d1cu: goto label_114d1c;
        case 0x114d30u: goto label_114d30;
        default: break;
    }

    ctx->pc = 0x114cf8u;

    // 0x114cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114cfc: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x114cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x114d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114d08: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x114d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x114d0c: 0x26050284  addiu       $a1, $s0, 0x284
    ctx->pc = 0x114d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x114d10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x114d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x114d14: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114D14u;
    SET_GPR_U32(ctx, 31, 0x114D1Cu);
    ctx->pc = 0x114D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D14u;
    // 0x114d18: 0x2484fb30  addiu       $a0, $a0, -0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114D14u, 0x114D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D1Cu;
label_114d1c:
    // 0x114d1c: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x114d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x114d20: 0x26050404  addiu       $a1, $s0, 0x404
    ctx->pc = 0x114d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
    // 0x114d24: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x114d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x114d28: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114D28u;
    SET_GPR_U32(ctx, 31, 0x114D30u);
    ctx->pc = 0x114D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114D28u;
    // 0x114d2c: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114D28u, 0x114D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D30u;
label_114d30:
    // 0x114d30: 0x8e030c04  lw          $v1, 0xC04($s0)
    ctx->pc = 0x114d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x114d34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x114d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114d3c: 0xaf83896c  sw          $v1, -0x7694($gp)
    ctx->pc = 0x114d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 3));
    // 0x114d40: 0x3e00008  jr          $ra
    ctx->pc = 0x114D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D40u;
        // 0x114d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114D48u;
}

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

// Function: SaveSystem2Package2__10ApSavePack
// Address: 0x114ca8 - 0x114cf8
void SaveSystem2Package2__10ApSavePack_0x114ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveSystem2Package2__10ApSavePack_0x114ca8");
#endif

    switch (ctx->pc) {
        case 0x114cccu: goto label_114ccc;
        case 0x114ce0u: goto label_114ce0;
        default: break;
    }

    ctx->pc = 0x114ca8u;

    // 0x114ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114cac: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x114cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x114cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cb8: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x114cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x114cbc: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x114cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x114cc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x114cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x114cc4: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114CC4u;
    SET_GPR_U32(ctx, 31, 0x114CCCu);
    ctx->pc = 0x114CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CC4u;
    // 0x114cc8: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114CC4u, 0x114CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CCCu;
label_114ccc:
    // 0x114ccc: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x114cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x114cd0: 0x26040404  addiu       $a0, $s0, 0x404
    ctx->pc = 0x114cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
    // 0x114cd4: 0x24a5fcb0  addiu       $a1, $a1, -0x350
    ctx->pc = 0x114cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966448));
    // 0x114cd8: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114CD8u;
    SET_GPR_U32(ctx, 31, 0x114CE0u);
    ctx->pc = 0x114CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CD8u;
    // 0x114cdc: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114CD8u, 0x114CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CE0u;
label_114ce0:
    // 0x114ce0: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x114ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x114ce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x114ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114ce8: 0xae030c04  sw          $v1, 0xC04($s0)
    ctx->pc = 0x114ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 3));
    // 0x114cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x114CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF0u;
        // 0x114cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114CF8u;
}

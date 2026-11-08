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

// Function: Prg_EXT_CALL__Fii
// Address: 0x106488 - 0x1064c0
void Prg_EXT_CALL__Fii_0x106488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Prg_EXT_CALL__Fii_0x106488");
#endif

    switch (ctx->pc) {
        case 0x1064b4u: goto label_1064b4;
        default: break;
    }

    ctx->pc = 0x106488u;

    // 0x106488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10648c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10648cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x106490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106494: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x106494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x106498: 0x2421ed80  addiu       $at, $at, -0x1280
    ctx->pc = 0x106498u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962560));
    // 0x10649c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1064a0: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1064A0u;
    {
        const bool branch_taken_0x1064a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1064A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064A0u;
        // 0x1064a4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064a0) {
            ctx->pc = 0x1064ACu;
            goto label_1064ac;
        }
    }
    ctx->pc = 0x1064A8u;
    // 0x1064a8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1064a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1064ac:
    // 0x1064ac: 0xc060e88  jal         func_183A20
    ctx->pc = 0x1064ACu;
    SET_GPR_U32(ctx, 31, 0x1064B4u);
    ctx->pc = 0x1064B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064ACu;
    // 0x1064b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x1064ACu, 0x1064B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064B4u;
label_1064b4:
    // 0x1064b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1064b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1064b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1064B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1064BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064B8u;
        // 0x1064bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1064B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1064C0u;
}

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

// Function: __tf8ApcStage
// Address: 0x1d8478 - 0x1d84c8
void ps2___tf8ApcStage_0x1d8478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8ApcStage_0x1d8478");
#endif

    switch (ctx->pc) {
        case 0x1d849cu: goto label_1d849c;
        case 0x1d84b4u: goto label_1d84b4;
        default: break;
    }

    ctx->pc = 0x1d8478u;

    // 0x1d8478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d847c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d8480: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8484: 0x24500f50  addiu       $s0, $v0, 0xF50
    ctx->pc = 0x1d8484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x1d8488: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410F50u));
    // 0x1d848c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D848Cu;
    {
        const bool branch_taken_0x1d848c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D848Cu;
        // 0x1d8490: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d848c) {
            ctx->pc = 0x1D84B4u;
            goto label_1d84b4;
        }
    }
    ctx->pc = 0x1D8494u;
    // 0x1d8494: 0xc075f5c  jal         func_1D7D70
    ctx->pc = 0x1D8494u;
    SET_GPR_U32(ctx, 31, 0x1D849Cu);
    ctx->pc = 0x1D7D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D70u, 0x1D8494u, 0x1D849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D849Cu;
label_1d849c:
    // 0x1d849c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d849cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d84a0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d84a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d84a4: 0x24a56840  addiu       $a1, $a1, 0x6840
    ctx->pc = 0x1d84a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26688));
    // 0x1d84a8: 0x24c60760  addiu       $a2, $a2, 0x760
    ctx->pc = 0x1d84a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1888));
    // 0x1d84ac: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D84ACu;
    SET_GPR_U32(ctx, 31, 0x1D84B4u);
    ctx->pc = 0x1D84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D84ACu;
    // 0x1d84b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D84ACu, 0x1D84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84B4u;
label_1d84b4:
    // 0x1d84b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d84b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d84b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d84bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d84bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d84c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D84C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D84C0u;
        // 0x1d84c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D84C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D84C8u;
}

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

// Function: MiniErrorCheck__20ApItemGameInfomationi
// Address: 0x1187a8 - 0x1187e8
void MiniErrorCheck__20ApItemGameInfomationi_0x1187a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MiniErrorCheck__20ApItemGameInfomationi_0x1187a8");
#endif

    switch (ctx->pc) {
        case 0x1187c4u: goto label_1187c4;
        case 0x1187dcu: goto label_1187dc;
        default: break;
    }

    ctx->pc = 0x1187a8u;

    // 0x1187a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1187a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1187ac: 0x2ca20011  sltiu       $v0, $a1, 0x11
    ctx->pc = 0x1187acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1187b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1187B0u;
    {
        const bool branch_taken_0x1187b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1187B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187B0u;
        // 0x1187b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187b0) {
            ctx->pc = 0x1187DCu;
            goto label_1187dc;
        }
    }
    ctx->pc = 0x1187B8u;
    // 0x1187b8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1187b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1187bc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1187BCu;
    SET_GPR_U32(ctx, 31, 0x1187C4u);
    ctx->pc = 0x1187C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187BCu;
    // 0x1187c0: 0x248442d8  addiu       $a0, $a0, 0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1187BCu, 0x1187C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187C4u;
label_1187c4:
    // 0x1187c4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1187c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1187c8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1187c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1187cc: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1187ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1187d0: 0x24a542e8  addiu       $a1, $a1, 0x42E8
    ctx->pc = 0x1187d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17128));
    // 0x1187d4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1187D4u;
    SET_GPR_U32(ctx, 31, 0x1187DCu);
    ctx->pc = 0x1187D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187D4u;
    // 0x1187d8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1187D4u, 0x1187DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187DCu;
label_1187dc:
    // 0x1187dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1187dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1187e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1187E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1187E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187E0u;
        // 0x1187e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1187E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1187E8u;
}

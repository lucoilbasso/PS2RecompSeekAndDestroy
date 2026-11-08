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

// Function: entry_00114e14
// Address: 0x114e14 - 0x114e4c
void entry_00114e14_0x114e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114e14_0x114e14");
#endif

    switch (ctx->pc) {
        case 0x114e30u: goto label_114e30;
        case 0x114e48u: goto label_114e48;
        default: break;
    }

    ctx->pc = 0x114e14u;

    // 0x114e14: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114E14u;
    {
        const bool branch_taken_0x114e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E14u;
        // 0x114e18: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e14) {
            ctx->pc = 0x114E4Cu;
            return;
        }
    }
    ctx->pc = 0x114E1Cu;
    // 0x114e1c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114e20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x114e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e28: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114E28u;
    SET_GPR_U32(ctx, 31, 0x114E30u);
    ctx->pc = 0x114E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E28u;
    // 0x114e2c: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114E28u, 0x114E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E30u;
label_114e30:
    // 0x114e30: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114e34: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x114e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x114e38: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x114e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x114e3c: 0x24a54370  addiu       $a1, $a1, 0x4370
    ctx->pc = 0x114e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17264));
    // 0x114e40: 0xc068186  jal         func_1A0618
    ctx->pc = 0x114E40u;
    SET_GPR_U32(ctx, 31, 0x114E48u);
    ctx->pc = 0x114E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E40u;
    // 0x114e44: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x114E40u, 0x114E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E48u;
label_114e48:
    // 0x114e48: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x114e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x114e4cu;
}

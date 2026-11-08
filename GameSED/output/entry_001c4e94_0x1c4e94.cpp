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

// Function: entry_001c4e94
// Address: 0x1c4e94 - 0x1c4ec0
void entry_001c4e94_0x1c4e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4e94_0x1c4e94");
#endif

    switch (ctx->pc) {
        case 0x1c4ea8u: goto label_1c4ea8;
        case 0x1c4ebcu: goto label_1c4ebc;
        default: break;
    }

    ctx->pc = 0x1c4e94u;

    // 0x1c4e94: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c4e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c4e98: 0x2604ee40  addiu       $a0, $s0, -0x11C0
    ctx->pc = 0x1c4e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
    // 0x1c4e9c: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x1c4e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x1c4ea0: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1C4EA0u;
    SET_GPR_U32(ctx, 31, 0x1C4EA8u);
    ctx->pc = 0x1C4EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EA0u;
    // 0x1c4ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1C4EA0u, 0x1C4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EA8u;
label_1c4ea8:
    // 0x1c4ea8: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C4EA8u;
    {
        const bool branch_taken_0x1c4ea8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EA8u;
        // 0x1c4eac: 0x2612ee40  addiu       $s2, $s0, -0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ea8) {
            ctx->pc = 0x1C4EDCu;
            return;
        }
    }
    ctx->pc = 0x1C4EB0u;
    // 0x1c4eb0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1c4eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1c4eb4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1C4EB4u;
    SET_GPR_U32(ctx, 31, 0x1C4EBCu);
    ctx->pc = 0x1C4EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EB4u;
    // 0x1c4eb8: 0x2484b780  addiu       $a0, $a0, -0x4880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1C4EB4u, 0x1C4EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EBCu;
label_1c4ebc:
    // 0x1c4ebc: 0x0  nop
    ctx->pc = 0x1c4ebcu;
    // NOP
    ctx->pc = 0x1c4ec0u;
}

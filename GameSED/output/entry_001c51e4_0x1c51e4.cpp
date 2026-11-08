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

// Function: entry_001c51e4
// Address: 0x1c51e4 - 0x1c520c
void entry_001c51e4_0x1c51e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c51e4_0x1c51e4");
#endif

    switch (ctx->pc) {
        case 0x1c51f0u: goto label_1c51f0;
        default: break;
    }

    ctx->pc = 0x1c51e4u;

    // 0x1c51e4: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x1c51e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x1c51e8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C51E8u;
    SET_GPR_U32(ctx, 31, 0x1C51F0u);
    ctx->pc = 0x1C51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51E8u;
    // 0x1c51ec: 0x8e44ddfc  lw          $a0, -0x2204($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C51E8u, 0x1C51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51F0u;
label_1c51f0:
    // 0x1c51f0: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C51F0u;
    {
        const bool branch_taken_0x1c51f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51F0u;
        // 0x1c51f4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51f0) {
            ctx->pc = 0x1C5294u;
            return;
        }
    }
    ctx->pc = 0x1C51F8u;
    // 0x1c51f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C51F8u;
    {
        const bool branch_taken_0x1c51f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c51f8) {
            ctx->pc = 0x1C520Cu;
            return;
        }
    }
    ctx->pc = 0x1C5200u;
    // 0x1c5200: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1c5200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c5204: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5204u;
    {
        const bool branch_taken_0x1c5204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5204u;
        // 0x1c5208: 0x3c100041  lui         $s0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5204) {
            ctx->pc = 0x1C521Cu;
            return;
        }
    }
    ctx->pc = 0x1C520Cu;
}

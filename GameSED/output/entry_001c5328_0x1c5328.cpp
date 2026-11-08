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

// Function: entry_001c5328
// Address: 0x1c5328 - 0x1c5344
void entry_001c5328_0x1c5328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5328_0x1c5328");
#endif

    switch (ctx->pc) {
        case 0x1c5334u: goto label_1c5334;
        default: break;
    }

    ctx->pc = 0x1c5328u;

    // 0x1c5328: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x1c5328u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x1c532c: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C532Cu;
    SET_GPR_U32(ctx, 31, 0x1C5334u);
    ctx->pc = 0x1C5330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C532Cu;
    // 0x1c5330: 0x8e44ddfc  lw          $a0, -0x2204($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C532Cu, 0x1C5334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5334u;
label_1c5334:
    // 0x1c5334: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5334u;
    {
        const bool branch_taken_0x1c5334 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5334u;
        // 0x1c5338: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5334) {
            ctx->pc = 0x1C5344u;
            return;
        }
    }
    ctx->pc = 0x1C533Cu;
    // 0x1c533c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C533Cu;
    {
        const bool branch_taken_0x1c533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C533Cu;
        // 0x1c5340: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c533c) {
            ctx->pc = 0x1C5398u;
            return;
        }
    }
    ctx->pc = 0x1C5344u;
}

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

// Function: entry_001b7ae0
// Address: 0x1b7ae0 - 0x1b7b00
void entry_001b7ae0_0x1b7ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ae0_0x1b7ae0");
#endif

    switch (ctx->pc) {
        case 0x1b7afcu: goto label_1b7afc;
        default: break;
    }

    ctx->pc = 0x1b7ae0u;

    // 0x1b7ae0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1b7ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1b7ae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7ae8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1b7ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1b7aec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7AECu;
    {
        const bool branch_taken_0x1b7aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AECu;
        // 0x1b7af0: 0x3c05001b  lui         $a1, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7aec) {
            ctx->pc = 0x1B7B00u;
            return;
        }
    }
    ctx->pc = 0x1B7AF4u;
    // 0x1b7af4: 0xc06be10  jal         func_1AF840
    ctx->pc = 0x1B7AF4u;
    SET_GPR_U32(ctx, 31, 0x1B7AFCu);
    ctx->pc = 0x1AF840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF840u, 0x1B7AF4u, 0x1B7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AFCu;
label_1b7afc:
    // 0x1b7afc: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b7afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    ctx->pc = 0x1b7b00u;
}

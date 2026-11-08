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

// Function: entry_001a6104
// Address: 0x1a6104 - 0x1a6128
void entry_001a6104_0x1a6104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6104_0x1a6104");
#endif

    ctx->pc = 0x1a6104u;

label_1a6104:
    // 0x1a6104: 0x2e820009  sltiu       $v0, $s4, 0x9
    ctx->pc = 0x1a6104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1a6108:
    // 0x1a6108: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_1a610c:
    if (ctx->pc == 0x1A610Cu) {
        ctx->pc = 0x1A610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6108u;
        // 0x1a610c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6110u;
        goto label_1a6110;
    }
    ctx->pc = 0x1A6108u;
    {
        const bool branch_taken_0x1a6108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6108) {
            ctx->pc = 0x1A610Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6108u;
            // 0x1a610c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61E4u;
            return;
        }
    }
    ctx->pc = 0x1A6110u;
label_1a6110:
    // 0x1a6110: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1a6110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1a6114:
    // 0x1a6114: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1a6118:
    // 0x1a6118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a6118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a611c:
    // 0x1a611c: 0x8c639450  lw          $v1, -0x6BB0($v1)
    ctx->pc = 0x1a611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939728)));
label_1a6120:
    // 0x1a6120: 0x600008  jr          $v1
label_1a6124:
    if (ctx->pc == 0x1A6124u) {
        ctx->pc = 0x1A6128u;
        goto label_fallthrough_0x1a6120;
    }
    ctx->pc = 0x1A6120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a6120:
    ctx->pc = 0x1A6128u;
}

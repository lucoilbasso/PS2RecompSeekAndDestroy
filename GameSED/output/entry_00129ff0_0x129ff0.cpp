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

// Function: entry_00129ff0
// Address: 0x129ff0 - 0x12a010
void entry_00129ff0_0x129ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129ff0_0x129ff0");
#endif

    switch (ctx->pc) {
        case 0x129ff8u: goto label_129ff8;
        default: break;
    }

    ctx->pc = 0x129ff0u;

    // 0x129ff0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x129FF0u;
    SET_GPR_U32(ctx, 31, 0x129FF8u);
    ctx->pc = 0x129FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FF0u;
    // 0x129ff4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x129FF0u, 0x129FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FF8u;
label_129ff8:
    // 0x129ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x129ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ffc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x129ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a000: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A000u;
    {
        const bool branch_taken_0x12a000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A000u;
        // 0x12a004: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a000) {
            ctx->pc = 0x12A010u;
            return;
        }
    }
    ctx->pc = 0x12A008u;
    // 0x12a008: 0x31023  negu        $v0, $v1
    ctx->pc = 0x12a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x12a00c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x12a010u;
}

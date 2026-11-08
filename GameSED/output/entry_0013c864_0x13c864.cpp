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

// Function: entry_0013c864
// Address: 0x13c864 - 0x13c89c
void entry_0013c864_0x13c864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c864_0x13c864");
#endif

    switch (ctx->pc) {
        case 0x13c86cu: goto label_13c86c;
        case 0x13c894u: goto label_13c894;
        default: break;
    }

    ctx->pc = 0x13c864u;

    // 0x13c864: 0xc04f56e  jal         func_13D5B8
    ctx->pc = 0x13C864u;
    SET_GPR_U32(ctx, 31, 0x13C86Cu);
    ctx->pc = 0x13C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C864u;
    // 0x13c868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5B8u, 0x13C864u, 0x13C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C86Cu;
label_13c86c:
    // 0x13c86c: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x13c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x13c870: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x13c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x13c874: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13C874u;
    {
        const bool branch_taken_0x13c874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c874) {
            ctx->pc = 0x13C8ACu;
            return;
        }
    }
    ctx->pc = 0x13C87Cu;
    // 0x13c87c: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x13c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x13c880: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x13c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x13c884: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C884u;
    {
        const bool branch_taken_0x13c884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c884) {
            ctx->pc = 0x13C888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C884u;
            // 0x13c888: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C89Cu;
            return;
        }
    }
    ctx->pc = 0x13C88Cu;
    // 0x13c88c: 0xc04fb5e  jal         func_13ED78
    ctx->pc = 0x13C88Cu;
    SET_GPR_U32(ctx, 31, 0x13C894u);
    ctx->pc = 0x13ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ED78u, 0x13C88Cu, 0x13C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C894u;
label_13c894:
    // 0x13c894: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x13c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x13c898: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13c898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    ctx->pc = 0x13c89cu;
}

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

// Function: entry_0011b410
// Address: 0x11b410 - 0x11b434
void entry_0011b410_0x11b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b410_0x11b410");
#endif

    switch (ctx->pc) {
        case 0x11b424u: goto label_11b424;
        default: break;
    }

    ctx->pc = 0x11b410u;

    // 0x11b410: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b418: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x11b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x11b41c: 0xc0665aa  jal         func_1996A8
    ctx->pc = 0x11B41Cu;
    SET_GPR_U32(ctx, 31, 0x11B424u);
    ctx->pc = 0x11B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B41Cu;
    // 0x11b420: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1996A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1996A8u, 0x11B41Cu, 0x11B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B424u;
label_11b424:
    // 0x11b424: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b428: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x11b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x11b42c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B42Cu;
    {
        const bool branch_taken_0x11b42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b42c) {
            ctx->pc = 0x11B430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B42Cu;
            // 0x11b430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B440u;
            return;
        }
    }
    ctx->pc = 0x11B434u;
}

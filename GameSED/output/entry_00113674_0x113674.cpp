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

// Function: entry_00113674
// Address: 0x113674 - 0x1136b0
void entry_00113674_0x113674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113674_0x113674");
#endif

    switch (ctx->pc) {
        case 0x11367cu: goto label_11367c;
        default: break;
    }

    ctx->pc = 0x113674u;

    // 0x113674: 0xc0619a2  jal         func_186688
    ctx->pc = 0x113674u;
    SET_GPR_U32(ctx, 31, 0x11367Cu);
    ctx->pc = 0x186688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186688u, 0x113674u, 0x11367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11367Cu;
label_11367c:
    // 0x11367c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x11367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x113680: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x113680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113688: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x113688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x11368c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x113690: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113690u;
    {
        const bool branch_taken_0x113690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113690u;
        // 0x113694: 0x32630300  andi        $v1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113690) {
            ctx->pc = 0x1136B0u;
            return;
        }
    }
    ctx->pc = 0x113698u;
    // 0x113698: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11369c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x11369cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1136a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1136a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1136a4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1136a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1136a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1136A8u;
    {
        const bool branch_taken_0x1136a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136A8u;
        // 0x1136ac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136a8) {
            ctx->pc = 0x1136D8u;
            return;
        }
    }
    ctx->pc = 0x1136B0u;
}

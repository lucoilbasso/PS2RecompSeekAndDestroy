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

// Function: entry_001ba678
// Address: 0x1ba678 - 0x1ba698
void entry_001ba678_0x1ba678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba678_0x1ba678");
#endif

    switch (ctx->pc) {
        case 0x1ba680u: goto label_1ba680;
        default: break;
    }

    ctx->pc = 0x1ba678u;

    // 0x1ba678: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1BA678u;
    SET_GPR_U32(ctx, 31, 0x1BA680u);
    ctx->pc = 0x1BA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA678u;
    // 0x1ba67c: 0x3c120025  lui         $s2, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1BA678u, 0x1BA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA680u;
label_1ba680:
    // 0x1ba680: 0x8e42c0b8  lw          $v0, -0x3F48($s2)
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951096)));
    // 0x1ba684: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA684u;
    {
        const bool branch_taken_0x1ba684 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA684u;
        // 0x1ba688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba684) {
            ctx->pc = 0x1BA730u;
            return;
        }
    }
    ctx->pc = 0x1BA68Cu;
    // 0x1ba68c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BA68Cu;
    {
        const bool branch_taken_0x1ba68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA68Cu;
        // 0x1ba690: 0x3c110025  lui         $s1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba68c) {
            ctx->pc = 0x1BA6BCu;
            return;
        }
    }
    ctx->pc = 0x1BA694u;
    // 0x1ba694: 0x0  nop
    ctx->pc = 0x1ba694u;
    // NOP
    ctx->pc = 0x1ba698u;
}

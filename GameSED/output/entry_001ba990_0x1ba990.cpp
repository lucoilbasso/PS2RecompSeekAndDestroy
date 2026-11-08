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

// Function: entry_001ba990
// Address: 0x1ba990 - 0x1ba9b0
void entry_001ba990_0x1ba990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba990_0x1ba990");
#endif

    switch (ctx->pc) {
        case 0x1ba998u: goto label_1ba998;
        default: break;
    }

    ctx->pc = 0x1ba990u;

    // 0x1ba990: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1BA990u;
    SET_GPR_U32(ctx, 31, 0x1BA998u);
    ctx->pc = 0x1BA994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA990u;
    // 0x1ba994: 0x3c120025  lui         $s2, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1BA990u, 0x1BA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA998u;
label_1ba998:
    // 0x1ba998: 0x8e42c0c8  lw          $v0, -0x3F38($s2)
    ctx->pc = 0x1ba998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951112)));
    // 0x1ba99c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA99Cu;
    {
        const bool branch_taken_0x1ba99c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA99Cu;
        // 0x1ba9a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba99c) {
            ctx->pc = 0x1BAA48u;
            return;
        }
    }
    ctx->pc = 0x1BA9A4u;
    // 0x1ba9a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BA9A4u;
    {
        const bool branch_taken_0x1ba9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9A4u;
        // 0x1ba9a8: 0x3c110025  lui         $s1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9a4) {
            ctx->pc = 0x1BA9D4u;
            return;
        }
    }
    ctx->pc = 0x1BA9ACu;
    // 0x1ba9ac: 0x0  nop
    ctx->pc = 0x1ba9acu;
    // NOP
    ctx->pc = 0x1ba9b0u;
}

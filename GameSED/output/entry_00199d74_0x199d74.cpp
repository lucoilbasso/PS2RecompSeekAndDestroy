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

// Function: entry_00199d74
// Address: 0x199d74 - 0x199da0
void entry_00199d74_0x199d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d74_0x199d74");
#endif

    switch (ctx->pc) {
        case 0x199d7cu: goto label_199d7c;
        default: break;
    }

    ctx->pc = 0x199d74u;

    // 0x199d74: 0xc06684c  jal         func_19A130
    ctx->pc = 0x199D74u;
    SET_GPR_U32(ctx, 31, 0x199D7Cu);
    ctx->pc = 0x199D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D74u;
    // 0x199d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A130u, 0x199D74u, 0x199D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D7Cu;
label_199d7c:
    // 0x199d7c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x199d80: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x199D80u;
    {
        const bool branch_taken_0x199d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d80) {
            ctx->pc = 0x199D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199D80u;
            // 0x199d84: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199E08u;
            return;
        }
    }
    ctx->pc = 0x199D88u;
    // 0x199d88: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x199d8c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x199D8Cu;
    {
        const bool branch_taken_0x199d8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x199D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D8Cu;
        // 0x199d90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d8c) {
            ctx->pc = 0x199DF0u;
            return;
        }
    }
    ctx->pc = 0x199D94u;
    // 0x199d94: 0x3c120080  lui         $s2, 0x80
    ctx->pc = 0x199d94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
    // 0x199d98: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x199d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x199d9c: 0x0  nop
    ctx->pc = 0x199d9cu;
    // NOP
    ctx->pc = 0x199da0u;
}

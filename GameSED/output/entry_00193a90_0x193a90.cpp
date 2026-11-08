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

// Function: entry_00193a90
// Address: 0x193a90 - 0x193ab0
void entry_00193a90_0x193a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a90_0x193a90");
#endif

    switch (ctx->pc) {
        case 0x193aacu: goto label_193aac;
        default: break;
    }

    ctx->pc = 0x193a90u;

    // 0x193a90: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x193A90u;
    {
        const bool branch_taken_0x193a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A90u;
        // 0x193a94: 0x26110160  addiu       $s1, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a90) {
            ctx->pc = 0x193ABCu;
            return;
        }
    }
    ctx->pc = 0x193A98u;
    // 0x193a98: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x193a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x193a9c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x193A9Cu;
    {
        const bool branch_taken_0x193a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a9c) {
            ctx->pc = 0x193AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A9Cu;
            // 0x193aa0: 0x8e0401ac  lw          $a0, 0x1AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193AB0u;
            return;
        }
    }
    ctx->pc = 0x193AA4u;
    // 0x193aa4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193AA4u;
    SET_GPR_U32(ctx, 31, 0x193AACu);
    ctx->pc = 0x193AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AA4u;
    // 0x193aa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193AA4u, 0x193AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AACu;
label_193aac:
    // 0x193aac: 0x8e0401ac  lw          $a0, 0x1AC($s0)
    ctx->pc = 0x193aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    ctx->pc = 0x193ab0u;
}

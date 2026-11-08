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

// Function: entry_00198e54
// Address: 0x198e54 - 0x198e84
void entry_00198e54_0x198e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198e54_0x198e54");
#endif

    switch (ctx->pc) {
        case 0x198e6cu: goto label_198e6c;
        case 0x198e7cu: goto label_198e7c;
        default: break;
    }

    ctx->pc = 0x198e54u;

    // 0x198e54: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x198e58: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198e5c: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x198E5Cu;
    {
        const bool branch_taken_0x198e5c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x198E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E5Cu;
        // 0x198e60: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e5c) {
            ctx->pc = 0x198E30u;
            return;
        }
    }
    ctx->pc = 0x198E64u;
    // 0x198e64: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x198E64u;
    SET_GPR_U32(ctx, 31, 0x198E6Cu);
    ctx->pc = 0x198E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E64u;
    // 0x198e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x198E64u, 0x198E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E6Cu;
label_198e6c:
    // 0x198e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x198e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e74: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x198E74u;
    SET_GPR_U32(ctx, 31, 0x198E7Cu);
    ctx->pc = 0x198E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E74u;
    // 0x198e78: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x198E74u, 0x198E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E7Cu;
label_198e7c:
    // 0x198e7c: 0x5620ffe8  bnel        $s1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x198E7Cu;
    {
        const bool branch_taken_0x198e7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x198e7c) {
            ctx->pc = 0x198E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198E7Cu;
            // 0x198e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198E20u;
            return;
        }
    }
    ctx->pc = 0x198E84u;
}

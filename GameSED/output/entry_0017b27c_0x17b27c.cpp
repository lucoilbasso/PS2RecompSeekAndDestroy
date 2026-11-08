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

// Function: entry_0017b27c
// Address: 0x17b27c - 0x17b2c4
void entry_0017b27c_0x17b27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b27c_0x17b27c");
#endif

    switch (ctx->pc) {
        case 0x17b294u: goto label_17b294;
        case 0x17b29cu: goto label_17b29c;
        case 0x17b2a8u: goto label_17b2a8;
        case 0x17b2bcu: goto label_17b2bc;
        default: break;
    }

    ctx->pc = 0x17b27cu;

    // 0x17b27c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17b27cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17b280: 0x641ffed  bgez        $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17B280u;
    {
        const bool branch_taken_0x17b280 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B280u;
        // 0x17b284: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b280) {
            ctx->pc = 0x17B238u;
            return;
        }
    }
    ctx->pc = 0x17B288u;
    // 0x17b288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b28c: 0xc05ed7c  jal         func_17B5F0
    ctx->pc = 0x17B28Cu;
    SET_GPR_U32(ctx, 31, 0x17B294u);
    ctx->pc = 0x17B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B28Cu;
    // 0x17b290: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B5F0u, 0x17B28Cu, 0x17B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B294u;
label_17b294:
    // 0x17b294: 0xc05ed42  jal         func_17B508
    ctx->pc = 0x17B294u;
    SET_GPR_U32(ctx, 31, 0x17B29Cu);
    ctx->pc = 0x17B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B294u;
    // 0x17b298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B508u, 0x17B294u, 0x17B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B29Cu;
label_17b29c:
    // 0x17b29c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17b2a0: 0xc06bd34  jal         func_1AF4D0
    ctx->pc = 0x17B2A0u;
    SET_GPR_U32(ctx, 31, 0x17B2A8u);
    ctx->pc = 0x17B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2A0u;
    // 0x17b2a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4D0u, 0x17B2A0u, 0x17B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2A8u;
label_17b2a8:
    // 0x17b2a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b2ac: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B2ACu;
    {
        const bool branch_taken_0x17b2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b2ac) {
            ctx->pc = 0x17B2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B2ACu;
            // 0x17b2b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B2D0u;
            return;
        }
    }
    ctx->pc = 0x17B2B4u;
    // 0x17b2b4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17B2B4u;
    SET_GPR_U32(ctx, 31, 0x17B2BCu);
    ctx->pc = 0x17B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2B4u;
    // 0x17b2b8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17B2B4u, 0x17B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2BCu;
label_17b2bc:
    // 0x17b2bc: 0xc05ea22  jal         func_17A888
    ctx->pc = 0x17B2BCu;
    SET_GPR_U32(ctx, 31, 0x17B2C4u);
    ctx->pc = 0x17B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2BCu;
    // 0x17b2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A888u, 0x17B2BCu, 0x17B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B2C4u;
}

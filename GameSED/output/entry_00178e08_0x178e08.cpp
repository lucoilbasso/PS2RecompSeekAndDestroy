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

// Function: entry_00178e08
// Address: 0x178e08 - 0x178e48
void entry_00178e08_0x178e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178e08_0x178e08");
#endif

    switch (ctx->pc) {
        case 0x178e10u: goto label_178e10;
        case 0x178e1cu: goto label_178e1c;
        default: break;
    }

    ctx->pc = 0x178e08u;

label_178e08:
    // 0x178e08: 0xc06bd28  jal         func_1AF4A0
label_178e0c:
    if (ctx->pc == 0x178E0Cu) {
        ctx->pc = 0x178E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E08u;
        // 0x178e0c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E10u;
        goto label_178e10;
    }
    ctx->pc = 0x178E08u;
    SET_GPR_U32(ctx, 31, 0x178E10u);
    ctx->pc = 0x178E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E08u;
    // 0x178e0c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178E08u, 0x178E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E10u;
label_178e10:
    // 0x178e10: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x178e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
label_178e14:
    // 0x178e14: 0xc06bd28  jal         func_1AF4A0
label_178e18:
    if (ctx->pc == 0x178E18u) {
        ctx->pc = 0x178E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E14u;
        // 0x178e18: 0x8c64d184  lw          $a0, -0x2E7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955396)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E1Cu;
        goto label_178e1c;
    }
    ctx->pc = 0x178E14u;
    SET_GPR_U32(ctx, 31, 0x178E1Cu);
    ctx->pc = 0x178E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E14u;
    // 0x178e18: 0x8c64d184  lw          $a0, -0x2E7C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178E14u, 0x178E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E1Cu;
label_178e1c:
    // 0x178e1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x178e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_178e20:
    // 0x178e20: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x178e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_178e24:
    // 0x178e24: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_178e28:
    if (ctx->pc == 0x178E28u) {
        ctx->pc = 0x178E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E24u;
        // 0x178e28: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178E2Cu;
        goto label_178e2c;
    }
    ctx->pc = 0x178E24u;
    {
        const bool branch_taken_0x178e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E24u;
        // 0x178e28: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e24) {
            ctx->pc = 0x178ED0u;
            return;
        }
    }
    ctx->pc = 0x178E2Cu;
label_178e2c:
    // 0x178e2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_178e30:
    // 0x178e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_178e34:
    // 0x178e34: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x178e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_178e38:
    // 0x178e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_178e3c:
    // 0x178e3c: 0x8c637a80  lw          $v1, 0x7A80($v1)
    ctx->pc = 0x178e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31360)));
label_178e40:
    // 0x178e40: 0x600008  jr          $v1
label_178e44:
    if (ctx->pc == 0x178E44u) {
        ctx->pc = 0x178E48u;
        goto label_fallthrough_0x178e40;
    }
    ctx->pc = 0x178E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x178e40:
    ctx->pc = 0x178E48u;
}

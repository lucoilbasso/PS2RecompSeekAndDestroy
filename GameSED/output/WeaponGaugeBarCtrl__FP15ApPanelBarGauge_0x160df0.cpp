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

// Function: WeaponGaugeBarCtrl__FP15ApPanelBarGauge
// Address: 0x160df0 - 0x160e8c
void WeaponGaugeBarCtrl__FP15ApPanelBarGauge_0x160df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponGaugeBarCtrl__FP15ApPanelBarGauge_0x160df0");
#endif

    switch (ctx->pc) {
        case 0x160e64u: goto label_160e64;
        case 0x160e74u: goto label_160e74;
        default: break;
    }

    ctx->pc = 0x160df0u;

    // 0x160df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x160df8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x160df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160e00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x160e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x160e04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x160e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x160e08: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x160e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x160e0c: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x160e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x160e10: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x160E10u;
    {
        const bool branch_taken_0x160e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e10) {
            ctx->pc = 0x160E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160E10u;
            // 0x160e14: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160E40u;
            goto label_160e40;
        }
    }
    ctx->pc = 0x160E18u;
    // 0x160e18: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x160e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x160e1c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x160e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x160e20: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x160e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x160e24: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x160e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x160e28: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x160e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x160e2c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x160e2cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x160e30: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x160e30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x160e34: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x160e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160e38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x160E38u;
    {
        const bool branch_taken_0x160e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E38u;
        // 0x160e3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e38) {
            ctx->pc = 0x160E5Cu;
            goto label_160e5c;
        }
    }
    ctx->pc = 0x160E40u;
label_160e40:
    // 0x160e40: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x160e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x160e44: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x160e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x160e48: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x160e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x160e4c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x160e4cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x160e50: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x160e54: 0x2a122aaa  slti        $s2, $s0, 0x2AAA
    ctx->pc = 0x160e54u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x160e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_160e5c:
    // 0x160e5c: 0xc056baa  jal         func_15AEA8
    ctx->pc = 0x160E5Cu;
    SET_GPR_U32(ctx, 31, 0x160E64u);
    ctx->pc = 0x160E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E5Cu;
    // 0x160e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AEA8u, 0x160E5Cu, 0x160E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E64u;
label_160e64:
    // 0x160e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e6c: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x160E6Cu;
    SET_GPR_U32(ctx, 31, 0x160E74u);
    ctx->pc = 0x160E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E6Cu;
    // 0x160e70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x160E6Cu, 0x160E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E74u;
label_160e74:
    // 0x160e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160e78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160e7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160e7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160e80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x160e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160e84: 0x3e00008  jr          $ra
    ctx->pc = 0x160E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E84u;
        // 0x160e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160E8Cu;
}

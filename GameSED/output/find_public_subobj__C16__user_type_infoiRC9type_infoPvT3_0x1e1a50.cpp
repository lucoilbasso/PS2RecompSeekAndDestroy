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

// Function: find_public_subobj__C16__user_type_infoiRC9type_infoPvT3
// Address: 0x1e1a50 - 0x1e1ab8
void find_public_subobj__C16__user_type_infoiRC9type_infoPvT3_0x1e1a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("find_public_subobj__C16__user_type_infoiRC9type_infoPvT3_0x1e1a50");
#endif

    switch (ctx->pc) {
        case 0x1e1a50u: goto label_1e1a50;
        case 0x1e1a54u: goto label_1e1a54;
        case 0x1e1a58u: goto label_1e1a58;
        case 0x1e1a5cu: goto label_1e1a5c;
        case 0x1e1a60u: goto label_1e1a60;
        case 0x1e1a64u: goto label_1e1a64;
        case 0x1e1a68u: goto label_1e1a68;
        case 0x1e1a6cu: goto label_1e1a6c;
        case 0x1e1a70u: goto label_1e1a70;
        case 0x1e1a74u: goto label_1e1a74;
        case 0x1e1a78u: goto label_1e1a78;
        case 0x1e1a7cu: goto label_1e1a7c;
        case 0x1e1a80u: goto label_1e1a80;
        case 0x1e1a84u: goto label_1e1a84;
        case 0x1e1a88u: goto label_1e1a88;
        case 0x1e1a8cu: goto label_1e1a8c;
        case 0x1e1a90u: goto label_1e1a90;
        case 0x1e1a94u: goto label_1e1a94;
        case 0x1e1a98u: goto label_1e1a98;
        case 0x1e1a9cu: goto label_1e1a9c;
        case 0x1e1aa0u: goto label_1e1aa0;
        case 0x1e1aa4u: goto label_1e1aa4;
        case 0x1e1aa8u: goto label_1e1aa8;
        case 0x1e1aacu: goto label_1e1aac;
        case 0x1e1ab0u: goto label_1e1ab0;
        case 0x1e1ab4u: goto label_1e1ab4;
        default: break;
    }

    ctx->pc = 0x1e1a50u;

label_1e1a50:
    // 0x1e1a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e1a54:
    // 0x1e1a54: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1e1a54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a58:
    // 0x1e1a58: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1e1a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a5c:
    // 0x1e1a5c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1e1a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a60:
    // 0x1e1a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1a64:
    // 0x1e1a64: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1e1a64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a68:
    // 0x1e1a68: 0x5200007  bltz        $t1, . + 4 + (0x7 << 2)
label_1e1a6c:
    if (ctx->pc == 0x1E1A6Cu) {
        ctx->pc = 0x1E1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A68u;
        // 0x1e1a6c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A70u;
        goto label_1e1a70;
    }
    ctx->pc = 0x1E1A68u;
    {
        const bool branch_taken_0x1e1a68 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1E1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A68u;
        // 0x1e1a6c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a68) {
            ctx->pc = 0x1E1A88u;
            goto label_1e1a88;
        }
    }
    ctx->pc = 0x1E1A70u;
label_1e1a70:
    // 0x1e1a70: 0x492026  xor         $a0, $v0, $t1
    ctx->pc = 0x1e1a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
label_1e1a74:
    // 0x1e1a74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e1a78:
    // 0x1e1a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1a7c:
    // 0x1e1a7c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e1a80:
    if (ctx->pc == 0x1E1A80u) {
        ctx->pc = 0x1E1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A7Cu;
        // 0x1e1a80: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A84u;
        goto label_1e1a84;
    }
    ctx->pc = 0x1E1A7Cu;
    {
        const bool branch_taken_0x1e1a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A7Cu;
        // 0x1e1a80: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a7c) {
            ctx->pc = 0x1E1AACu;
            goto label_1e1aac;
        }
    }
    ctx->pc = 0x1E1A84u;
label_1e1a84:
    // 0x1e1a84: 0x0  nop
    ctx->pc = 0x1e1a84u;
    // NOP
label_1e1a88:
    // 0x1e1a88: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1e1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1e1a8c:
    // 0x1e1a8c: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
label_1e1a90:
    if (ctx->pc == 0x1E1A90u) {
        ctx->pc = 0x1E1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A8Cu;
        // 0x1e1a90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A94u;
        goto label_1e1a94;
    }
    ctx->pc = 0x1E1A8Cu;
    {
        const bool branch_taken_0x1e1a8c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A8Cu;
        // 0x1e1a90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a8c) {
            ctx->pc = 0x1E1AACu;
            goto label_1e1aac;
        }
    }
    ctx->pc = 0x1E1A94u;
label_1e1a94:
    // 0x1e1a94: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x1e1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1e1a98:
    // 0x1e1a98: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1e1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1e1a9c:
    // 0x1e1a9c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1e1a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e1aa0:
    // 0x1e1aa0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e1aa4:
    // 0x1e1aa4: 0x40f809  jalr        $v0
label_1e1aa8:
    if (ctx->pc == 0x1E1AA8u) {
        ctx->pc = 0x1E1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AA4u;
        // 0x1e1aa8: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AACu;
        goto label_1e1aac;
    }
    ctx->pc = 0x1E1AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1AACu);
        ctx->pc = 0x1E1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AA4u;
        // 0x1e1aa8: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1AA4u, 0x1E1AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1AACu;
label_1e1aac:
    // 0x1e1aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1ab0:
    // 0x1e1ab0: 0x3e00008  jr          $ra
label_1e1ab4:
    if (ctx->pc == 0x1E1AB4u) {
        ctx->pc = 0x1E1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AB0u;
        // 0x1e1ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AB8u;
        goto label_fallthrough_0x1e1ab0;
    }
    ctx->pc = 0x1E1AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AB0u;
        // 0x1e1ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1ab0:
    ctx->pc = 0x1E1AB8u;
}

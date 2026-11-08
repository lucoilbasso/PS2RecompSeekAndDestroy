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

// Function: entry_001b7ef4
// Address: 0x1b7ef4 - 0x1b7f50
void entry_001b7ef4_0x1b7ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ef4_0x1b7ef4");
#endif

    switch (ctx->pc) {
        case 0x1b7ef4u: goto label_1b7ef4;
        case 0x1b7ef8u: goto label_1b7ef8;
        case 0x1b7efcu: goto label_1b7efc;
        case 0x1b7f00u: goto label_1b7f00;
        case 0x1b7f04u: goto label_1b7f04;
        case 0x1b7f08u: goto label_1b7f08;
        case 0x1b7f0cu: goto label_1b7f0c;
        case 0x1b7f10u: goto label_1b7f10;
        case 0x1b7f14u: goto label_1b7f14;
        case 0x1b7f18u: goto label_1b7f18;
        case 0x1b7f1cu: goto label_1b7f1c;
        case 0x1b7f20u: goto label_1b7f20;
        case 0x1b7f24u: goto label_1b7f24;
        case 0x1b7f28u: goto label_1b7f28;
        case 0x1b7f2cu: goto label_1b7f2c;
        case 0x1b7f30u: goto label_1b7f30;
        case 0x1b7f34u: goto label_1b7f34;
        case 0x1b7f38u: goto label_1b7f38;
        case 0x1b7f3cu: goto label_1b7f3c;
        case 0x1b7f40u: goto label_1b7f40;
        case 0x1b7f44u: goto label_1b7f44;
        case 0x1b7f48u: goto label_1b7f48;
        case 0x1b7f4cu: goto label_1b7f4c;
        default: break;
    }

    ctx->pc = 0x1b7ef4u;

label_1b7ef4:
    // 0x1b7ef4: 0xc06be14  jal         func_1AF850
label_1b7ef8:
    if (ctx->pc == 0x1B7EF8u) {
        ctx->pc = 0x1B7EFCu;
        goto label_1b7efc;
    }
    ctx->pc = 0x1B7EF4u;
    SET_GPR_U32(ctx, 31, 0x1B7EFCu);
    ctx->pc = 0x1AF850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF850u, 0x1B7EF4u, 0x1B7EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EFCu;
label_1b7efc:
    // 0x1b7efc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1b7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7f00:
    // 0x1b7f00: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
label_1b7f04:
    if (ctx->pc == 0x1B7F04u) {
        ctx->pc = 0x1B7F08u;
        goto label_1b7f08;
    }
    ctx->pc = 0x1B7F00u;
    {
        const bool branch_taken_0x1b7f00 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b7f00) {
            ctx->pc = 0x1B7F50u;
            return;
        }
    }
    ctx->pc = 0x1B7F08u;
label_1b7f08:
    // 0x1b7f08: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1b7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7f0c:
    // 0x1b7f0c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b7f10:
    // 0x1b7f10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b7f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b7f14:
    // 0x1b7f14: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1b7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b7f18:
    // 0x1b7f18: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1b7f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b7f1c:
    // 0x1b7f1c: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1b7f1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b7f20:
    // 0x1b7f20: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1b7f24:
    if (ctx->pc == 0x1B7F24u) {
        ctx->pc = 0x1B7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F20u;
        // 0x1b7f24: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F28u;
        goto label_1b7f28;
    }
    ctx->pc = 0x1B7F20u;
    {
        const bool branch_taken_0x1b7f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F20u;
        // 0x1b7f24: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f20) {
            ctx->pc = 0x1B7F84u;
            return;
        }
    }
    ctx->pc = 0x1B7F28u;
label_1b7f28:
    // 0x1b7f28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1b7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b7f2c:
    // 0x1b7f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b7f30:
    // 0x1b7f30: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1b7f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b7f34:
    // 0x1b7f34: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_1b7f38:
    if (ctx->pc == 0x1B7F38u) {
        ctx->pc = 0x1B7F3Cu;
        goto label_1b7f3c;
    }
    ctx->pc = 0x1B7F34u;
    {
        const bool branch_taken_0x1b7f34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f34) {
            ctx->pc = 0x1B7F84u;
            return;
        }
    }
    ctx->pc = 0x1B7F3Cu;
label_1b7f3c:
    // 0x1b7f3c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b7f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b7f40:
    // 0x1b7f40: 0xc0f809  jalr        $a2
label_1b7f44:
    if (ctx->pc == 0x1B7F44u) {
        ctx->pc = 0x1B7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F40u;
        // 0x1b7f44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F48u;
        goto label_1b7f48;
    }
    ctx->pc = 0x1B7F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B7F48u);
        ctx->pc = 0x1B7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F40u;
        // 0x1b7f44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F40u, 0x1B7F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7F48u;
label_1b7f48:
    // 0x1b7f48: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b7f4c:
    if (ctx->pc == 0x1B7F4Cu) {
        ctx->pc = 0x1B7F50u;
        goto label_fallthrough_0x1b7f48;
    }
    ctx->pc = 0x1B7F48u;
    {
        const bool branch_taken_0x1b7f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f48) {
            ctx->pc = 0x1B7F84u;
            return;
        }
    }
label_fallthrough_0x1b7f48:
    ctx->pc = 0x1B7F50u;
}

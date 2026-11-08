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

// Function: entry_0015ea58
// Address: 0x15ea58 - 0x15eae0
void entry_0015ea58_0x15ea58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ea58_0x15ea58");
#endif

    switch (ctx->pc) {
        case 0x15ea8cu: goto label_15ea8c;
        case 0x15eab8u: goto label_15eab8;
        default: break;
    }

    ctx->pc = 0x15ea58u;

    // 0x15ea58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ea5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15ea5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ea60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ea64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15ea68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ea6c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x15ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x15ea70: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x15EA70u;
    {
        const bool branch_taken_0x15ea70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA70u;
        // 0x15ea74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea70) {
            ctx->pc = 0x15EC50u;
            return;
        }
    }
    ctx->pc = 0x15EA78u;
    // 0x15ea78: 0x8c5101b0  lw          $s1, 0x1B0($v0)
    ctx->pc = 0x15ea78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x15ea7c: 0x52200075  beql        $s1, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x15EA7Cu;
    {
        const bool branch_taken_0x15ea7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea7c) {
            ctx->pc = 0x15EA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EA7Cu;
            // 0x15ea80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC54u;
            return;
        }
    }
    ctx->pc = 0x15EA84u;
    // 0x15ea84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EA84u;
    SET_GPR_U32(ctx, 31, 0x15EA8Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EA84u, 0x15EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA8Cu;
label_15ea8c:
    // 0x15ea8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15ea8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea90: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x15ea90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15ea94: 0x5040006f  beql        $v0, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x15EA94u;
    {
        const bool branch_taken_0x15ea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea94) {
            ctx->pc = 0x15EA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EA94u;
            // 0x15ea98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC54u;
            return;
        }
    }
    ctx->pc = 0x15EA9Cu;
    // 0x15ea9c: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x15ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15eaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eaa8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x15eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x15eaac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15eab0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15EAB0u;
    SET_GPR_U32(ctx, 31, 0x15EAB8u);
    ctx->pc = 0x15EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAB0u;
    // 0x15eab4: 0x24510170  addiu       $s1, $v0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15EAB0u, 0x15EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAB8u;
label_15eab8:
    // 0x15eab8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15eab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eac0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15EAC0u;
    {
        const bool branch_taken_0x15eac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC0u;
        // 0x15eac4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eac0) {
            ctx->pc = 0x15EB48u;
            return;
        }
    }
    ctx->pc = 0x15EAC8u;
    // 0x15eac8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EAC8u;
    {
        const bool branch_taken_0x15eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eac8) {
            ctx->pc = 0x15EACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EAC8u;
            // 0x15eacc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EAE0u;
            return;
        }
    }
    ctx->pc = 0x15EAD0u;
    // 0x15ead0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15EAD0u;
    {
        const bool branch_taken_0x15ead0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD0u;
        // 0x15ead4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ead0) {
            ctx->pc = 0x15EAF8u;
            return;
        }
    }
    ctx->pc = 0x15EAD8u;
    // 0x15ead8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x15EAD8u;
    {
        const bool branch_taken_0x15ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD8u;
        // 0x15eadc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ead8) {
            ctx->pc = 0x15EC58u;
            return;
        }
    }
    ctx->pc = 0x15EAE0u;
}

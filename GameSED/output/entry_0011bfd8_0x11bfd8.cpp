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

// Function: entry_0011bfd8
// Address: 0x11bfd8 - 0x11c028
void entry_0011bfd8_0x11bfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bfd8_0x11bfd8");
#endif

    switch (ctx->pc) {
        case 0x11bfe4u: goto label_11bfe4;
        case 0x11bff4u: goto label_11bff4;
        case 0x11c004u: goto label_11c004;
        default: break;
    }

    ctx->pc = 0x11bfd8u;

    // 0x11bfd8: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x11bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
    // 0x11bfdc: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11BFDCu;
    SET_GPR_U32(ctx, 31, 0x11BFE4u);
    ctx->pc = 0x11BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFDCu;
    // 0x11bfe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11BFDCu, 0x11BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFE4u;
label_11bfe4:
    // 0x11bfe4: 0x26e401d0  addiu       $a0, $s7, 0x1D0
    ctx->pc = 0x11bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 464));
    // 0x11bfe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfec: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11BFECu;
    SET_GPR_U32(ctx, 31, 0x11BFF4u);
    ctx->pc = 0x11BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFECu;
    // 0x11bff0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11BFECu, 0x11BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFF4u;
label_11bff4:
    // 0x11bff4: 0x26a40c50  addiu       $a0, $s5, 0xC50
    ctx->pc = 0x11bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3152));
    // 0x11bff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bffc: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11BFFCu;
    SET_GPR_U32(ctx, 31, 0x11C004u);
    ctx->pc = 0x11C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFFCu;
    // 0x11c000: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11BFFCu, 0x11C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C004u;
label_11c004:
    // 0x11c004: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x11c004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x11c008: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11c008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c00c: 0x961021  addu        $v0, $a0, $s6
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x11c010: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c014: 0x58600013  blezl       $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x11C014u;
    {
        const bool branch_taken_0x11c014 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11c014) {
            ctx->pc = 0x11C018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C014u;
            // 0x11c018: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C064u;
            return;
        }
    }
    ctx->pc = 0x11C01Cu;
    // 0x11c01c: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x11c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x11c020: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c024: 0x0  nop
    ctx->pc = 0x11c024u;
    // NOP
    ctx->pc = 0x11c028u;
}

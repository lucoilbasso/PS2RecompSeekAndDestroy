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

// Function: entry_00101664
// Address: 0x101664 - 0x1016bc
void entry_00101664_0x101664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101664_0x101664");
#endif

    switch (ctx->pc) {
        case 0x101688u: goto label_101688;
        case 0x101690u: goto label_101690;
        case 0x1016b8u: goto label_1016b8;
        default: break;
    }

    ctx->pc = 0x101664u;

    // 0x101664: 0x11a100  sll         $s4, $s1, 4
    ctx->pc = 0x101664u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x101668: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x101668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10166c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x10166cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x101670: 0x52200066  beql        $s1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x101670u;
    {
        const bool branch_taken_0x101670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x101670) {
            ctx->pc = 0x101674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101670u;
            // 0x101674: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10180Cu;
            return;
        }
    }
    ctx->pc = 0x101678u;
    // 0x101678: 0x6400035  bltz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x101678u;
    {
        const bool branch_taken_0x101678 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x10167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101678u;
        // 0x10167c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101678) {
            ctx->pc = 0x101750u;
            return;
        }
    }
    ctx->pc = 0x101680u;
    // 0x101680: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101680u;
    SET_GPR_U32(ctx, 31, 0x101688u);
    ctx->pc = 0x101684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101680u;
    // 0x101684: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101680u, 0x101688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101688u;
label_101688:
    // 0x101688: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101688u;
    SET_GPR_U32(ctx, 31, 0x101690u);
    ctx->pc = 0x10168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101688u;
    // 0x10168c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101688u, 0x101690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101690u;
label_101690:
    // 0x101690: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x101690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x101694: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x101694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x101698: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x101698u;
    {
        const bool branch_taken_0x101698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101698u;
        // 0x10169c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101698) {
            ctx->pc = 0x1016BCu;
            return;
        }
    }
    ctx->pc = 0x1016A0u;
    // 0x1016a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1016a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1016a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016a8: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x1016a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    // 0x1016ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1016acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1016b0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1016B0u;
    SET_GPR_U32(ctx, 31, 0x1016B8u);
    ctx->pc = 0x1016B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016B0u;
    // 0x1016b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1016B0u, 0x1016B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016B8u;
label_1016b8:
    // 0x1016b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1016b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1016bcu;
}

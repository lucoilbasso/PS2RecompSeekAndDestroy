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

// Function: entry_00101cb0
// Address: 0x101cb0 - 0x101d18
void entry_00101cb0_0x101cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101cb0_0x101cb0");
#endif

    switch (ctx->pc) {
        case 0x101cd8u: goto label_101cd8;
        case 0x101ce0u: goto label_101ce0;
        default: break;
    }

    ctx->pc = 0x101cb0u;

    // 0x101cb0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x101cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x101cb4: 0x56220042  bnel        $s1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x101CB4u;
    {
        const bool branch_taken_0x101cb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x101cb4) {
            ctx->pc = 0x101CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101CB4u;
            // 0x101cb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101DC0u;
            return;
        }
    }
    ctx->pc = 0x101CBCu;
    // 0x101cbc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x101cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101cc0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x101cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cc4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x101cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cc8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x101cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x101ccc: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x101cccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x101cd0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101CD0u;
    SET_GPR_U32(ctx, 31, 0x101CD8u);
    ctx->pc = 0x101CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CD0u;
    // 0x101cd4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101CD0u, 0x101CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CD8u;
label_101cd8:
    // 0x101cd8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101CD8u;
    SET_GPR_U32(ctx, 31, 0x101CE0u);
    ctx->pc = 0x101CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CD8u;
    // 0x101cdc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101CD8u, 0x101CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CE0u;
label_101ce0:
    // 0x101ce0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x101ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x101ce4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x101ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101ce8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x101ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x101cec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101cf0: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x101cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101cf8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101CF8u;
    {
        const bool branch_taken_0x101cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x101CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CF8u;
        // 0x101cfc: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cf8) {
            ctx->pc = 0x101D18u;
            return;
        }
    }
    ctx->pc = 0x101D00u;
    // 0x101d00: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x101d04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d08: 0x24a519c8  addiu       $a1, $a1, 0x19C8
    ctx->pc = 0x101d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    // 0x101d0c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x101d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x101d10: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101D10u;
    SET_GPR_U32(ctx, 31, 0x101D18u);
    ctx->pc = 0x101D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D10u;
    // 0x101d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101D10u, 0x101D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D18u;
}

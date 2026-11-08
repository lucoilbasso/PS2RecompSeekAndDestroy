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

// Function: entry_00162a4c
// Address: 0x162a4c - 0x162a9c
void entry_00162a4c_0x162a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162a4c_0x162a4c");
#endif

    switch (ctx->pc) {
        case 0x162a8cu: goto label_162a8c;
        default: break;
    }

    ctx->pc = 0x162a4cu;

    // 0x162a4c: 0x8e4311b8  lw          $v1, 0x11B8($s2)
    ctx->pc = 0x162a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4536)));
    // 0x162a50: 0x10750012  beq         $v1, $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x162A50u;
    {
        const bool branch_taken_0x162a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x162A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A50u;
        // 0x162a54: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a50) {
            ctx->pc = 0x162A9Cu;
            return;
        }
    }
    ctx->pc = 0x162A58u;
    // 0x162a58: 0x8e4701b4  lw          $a3, 0x1B4($s2)
    ctx->pc = 0x162a58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x162a5c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x162a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x162a60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x162a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x162a68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x162a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a6c: 0x24061c28  addiu       $a2, $zero, 0x1C28
    ctx->pc = 0x162a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7208));
    // 0x162a70: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x162a74: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x162a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x162a78: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x162a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x162a7c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x162a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x162a80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x162a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162a84: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x162A84u;
    SET_GPR_U32(ctx, 31, 0x162A8Cu);
    ctx->pc = 0x162A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A84u;
    // 0x162a88: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x162A84u, 0x162A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A8Cu;
label_162a8c:
    // 0x162a8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x162a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a94: 0xc0618d4  jal         func_186350
    ctx->pc = 0x162A94u;
    SET_GPR_U32(ctx, 31, 0x162A9Cu);
    ctx->pc = 0x162A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A94u;
    // 0x162a98: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x162A94u, 0x162A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A9Cu;
}

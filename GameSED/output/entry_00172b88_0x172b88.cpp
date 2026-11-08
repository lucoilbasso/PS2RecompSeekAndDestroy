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

// Function: entry_00172b88
// Address: 0x172b88 - 0x172bd8
void entry_00172b88_0x172b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172b88_0x172b88");
#endif

    switch (ctx->pc) {
        case 0x172bb8u: goto label_172bb8;
        default: break;
    }

    ctx->pc = 0x172b88u;

    // 0x172b88: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172b8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b90: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x172b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b98: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x172b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x172b9c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172ba0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172ba4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172ba8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172bac: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172bb0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172BB0u;
    SET_GPR_U32(ctx, 31, 0x172BB8u);
    ctx->pc = 0x172BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BB0u;
    // 0x172bb4: 0x24e700b3  addiu       $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172BB0u, 0x172BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BB8u;
label_172bb8:
    // 0x172bb8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x172bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172bbc: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x172bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x172bc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172BC0u;
    {
        const bool branch_taken_0x172bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172bc0) {
            ctx->pc = 0x172BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172BC0u;
            // 0x172bc4: 0x26b10130  addiu       $s1, $s5, 0x130 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172BD8u;
            return;
        }
    }
    ctx->pc = 0x172BC8u;
    // 0x172bc8: 0x26b10280  addiu       $s1, $s5, 0x280
    ctx->pc = 0x172bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
    // 0x172bcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172BCCu;
    {
        const bool branch_taken_0x172bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BCCu;
        // 0x172bd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bcc) {
            ctx->pc = 0x172BDCu;
            return;
        }
    }
    ctx->pc = 0x172BD4u;
    // 0x172bd4: 0x0  nop
    ctx->pc = 0x172bd4u;
    // NOP
    ctx->pc = 0x172bd8u;
}

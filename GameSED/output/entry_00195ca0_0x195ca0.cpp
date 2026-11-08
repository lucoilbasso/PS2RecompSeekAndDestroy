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

// Function: entry_00195ca0
// Address: 0x195ca0 - 0x195d08
void entry_00195ca0_0x195ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ca0_0x195ca0");
#endif

    switch (ctx->pc) {
        case 0x195cd0u: goto label_195cd0;
        case 0x195cf8u: goto label_195cf8;
        case 0x195d00u: goto label_195d00;
        default: break;
    }

    ctx->pc = 0x195ca0u;

label_195ca0:
    // 0x195ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195ca4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x195ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x195ca8: 0x0  nop
    ctx->pc = 0x195ca8u;
    // NOP
    // 0x195cac: 0x0  nop
    ctx->pc = 0x195cacu;
    // NOP
    // 0x195cb0: 0x0  nop
    ctx->pc = 0x195cb0u;
    // NOP
    // 0x195cb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195CB4u;
    {
        const bool branch_taken_0x195cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cb4) {
            ctx->pc = 0x195CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195ca0;
        }
    }
    ctx->pc = 0x195CBCu;
    // 0x195cbc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x195cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x195cc0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x195CC0u;
    {
        const bool branch_taken_0x195cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cc0) {
            ctx->pc = 0x195CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195CC0u;
            // 0x195cc4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195D08u;
            return;
        }
    }
    ctx->pc = 0x195CC8u;
    // 0x195cc8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x195CC8u;
    SET_GPR_U32(ctx, 31, 0x195CD0u);
    ctx->pc = 0x195CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CC8u;
    // 0x195ccc: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x195CC8u, 0x195CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CD0u;
label_195cd0:
    // 0x195cd0: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x195cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x195cd4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x195cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x195cd8: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x195cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x195cdc: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x195cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x195ce0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x195ce0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x195ce4: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x195ce8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x195ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x195cec: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x195cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x195cf0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x195CF0u;
    SET_GPR_U32(ctx, 31, 0x195CF8u);
    ctx->pc = 0x195CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CF0u;
    // 0x195cf4: 0xae55008c  sw          $s5, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x195CF0u, 0x195CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CF8u;
label_195cf8:
    // 0x195cf8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x195CF8u;
    SET_GPR_U32(ctx, 31, 0x195D00u);
    ctx->pc = 0x195CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CF8u;
    // 0x195cfc: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x195CF8u, 0x195D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D00u;
label_195d00:
    // 0x195d00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x195D00u;
    {
        const bool branch_taken_0x195d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D00u;
        // 0x195d04: 0x8f838c50  lw          $v1, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d00) {
            ctx->pc = 0x195D30u;
            return;
        }
    }
    ctx->pc = 0x195D08u;
}

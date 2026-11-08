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

// Function: entry_001c4b2c
// Address: 0x1c4b2c - 0x1c4b6c
void entry_001c4b2c_0x1c4b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4b2c_0x1c4b2c");
#endif

    switch (ctx->pc) {
        case 0x1c4b54u: goto label_1c4b54;
        default: break;
    }

    ctx->pc = 0x1c4b2cu;

    // 0x1c4b2c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c4b30: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1c4b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b34: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1c4b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4b38: 0x2584dcc0  addiu       $a0, $t4, -0x2340
    ctx->pc = 0x1c4b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294958272));
    // 0x1c4b3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c4b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c4b40: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x1c4b40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b44: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1c4b44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1c4b48: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1c4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1c4b4c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B54u);
    ctx->pc = 0x1C4B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B4Cu;
    // 0x1c4b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C4B4Cu, 0x1C4B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B54u;
label_1c4b54:
    // 0x1c4b54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c4b58: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C4B58u;
    {
        const bool branch_taken_0x1c4b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b58) {
            ctx->pc = 0x1C4B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4B58u;
            // 0x1c4b5c: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4BE0u;
            return;
        }
    }
    ctx->pc = 0x1C4B60u;
    // 0x1c4b60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4b64: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C4B64u;
    {
        const bool branch_taken_0x1c4b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B64u;
        // 0x1c4b68: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b64) {
            ctx->pc = 0x1C4BDCu;
            return;
        }
    }
    ctx->pc = 0x1C4B6Cu;
}

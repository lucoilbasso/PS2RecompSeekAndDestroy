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

// Function: entry_001bae00
// Address: 0x1bae00 - 0x1bae38
void entry_001bae00_0x1bae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae00_0x1bae00");
#endif

    switch (ctx->pc) {
        case 0x1bae14u: goto label_1bae14;
        case 0x1bae34u: goto label_1bae34;
        default: break;
    }

    ctx->pc = 0x1bae00u;

    // 0x1bae00: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1bae00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1bae04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae08: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x1bae08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x1bae0c: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1BAE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE14u);
    ctx->pc = 0x1BAE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE0Cu;
    // 0x1bae10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1BAE0Cu, 0x1BAE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE14u;
label_1bae14:
    // 0x1bae14: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BAE14u;
    {
        const bool branch_taken_0x1bae14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bae14) {
            ctx->pc = 0x1BAE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAE14u;
            // 0x1bae18: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAE64u;
            return;
        }
    }
    ctx->pc = 0x1BAE1Cu;
    // 0x1bae1c: 0x8ec2c090  lw          $v0, -0x3F70($s6)
    ctx->pc = 0x1bae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951056)));
    // 0x1bae20: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAE20u;
    {
        const bool branch_taken_0x1bae20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE20u;
        // 0x1bae24: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae20) {
            ctx->pc = 0x1BAE38u;
            return;
        }
    }
    ctx->pc = 0x1BAE28u;
    // 0x1bae28: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1bae28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1bae2c: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE34u);
    ctx->pc = 0x1BAE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE2Cu;
    // 0x1bae30: 0x2484b050  addiu       $a0, $a0, -0x4FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BAE2Cu, 0x1BAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE34u;
label_1bae34:
    // 0x1bae34: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1bae34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x1bae38u;
}

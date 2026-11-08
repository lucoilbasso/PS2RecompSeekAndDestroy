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

// Function: entry_0014bac0
// Address: 0x14bac0 - 0x14baf4
void entry_0014bac0_0x14bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bac0_0x14bac0");
#endif

    switch (ctx->pc) {
        case 0x14bac8u: goto label_14bac8;
        default: break;
    }

    ctx->pc = 0x14bac0u;

    // 0x14bac0: 0xc0533e4  jal         func_14CF90
    ctx->pc = 0x14BAC0u;
    SET_GPR_U32(ctx, 31, 0x14BAC8u);
    ctx->pc = 0x14BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAC0u;
    // 0x14bac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF90u, 0x14BAC0u, 0x14BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAC8u;
label_14bac8:
    // 0x14bac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14bacc: 0x5642000a  bnel        $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14BACCu;
    {
        const bool branch_taken_0x14bacc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bacc) {
            ctx->pc = 0x14BAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BACCu;
            // 0x14bad0: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BAF8u;
            return;
        }
    }
    ctx->pc = 0x14BAD4u;
    // 0x14bad4: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BAD4u;
    {
        const bool branch_taken_0x14bad4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAD4u;
        // 0x14bad8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bad4) {
            ctx->pc = 0x14BAF4u;
            return;
        }
    }
    ctx->pc = 0x14BADCu;
    // 0x14badc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bae0: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x14bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14bae4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14bae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14bae8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BAE8u;
    {
        const bool branch_taken_0x14bae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14bae8) {
            ctx->pc = 0x14BAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BAE8u;
            // 0x14baec: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BAF8u;
            return;
        }
    }
    ctx->pc = 0x14BAF0u;
    // 0x14baf0: 0x8e120190  lw          $s2, 0x190($s0)
    ctx->pc = 0x14baf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    ctx->pc = 0x14baf4u;
}

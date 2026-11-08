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

// Function: entry_001ba6c0
// Address: 0x1ba6c0 - 0x1ba6fc
void entry_001ba6c0_0x1ba6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba6c0_0x1ba6c0");
#endif

    switch (ctx->pc) {
        case 0x1ba6d4u: goto label_1ba6d4;
        case 0x1ba6f8u: goto label_1ba6f8;
        default: break;
    }

    ctx->pc = 0x1ba6c0u;

    // 0x1ba6c0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ba6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ba6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba6c8: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x1ba6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x1ba6cc: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1BA6CCu;
    SET_GPR_U32(ctx, 31, 0x1BA6D4u);
    ctx->pc = 0x1BA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6CCu;
    // 0x1ba6d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1BA6CCu, 0x1BA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6D4u;
label_1ba6d4:
    // 0x1ba6d4: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA6D4u;
    {
        const bool branch_taken_0x1ba6d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ba6d4) {
            ctx->pc = 0x1BA6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA6D4u;
            // 0x1ba6d8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA724u;
            return;
        }
    }
    ctx->pc = 0x1BA6DCu;
    // 0x1ba6dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba6e0: 0x8c43c090  lw          $v1, -0x3F70($v0)
    ctx->pc = 0x1ba6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C090u));
    // 0x1ba6e4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA6E4u;
    {
        const bool branch_taken_0x1ba6e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6E4u;
        // 0x1ba6e8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6e4) {
            ctx->pc = 0x1BA6FCu;
            return;
        }
    }
    ctx->pc = 0x1BA6ECu;
    // 0x1ba6ec: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ba6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ba6f0: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA6F0u;
    SET_GPR_U32(ctx, 31, 0x1BA6F8u);
    ctx->pc = 0x1BA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6F0u;
    // 0x1ba6f4: 0x2484af98  addiu       $a0, $a0, -0x5068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA6F0u, 0x1BA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6F8u;
label_1ba6f8:
    // 0x1ba6f8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ba6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x1ba6fcu;
}

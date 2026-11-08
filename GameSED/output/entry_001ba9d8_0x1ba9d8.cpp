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

// Function: entry_001ba9d8
// Address: 0x1ba9d8 - 0x1baa14
void entry_001ba9d8_0x1ba9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba9d8_0x1ba9d8");
#endif

    switch (ctx->pc) {
        case 0x1ba9ecu: goto label_1ba9ec;
        case 0x1baa10u: goto label_1baa10;
        default: break;
    }

    ctx->pc = 0x1ba9d8u;

    // 0x1ba9d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ba9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ba9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9e0: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x1ba9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x1ba9e4: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1BA9E4u;
    SET_GPR_U32(ctx, 31, 0x1BA9ECu);
    ctx->pc = 0x1BA9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9E4u;
    // 0x1ba9e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1BA9E4u, 0x1BA9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9ECu;
label_1ba9ec:
    // 0x1ba9ec: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA9ECu;
    {
        const bool branch_taken_0x1ba9ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ba9ec) {
            ctx->pc = 0x1BA9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA9ECu;
            // 0x1ba9f0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAA3Cu;
            return;
        }
    }
    ctx->pc = 0x1BA9F4u;
    // 0x1ba9f4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba9f8: 0x8c43c090  lw          $v1, -0x3F70($v0)
    ctx->pc = 0x1ba9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C090u));
    // 0x1ba9fc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA9FCu;
    {
        const bool branch_taken_0x1ba9fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9FCu;
        // 0x1baa00: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9fc) {
            ctx->pc = 0x1BAA14u;
            return;
        }
    }
    ctx->pc = 0x1BAA04u;
    // 0x1baa04: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1baa04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1baa08: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BAA08u;
    SET_GPR_U32(ctx, 31, 0x1BAA10u);
    ctx->pc = 0x1BAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA08u;
    // 0x1baa0c: 0x2484aff8  addiu       $a0, $a0, -0x5008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BAA08u, 0x1BAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA10u;
label_1baa10:
    // 0x1baa10: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1baa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x1baa14u;
}

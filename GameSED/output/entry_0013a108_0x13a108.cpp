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

// Function: entry_0013a108
// Address: 0x13a108 - 0x13a12c
void entry_0013a108_0x13a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a108_0x13a108");
#endif

    ctx->pc = 0x13a108u;

    // 0x13a108: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13a10c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13a10cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a110: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x13a110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13a114: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x13a114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13a118: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13a11c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A11Cu;
    {
        const bool branch_taken_0x13a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A11Cu;
        // 0x13a120: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a11c) {
            ctx->pc = 0x13A12Cu;
            return;
        }
    }
    ctx->pc = 0x13A124u;
    // 0x13a124: 0xc061920  jal         func_186480
    ctx->pc = 0x13A124u;
    SET_GPR_U32(ctx, 31, 0x13A12Cu);
    ctx->pc = 0x13A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A124u;
    // 0x13a128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13A124u, 0x13A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A12Cu;
}

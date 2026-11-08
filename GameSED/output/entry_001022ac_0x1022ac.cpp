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

// Function: entry_001022ac
// Address: 0x1022ac - 0x1022dc
void entry_001022ac_0x1022ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001022ac_0x1022ac");
#endif

    ctx->pc = 0x1022acu;

    // 0x1022ac: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1022ACu;
    {
        const bool branch_taken_0x1022ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1022B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022ACu;
        // 0x1022b0: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022ac) {
            ctx->pc = 0x102378u;
            return;
        }
    }
    ctx->pc = 0x1022B4u;
    // 0x1022b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1022b8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1022b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1022BCu;
    {
        const bool branch_taken_0x1022bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1022C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022BCu;
        // 0x1022c0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022bc) {
            ctx->pc = 0x1022DCu;
            return;
        }
    }
    ctx->pc = 0x1022C4u;
    // 0x1022c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1022c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1022c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1022c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022cc: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x1022ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x1022d0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1022d4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1022D4u;
    SET_GPR_U32(ctx, 31, 0x1022DCu);
    ctx->pc = 0x1022D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022D4u;
    // 0x1022d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1022D4u, 0x1022DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022DCu;
}

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

// Function: entry_00104218
// Address: 0x104218 - 0x104248
void entry_00104218_0x104218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104218_0x104218");
#endif

    ctx->pc = 0x104218u;

    // 0x104218: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x104218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10421c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x10421cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x104220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104224: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x104224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104228: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x104228u;
    {
        const bool branch_taken_0x104228 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x104228) {
            ctx->pc = 0x10422Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104228u;
            // 0x10422c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10424Cu;
            return;
        }
    }
    ctx->pc = 0x104230u;
    // 0x104230: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104238: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x104238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10423c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10423cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104240: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104240u;
    SET_GPR_U32(ctx, 31, 0x104248u);
    ctx->pc = 0x104244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104240u;
    // 0x104244: 0x24a51af8  addiu       $a1, $a1, 0x1AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104240u, 0x104248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104248u;
}

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

// Function: entry_00102520
// Address: 0x102520 - 0x102550
void entry_00102520_0x102520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102520_0x102520");
#endif

    ctx->pc = 0x102520u;

    // 0x102520: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x102520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x102524: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x102524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x102528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10252c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10252cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102530: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x102530u;
    {
        const bool branch_taken_0x102530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x102530) {
            ctx->pc = 0x102534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102530u;
            // 0x102534: 0xaf919110  sw          $s1, -0x6EF0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102554u;
            return;
        }
    }
    ctx->pc = 0x102538u;
    // 0x102538: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10253c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102540: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x102540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x102544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102548: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102548u;
    SET_GPR_U32(ctx, 31, 0x102550u);
    ctx->pc = 0x10254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102548u;
    // 0x10254c: 0x24a51af8  addiu       $a1, $a1, 0x1AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102548u, 0x102550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102550u;
}

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

// Function: entry_00104090
// Address: 0x104090 - 0x1040c4
void entry_00104090_0x104090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104090_0x104090");
#endif

    ctx->pc = 0x104090u;

    // 0x104090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104094: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x104094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x104098: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x104098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x10409c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1040a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1040a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1040a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1040a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1040A8u;
    {
        const bool branch_taken_0x1040a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040A8u;
        // 0x1040ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040a8) {
            ctx->pc = 0x1040C4u;
            return;
        }
    }
    ctx->pc = 0x1040B0u;
    // 0x1040b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1040b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1040b4: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x1040b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1040b8: 0x24a51ab0  addiu       $a1, $a1, 0x1AB0
    ctx->pc = 0x1040b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6832));
    // 0x1040bc: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1040BCu;
    SET_GPR_U32(ctx, 31, 0x1040C4u);
    ctx->pc = 0x1040C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040BCu;
    // 0x1040c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1040BCu, 0x1040C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040C4u;
}

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

// Function: caseD_3
// Address: 0x1639a0 - 0x1639d8
void caseD_3_0x1639a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1639a0");
#endif

    ctx->pc = 0x1639a0u;

    // 0x1639a0: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x1639a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x1639a4: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x1639a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1639a8: 0x5200007a  beql        $s0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x1639A8u;
    {
        const bool branch_taken_0x1639a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1639a8) {
            ctx->pc = 0x1639ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1639A8u;
            // 0x1639ac: 0xae400250  sw          $zero, 0x250($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B94u;
            return;
        }
    }
    ctx->pc = 0x1639B0u;
    // 0x1639b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1639b4: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x1639b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1639b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1639bc: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x1639bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1639c0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1639c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1639c4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1639c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1639c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1639C8u;
    {
        const bool branch_taken_0x1639c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C8u;
        // 0x1639cc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639c8) {
            ctx->pc = 0x1639D8u;
            return;
        }
    }
    ctx->pc = 0x1639D0u;
    // 0x1639d0: 0xc061920  jal         func_186480
    ctx->pc = 0x1639D0u;
    SET_GPR_U32(ctx, 31, 0x1639D8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1639D0u, 0x1639D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639D8u;
}

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

// Function: caseD_4
// Address: 0x16e698 - 0x16e6c4
void caseD_4_0x16e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x16e698");
#endif

    ctx->pc = 0x16e698u;

    // 0x16e698: 0x8e3401e4  lw          $s4, 0x1E4($s1)
    ctx->pc = 0x16e698u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16e69c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16e69cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16e6a0: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x16e6a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e6a8: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x16e6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16e6ac: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16e6acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16e6b0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16e6b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E6B4u;
    {
        const bool branch_taken_0x16e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6B4u;
        // 0x16e6b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6b4) {
            ctx->pc = 0x16E6C4u;
            return;
        }
    }
    ctx->pc = 0x16E6BCu;
    // 0x16e6bc: 0xc061920  jal         func_186480
    ctx->pc = 0x16E6BCu;
    SET_GPR_U32(ctx, 31, 0x16E6C4u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16E6BCu, 0x16E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6C4u;
}

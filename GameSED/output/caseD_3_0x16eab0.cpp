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
// Address: 0x16eab0 - 0x16eae8
void caseD_3_0x16eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x16eab0");
#endif

    ctx->pc = 0x16eab0u;

    // 0x16eab0: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x16eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x16eab4: 0x8c500074  lw          $s0, 0x74($v0)
    ctx->pc = 0x16eab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x16eab8: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x16EAB8u;
    {
        const bool branch_taken_0x16eab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eab8) {
            ctx->pc = 0x16EABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EAB8u;
            // 0x16eabc: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EB64u;
            return;
        }
    }
    ctx->pc = 0x16EAC0u;
    // 0x16eac0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16eac4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16eac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16eac8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eacc: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x16eaccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16ead0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16ead0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16ead4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16ead4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16ead8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EAD8u;
    {
        const bool branch_taken_0x16ead8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAD8u;
        // 0x16eadc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ead8) {
            ctx->pc = 0x16EAE8u;
            return;
        }
    }
    ctx->pc = 0x16EAE0u;
    // 0x16eae0: 0xc061920  jal         func_186480
    ctx->pc = 0x16EAE0u;
    SET_GPR_U32(ctx, 31, 0x16EAE8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16EAE0u, 0x16EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EAE8u;
}

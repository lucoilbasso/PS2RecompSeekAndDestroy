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

// Function: caseD_f
// Address: 0x111f88 - 0x111fac
void caseD_f_0x111f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x111f88");
#endif

    ctx->pc = 0x111f88u;

    // 0x111f88: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x111f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x111f8c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x111f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111f90: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x111f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x111f94: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x111f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x111f98: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x111f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x111f9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111F9Cu;
    {
        const bool branch_taken_0x111f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F9Cu;
        // 0x111fa0: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f9c) {
            ctx->pc = 0x111FACu;
            return;
        }
    }
    ctx->pc = 0x111FA4u;
    // 0x111fa4: 0xc061920  jal         func_186480
    ctx->pc = 0x111FA4u;
    SET_GPR_U32(ctx, 31, 0x111FACu);
    ctx->pc = 0x111FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FA4u;
    // 0x111fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x111FA4u, 0x111FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FACu;
}

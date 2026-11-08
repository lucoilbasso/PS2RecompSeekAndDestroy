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

// Function: caseD_9
// Address: 0x134c98 - 0x134cc0
void caseD_9_0x134c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x134c98");
#endif

    switch (ctx->pc) {
        case 0x134cbcu: goto label_134cbc;
        default: break;
    }

    ctx->pc = 0x134c98u;

    // 0x134c98: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x134c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134c9c: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x134c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x134ca0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134ca4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x134ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134cac: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134CACu;
    {
        const bool branch_taken_0x134cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x134CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CACu;
        // 0x134cb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134cac) {
            ctx->pc = 0x134CC0u;
            return;
        }
    }
    ctx->pc = 0x134CB4u;
    // 0x134cb4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134CB4u;
    SET_GPR_U32(ctx, 31, 0x134CBCu);
    ctx->pc = 0x134CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CB4u;
    // 0x134cb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134CB4u, 0x134CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134CBCu;
label_134cbc:
    // 0x134cbc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x134cbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x134cc0u;
}

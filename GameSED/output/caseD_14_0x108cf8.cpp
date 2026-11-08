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

// Function: caseD_14
// Address: 0x108cf8 - 0x108d30
void caseD_14_0x108cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x108cf8");
#endif

    switch (ctx->pc) {
        case 0x108d08u: goto label_108d08;
        default: break;
    }

    ctx->pc = 0x108cf8u;

    // 0x108cf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d00: 0xc042144  jal         func_108510
    ctx->pc = 0x108D00u;
    SET_GPR_U32(ctx, 31, 0x108D08u);
    ctx->pc = 0x108D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D00u;
    // 0x108d04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108D00u, 0x108D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D08u;
label_108d08:
    // 0x108d08: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x108d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x108d0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x108d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x108d10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x108d10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x108d14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108d1c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108D1Cu;
    {
        const bool branch_taken_0x108d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x108D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D1Cu;
        // 0x108d20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d1c) {
            ctx->pc = 0x108D30u;
            return;
        }
    }
    ctx->pc = 0x108D24u;
    // 0x108d24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d28: 0xc042144  jal         func_108510
    ctx->pc = 0x108D28u;
    SET_GPR_U32(ctx, 31, 0x108D30u);
    ctx->pc = 0x108D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D28u;
    // 0x108d2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108510u, 0x108D28u, 0x108D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D30u;
}

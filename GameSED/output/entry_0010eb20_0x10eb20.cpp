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

// Function: entry_0010eb20
// Address: 0x10eb20 - 0x10eb6c
void entry_0010eb20_0x10eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eb20_0x10eb20");
#endif

    switch (ctx->pc) {
        case 0x10eb28u: goto label_10eb28;
        case 0x10eb4cu: goto label_10eb4c;
        default: break;
    }

    ctx->pc = 0x10eb20u;

    // 0x10eb20: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10EB20u;
    SET_GPR_U32(ctx, 31, 0x10EB28u);
    ctx->pc = 0x10EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB20u;
    // 0x10eb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10EB20u, 0x10EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB28u;
label_10eb28:
    // 0x10eb28: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10eb2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10eb2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10eb30: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10eb34: 0xe65401a0  swc1        $f20, 0x1A0($s2)
    ctx->pc = 0x10eb34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x10eb38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10eb3c: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x10EB3Cu;
    {
        const bool branch_taken_0x10eb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x10EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB3Cu;
        // 0x10eb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb3c) {
            ctx->pc = 0x10EB74u;
            return;
        }
    }
    ctx->pc = 0x10EB44u;
    // 0x10eb44: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10EB44u;
    SET_GPR_U32(ctx, 31, 0x10EB4Cu);
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10EB44u, 0x10EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB4Cu;
label_10eb4c:
    // 0x10eb4c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x10eb4cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x10eb50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10eb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eb54: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10eb54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10eb58: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x10EB58u;
    {
        const bool branch_taken_0x10eb58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10eb58) {
            ctx->pc = 0x10EB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EB58u;
            // 0x10eb5c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EB6Cu;
            return;
        }
    }
    ctx->pc = 0x10EB60u;
    // 0x10eb60: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x10eb60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x10eb64: 0xe7808d88  swc1        $f0, -0x7278($gp)
    ctx->pc = 0x10eb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937992), bits); }
    // 0x10eb68: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x10eb6cu;
}

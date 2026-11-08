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

// Function: entry_001401d8
// Address: 0x1401d8 - 0x140218
void entry_001401d8_0x1401d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001401d8_0x1401d8");
#endif

    switch (ctx->pc) {
        case 0x1401e0u: goto label_1401e0;
        case 0x1401f0u: goto label_1401f0;
        default: break;
    }

    ctx->pc = 0x1401d8u;

    // 0x1401d8: 0xc05018c  jal         func_140630
    ctx->pc = 0x1401D8u;
    SET_GPR_U32(ctx, 31, 0x1401E0u);
    ctx->pc = 0x1401DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401D8u;
    // 0x1401dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140630u, 0x1401D8u, 0x1401E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401E0u;
label_1401e0:
    // 0x1401e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1401e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1401e4: 0xae4201a0  sw          $v0, 0x1A0($s2)
    ctx->pc = 0x1401e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 2));
    // 0x1401e8: 0xc050868  jal         func_1421A0
    ctx->pc = 0x1401E8u;
    SET_GPR_U32(ctx, 31, 0x1401F0u);
    ctx->pc = 0x1401ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1401E8u;
    // 0x1401ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421A0u, 0x1401E8u, 0x1401F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1401F0u;
label_1401f0:
    // 0x1401f0: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1401F0u;
    {
        const bool branch_taken_0x1401f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1401F0u;
        // 0x1401f4: 0x264302c8  addiu       $v1, $s2, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401f0) {
            ctx->pc = 0x140240u;
            return;
        }
    }
    ctx->pc = 0x1401F8u;
    // 0x1401f8: 0x8e4201a0  lw          $v0, 0x1A0($s2)
    ctx->pc = 0x1401f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x1401fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1401fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140208: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x140208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14020c: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x14020cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x140210: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x140210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x140214: 0x0  nop
    ctx->pc = 0x140214u;
    // NOP
    ctx->pc = 0x140218u;
}

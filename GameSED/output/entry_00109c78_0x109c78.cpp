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

// Function: entry_00109c78
// Address: 0x109c78 - 0x109cb0
void entry_00109c78_0x109c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109c78_0x109c78");
#endif

    switch (ctx->pc) {
        case 0x109c88u: goto label_109c88;
        case 0x109c94u: goto label_109c94;
        case 0x109ca8u: goto label_109ca8;
        default: break;
    }

    ctx->pc = 0x109c78u;

    // 0x109c78: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x109C78u;
    {
        const bool branch_taken_0x109c78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x109c78) {
            ctx->pc = 0x109CB0u;
            return;
        }
    }
    ctx->pc = 0x109C80u;
    // 0x109c80: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x109C80u;
    SET_GPR_U32(ctx, 31, 0x109C88u);
    ctx->pc = 0x109C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C80u;
    // 0x109c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x109C80u, 0x109C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C88u;
label_109c88:
    // 0x109c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c8c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x109C8Cu;
    SET_GPR_U32(ctx, 31, 0x109C94u);
    ctx->pc = 0x109C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C8Cu;
    // 0x109c90: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x109C8Cu, 0x109C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C94u;
label_109c94:
    // 0x109c94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x109c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ca0: 0xc064104  jal         func_190410
    ctx->pc = 0x109CA0u;
    SET_GPR_U32(ctx, 31, 0x109CA8u);
    ctx->pc = 0x109CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CA0u;
    // 0x109ca4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190410u, 0x109CA0u, 0x109CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CA8u;
label_109ca8:
    // 0x109ca8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x109CA8u;
    {
        const bool branch_taken_0x109ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CA8u;
        // 0x109cac: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ca8) {
            ctx->pc = 0x109CDCu;
            return;
        }
    }
    ctx->pc = 0x109CB0u;
}

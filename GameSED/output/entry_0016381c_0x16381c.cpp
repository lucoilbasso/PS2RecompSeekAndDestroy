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

// Function: entry_0016381c
// Address: 0x16381c - 0x163878
void entry_0016381c_0x16381c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016381c_0x16381c");
#endif

    switch (ctx->pc) {
        case 0x163844u: goto label_163844;
        case 0x163850u: goto label_163850;
        case 0x16386cu: goto label_16386c;
        default: break;
    }

    ctx->pc = 0x16381cu;

    // 0x16381c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x16381Cu;
    {
        const bool branch_taken_0x16381c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16381Cu;
        // 0x163820: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16381c) {
            ctx->pc = 0x1638D0u;
            return;
        }
    }
    ctx->pc = 0x163824u;
    // 0x163824: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x163824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x163828: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x163828u;
    {
        const bool branch_taken_0x163828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163828u;
        // 0x16382c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163828) {
            ctx->pc = 0x1638D0u;
            return;
        }
    }
    ctx->pc = 0x163830u;
    // 0x163830: 0x265001f8  addiu       $s0, $s2, 0x1F8
    ctx->pc = 0x163830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x163834: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x163834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16383c: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x16383Cu;
    SET_GPR_U32(ctx, 31, 0x163844u);
    ctx->pc = 0x163840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16383Cu;
    // 0x163840: 0xe48100d8  swc1        $f1, 0xD8($a0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x16383Cu, 0x163844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163844u;
label_163844:
    // 0x163844: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163848: 0xc06164c  jal         func_185930
    ctx->pc = 0x163848u;
    SET_GPR_U32(ctx, 31, 0x163850u);
    ctx->pc = 0x16384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163848u;
    // 0x16384c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x163848u, 0x163850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163850u;
label_163850:
    // 0x163850: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163854: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x163854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163858: 0x3c013e40  lui         $at, 0x3E40
    ctx->pc = 0x163858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15936 << 16));
    // 0x16385c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x16385cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x163860: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x163860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x163864: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x163864u;
    SET_GPR_U32(ctx, 31, 0x16386Cu);
    ctx->pc = 0x163868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163864u;
    // 0x163868: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x163864u, 0x16386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16386Cu;
label_16386c:
    // 0x16386c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16386Cu;
    {
        const bool branch_taken_0x16386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16386Cu;
        // 0x163870: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16386c) {
            ctx->pc = 0x1638D0u;
            return;
        }
    }
    ctx->pc = 0x163874u;
    // 0x163874: 0x0  nop
    ctx->pc = 0x163874u;
    // NOP
    ctx->pc = 0x163878u;
}

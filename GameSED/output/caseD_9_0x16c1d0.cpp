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
// Address: 0x16c1d0 - 0x16c208
void caseD_9_0x16c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x16c1d0");
#endif

    switch (ctx->pc) {
        case 0x16c1e8u: goto label_16c1e8;
        case 0x16c1f4u: goto label_16c1f4;
        case 0x16c200u: goto label_16c200;
        default: break;
    }

    ctx->pc = 0x16c1d0u;

    // 0x16c1d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c1d4: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16C1D4u;
    {
        const bool branch_taken_0x16c1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c1d4) {
            ctx->pc = 0x16C1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C1D4u;
            // 0x16c1d8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C208u;
            return;
        }
    }
    ctx->pc = 0x16C1DCu;
    // 0x16c1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1e0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C1E0u;
    SET_GPR_U32(ctx, 31, 0x16C1E8u);
    ctx->pc = 0x16C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1E0u;
    // 0x16c1e4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C1E0u, 0x16C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1E8u;
label_16c1e8:
    // 0x16c1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1ec: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C1ECu;
    SET_GPR_U32(ctx, 31, 0x16C1F4u);
    ctx->pc = 0x16C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1ECu;
    // 0x16c1f0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C1ECu, 0x16C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1F4u;
label_16c1f4:
    // 0x16c1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c1f8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C1F8u;
    SET_GPR_U32(ctx, 31, 0x16C200u);
    ctx->pc = 0x16C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1F8u;
    // 0x16c1fc: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C1F8u, 0x16C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C200u;
label_16c200:
    // 0x16c200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16C200u;
    {
        const bool branch_taken_0x16c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C200u;
        // 0x16c204: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c200) {
            ctx->pc = 0x16C20Cu;
            return;
        }
    }
    ctx->pc = 0x16C208u;
}

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
// Address: 0x16c370 - 0x16c3a8
void caseD_f_0x16c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x16c370");
#endif

    switch (ctx->pc) {
        case 0x16c388u: goto label_16c388;
        case 0x16c394u: goto label_16c394;
        case 0x16c3a0u: goto label_16c3a0;
        default: break;
    }

    ctx->pc = 0x16c370u;

    // 0x16c370: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c374: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16C374u;
    {
        const bool branch_taken_0x16c374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c374) {
            ctx->pc = 0x16C378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C374u;
            // 0x16c378: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C3A8u;
            return;
        }
    }
    ctx->pc = 0x16C37Cu;
    // 0x16c37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c380: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C380u;
    SET_GPR_U32(ctx, 31, 0x16C388u);
    ctx->pc = 0x16C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C380u;
    // 0x16c384: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C380u, 0x16C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C388u;
label_16c388:
    // 0x16c388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c38c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C38Cu;
    SET_GPR_U32(ctx, 31, 0x16C394u);
    ctx->pc = 0x16C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C38Cu;
    // 0x16c390: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C38Cu, 0x16C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C394u;
label_16c394:
    // 0x16c394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c398: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C398u;
    SET_GPR_U32(ctx, 31, 0x16C3A0u);
    ctx->pc = 0x16C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C398u;
    // 0x16c39c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C398u, 0x16C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3A0u;
label_16c3a0:
    // 0x16c3a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16C3A0u;
    {
        const bool branch_taken_0x16c3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3A0u;
        // 0x16c3a4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3a0) {
            ctx->pc = 0x16C3ACu;
            return;
        }
    }
    ctx->pc = 0x16C3A8u;
}

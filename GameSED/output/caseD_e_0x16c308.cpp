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

// Function: caseD_e
// Address: 0x16c308 - 0x16c340
void caseD_e_0x16c308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x16c308");
#endif

    switch (ctx->pc) {
        case 0x16c320u: goto label_16c320;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c338u: goto label_16c338;
        default: break;
    }

    ctx->pc = 0x16c308u;

    // 0x16c308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c30c: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16C30Cu;
    {
        const bool branch_taken_0x16c30c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c30c) {
            ctx->pc = 0x16C310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C30Cu;
            // 0x16c310: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C340u;
            return;
        }
    }
    ctx->pc = 0x16C314u;
    // 0x16c314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c318: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C318u;
    SET_GPR_U32(ctx, 31, 0x16C320u);
    ctx->pc = 0x16C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C318u;
    // 0x16c31c: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C318u, 0x16C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C320u;
label_16c320:
    // 0x16c320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c324: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C324u;
    SET_GPR_U32(ctx, 31, 0x16C32Cu);
    ctx->pc = 0x16C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C324u;
    // 0x16c328: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C324u, 0x16C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C32Cu;
label_16c32c:
    // 0x16c32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c330: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C330u;
    SET_GPR_U32(ctx, 31, 0x16C338u);
    ctx->pc = 0x16C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C330u;
    // 0x16c334: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C330u, 0x16C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C338u;
label_16c338:
    // 0x16c338: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16C338u;
    {
        const bool branch_taken_0x16c338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C338u;
        // 0x16c33c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c338) {
            ctx->pc = 0x16C344u;
            return;
        }
    }
    ctx->pc = 0x16C340u;
}

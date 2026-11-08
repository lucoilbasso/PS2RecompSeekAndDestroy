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

// Function: caseD_8
// Address: 0x163eb8 - 0x163ef0
void caseD_8_0x163eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x163eb8");
#endif

    switch (ctx->pc) {
        case 0x163ed0u: goto label_163ed0;
        case 0x163edcu: goto label_163edc;
        case 0x163ee8u: goto label_163ee8;
        default: break;
    }

    ctx->pc = 0x163eb8u;

    // 0x163eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163ebc: 0x54c2000c  bnel        $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x163EBCu;
    {
        const bool branch_taken_0x163ebc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x163ebc) {
            ctx->pc = 0x163EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163EBCu;
            // 0x163ec0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163EF0u;
            return;
        }
    }
    ctx->pc = 0x163EC4u;
    // 0x163ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ec8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x163EC8u;
    SET_GPR_U32(ctx, 31, 0x163ED0u);
    ctx->pc = 0x163ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163EC8u;
    // 0x163ecc: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x163EC8u, 0x163ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163ED0u;
label_163ed0:
    // 0x163ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ed4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x163ED4u;
    SET_GPR_U32(ctx, 31, 0x163EDCu);
    ctx->pc = 0x163ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163ED4u;
    // 0x163ed8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x163ED4u, 0x163EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163EDCu;
label_163edc:
    // 0x163edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ee0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x163EE0u;
    SET_GPR_U32(ctx, 31, 0x163EE8u);
    ctx->pc = 0x163EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163EE0u;
    // 0x163ee4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x163EE0u, 0x163EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163EE8u;
label_163ee8:
    // 0x163ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163EE8u;
    {
        const bool branch_taken_0x163ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE8u;
        // 0x163eec: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ee8) {
            ctx->pc = 0x163EF4u;
            return;
        }
    }
    ctx->pc = 0x163EF0u;
}

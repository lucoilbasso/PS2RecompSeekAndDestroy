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

// Function: entry_0010e80c
// Address: 0x10e80c - 0x10e848
void entry_0010e80c_0x10e80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e80c_0x10e80c");
#endif

    switch (ctx->pc) {
        case 0x10e814u: goto label_10e814;
        default: break;
    }

    ctx->pc = 0x10e80cu;

    // 0x10e80c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x10E80Cu;
    SET_GPR_U32(ctx, 31, 0x10E814u);
    ctx->pc = 0x10E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E80Cu;
    // 0x10e810: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10E80Cu, 0x10E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E814u;
label_10e814:
    // 0x10e814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e818: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10E818u;
    {
        const bool branch_taken_0x10e818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e818) {
            ctx->pc = 0x10E81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E818u;
            // 0x10e81c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E848u;
            return;
        }
    }
    ctx->pc = 0x10E820u;
    // 0x10e820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e828: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10e828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10e82c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x10e82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10e830: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10e830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10e834: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10e838: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x10e838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10e83c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x10e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x10e840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E840u;
    {
        const bool branch_taken_0x10e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E840u;
        // 0x10e844: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e840) {
            ctx->pc = 0x10E858u;
            return;
        }
    }
    ctx->pc = 0x10E848u;
}

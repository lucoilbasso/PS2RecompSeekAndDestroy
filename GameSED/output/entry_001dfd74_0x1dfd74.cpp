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

// Function: entry_001dfd74
// Address: 0x1dfd74 - 0x1dfdc0
void entry_001dfd74_0x1dfd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfd74_0x1dfd74");
#endif

    switch (ctx->pc) {
        case 0x1dfd7cu: goto label_1dfd7c;
        default: break;
    }

    ctx->pc = 0x1dfd74u;

    // 0x1dfd74: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DFD74u;
    SET_GPR_U32(ctx, 31, 0x1DFD7Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DFD74u, 0x1DFD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFD7Cu;
label_1dfd7c:
    // 0x1dfd7c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1dfd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1dfd80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd88: 0x24a582c0  addiu       $a1, $a1, -0x7D40
    ctx->pc = 0x1dfd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935232));
    // 0x1dfd8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfd90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfd94: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DFD94u;
    {
        const bool branch_taken_0x1dfd94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD94u;
        // 0x1dfd98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd94) {
            ctx->pc = 0x1DFDC0u;
            return;
        }
    }
    ctx->pc = 0x1DFD9Cu;
    // 0x1dfd9c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1dfd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1dfda0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dfda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1dfda4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dfda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dfda8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1dfda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1dfdac: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1dfdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1dfdb0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1dfdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1dfdb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFDB4u;
    {
        const bool branch_taken_0x1dfdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDB4u;
        // 0x1dfdb8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfdb4) {
            ctx->pc = 0x1DFDC8u;
            return;
        }
    }
    ctx->pc = 0x1DFDBCu;
    // 0x1dfdbc: 0x0  nop
    ctx->pc = 0x1dfdbcu;
    // NOP
    ctx->pc = 0x1dfdc0u;
}

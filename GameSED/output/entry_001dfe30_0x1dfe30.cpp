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

// Function: entry_001dfe30
// Address: 0x1dfe30 - 0x1dfe70
void entry_001dfe30_0x1dfe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe30_0x1dfe30");
#endif

    switch (ctx->pc) {
        case 0x1dfe38u: goto label_1dfe38;
        default: break;
    }

    ctx->pc = 0x1dfe30u;

    // 0x1dfe30: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DFE30u;
    SET_GPR_U32(ctx, 31, 0x1DFE38u);
    ctx->pc = 0x1DFE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE30u;
    // 0x1dfe34: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DFE30u, 0x1DFE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE38u;
label_1dfe38:
    // 0x1dfe38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfe38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe3c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DFE3Cu;
    {
        const bool branch_taken_0x1dfe3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe3c) {
            ctx->pc = 0x1DFE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFE3Cu;
            // 0x1dfe40: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFE70u;
            return;
        }
    }
    ctx->pc = 0x1DFE44u;
    // 0x1dfe44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfe44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfe48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfe48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfe4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dfe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1dfe50: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1dfe50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1dfe54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dfe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dfe58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1dfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1dfe5c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1dfe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1dfe60: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1dfe60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1dfe64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFE64u;
    {
        const bool branch_taken_0x1dfe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE64u;
        // 0x1dfe68: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe64) {
            ctx->pc = 0x1DFE80u;
            return;
        }
    }
    ctx->pc = 0x1DFE6Cu;
    // 0x1dfe6c: 0x0  nop
    ctx->pc = 0x1dfe6cu;
    // NOP
    ctx->pc = 0x1dfe70u;
}

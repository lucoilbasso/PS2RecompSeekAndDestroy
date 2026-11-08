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

// Function: entry_0017641c
// Address: 0x17641c - 0x176460
void entry_0017641c_0x17641c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017641c_0x17641c");
#endif

    switch (ctx->pc) {
        case 0x176428u: goto label_176428;
        case 0x176440u: goto label_176440;
        default: break;
    }

    ctx->pc = 0x17641cu;

    // 0x17641c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176420: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x176420u;
    SET_GPR_U32(ctx, 31, 0x176428u);
    ctx->pc = 0x176424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176420u;
    // 0x176424: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x176420u, 0x176428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176428u;
label_176428:
    // 0x176428: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x176428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17642c: 0x3c011100  lui         $at, 0x1100
    ctx->pc = 0x17642cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4352 << 16));
    // 0x176430: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x176430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x176434: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x176434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x176438: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x176438u;
    SET_GPR_U32(ctx, 31, 0x176440u);
    ctx->pc = 0x17643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176438u;
    // 0x17643c: 0x24847858  addiu       $a0, $a0, 0x7858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x176438u, 0x176440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176440u;
label_176440:
    // 0x176440: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x176440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x176444: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x176444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x176448: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x176448u;
    {
        const bool branch_taken_0x176448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176448) {
            ctx->pc = 0x17644Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176448u;
            // 0x17644c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176490u;
            return;
        }
    }
    ctx->pc = 0x176450u;
    // 0x176450: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x176450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176454: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x176454u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x176458: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17645c: 0x0  nop
    ctx->pc = 0x17645cu;
    // NOP
    ctx->pc = 0x176460u;
}

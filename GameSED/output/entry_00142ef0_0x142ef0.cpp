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

// Function: entry_00142ef0
// Address: 0x142ef0 - 0x142f3c
void entry_00142ef0_0x142ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142ef0_0x142ef0");
#endif

    switch (ctx->pc) {
        case 0x142ef8u: goto label_142ef8;
        case 0x142f0cu: goto label_142f0c;
        default: break;
    }

    ctx->pc = 0x142ef0u;

    // 0x142ef0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x142EF0u;
    SET_GPR_U32(ctx, 31, 0x142EF8u);
    ctx->pc = 0x142EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EF0u;
    // 0x142ef4: 0x24054080  addiu       $a1, $zero, 0x4080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x142EF0u, 0x142EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EF8u;
label_142ef8:
    // 0x142ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142efc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x142EFCu;
    {
        const bool branch_taken_0x142efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EFCu;
        // 0x142f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142efc) {
            ctx->pc = 0x142F3Cu;
            return;
        }
    }
    ctx->pc = 0x142F04u;
    // 0x142f04: 0xc06726c  jal         func_19C9B0
    ctx->pc = 0x142F04u;
    SET_GPR_U32(ctx, 31, 0x142F0Cu);
    ctx->pc = 0x142F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F04u;
    // 0x142f08: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9B0u, 0x142F04u, 0x142F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F0Cu;
label_142f0c:
    // 0x142f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142f10: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x142f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x142f14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x142f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142f18: 0xe6004014  swc1        $f0, 0x4014($s0)
    ctx->pc = 0x142f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16404), bits); }
    // 0x142f1c: 0xe6014010  swc1        $f1, 0x4010($s0)
    ctx->pc = 0x142f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16400), bits); }
    // 0x142f20: 0xe6004000  swc1        $f0, 0x4000($s0)
    ctx->pc = 0x142f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16384), bits); }
    // 0x142f24: 0xe6004004  swc1        $f0, 0x4004($s0)
    ctx->pc = 0x142f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16388), bits); }
    // 0x142f28: 0xe6004008  swc1        $f0, 0x4008($s0)
    ctx->pc = 0x142f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16392), bits); }
    // 0x142f2c: 0xe600400c  swc1        $f0, 0x400C($s0)
    ctx->pc = 0x142f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16396), bits); }
    // 0x142f30: 0xa2004019  sb          $zero, 0x4019($s0)
    ctx->pc = 0x142f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16409), (uint8_t)GPR_U32(ctx, 0));
    // 0x142f34: 0xa200401a  sb          $zero, 0x401A($s0)
    ctx->pc = 0x142f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16410), (uint8_t)GPR_U32(ctx, 0));
    // 0x142f38: 0xa200401b  sb          $zero, 0x401B($s0)
    ctx->pc = 0x142f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16411), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x142f3cu;
}

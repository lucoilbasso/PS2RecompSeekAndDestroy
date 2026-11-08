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

// Function: entry_0012cf00
// Address: 0x12cf00 - 0x12cfa0
void entry_0012cf00_0x12cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cf00_0x12cf00");
#endif

    switch (ctx->pc) {
        case 0x12cf64u: goto label_12cf64;
        default: break;
    }

    ctx->pc = 0x12cf00u;

label_12cf00:
    // 0x12cf00: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12cf04: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x12cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x12cf08: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x12cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x12cf0c: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x12cf0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x12cf10: 0xe4550030  swc1        $f21, 0x30($v0)
    ctx->pc = 0x12cf10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x12cf14: 0xe454002c  swc1        $f20, 0x2C($v0)
    ctx->pc = 0x12cf14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x12cf18: 0xe4550034  swc1        $f21, 0x34($v0)
    ctx->pc = 0x12cf18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x12cf1c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x12cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x12cf20: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x12cf20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf24: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x12cf24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf28: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x12cf28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf2c: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x12cf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf30: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12cf30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12cf34: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x12cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x12cf38: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12cf3c: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x12cf3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x12cf40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf44: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x12cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x12cf48: 0x2673fec0  addiu       $s3, $s3, -0x140
    ctx->pc = 0x12cf48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966976));
    // 0x12cf4c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x12cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x12cf50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12cf54: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x12cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x12cf58: 0xe61400d4  swc1        $f20, 0xD4($s0)
    ctx->pc = 0x12cf58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x12cf5c: 0xc048424  jal         func_121090
    ctx->pc = 0x12CF5Cu;
    SET_GPR_U32(ctx, 31, 0x12CF64u);
    ctx->pc = 0x12CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF5Cu;
    // 0x12cf60: 0xe61500d8  swc1        $f21, 0xD8($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x12CF5Cu, 0x12CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF64u;
label_12cf64:
    // 0x12cf64: 0xae1000b4  sw          $s0, 0xB4($s0)
    ctx->pc = 0x12cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 16));
    // 0x12cf68: 0xae1400c4  sw          $s4, 0xC4($s0)
    ctx->pc = 0x12cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 20));
    // 0x12cf6c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x12cf6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf70: 0xe6140124  swc1        $f20, 0x124($s0)
    ctx->pc = 0x12cf70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x12cf74: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x12cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x12cf78: 0xe6140128  swc1        $f20, 0x128($s0)
    ctx->pc = 0x12cf78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x12cf7c: 0xe614012c  swc1        $f20, 0x12C($s0)
    ctx->pc = 0x12cf7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x12cf80: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x12cf80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x12cf84: 0xe6140134  swc1        $f20, 0x134($s0)
    ctx->pc = 0x12cf84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x12cf88: 0xe6140138  swc1        $f20, 0x138($s0)
    ctx->pc = 0x12cf88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x12cf8c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CF8Cu;
    {
        const bool branch_taken_0x12cf8c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF8Cu;
        // 0x12cf90: 0x538021  addu        $s0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf8c) {
            ctx->pc = 0x12CFA0u;
            return;
        }
    }
    ctx->pc = 0x12CF94u;
    // 0x12cf94: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x12CF94u;
    {
        const bool branch_taken_0x12cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF94u;
        // 0x12cf98: 0xae9000c0  sw          $s0, 0xC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf94) {
            ctx->pc = 0x12CF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cf00;
        }
    }
    ctx->pc = 0x12CF9Cu;
    // 0x12cf9c: 0x0  nop
    ctx->pc = 0x12cf9cu;
    // NOP
    ctx->pc = 0x12cfa0u;
}

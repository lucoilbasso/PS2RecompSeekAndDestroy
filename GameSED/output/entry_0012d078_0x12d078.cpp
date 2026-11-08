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

// Function: entry_0012d078
// Address: 0x12d078 - 0x12d110
void entry_0012d078_0x12d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d078_0x12d078");
#endif

    switch (ctx->pc) {
        case 0x12d0d8u: goto label_12d0d8;
        case 0x12d100u: goto label_12d100;
        default: break;
    }

    ctx->pc = 0x12d078u;

label_12d078:
    // 0x12d078: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12D078u;
    {
        const bool branch_taken_0x12d078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D078u;
        // 0x12d07c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d078) {
            ctx->pc = 0x12D148u;
            return;
        }
    }
    ctx->pc = 0x12D080u;
    // 0x12d080: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12d084: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x12d084u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x12d088: 0xe4550030  swc1        $f21, 0x30($v0)
    ctx->pc = 0x12d088u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x12d08c: 0xe454002c  swc1        $f20, 0x2C($v0)
    ctx->pc = 0x12d08cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x12d090: 0xe4550034  swc1        $f21, 0x34($v0)
    ctx->pc = 0x12d090u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x12d094: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x12d094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x12d098: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x12d098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d09c: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x12d09cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d0a0: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x12d0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d0a4: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x12d0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d0a8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d0ac: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x12d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x12d0b0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12d0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d0b4: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x12d0b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x12d0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0bc: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x12d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x12d0c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12d0c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12d0c4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x12d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x12d0c8: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x12d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x12d0cc: 0xe61400d4  swc1        $f20, 0xD4($s0)
    ctx->pc = 0x12d0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x12d0d0: 0xc048424  jal         func_121090
    ctx->pc = 0x12D0D0u;
    SET_GPR_U32(ctx, 31, 0x12D0D8u);
    ctx->pc = 0x12D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D0D0u;
    // 0x12d0d4: 0xe61500d8  swc1        $f21, 0xD8($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x12D0D0u, 0x12D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0D8u;
label_12d0d8:
    // 0x12d0d8: 0xae1000b4  sw          $s0, 0xB4($s0)
    ctx->pc = 0x12d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 16));
    // 0x12d0dc: 0xe6140124  swc1        $f20, 0x124($s0)
    ctx->pc = 0x12d0dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x12d0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0e4: 0xe6140128  swc1        $f20, 0x128($s0)
    ctx->pc = 0x12d0e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x12d0e8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12d0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0ec: 0xe614012c  swc1        $f20, 0x12C($s0)
    ctx->pc = 0x12d0ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x12d0f0: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x12d0f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x12d0f4: 0xe6140134  swc1        $f20, 0x134($s0)
    ctx->pc = 0x12d0f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x12d0f8: 0xc048446  jal         func_121118
    ctx->pc = 0x12D0F8u;
    SET_GPR_U32(ctx, 31, 0x12D100u);
    ctx->pc = 0x12D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D0F8u;
    // 0x12d0fc: 0xe6140138  swc1        $f20, 0x138($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x121118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121118u, 0x12D0F8u, 0x12D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D100u;
label_12d100:
    // 0x12d100: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d104: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x12d104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12d108: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x12D108u;
    {
        const bool branch_taken_0x12d108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D108u;
        // 0x12d10c: 0x8e1000c4  lw          $s0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d108) {
            ctx->pc = 0x12D078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d078;
        }
    }
    ctx->pc = 0x12D110u;
}

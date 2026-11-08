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

// Function: entry_0016d100
// Address: 0x16d100 - 0x16d1c8
void entry_0016d100_0x16d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d100_0x16d100");
#endif

    switch (ctx->pc) {
        case 0x16d114u: goto label_16d114;
        case 0x16d11cu: goto label_16d11c;
        case 0x16d134u: goto label_16d134;
        case 0x16d194u: goto label_16d194;
        case 0x16d1acu: goto label_16d1ac;
        case 0x16d1b4u: goto label_16d1b4;
        default: break;
    }

    ctx->pc = 0x16d100u;

label_16d100:
    // 0x16d100: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16d104:
    // 0x16d104: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x16d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16d108:
    // 0x16d108: 0x24120306  addiu       $s2, $zero, 0x306
    ctx->pc = 0x16d108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16d10c:
    // 0x16d10c: 0xc0682b2  jal         func_1A0AC8
label_16d110:
    if (ctx->pc == 0x16D110u) {
        ctx->pc = 0x16D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D10Cu;
        // 0x16d110: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D114u;
        goto label_16d114;
    }
    ctx->pc = 0x16D10Cu;
    SET_GPR_U32(ctx, 31, 0x16D114u);
    ctx->pc = 0x16D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D10Cu;
    // 0x16d110: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16D10Cu, 0x16D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D114u;
label_16d114:
    // 0x16d114: 0xc0682b6  jal         func_1A0AD8
label_16d118:
    if (ctx->pc == 0x16D118u) {
        ctx->pc = 0x16D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D114u;
        // 0x16d118: 0x240402f0  addiu       $a0, $zero, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D11Cu;
        goto label_16d11c;
    }
    ctx->pc = 0x16D114u;
    SET_GPR_U32(ctx, 31, 0x16D11Cu);
    ctx->pc = 0x16D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D114u;
    // 0x16d118: 0x240402f0  addiu       $a0, $zero, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16D114u, 0x16D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D11Cu;
label_16d11c:
    // 0x16d11c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16d11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d120:
    // 0x16d120: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16d120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16d124:
    // 0x16d124: 0x2442f690  addiu       $v0, $v0, -0x970
    ctx->pc = 0x16d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964880));
label_16d128:
    // 0x16d128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d12c:
    // 0x16d12c: 0xc061258  jal         func_184960
label_16d130:
    if (ctx->pc == 0x16D130u) {
        ctx->pc = 0x16D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D12Cu;
        // 0x16d130: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D134u;
        goto label_16d134;
    }
    ctx->pc = 0x16D12Cu;
    SET_GPR_U32(ctx, 31, 0x16D134u);
    ctx->pc = 0x16D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D12Cu;
    // 0x16d130: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x16D12Cu, 0x16D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D134u;
label_16d134:
    // 0x16d134: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x16d134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_16d138:
    // 0x16d138: 0xc7808490  lwc1        $f0, -0x7B70($gp)
    ctx->pc = 0x16d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d13c:
    // 0x16d13c: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x16d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_16d140:
    // 0x16d140: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x16d140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_16d144:
    // 0x16d144: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x16d144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_16d148:
    // 0x16d148: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x16d148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_16d14c:
    // 0x16d14c: 0xae130154  sw          $s3, 0x154($s0)
    ctx->pc = 0x16d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 19));
label_16d150:
    // 0x16d150: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x16d150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_16d154:
    // 0x16d154: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x16d154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_16d158:
    // 0x16d158: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x16d158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_16d15c:
    // 0x16d15c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d160:
    // 0x16d160: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x16d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_16d164:
    // 0x16d164: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16d164u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d168:
    // 0x16d168: 0x26030290  addiu       $v1, $s0, 0x290
    ctx->pc = 0x16d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_16d16c:
    // 0x16d16c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d170:
    // 0x16d170: 0x260202a0  addiu       $v0, $s0, 0x2A0
    ctx->pc = 0x16d170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_16d174:
    // 0x16d174: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16d174u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d178:
    // 0x16d178: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16d17c:
    // 0x16d17c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x16d17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d180:
    // 0x16d180: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x16d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
label_16d184:
    // 0x16d184: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16d184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16d188:
    // 0x16d188: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16d18c:
    // 0x16d18c: 0x40f809  jalr        $v0
label_16d190:
    if (ctx->pc == 0x16D190u) {
        ctx->pc = 0x16D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D18Cu;
        // 0x16d190: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D194u;
        goto label_16d194;
    }
    ctx->pc = 0x16D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D194u);
        ctx->pc = 0x16D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D18Cu;
        // 0x16d190: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D18Cu, 0x16D194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D194u;
label_16d194:
    // 0x16d194: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x16d194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_16d198:
    // 0x16d198: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x16d198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
label_16d19c:
    // 0x16d19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d1a0:
    // 0x16d1a0: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x16d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_16d1a4:
    // 0x16d1a4: 0xc06825c  jal         func_1A0970
label_16d1a8:
    if (ctx->pc == 0x16D1A8u) {
        ctx->pc = 0x16D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1A4u;
        // 0x16d1a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1ACu;
        goto label_16d1ac;
    }
    ctx->pc = 0x16D1A4u;
    SET_GPR_U32(ctx, 31, 0x16D1ACu);
    ctx->pc = 0x16D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1A4u;
    // 0x16d1a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16D1A4u, 0x16D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1ACu;
label_16d1ac:
    // 0x16d1ac: 0xc06a26e  jal         func_1A89B8
label_16d1b0:
    if (ctx->pc == 0x16D1B0u) {
        ctx->pc = 0x16D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1ACu;
        // 0x16d1b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1B4u;
        goto label_16d1b4;
    }
    ctx->pc = 0x16D1ACu;
    SET_GPR_U32(ctx, 31, 0x16D1B4u);
    ctx->pc = 0x16D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1ACu;
    // 0x16d1b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D1ACu, 0x16D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1B4u;
label_16d1b4:
    // 0x16d1b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_16d1b8:
    if (ctx->pc == 0x16D1B8u) {
        ctx->pc = 0x16D1BCu;
        goto label_16d1bc;
    }
    ctx->pc = 0x16D1B4u;
    {
        const bool branch_taken_0x16d1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d1b4) {
            ctx->pc = 0x16D1C8u;
            return;
        }
    }
    ctx->pc = 0x16D1BCu;
label_16d1bc:
    // 0x16d1bc: 0x10000011  b           . + 4 + (0x11 << 2)
label_16d1c0:
    if (ctx->pc == 0x16D1C0u) {
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1BCu;
        // 0x16d1c0: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1C4u;
        goto label_16d1c4;
    }
    ctx->pc = 0x16D1BCu;
    {
        const bool branch_taken_0x16d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1BCu;
        // 0x16d1c0: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1bc) {
            ctx->pc = 0x16D204u;
            return;
        }
    }
    ctx->pc = 0x16D1C4u;
label_16d1c4:
    // 0x16d1c4: 0x0  nop
    ctx->pc = 0x16d1c4u;
    // NOP
    ctx->pc = 0x16d1c8u;
}

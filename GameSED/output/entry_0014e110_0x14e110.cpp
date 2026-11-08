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

// Function: entry_0014e110
// Address: 0x14e110 - 0x14e3d0
void entry_0014e110_0x14e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e110_0x14e110");
#endif

    switch (ctx->pc) {
        case 0x14e140u: goto label_14e140;
        case 0x14e148u: goto label_14e148;
        case 0x14e164u: goto label_14e164;
        case 0x14e170u: goto label_14e170;
        case 0x14e17cu: goto label_14e17c;
        case 0x14e184u: goto label_14e184;
        case 0x14e1b0u: goto label_14e1b0;
        case 0x14e1bcu: goto label_14e1bc;
        case 0x14e1c4u: goto label_14e1c4;
        case 0x14e1e0u: goto label_14e1e0;
        case 0x14e1f0u: goto label_14e1f0;
        case 0x14e21cu: goto label_14e21c;
        case 0x14e240u: goto label_14e240;
        case 0x14e254u: goto label_14e254;
        case 0x14e25cu: goto label_14e25c;
        case 0x14e288u: goto label_14e288;
        case 0x14e390u: goto label_14e390;
        case 0x14e3b0u: goto label_14e3b0;
        case 0x14e3ccu: goto label_14e3cc;
        default: break;
    }

    ctx->pc = 0x14e110u;

label_14e110:
    // 0x14e110: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e114:
    // 0x14e114: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_14e118:
    // 0x14e118: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x14e118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_14e11c:
    // 0x14e11c: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x14e11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
label_14e120:
    // 0x14e120: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e124:
    // 0x14e124: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x14e124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_14e128:
    // 0x14e128: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x14e128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
label_14e12c:
    // 0x14e12c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x14e12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_14e130:
    // 0x14e130: 0x481fff7  bgez        $a0, . + 4 + (-0x9 << 2)
label_14e134:
    if (ctx->pc == 0x14E134u) {
        ctx->pc = 0x14E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E130u;
        // 0x14e134: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E138u;
        goto label_14e138;
    }
    ctx->pc = 0x14E130u;
    {
        const bool branch_taken_0x14e130 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E130u;
        // 0x14e134: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e130) {
            ctx->pc = 0x14E110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e110;
        }
    }
    ctx->pc = 0x14E138u;
label_14e138:
    // 0x14e138: 0xc0682b2  jal         func_1A0AC8
label_14e13c:
    if (ctx->pc == 0x14E13Cu) {
        ctx->pc = 0x14E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E138u;
        // 0x14e13c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E140u;
        goto label_14e140;
    }
    ctx->pc = 0x14E138u;
    SET_GPR_U32(ctx, 31, 0x14E140u);
    ctx->pc = 0x14E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E138u;
    // 0x14e13c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14E138u, 0x14E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E140u;
label_14e140:
    // 0x14e140: 0xc0682b6  jal         func_1A0AD8
label_14e144:
    if (ctx->pc == 0x14E144u) {
        ctx->pc = 0x14E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E140u;
        // 0x14e144: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E148u;
        goto label_14e148;
    }
    ctx->pc = 0x14E140u;
    SET_GPR_U32(ctx, 31, 0x14E148u);
    ctx->pc = 0x14E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E140u;
    // 0x14e144: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x14E140u, 0x14E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E148u;
label_14e148:
    // 0x14e148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e14c:
    // 0x14e14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e150:
    // 0x14e150: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_14e154:
    // 0x14e154: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x14e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
label_14e158:
    // 0x14e158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e15c:
    // 0x14e15c: 0xc0624a8  jal         func_1892A0
label_14e160:
    if (ctx->pc == 0x14E160u) {
        ctx->pc = 0x14E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E15Cu;
        // 0x14e160: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E164u;
        goto label_14e164;
    }
    ctx->pc = 0x14E15Cu;
    SET_GPR_U32(ctx, 31, 0x14E164u);
    ctx->pc = 0x14E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E15Cu;
    // 0x14e160: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x14E15Cu, 0x14E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E164u;
label_14e164:
    // 0x14e164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e168:
    // 0x14e168: 0xc06825c  jal         func_1A0970
label_14e16c:
    if (ctx->pc == 0x14E16Cu) {
        ctx->pc = 0x14E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E168u;
        // 0x14e16c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E170u;
        goto label_14e170;
    }
    ctx->pc = 0x14E168u;
    SET_GPR_U32(ctx, 31, 0x14E170u);
    ctx->pc = 0x14E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E168u;
    // 0x14e16c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x14E168u, 0x14E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E170u;
label_14e170:
    // 0x14e170: 0xae3006a4  sw          $s0, 0x6A4($s1)
    ctx->pc = 0x14e170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 16));
label_14e174:
    // 0x14e174: 0xc0548ee  jal         func_1523B8
label_14e178:
    if (ctx->pc == 0x14E178u) {
        ctx->pc = 0x14E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E174u;
        // 0x14e178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E17Cu;
        goto label_14e17c;
    }
    ctx->pc = 0x14E174u;
    SET_GPR_U32(ctx, 31, 0x14E17Cu);
    ctx->pc = 0x14E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E174u;
    // 0x14e178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1523B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523B8u, 0x14E174u, 0x14E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E17Cu;
label_14e17c:
    // 0x14e17c: 0xc04c99a  jal         func_132668
label_14e180:
    if (ctx->pc == 0x14E180u) {
        ctx->pc = 0x14E184u;
        goto label_14e184;
    }
    ctx->pc = 0x14E17Cu;
    SET_GPR_U32(ctx, 31, 0x14E184u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x14E17Cu, 0x14E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E184u;
label_14e184:
    // 0x14e184: 0xc62d0278  lwc1        $f13, 0x278($s1)
    ctx->pc = 0x14e184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14e188:
    // 0x14e188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e18c:
    // 0x14e18c: 0xc62c027c  lwc1        $f12, 0x27C($s1)
    ctx->pc = 0x14e18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14e190:
    // 0x14e190: 0x8e25017c  lw          $a1, 0x17C($s1)
    ctx->pc = 0x14e190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_14e194:
    // 0x14e194: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x14e194u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_14e198:
    // 0x14e198: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x14e198u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_14e19c:
    // 0x14e19c: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x14e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e1a0:
    // 0x14e1a0: 0x30a5f000  andi        $a1, $a1, 0xF000
    ctx->pc = 0x14e1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
label_14e1a4:
    // 0x14e1a4: 0x38a52000  xori        $a1, $a1, 0x2000
    ctx->pc = 0x14e1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8192);
label_14e1a8:
    // 0x14e1a8: 0xc04c64e  jal         func_131938
label_14e1ac:
    if (ctx->pc == 0x14E1ACu) {
        ctx->pc = 0x14E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1A8u;
        // 0x14e1ac: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1B0u;
        goto label_14e1b0;
    }
    ctx->pc = 0x14E1A8u;
    SET_GPR_U32(ctx, 31, 0x14E1B0u);
    ctx->pc = 0x14E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1A8u;
    // 0x14e1ac: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131938u, 0x14E1A8u, 0x14E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1B0u;
label_14e1b0:
    // 0x14e1b0: 0x24040186  addiu       $a0, $zero, 0x186
    ctx->pc = 0x14e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
label_14e1b4:
    // 0x14e1b4: 0xc0682b2  jal         func_1A0AC8
label_14e1b8:
    if (ctx->pc == 0x14E1B8u) {
        ctx->pc = 0x14E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1B4u;
        // 0x14e1b8: 0xae2206d8  sw          $v0, 0x6D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1BCu;
        goto label_14e1bc;
    }
    ctx->pc = 0x14E1B4u;
    SET_GPR_U32(ctx, 31, 0x14E1BCu);
    ctx->pc = 0x14E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1B4u;
    // 0x14e1b8: 0xae2206d8  sw          $v0, 0x6D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1752), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14E1B4u, 0x14E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1BCu;
label_14e1bc:
    // 0x14e1bc: 0xc0682b6  jal         func_1A0AD8
label_14e1c0:
    if (ctx->pc == 0x14E1C0u) {
        ctx->pc = 0x14E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1BCu;
        // 0x14e1c0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1C4u;
        goto label_14e1c4;
    }
    ctx->pc = 0x14E1BCu;
    SET_GPR_U32(ctx, 31, 0x14E1C4u);
    ctx->pc = 0x14E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1BCu;
    // 0x14e1c0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x14E1BCu, 0x14E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1C4u;
label_14e1c4:
    // 0x14e1c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e1c8:
    // 0x14e1c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e1cc:
    // 0x14e1cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_14e1d0:
    // 0x14e1d0: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x14e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
label_14e1d4:
    // 0x14e1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e1d8:
    // 0x14e1d8: 0xc05ac70  jal         func_16B1C0
label_14e1dc:
    if (ctx->pc == 0x14E1DCu) {
        ctx->pc = 0x14E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1D8u;
        // 0x14e1dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1E0u;
        goto label_14e1e0;
    }
    ctx->pc = 0x14E1D8u;
    SET_GPR_U32(ctx, 31, 0x14E1E0u);
    ctx->pc = 0x14E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1D8u;
    // 0x14e1dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1C0u, 0x14E1D8u, 0x14E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1E0u;
label_14e1e0:
    // 0x14e1e0: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x14e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
label_14e1e4:
    // 0x14e1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e1e8:
    // 0x14e1e8: 0xc06825c  jal         func_1A0970
label_14e1ec:
    if (ctx->pc == 0x14E1ECu) {
        ctx->pc = 0x14E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E1E8u;
        // 0x14e1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E1F0u;
        goto label_14e1f0;
    }
    ctx->pc = 0x14E1E8u;
    SET_GPR_U32(ctx, 31, 0x14E1F0u);
    ctx->pc = 0x14E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1E8u;
    // 0x14e1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x14E1E8u, 0x14E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1F0u;
label_14e1f0:
    // 0x14e1f0: 0x8e0301e8  lw          $v1, 0x1E8($s0)
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_14e1f4:
    // 0x14e1f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14e1f8:
    // 0x14e1f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e1fc:
    // 0x14e1fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x14e1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_14e200:
    // 0x14e200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e204:
    // 0x14e204: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x14e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_14e208:
    // 0x14e208: 0xae0301e8  sw          $v1, 0x1E8($s0)
    ctx->pc = 0x14e208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 3));
label_14e20c:
    // 0x14e20c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e210:
    // 0x14e210: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e214:
    // 0x14e214: 0x60f809  jalr        $v1
label_14e218:
    if (ctx->pc == 0x14E218u) {
        ctx->pc = 0x14E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E214u;
        // 0x14e218: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E21Cu;
        goto label_14e21c;
    }
    ctx->pc = 0x14E214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E21Cu);
        ctx->pc = 0x14E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E214u;
        // 0x14e218: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E214u, 0x14E21Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E21Cu;
label_14e21c:
    // 0x14e21c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e220:
    // 0x14e220: 0x8e270690  lw          $a3, 0x690($s1)
    ctx->pc = 0x14e220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e224:
    // 0x14e224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e228:
    // 0x14e228: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x14e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_14e22c:
    // 0x14e22c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e22cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e230:
    // 0x14e230: 0x8ce50124  lw          $a1, 0x124($a3)
    ctx->pc = 0x14e230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
label_14e234:
    // 0x14e234: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e238:
    // 0x14e238: 0x60f809  jalr        $v1
label_14e23c:
    if (ctx->pc == 0x14E23Cu) {
        ctx->pc = 0x14E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E238u;
        // 0x14e23c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E240u;
        goto label_14e240;
    }
    ctx->pc = 0x14E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E240u);
        ctx->pc = 0x14E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E238u;
        // 0x14e23c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E238u, 0x14E240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E240u;
label_14e240:
    // 0x14e240: 0xae3001c4  sw          $s0, 0x1C4($s1)
    ctx->pc = 0x14e240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 16));
label_14e244:
    // 0x14e244: 0x8e220170  lw          $v0, 0x170($s1)
    ctx->pc = 0x14e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_14e248:
    // 0x14e248: 0x8c500024  lw          $s0, 0x24($v0)
    ctx->pc = 0x14e248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_14e24c:
    // 0x14e24c: 0xc06bd28  jal         func_1AF4A0
label_14e250:
    if (ctx->pc == 0x14E250u) {
        ctx->pc = 0x14E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E24Cu;
        // 0x14e250: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E254u;
        goto label_14e254;
    }
    ctx->pc = 0x14E24Cu;
    SET_GPR_U32(ctx, 31, 0x14E254u);
    ctx->pc = 0x14E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E24Cu;
    // 0x14e250: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x14E24Cu, 0x14E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E254u;
label_14e254:
    // 0x14e254: 0xc06bd20  jal         func_1AF480
label_14e258:
    if (ctx->pc == 0x14E258u) {
        ctx->pc = 0x14E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E254u;
        // 0x14e258: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E25Cu;
        goto label_14e25c;
    }
    ctx->pc = 0x14E254u;
    SET_GPR_U32(ctx, 31, 0x14E25Cu);
    ctx->pc = 0x14E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E254u;
    // 0x14e258: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x14E254u, 0x14E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E25Cu;
label_14e25c:
    // 0x14e25c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x14e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_14e260:
    // 0x14e260: 0xc6200278  lwc1        $f0, 0x278($s1)
    ctx->pc = 0x14e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e264:
    // 0x14e264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e268:
    // 0x14e268: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x14e268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_14e26c:
    // 0x14e26c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14e270:
    // 0x14e270: 0x24840fb0  addiu       $a0, $a0, 0xFB0
    ctx->pc = 0x14e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4016));
label_14e274:
    // 0x14e274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e278:
    // 0x14e278: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14e278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14e27c:
    // 0x14e27c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x14e27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14e280:
    // 0x14e280: 0xc06448c  jal         func_191230
label_14e284:
    if (ctx->pc == 0x14E284u) {
        ctx->pc = 0x14E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E280u;
        // 0x14e284: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E288u;
        goto label_14e288;
    }
    ctx->pc = 0x14E280u;
    SET_GPR_U32(ctx, 31, 0x14E288u);
    ctx->pc = 0x14E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E280u;
    // 0x14e284: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191230u, 0x14E280u, 0x14E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E288u;
label_14e288:
    // 0x14e288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e28c:
    // 0x14e28c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14e290:
    // 0x14e290: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x14e290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_14e294:
    // 0x14e294: 0x26080180  addiu       $t0, $s0, 0x180
    ctx->pc = 0x14e294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_14e298:
    // 0x14e298: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x14e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e29c:
    // 0x14e29c: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x14e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e2a0:
    // 0x14e2a0: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x14e2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
label_14e2a4:
    // 0x14e2a4: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x14e2a4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
label_14e2a8:
    // 0x14e2a8: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x14e2a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_14e2ac:
    // 0x14e2ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14e2acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_14e2b0:
    // 0x14e2b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14e2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14e2b4:
    // 0x14e2b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14e2b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14e2b8:
    // 0x14e2b8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x14e2b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14e2bc:
    // 0x14e2bc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14e2bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14e2c0:
    // 0x14e2c0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14e2c4:
    // 0x14e2c4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14e2c4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14e2c8:
    // 0x14e2c8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14e2c8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14e2cc:
    // 0x14e2cc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14e2ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14e2d0:
    // 0x14e2d0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x14e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_14e2d4:
    // 0x14e2d4: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x14e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e2d8:
    // 0x14e2d8: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x14e2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_14e2dc:
    // 0x14e2dc: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x14e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e2e0:
    // 0x14e2e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14e2e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14e2e4:
    // 0x14e2e4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14e2e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14e2e8:
    // 0x14e2e8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14e2e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14e2ec:
    // 0x14e2ec: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14e2f0:
    // 0x14e2f0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14e2f0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14e2f4:
    // 0x14e2f4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14e2f4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14e2f8:
    // 0x14e2f8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14e2f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14e2fc:
    // 0x14e2fc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14e300:
    // 0x14e300: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x14e300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_14e304:
    // 0x14e304: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x14e304u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_14e308:
    // 0x14e308: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x14e308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_14e30c:
    // 0x14e30c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x14e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_14e310:
    // 0x14e310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e314:
    // 0x14e314: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x14e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e318:
    // 0x14e318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e31c:
    // 0x14e31c: 0xc6030170  lwc1        $f3, 0x170($s0)
    ctx->pc = 0x14e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14e320:
    // 0x14e320: 0xe6000220  swc1        $f0, 0x220($s0)
    ctx->pc = 0x14e320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
label_14e324:
    // 0x14e324: 0xc6040178  lwc1        $f4, 0x178($s0)
    ctx->pc = 0x14e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14e328:
    // 0x14e328: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x14e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e32c:
    // 0x14e32c: 0xe6020228  swc1        $f2, 0x228($s0)
    ctx->pc = 0x14e32cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
label_14e330:
    // 0x14e330: 0xe602022c  swc1        $f2, 0x22C($s0)
    ctx->pc = 0x14e330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
label_14e334:
    // 0x14e334: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x14e334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
label_14e338:
    // 0x14e338: 0xc6050174  lwc1        $f5, 0x174($s0)
    ctx->pc = 0x14e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14e33c:
    // 0x14e33c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x14e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e340:
    // 0x14e340: 0xc606017c  lwc1        $f6, 0x17C($s0)
    ctx->pc = 0x14e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_14e344:
    // 0x14e344: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14e344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_14e348:
    // 0x14e348: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14e34c:
    // 0x14e34c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x14e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_14e350:
    // 0x14e350: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e354:
    // 0x14e354: 0x0  nop
    ctx->pc = 0x14e354u;
    // NOP
label_14e358:
    // 0x14e358: 0x0  nop
    ctx->pc = 0x14e358u;
    // NOP
label_14e35c:
    // 0x14e35c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x14e35cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
label_14e360:
    // 0x14e360: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e364:
    // 0x14e364: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x14e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_14e368:
    // 0x14e368: 0xe6010230  swc1        $f1, 0x230($s0)
    ctx->pc = 0x14e368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
label_14e36c:
    // 0x14e36c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x14e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e370:
    // 0x14e370: 0xe602023c  swc1        $f2, 0x23C($s0)
    ctx->pc = 0x14e370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 572), bits); }
label_14e374:
    // 0x14e374: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x14e374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_14e378:
    // 0x14e378: 0xe6020238  swc1        $f2, 0x238($s0)
    ctx->pc = 0x14e378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
label_14e37c:
    // 0x14e37c: 0x0  nop
    ctx->pc = 0x14e37cu;
    // NOP
label_14e380:
    // 0x14e380: 0x0  nop
    ctx->pc = 0x14e380u;
    // NOP
label_14e384:
    // 0x14e384: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x14e384u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
label_14e388:
    // 0x14e388: 0x60f809  jalr        $v1
label_14e38c:
    if (ctx->pc == 0x14E38Cu) {
        ctx->pc = 0x14E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E388u;
        // 0x14e38c: 0xe6000234  swc1        $f0, 0x234($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E390u;
        goto label_14e390;
    }
    ctx->pc = 0x14E388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E390u);
        ctx->pc = 0x14E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E388u;
        // 0x14e38c: 0xe6000234  swc1        $f0, 0x234($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E388u, 0x14E390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E390u;
label_14e390:
    // 0x14e390: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e394:
    // 0x14e394: 0x8e250690  lw          $a1, 0x690($s1)
    ctx->pc = 0x14e394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_14e398:
    // 0x14e398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14e398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e39c:
    // 0x14e39c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x14e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_14e3a0:
    // 0x14e3a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e3a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e3a4:
    // 0x14e3a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e3a8:
    // 0x14e3a8: 0x60f809  jalr        $v1
label_14e3ac:
    if (ctx->pc == 0x14E3ACu) {
        ctx->pc = 0x14E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3A8u;
        // 0x14e3ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E3B0u;
        goto label_14e3b0;
    }
    ctx->pc = 0x14E3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E3B0u);
        ctx->pc = 0x14E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3A8u;
        // 0x14e3ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E3A8u, 0x14E3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E3B0u;
label_14e3b0:
    // 0x14e3b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14e3b4:
    // 0x14e3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e3b8:
    // 0x14e3b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x14e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_14e3bc:
    // 0x14e3bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14e3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14e3c0:
    // 0x14e3c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14e3c4:
    // 0x14e3c4: 0x60f809  jalr        $v1
label_14e3c8:
    if (ctx->pc == 0x14E3C8u) {
        ctx->pc = 0x14E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3C4u;
        // 0x14e3c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E3CCu;
        goto label_14e3cc;
    }
    ctx->pc = 0x14E3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E3CCu);
        ctx->pc = 0x14E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3C4u;
        // 0x14e3c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E3C4u, 0x14E3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E3CCu;
label_14e3cc:
    // 0x14e3cc: 0xae3001c8  sw          $s0, 0x1C8($s1)
    ctx->pc = 0x14e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 16));
    ctx->pc = 0x14e3d0u;
}

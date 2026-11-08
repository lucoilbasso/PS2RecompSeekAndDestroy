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

// Function: entry_00193138
// Address: 0x193138 - 0x1931f8
void entry_00193138_0x193138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193138_0x193138");
#endif

    switch (ctx->pc) {
        case 0x193170u: goto label_193170;
        case 0x193184u: goto label_193184;
        case 0x193198u: goto label_193198;
        case 0x1931acu: goto label_1931ac;
        case 0x1931c4u: goto label_1931c4;
        case 0x1931f4u: goto label_1931f4;
        default: break;
    }

    ctx->pc = 0x193138u;

    // 0x193138: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x193138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x19313c: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x193140: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x193144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193148: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x193148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x19314c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x19314cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193150: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x193150u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x193154: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x193158: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x193158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19315c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193160: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x193160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193164: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193168: 0xc064dda  jal         func_193768
    ctx->pc = 0x193168u;
    SET_GPR_U32(ctx, 31, 0x193170u);
    ctx->pc = 0x19316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193168u;
    // 0x19316c: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x193168u, 0x193170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193170u;
label_193170:
    // 0x193170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193174: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x193174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x193178: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x193178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19317c: 0xc064dda  jal         func_193768
    ctx->pc = 0x19317Cu;
    SET_GPR_U32(ctx, 31, 0x193184u);
    ctx->pc = 0x193180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19317Cu;
    // 0x193180: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x19317Cu, 0x193184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193184u;
label_193184:
    // 0x193184: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193188: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19318c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193190: 0xc064dda  jal         func_193768
    ctx->pc = 0x193190u;
    SET_GPR_U32(ctx, 31, 0x193198u);
    ctx->pc = 0x193194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193190u;
    // 0x193194: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x193190u, 0x193198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193198u;
label_193198:
    // 0x193198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19319c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x19319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1931a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1931a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931a4: 0xc064dda  jal         func_193768
    ctx->pc = 0x1931A4u;
    SET_GPR_U32(ctx, 31, 0x1931ACu);
    ctx->pc = 0x1931A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931A4u;
    // 0x1931a8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193768u, 0x1931A4u, 0x1931ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931ACu;
label_1931ac:
    // 0x1931ac: 0x8e660234  lw          $a2, 0x234($s3)
    ctx->pc = 0x1931acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x1931b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1931b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1931b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931b8: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x1931b8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1931bc: 0xc064cc6  jal         func_193318
    ctx->pc = 0x1931BCu;
    SET_GPR_U32(ctx, 31, 0x1931C4u);
    ctx->pc = 0x1931C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931BCu;
    // 0x1931c0: 0xd53024  and         $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193318u, 0x1931BCu, 0x1931C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931C4u;
label_1931c4:
    // 0x1931c4: 0x8e670230  lw          $a3, 0x230($s3)
    ctx->pc = 0x1931c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x1931c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1931c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1931ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931d0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1931d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1931d4: 0x17303c  dsll32      $a2, $s7, 0
    ctx->pc = 0x1931d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1931d8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1931d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1931dc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1931dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1931e0: 0x2421ee78  addiu       $at, $at, -0x1188
    ctx->pc = 0x1931e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962808));
    // 0x1931e4: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x1931e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x1931e8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1931e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931ec: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x1931ECu;
    SET_GPR_U32(ctx, 31, 0x1931F4u);
    ctx->pc = 0x1931F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931ECu;
    // 0x1931f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x1931ECu, 0x1931F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931F4u;
label_1931f4:
    // 0x1931f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1931f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1931f8u;
}

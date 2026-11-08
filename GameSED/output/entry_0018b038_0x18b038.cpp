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

// Function: entry_0018b038
// Address: 0x18b038 - 0x18b1a4
void entry_0018b038_0x18b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b038_0x18b038");
#endif

    switch (ctx->pc) {
        case 0x18b060u: goto label_18b060;
        case 0x18b084u: goto label_18b084;
        default: break;
    }

    ctx->pc = 0x18b038u;

    // 0x18b038: 0x26b00190  addiu       $s0, $s5, 0x190
    ctx->pc = 0x18b038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x18b03c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x18b03cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b040: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x18b040u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x18b044: 0xc6a00184  lwc1        $f0, 0x184($s5)
    ctx->pc = 0x18b044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b048: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x18b048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18b04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b050: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18b050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b054: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18b054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b058: 0xc062dd4  jal         func_18B750
    ctx->pc = 0x18B058u;
    SET_GPR_U32(ctx, 31, 0x18B060u);
    ctx->pc = 0x18B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B058u;
    // 0x18b05c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B750u, 0x18B058u, 0x18B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B060u;
label_18b060:
    // 0x18b060: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x18b060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b064: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x18b064u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x18b068: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x18b068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18b06c: 0xc6a00180  lwc1        $f0, 0x180($s5)
    ctx->pc = 0x18b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b070: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x18b070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18b074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18b078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b07c: 0xc062dd4  jal         func_18B750
    ctx->pc = 0x18B07Cu;
    SET_GPR_U32(ctx, 31, 0x18B084u);
    ctx->pc = 0x18B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B07Cu;
    // 0x18b080: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B750u, 0x18B07Cu, 0x18B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B084u;
label_18b084:
    // 0x18b084: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b088: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x18b088u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x18b08c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b090: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18b090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18b094: 0x34422424  ori         $v0, $v0, 0x2424
    ctx->pc = 0x18b094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9252);
    // 0x18b098: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18b09c: 0x3442242e  ori         $v0, $v0, 0x242E
    ctx->pc = 0x18b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9262);
    // 0x18b0a0: 0x3c049000  lui         $a0, 0x9000
    ctx->pc = 0x18b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36864 << 16));
    // 0x18b0a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18b0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18b0a8: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x18b0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x18b0ac: 0x161bfc  dsll32      $v1, $s6, 15
    ctx->pc = 0x18b0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 15));
    // 0x18b0b0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x18b0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18b0b4: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x18b0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x18b0b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18b0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18b0bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18b0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0c0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b0c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b0c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x18b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x18b0c8: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x18b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x18b0cc: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x18b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x18b0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b0d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18b0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b0dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x18b0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0e0: 0x8ea50154  lw          $a1, 0x154($s5)
    ctx->pc = 0x18b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 340)));
    // 0x18b0e4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b0e8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x18b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x18b0ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18b0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0f0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x18b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x18b0f4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b0f8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x18b0f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18b0fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18b0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b100: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b100u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b104: 0xc6a001b0  lwc1        $f0, 0x1B0($s5)
    ctx->pc = 0x18b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b108: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18b108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b10c: 0xc6a101b4  lwc1        $f1, 0x1B4($s5)
    ctx->pc = 0x18b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b110: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b114: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18b114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18b118: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18b118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b11c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18b11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18b120: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b124: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x18b124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18b128: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x18b128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b12c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b130: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x18b130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b134: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x18b134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b138: 0xc6a001b8  lwc1        $f0, 0x1B8($s5)
    ctx->pc = 0x18b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b13c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b140: 0xc6a101b4  lwc1        $f1, 0x1B4($s5)
    ctx->pc = 0x18b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b144: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18b144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b148: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18b148u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18b14c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b150: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x18b150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x18b154: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18b154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b158: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x18b158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x18b15c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18b15cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18b160: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x18b160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x18b164: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x18b164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b168: 0xc6a001b0  lwc1        $f0, 0x1B0($s5)
    ctx->pc = 0x18b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b16c: 0xc6a101bc  lwc1        $f1, 0x1BC($s5)
    ctx->pc = 0x18b16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b170: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x18b170u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x18b174: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18b178: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x18b178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18b17c: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x18b17cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18b180: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x18b180u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18b184: 0xc6a101bc  lwc1        $f1, 0x1BC($s5)
    ctx->pc = 0x18b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b188: 0xc6a001b8  lwc1        $f0, 0x1B8($s5)
    ctx->pc = 0x18b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b18c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18b190: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x18b190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x18b194: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18b194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18b198: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x18b198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18b19c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x18b19cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b1a0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x18b1a4u;
}

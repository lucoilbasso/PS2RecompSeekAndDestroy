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

// Function: Init__9WcBgPanel
// Address: 0x18b788 - 0x18b804
void Init__9WcBgPanel_0x18b788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9WcBgPanel_0x18b788");
#endif

    switch (ctx->pc) {
        case 0x18b79cu: goto label_18b79c;
        default: break;
    }

    ctx->pc = 0x18b788u;

    // 0x18b788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18b78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18b790: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18b790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18b794: 0xc061258  jal         func_184960
    ctx->pc = 0x18B794u;
    SET_GPR_U32(ctx, 31, 0x18B79Cu);
    ctx->pc = 0x18B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B794u;
    // 0x18b798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x18B794u, 0x18B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B79Cu;
label_18b79c:
    // 0x18b79c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x18b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x18b7a0: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x18b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x18b7a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18b7a8: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x18b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18b7ac: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x18b7acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b7b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b7b4: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x18b7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x18b7b8: 0x90a4eda0  lbu         $a0, -0x1260($a1)
    ctx->pc = 0x18b7b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x21EDA0u));
    // 0x18b7bc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x18b7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b7c0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x18b7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b7c4: 0x8cc2d630  lw          $v0, -0x29D0($a2)
    ctx->pc = 0x18b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x18b7c8: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x18b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x18b7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b7d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b7d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b7d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b7dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18b7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b7e0: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x18b7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x18b7e4: 0xe461006c  swc1        $f1, 0x6C($v1)
    ctx->pc = 0x18b7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x18b7e8: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x18b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x18b7ec: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x18b7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b7f0: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x18b7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x18b7f4: 0xe4610068  swc1        $f1, 0x68($v1)
    ctx->pc = 0x18b7f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x18b7f8: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x18b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x18b7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x18B7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7FCu;
        // 0x18b800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B804u;
}

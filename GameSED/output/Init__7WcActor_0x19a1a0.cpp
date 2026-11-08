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

// Function: Init__7WcActor
// Address: 0x19a1a0 - 0x19a250
void Init__7WcActor_0x19a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcActor_0x19a1a0");
#endif

    switch (ctx->pc) {
        case 0x19a1b4u: goto label_19a1b4;
        case 0x19a240u: goto label_19a240;
        default: break;
    }

    ctx->pc = 0x19a1a0u;

    // 0x19a1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a1a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a1ac: 0xc066730  jal         func_199CC0
    ctx->pc = 0x19A1ACu;
    SET_GPR_U32(ctx, 31, 0x19A1B4u);
    ctx->pc = 0x19A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1ACu;
    // 0x19a1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199CC0u, 0x19A1ACu, 0x19A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1B4u;
label_19a1b4:
    // 0x19a1b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a1b8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19a1bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19a1c0: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x19a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x19a1c4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x19a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x19a1c8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x19a1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x19a1cc: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x19a1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x19a1d0: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x19a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x19a1d4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x19a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a1d8: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x19a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x19a1dc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x19a1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a1e0: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x19a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x19a1e4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x19a1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a1e8: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x19a1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x19a1ec: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x19a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x19a1f0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x19a1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x19a1f4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x19a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x19a1f8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x19a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x19a1fc: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x19a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x19a200: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x19a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x19a204: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x19a204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x19a208: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x19a208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x19a20c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x19a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x19a210: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x19a210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x19a214: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x19a214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a218: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x19a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x19a21c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x19a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a220: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x19a220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x19a224: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x19a224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x19a228: 0x2463ded0  addiu       $v1, $v1, -0x2130
    ctx->pc = 0x19a228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958800));
    // 0x19a22c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x19a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x19a230: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x19a230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x19a234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a238: 0xc068584  jal         func_1A1610
    ctx->pc = 0x19A238u;
    SET_GPR_U32(ctx, 31, 0x19A240u);
    ctx->pc = 0x19A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A238u;
    // 0x19a23c: 0x2484deb0  addiu       $a0, $a0, -0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x19A238u, 0x19A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A240u;
label_19a240:
    // 0x19a240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a248: 0x3e00008  jr          $ra
    ctx->pc = 0x19A248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A248u;
        // 0x19a24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A250u;
}

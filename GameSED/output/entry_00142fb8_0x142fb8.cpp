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

// Function: entry_00142fb8
// Address: 0x142fb8 - 0x143038
void entry_00142fb8_0x142fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142fb8_0x142fb8");
#endif

    ctx->pc = 0x142fb8u;

    // 0x142fb8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x142fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142fbc: 0x25644000  addiu       $a0, $t3, 0x4000
    ctx->pc = 0x142fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 16384));
    // 0x142fc0: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x142fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x142fc4: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x142fc8: 0x84e20006  lh          $v0, 0x6($a3)
    ctx->pc = 0x142fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x142fcc: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x142fccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x142fd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x142fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142fd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x142fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142fd8: 0x84e60002  lh          $a2, 0x2($a3)
    ctx->pc = 0x142fd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x142fdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x142fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142fe0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x142fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x142fe4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x142fe4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x142fe8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x142fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x142fec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x142fecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142ff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142ff4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x142ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x142ff8: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x142ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x142ffc: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x142ffcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x143000: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x143000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x143004: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x143004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x143008: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x143008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x14300c: 0x90e30009  lbu         $v1, 0x9($a3)
    ctx->pc = 0x14300cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x143010: 0xa0830011  sb          $v1, 0x11($a0)
    ctx->pc = 0x143010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x143014: 0x90e2000a  lbu         $v0, 0xA($a3)
    ctx->pc = 0x143014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x143018: 0xa0820012  sb          $v0, 0x12($a0)
    ctx->pc = 0x143018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x14301c: 0x90e3000b  lbu         $v1, 0xB($a3)
    ctx->pc = 0x14301cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x143020: 0xa0830013  sb          $v1, 0x13($a0)
    ctx->pc = 0x143020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x143024: 0x84e2000c  lh          $v0, 0xC($a3)
    ctx->pc = 0x143024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x143028: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x143028u;
    {
        const bool branch_taken_0x143028 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143028u;
        // 0x14302c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143028) {
            ctx->pc = 0x143068u;
            return;
        }
    }
    ctx->pc = 0x143030u;
    // 0x143030: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x143030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x143034: 0x0  nop
    ctx->pc = 0x143034u;
    // NOP
    ctx->pc = 0x143038u;
}

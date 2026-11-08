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

// Function: entry_00125d6c
// Address: 0x125d6c - 0x125e0c
void entry_00125d6c_0x125d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125d6c_0x125d6c");
#endif

    switch (ctx->pc) {
        case 0x125d98u: goto label_125d98;
        case 0x125e08u: goto label_125e08;
        default: break;
    }

    ctx->pc = 0x125d6cu;

    // 0x125d6c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x125d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x125d70: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x125d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x125d74: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x125d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x125d78: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x125d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x125d7c: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x125d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x125d80: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x125d80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x125d84: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x125d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x125d88: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x125d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x125d8c: 0xa3a00080  sb          $zero, 0x80($sp)
    ctx->pc = 0x125d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x125d90: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x125D90u;
    SET_GPR_U32(ctx, 31, 0x125D98u);
    ctx->pc = 0x125D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D90u;
    // 0x125d94: 0xa3a00081  sb          $zero, 0x81($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x125D90u, 0x125D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D98u;
label_125d98:
    // 0x125d98: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x125d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x125d9c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x125d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x125da0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x125DA0u;
    {
        const bool branch_taken_0x125da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DA0u;
        // 0x125da4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125da0) {
            ctx->pc = 0x125E0Cu;
            return;
        }
    }
    ctx->pc = 0x125DA8u;
    // 0x125da8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x125da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x125dac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x125dacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125db0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x125db0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x125db4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x125db4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x125db8: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x125db8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x125dbc: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x125dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x125dc0: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x125dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x125dc4: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x125dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x125dc8: 0xf8a70030  sqc2        $vf7, 0x30($a1)
    ctx->pc = 0x125dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x125dcc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x125dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125dd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125ddc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x125ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125de0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x125de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x125de4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x125de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x125de8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x125de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x125dec: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x125decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x125df0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x125df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x125df4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x125df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x125df8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x125df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x125dfc: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x125dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x125e00: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x125E00u;
    SET_GPR_U32(ctx, 31, 0x125E08u);
    ctx->pc = 0x125E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E00u;
    // 0x125e04: 0xe7a100b4  swc1        $f1, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x125E00u, 0x125E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E08u;
label_125e08:
    // 0x125e08: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x125e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x125e0cu;
}

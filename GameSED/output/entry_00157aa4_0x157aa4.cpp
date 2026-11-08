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

// Function: entry_00157aa4
// Address: 0x157aa4 - 0x157b2c
void entry_00157aa4_0x157aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157aa4_0x157aa4");
#endif

    switch (ctx->pc) {
        case 0x157aacu: goto label_157aac;
        default: break;
    }

    ctx->pc = 0x157aa4u;

    // 0x157aa4: 0xc061422  jal         func_185088
    ctx->pc = 0x157AA4u;
    SET_GPR_U32(ctx, 31, 0x157AACu);
    ctx->pc = 0x157AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157AA4u;
    // 0x157aa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x157AA4u, 0x157AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157AACu;
label_157aac:
    // 0x157aac: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x157ab0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157ab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157ab4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x157ab4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x157ab8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x157ab8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x157abc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x157abcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x157ac0: 0xfaa40000  sqc2        $vf4, 0x0($s5)
    ctx->pc = 0x157ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157ac4: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x157ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157ac8: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x157ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157acc: 0xfaa70030  sqc2        $vf7, 0x30($s5)
    ctx->pc = 0x157accu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157ad0: 0x8e11007c  lw          $s1, 0x7C($s0)
    ctx->pc = 0x157ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x157ad4: 0x27b50120  addiu       $s5, $sp, 0x120
    ctx->pc = 0x157ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x157ad8: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x157ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157adc: 0x27be0150  addiu       $fp, $sp, 0x150
    ctx->pc = 0x157adcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x157ae0: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x157ae4: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x157ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ae8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x157ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x157aec: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x157aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157af0: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x157af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x157af4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x157af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x157af8: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x157af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x157afc: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x157afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x157b00: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x157b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x157b04: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x157b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x157b08: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x157b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x157b0c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x157b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x157b10: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x157b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x157b14: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x157b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x157b18: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x157b18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x157b1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157B1Cu;
    {
        const bool branch_taken_0x157b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B1Cu;
        // 0x157b20: 0xafb10124  sw          $s1, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b1c) {
            ctx->pc = 0x157B2Cu;
            return;
        }
    }
    ctx->pc = 0x157B24u;
    // 0x157b24: 0xc061920  jal         func_186480
    ctx->pc = 0x157B24u;
    SET_GPR_U32(ctx, 31, 0x157B2Cu);
    ctx->pc = 0x157B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B24u;
    // 0x157b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x157B24u, 0x157B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B2Cu;
}

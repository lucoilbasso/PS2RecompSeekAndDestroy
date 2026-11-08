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

// Function: entry_0012836c
// Address: 0x12836c - 0x128458
void entry_0012836c_0x12836c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012836c_0x12836c");
#endif

    ctx->pc = 0x12836cu;

    // 0x12836c: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x12836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
    // 0x128370: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x128370u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x128374: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x128374u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x128378: 0x354a8005  ori         $t2, $t2, 0x8005
    ctx->pc = 0x128378u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32773);
    // 0x12837c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x12837cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x128380: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x128380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x128384: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x128384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x128388: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x128388u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x12838c: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x12838cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x128390: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x128390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x128394: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x128394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x128398: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x128398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12839c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1283a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1283a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1283a4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1283a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1283a8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1283a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1283ac: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1283acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1283b0: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x1283b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x1283b4: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1283b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1283b8: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x1283b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x1283bc: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1283bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1283c0: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x1283c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x1283c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1283c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1283c8: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x1283c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1283cc: 0x24490050  addiu       $t1, $v0, 0x50
    ctx->pc = 0x1283ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1283d0: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x1283d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x1283d4: 0x240b004e  addiu       $t3, $zero, 0x4E
    ctx->pc = 0x1283d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1283d8: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1283d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1283dc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1283dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1283e0: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x1283e0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x1283e4: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x1283e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1283e8: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1283e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1283ec: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1283ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1283f0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1283f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1283f4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1283f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1283f8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1283f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1283fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1283fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x128400: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x128400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x128404: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x128404u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x128408: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x128408u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x12840c: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x12840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x128410: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x128410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128414: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x128414u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x128418: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x128418u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x12841c: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x12841cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x128420: 0xfcec0008  sd          $t4, 0x8($a3)
    ctx->pc = 0x128420u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 12));
    // 0x128424: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x128424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x128428: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x128428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12842c: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x12842cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x128430: 0x86e20006  lh          $v0, 0x6($s7)
    ctx->pc = 0x128430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x128434: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128434u;
    {
        const bool branch_taken_0x128434 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x128438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128434u;
        // 0x128438: 0xc6f40020  lwc1        $f20, 0x20($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128434) {
            ctx->pc = 0x128458u;
            return;
        }
    }
    ctx->pc = 0x12843Cu;
    // 0x12843c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12843cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128444: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x128448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12844c: 0x0  nop
    ctx->pc = 0x12844cu;
    // NOP
    // 0x128450: 0x0  nop
    ctx->pc = 0x128450u;
    // NOP
    // 0x128454: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x128454u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    ctx->pc = 0x128458u;
}

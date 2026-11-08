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

// Function: entry_00150568
// Address: 0x150568 - 0x15060c
void entry_00150568_0x150568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150568_0x150568");
#endif

    ctx->pc = 0x150568u;

label_150568:
    // 0x150568: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x150568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15056c: 0x25070420  addiu       $a3, $t0, 0x420
    ctx->pc = 0x15056cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
    // 0x150570: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x150570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150574: 0x25060450  addiu       $a2, $t0, 0x450
    ctx->pc = 0x150574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1104));
    // 0x150578: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x150578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15057c: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x15057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150584: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x150584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150588: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x150588u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x15058c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x15058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150590: 0xc5440000  lwc1        $f4, 0x0($t2)
    ctx->pc = 0x150590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x150594: 0xad000440  sw          $zero, 0x440($t0)
    ctx->pc = 0x150594u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1088), GPR_U32(ctx, 0));
    // 0x150598: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x150598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15059c: 0xad000444  sw          $zero, 0x444($t0)
    ctx->pc = 0x15059cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1092), GPR_U32(ctx, 0));
    // 0x1505a0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1505a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1505a4: 0xad000448  sw          $zero, 0x448($t0)
    ctx->pc = 0x1505a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1096), GPR_U32(ctx, 0));
    // 0x1505a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1505a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1505ac: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1505acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1505b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1505b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1505b4: 0xe5000430  swc1        $f0, 0x430($t0)
    ctx->pc = 0x1505b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 1072), bits); }
    // 0x1505b8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x1505b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1505bc: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x1505bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1505c0: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x1505c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1505c4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1505c8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1505c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1505cc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1505ccu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1505d0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1505d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1505d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1505d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1505d8: 0xa100044f  sb          $zero, 0x44F($t0)
    ctx->pc = 0x1505d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1505dc: 0xa100044e  sb          $zero, 0x44E($t0)
    ctx->pc = 0x1505dcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1102), (uint8_t)GPR_U32(ctx, 0));
    // 0x1505e0: 0xa100044d  sb          $zero, 0x44D($t0)
    ctx->pc = 0x1505e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1101), (uint8_t)GPR_U32(ctx, 0));
    // 0x1505e4: 0xa100044c  sb          $zero, 0x44C($t0)
    ctx->pc = 0x1505e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1100), (uint8_t)GPR_U32(ctx, 0));
    // 0x1505e8: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x1505e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1505ec: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1505ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1505f0: 0x8e4301ec  lw          $v1, 0x1EC($s2)
    ctx->pc = 0x1505f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x1505f4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1505f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1505f8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1505f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1505fc: 0xad030434  sw          $v1, 0x434($t0)
    ctx->pc = 0x1505fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1076), GPR_U32(ctx, 3));
    // 0x150600: 0x581ffd9  bgez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x150600u;
    {
        const bool branch_taken_0x150600 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x150604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150600u;
        // 0x150604: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150600) {
            ctx->pc = 0x150568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150568;
        }
    }
    ctx->pc = 0x150608u;
    // 0x150608: 0x26440600  addiu       $a0, $s2, 0x600
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    ctx->pc = 0x15060cu;
}

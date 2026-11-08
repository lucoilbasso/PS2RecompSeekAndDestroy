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

// Function: entry_00153ea4
// Address: 0x153ea4 - 0x153f04
void entry_00153ea4_0x153ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153ea4_0x153ea4");
#endif

    ctx->pc = 0x153ea4u;

    // 0x153ea4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x153ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x153ea8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153eac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153eb0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x153eb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x153eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153eb8: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x153ebc: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x153ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x153ec0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x153ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153ec4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x153ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ec8: 0x92220575  lbu         $v0, 0x575($s1)
    ctx->pc = 0x153ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1397)));
    // 0x153ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153ed0: 0x8c850328  lw          $a1, 0x328($a0)
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x153ed4: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x153ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x153ed8: 0x2c490002  sltiu       $t1, $v0, 0x2
    ctx->pc = 0x153ed8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x153edc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153ee0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x153ee4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x153ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153ee8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x153EE8u;
    {
        const bool branch_taken_0x153ee8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EE8u;
        // 0x153eec: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ee8) {
            ctx->pc = 0x153F04u;
            return;
        }
    }
    ctx->pc = 0x153EF0u;
    // 0x153ef0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x153ef0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x153ef4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x153ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x153ef8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x153ef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x153efc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x153efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x153f00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x153f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x153f04u;
}

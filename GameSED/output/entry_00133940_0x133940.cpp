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

// Function: entry_00133940
// Address: 0x133940 - 0x13398c
void entry_00133940_0x133940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133940_0x133940");
#endif

    ctx->pc = 0x133940u;

    // 0x133940: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x133940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x133944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x133948: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x133948u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x13394c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x13394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133950: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x133950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x133954: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x133954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x133958: 0x2446ffc0  addiu       $a2, $v0, -0x40
    ctx->pc = 0x133958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x13395c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13395cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x133960: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x133960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133964: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x133964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x133968: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x133968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13396c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13396Cu;
    {
        const bool branch_taken_0x13396c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13396Cu;
        // 0x133970: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13396c) {
            ctx->pc = 0x13398Cu;
            return;
        }
    }
    ctx->pc = 0x133974u;
    // 0x133974: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x133974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x133978: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x133978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13397c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13397cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x133980: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x133980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x133984: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x133984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133988: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x133988u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    ctx->pc = 0x13398cu;
}

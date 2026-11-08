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

// Function: entry_00106e10
// Address: 0x106e10 - 0x106e50
void entry_00106e10_0x106e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106e10_0x106e10");
#endif

    ctx->pc = 0x106e10u;

    // 0x106e10: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x106e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106e14: 0x1453000e  bne         $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x106E14u;
    {
        const bool branch_taken_0x106e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x106E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E14u;
        // 0x106e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e14) {
            ctx->pc = 0x106E50u;
            return;
        }
    }
    ctx->pc = 0x106E1Cu;
    // 0x106e1c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x106e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x106e20: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x106e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x106e24: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x106e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106e28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x106e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106e2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x106e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106e30: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x106e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x106e34: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x106e34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x106e38: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x106e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x106e3c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x106e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x106e40: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x106e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x106e44: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x106e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x106e48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x106E48u;
    {
        const bool branch_taken_0x106e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E48u;
        // 0x106e4c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e48) {
            ctx->pc = 0x106E8Cu;
            return;
        }
    }
    ctx->pc = 0x106E50u;
}

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

// Function: entry_001824f4
// Address: 0x1824f4 - 0x18255c
void entry_001824f4_0x1824f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001824f4_0x1824f4");
#endif

    ctx->pc = 0x1824f4u;

    // 0x1824f4: 0x14a0004a  bnez        $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1824F4u;
    {
        const bool branch_taken_0x1824f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1824F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824F4u;
        // 0x1824f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824f4) {
            ctx->pc = 0x182620u;
            return;
        }
    }
    ctx->pc = 0x1824FCu;
    // 0x1824fc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1824fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182500: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x182500u;
    {
        const bool branch_taken_0x182500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182500u;
        // 0x182504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182500) {
            ctx->pc = 0x182620u;
            return;
        }
    }
    ctx->pc = 0x182508u;
    // 0x182508: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x182508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18250c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x18250cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x182510: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x182510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x182514: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x182514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182518: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x182518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18251c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x18251cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x182520: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x182520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x182524: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x182524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x182528: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x182528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x18252c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18252cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x182530: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x182530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x182534: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x182538: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18253c: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x18253cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x182540: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x182540u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x182544: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x182544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x182548: 0x10910004  beq         $a0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182548u;
    {
        const bool branch_taken_0x182548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x18254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182548u;
        // 0x18254c: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182548) {
            ctx->pc = 0x18255Cu;
            return;
        }
    }
    ctx->pc = 0x182550u;
    // 0x182550: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x182550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x182554: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182554u;
    {
        const bool branch_taken_0x182554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x182558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182554u;
        // 0x182558: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182554) {
            ctx->pc = 0x18256Cu;
            return;
        }
    }
    ctx->pc = 0x18255Cu;
}

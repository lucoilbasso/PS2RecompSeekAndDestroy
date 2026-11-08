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

// Function: entry_0014dd18
// Address: 0x14dd18 - 0x14dd58
void entry_0014dd18_0x14dd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dd18_0x14dd18");
#endif

    ctx->pc = 0x14dd18u;

    // 0x14dd18: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x14DD18u;
    {
        const bool branch_taken_0x14dd18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD18u;
        // 0x14dd1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd18) {
            ctx->pc = 0x14DD58u;
            return;
        }
    }
    ctx->pc = 0x14DD20u;
    // 0x14dd20: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x14dd20u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14dd24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14dd24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14dd28: 0xc78181d0  lwc1        $f1, -0x7E30($gp)
    ctx->pc = 0x14dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dd2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14dd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14dd30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14dd30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14dd34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14dd34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14dd38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14dd38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14dd3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14dd3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14dd40: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14dd40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14dd44: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14dd44u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14dd48: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x14dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14dd4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DD4Cu;
    {
        const bool branch_taken_0x14dd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD4Cu;
        // 0x14dd50: 0x2402030b  addiu       $v0, $zero, 0x30B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 779));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd4c) {
            ctx->pc = 0x14DD5Cu;
            return;
        }
    }
    ctx->pc = 0x14DD54u;
    // 0x14dd54: 0x0  nop
    ctx->pc = 0x14dd54u;
    // NOP
    ctx->pc = 0x14dd58u;
}

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

// Function: entry_0019aa1c
// Address: 0x19aa1c - 0x19aa58
void entry_0019aa1c_0x19aa1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aa1c_0x19aa1c");
#endif

    ctx->pc = 0x19aa1cu;

    // 0x19aa1c: 0x18c00019  blez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x19AA1Cu;
    {
        const bool branch_taken_0x19aa1c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x19AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA1Cu;
        // 0x19aa20: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa1c) {
            ctx->pc = 0x19AA84u;
            return;
        }
    }
    ctx->pc = 0x19AA24u;
    // 0x19aa24: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19aa24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19aa28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19aa28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19aa2c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x19aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x19aa30: 0x3a63821  addu        $a3, $sp, $a2
    ctx->pc = 0x19aa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x19aa34: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19aa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19aa38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19aa38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19aa3c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x19aa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aa40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19aa44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19aa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19aa48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19aa4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19aa50: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x19aa50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x19aa54: 0x0  nop
    ctx->pc = 0x19aa54u;
    // NOP
    ctx->pc = 0x19aa58u;
}

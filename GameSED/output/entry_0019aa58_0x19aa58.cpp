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

// Function: entry_0019aa58
// Address: 0x19aa58 - 0x19aa84
void entry_0019aa58_0x19aa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aa58_0x19aa58");
#endif

    ctx->pc = 0x19aa58u;

label_19aa58:
    // 0x19aa58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19aa58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x19aa5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19aa60: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x19aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19aa64: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19aa64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19aa68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19aa68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19aa6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19aa6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19aa70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19aa74: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x19aa78: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19aa78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aa7c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AA7Cu;
    {
        const bool branch_taken_0x19aa7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA7Cu;
        // 0x19aa80: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa7c) {
            ctx->pc = 0x19AA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19AA84u;
}

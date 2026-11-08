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

// Function: entry_00130a38
// Address: 0x130a38 - 0x130a60
void entry_00130a38_0x130a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130a38_0x130a38");
#endif

    ctx->pc = 0x130a38u;

    // 0x130a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130a3c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x130a3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x130a40: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x130a40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x130a44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x130a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x130a48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x130a48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x130a4c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x130a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x130a50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130A50u;
    {
        const bool branch_taken_0x130a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A50u;
        // 0x130a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a50) {
            ctx->pc = 0x130A60u;
            return;
        }
    }
    ctx->pc = 0x130A58u;
    // 0x130a58: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x130A58u;
    {
        const bool branch_taken_0x130a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A58u;
        // 0x130a5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a58) {
            ctx->pc = 0x130C04u;
            return;
        }
    }
    ctx->pc = 0x130A60u;
}

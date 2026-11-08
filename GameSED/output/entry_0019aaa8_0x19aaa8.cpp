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

// Function: entry_0019aaa8
// Address: 0x19aaa8 - 0x19aad0
void entry_0019aaa8_0x19aaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aaa8_0x19aaa8");
#endif

    ctx->pc = 0x19aaa8u;

    // 0x19aaa8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19aaa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19aaac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19aaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19aab0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19aab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x19aab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19aab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aab8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19aab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aabc: 0x0  nop
    ctx->pc = 0x19aabcu;
    // NOP
    // 0x19aac0: 0x0  nop
    ctx->pc = 0x19aac0u;
    // NOP
    // 0x19aac4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x19aac4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x19aac8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19AAC8u;
    {
        const bool branch_taken_0x19aac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aac8) {
            ctx->pc = 0x19AACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AAC8u;
            // 0x19aacc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AAD0u;
            return;
        }
    }
    ctx->pc = 0x19AAD0u;
}

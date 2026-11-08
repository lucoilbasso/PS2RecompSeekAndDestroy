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

// Function: entry_001430f8
// Address: 0x1430f8 - 0x143130
void entry_001430f8_0x1430f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001430f8_0x1430f8");
#endif

    ctx->pc = 0x1430f8u;

    // 0x1430f8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1430f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430fc: 0x25254000  addiu       $a1, $t1, 0x4000
    ctx->pc = 0x1430fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16384));
    // 0x143100: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x143100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143104: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x143104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x143108: 0x84c40002  lh          $a0, 0x2($a2)
    ctx->pc = 0x143108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x14310c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14310cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143110: 0x21023  negu        $v0, $v0
    ctx->pc = 0x143110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x143114: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x143114u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x143118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14311c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14311cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143120: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x143120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x143124: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x143124u;
    {
        const bool branch_taken_0x143124 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x143128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143124u;
        // 0x143128: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143124) {
            ctx->pc = 0x143160u;
            return;
        }
    }
    ctx->pc = 0x14312Cu;
    // 0x14312c: 0x25450001  addiu       $a1, $t2, 0x1
    ctx->pc = 0x14312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x143130u;
}

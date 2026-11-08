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

// Function: entry_0018d790
// Address: 0x18d790 - 0x18d7e0
void entry_0018d790_0x18d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d790_0x18d790");
#endif

    ctx->pc = 0x18d790u;

    // 0x18d790: 0x8e250254  lw          $a1, 0x254($s1)
    ctx->pc = 0x18d790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x18d794: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x18d794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x18d798: 0x8e230208  lw          $v1, 0x208($s1)
    ctx->pc = 0x18d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x18d79c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d79cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18d7a0: 0x97a60004  lhu         $a2, 0x4($sp)
    ctx->pc = 0x18d7a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18d7a4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x18d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d7a8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18d7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18d7ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d7b0: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x18d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18d7b4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x18d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d7b8: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x18d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x18d7bc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18d7bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x18d7c0: 0xa6260244  sh          $a2, 0x244($s1)
    ctx->pc = 0x18d7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 6));
    // 0x18d7c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18d7c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18d7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d7cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d7d0: 0xa6270246  sh          $a3, 0x246($s1)
    ctx->pc = 0x18d7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 7));
    // 0x18d7d4: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x18d7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18d7d8: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x18D7D8u;
    {
        const bool branch_taken_0x18d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7D8u;
        // 0x18d7dc: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7d8) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D7E0u;
}

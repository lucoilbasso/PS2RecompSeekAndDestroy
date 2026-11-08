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

// Function: entry_0013b904
// Address: 0x13b904 - 0x13b958
void entry_0013b904_0x13b904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b904_0x13b904");
#endif

    ctx->pc = 0x13b904u;

    // 0x13b904: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x13B904u;
    {
        const bool branch_taken_0x13b904 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B904u;
        // 0x13b908: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b904) {
            ctx->pc = 0x13B958u;
            return;
        }
    }
    ctx->pc = 0x13B90Cu;
    // 0x13b90c: 0x5543ff7c  bnel        $t2, $v1, . + 4 + (-0x84 << 2)
    ctx->pc = 0x13B90Cu;
    {
        const bool branch_taken_0x13b90c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x13b90c) {
            ctx->pc = 0x13B910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B90Cu;
            // 0x13b910: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B700u;
            return;
        }
    }
    ctx->pc = 0x13B914u;
    // 0x13b914: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13b914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x13b918: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x13b918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b91c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x13b91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13b920: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x13b920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b924: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x13b924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b928: 0x24846878  addiu       $a0, $a0, 0x6878
    ctx->pc = 0x13b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26744));
    // 0x13b92c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x13b92cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13b930: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x13b930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b934: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x13b934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13b938: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x13b938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b93c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x13b93cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13b940: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x13b940u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b944: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x13b944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13b948: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x13b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13b94c: 0x80740b2  j           func_1D02C8
    ctx->pc = 0x13B94Cu;
    ctx->pc = 0x13B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B94Cu;
    // 0x13b950: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    printf_0x1d02c8(rdram, ctx, runtime); return;
    ctx->pc = 0x13B954u;
    // 0x13b954: 0x0  nop
    ctx->pc = 0x13b954u;
    // NOP
    ctx->pc = 0x13b958u;
}

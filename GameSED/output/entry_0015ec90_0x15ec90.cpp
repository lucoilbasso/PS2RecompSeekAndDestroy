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

// Function: entry_0015ec90
// Address: 0x15ec90 - 0x15ece0
void entry_0015ec90_0x15ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec90_0x15ec90");
#endif

    ctx->pc = 0x15ec90u;

    // 0x15ec90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15ec94: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15ec98: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15ec9c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x15eca0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x15eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x15eca4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x15eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x15eca8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x15ecac: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x15ecacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15ecb0: 0x96a3001e  lhu         $v1, 0x1E($s5)
    ctx->pc = 0x15ecb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x15ecb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15ecb8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ecbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15ecc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15ecc4: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x15ecc4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ecc8: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x15ECC8u;
    {
        const bool branch_taken_0x15ecc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x15ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECC8u;
        // 0x15eccc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecc8) {
            ctx->pc = 0x15ECE0u;
            return;
        }
    }
    ctx->pc = 0x15ECD0u;
    // 0x15ecd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ecd4: 0x38a20007  xori        $v0, $a1, 0x7
    ctx->pc = 0x15ecd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x15ecd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15ECD8u;
    {
        const bool branch_taken_0x15ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECD8u;
        // 0x15ecdc: 0xc2180b  movn        $v1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecd8) {
            ctx->pc = 0x15ECE4u;
            return;
        }
    }
    ctx->pc = 0x15ECE0u;
}

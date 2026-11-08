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

// Function: entry_00186a8c
// Address: 0x186a8c - 0x186adc
void entry_00186a8c_0x186a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186a8c_0x186a8c");
#endif

    ctx->pc = 0x186a8cu;

    // 0x186a8c: 0xe7ba00a8  swc1        $f26, 0xA8($sp)
    ctx->pc = 0x186a8cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x186a90: 0xe7b900a0  swc1        $f25, 0xA0($sp)
    ctx->pc = 0x186a90u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x186a94: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x186a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x186a98: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x186a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x186a9c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x186a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x186aa0: 0xe7b80098  swc1        $f24, 0x98($sp)
    ctx->pc = 0x186aa0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x186aa4: 0xe7b70090  swc1        $f23, 0x90($sp)
    ctx->pc = 0x186aa4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x186aa8: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x186aa8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x186aac: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x186aacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x186ab0: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x186ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x186ab4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x186ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x186ab8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x186ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x186abc: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x186abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x186ac0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x186ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x186ac4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186AC4u;
    {
        const bool branch_taken_0x186ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AC4u;
        // 0x186ac8: 0x4600ce86  mov.s       $f26, $f25 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ac4) {
            ctx->pc = 0x186ADCu;
            return;
        }
    }
    ctx->pc = 0x186ACCu;
    // 0x186acc: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x186accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186ad0: 0xc64101b4  lwc1        $f1, 0x1B4($s2)
    ctx->pc = 0x186ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186ad4: 0x46190680  add.s       $f26, $f0, $f25
    ctx->pc = 0x186ad4u;
    ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x186ad8: 0x46190e40  add.s       $f25, $f1, $f25
    ctx->pc = 0x186ad8u;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[25]);
    ctx->pc = 0x186adcu;
}

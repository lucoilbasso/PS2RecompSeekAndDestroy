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

// Function: entry_00122098
// Address: 0x122098 - 0x1220d0
void entry_00122098_0x122098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122098_0x122098");
#endif

    ctx->pc = 0x122098u;

    // 0x122098: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x122098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x12209c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12209cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1220a0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1220a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1220a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1220a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1220a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1220a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1220ac: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1220acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x1220b0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1220b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1220b4: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1220b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1220b8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1220B8u;
    {
        const bool branch_taken_0x1220b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1220BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220B8u;
        // 0x1220bc: 0xe6000124  swc1        $f0, 0x124($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220b8) {
            ctx->pc = 0x122140u;
            return;
        }
    }
    ctx->pc = 0x1220C0u;
    // 0x1220c0: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1220c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1220c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1220c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1220c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1220C8u;
    {
        const bool branch_taken_0x1220c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220C8u;
        // 0x1220cc: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220c8) {
            ctx->pc = 0x122140u;
            return;
        }
    }
    ctx->pc = 0x1220D0u;
}

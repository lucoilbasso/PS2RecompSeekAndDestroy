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

// Function: entry_00129160
// Address: 0x129160 - 0x1291d0
void entry_00129160_0x129160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129160_0x129160");
#endif

    ctx->pc = 0x129160u;

    // 0x129160: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129164: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12916c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x12916cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129170: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129174: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x129174u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x129178: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x129178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12917c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12917cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x129180: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129184: 0xe4550004  swc1        $f21, 0x4($v0)
    ctx->pc = 0x129184u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x129188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12918c: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x12918cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x129190: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x129190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x129194: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x129194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x129198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12919c: 0xe4760004  swc1        $f22, 0x4($v1)
    ctx->pc = 0x12919cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1291a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1291a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1291a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1291a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1291a8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1291ac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1291acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1291b0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1291b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1291b4: 0xe4950008  swc1        $f21, 0x8($a0)
    ctx->pc = 0x1291b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1291b8: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x1291b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1291bc: 0xe4970004  swc1        $f23, 0x4($a0)
    ctx->pc = 0x1291bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1291c0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1291c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1291c4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1291C4u;
    {
        const bool branch_taken_0x1291c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291C4u;
        // 0x1291c8: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291c4) {
            ctx->pc = 0x1292A4u;
            return;
        }
    }
    ctx->pc = 0x1291CCu;
    // 0x1291cc: 0x0  nop
    ctx->pc = 0x1291ccu;
    // NOP
    ctx->pc = 0x1291d0u;
}

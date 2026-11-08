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

// Function: entry_001366ac
// Address: 0x1366ac - 0x1366fc
void entry_001366ac_0x1366ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001366ac_0x1366ac");
#endif

    ctx->pc = 0x1366acu;

    // 0x1366ac: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1366acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1366b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1366b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1366b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1366b8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1366b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1366bc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1366bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1366c0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1366c4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1366c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1366c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1366c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1366cc: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x1366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x1366d0: 0x262200b  movn        $a0, $s3, $v0
    ctx->pc = 0x1366d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x1366d4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1366d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1366d8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1366d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1366dc: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x1366dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x1366e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1366E0u;
    {
        const bool branch_taken_0x1366e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366E0u;
        // 0x1366e4: 0xe60100e4  swc1        $f1, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366e0) {
            ctx->pc = 0x136700u;
            return;
        }
    }
    ctx->pc = 0x1366E8u;
    // 0x1366e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1366e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1366ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1366ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1366f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1366F0u;
    {
        const bool branch_taken_0x1366f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1366F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366F0u;
        // 0x1366f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366f0) {
            ctx->pc = 0x1366FCu;
            return;
        }
    }
    ctx->pc = 0x1366F8u;
    // 0x1366f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1366f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1366fcu;
}

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

// Function: entry_0013b5c0
// Address: 0x13b5c0 - 0x13b604
void entry_0013b5c0_0x13b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b5c0_0x13b5c0");
#endif

    ctx->pc = 0x13b5c0u;

    // 0x13b5c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x13b5c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x13b5c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13b5c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13B5C8u;
    {
        const bool branch_taken_0x13b5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5C8u;
        // 0x13b5cc: 0xae200248  sw          $zero, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5c8) {
            ctx->pc = 0x13B64Cu;
            return;
        }
    }
    ctx->pc = 0x13B5D0u;
    // 0x13b5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b5d4: 0x167e0011  bne         $s3, $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x13B5D4u;
    {
        const bool branch_taken_0x13b5d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        ctx->pc = 0x13B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5D4u;
        // 0x13b5d8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5d4) {
            ctx->pc = 0x13B61Cu;
            return;
        }
    }
    ctx->pc = 0x13B5DCu;
    // 0x13b5dc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x13b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b5e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13b5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13b5e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b5e8: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x13b5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x13b5ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b5f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b5f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B5F4u;
    {
        const bool branch_taken_0x13b5f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b5f4) {
            ctx->pc = 0x13B604u;
            return;
        }
    }
    ctx->pc = 0x13B5FCu;
    // 0x13b5fc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x13b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b600: 0x461500a9  min.s       $f2, $f0, $f21
    ctx->pc = 0x13b600u;
    ctx->f[2] = std::min(ctx->f[0], ctx->f[21]);
    ctx->pc = 0x13b604u;
}

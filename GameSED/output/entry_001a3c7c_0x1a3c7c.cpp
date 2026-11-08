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

// Function: entry_001a3c7c
// Address: 0x1a3c7c - 0x1a3cd0
void entry_001a3c7c_0x1a3c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c7c_0x1a3c7c");
#endif

    ctx->pc = 0x1a3c7cu;

    // 0x1a3c7c: 0x10c00094  beqz        $a2, . + 4 + (0x94 << 2)
    ctx->pc = 0x1A3C7Cu;
    {
        const bool branch_taken_0x1a3c7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C7Cu;
        // 0x1a3c80: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c7c) {
            ctx->pc = 0x1A3ED0u;
            return;
        }
    }
    ctx->pc = 0x1A3C84u;
    // 0x1a3c84: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1a3c84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a3c88: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1a3c88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3c8c: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x1a3c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a3c90: 0x38620010  xori        $v0, $v1, 0x10
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x1a3c94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3C94u;
    {
        const bool branch_taken_0x1a3c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C94u;
        // 0x1a3c98: 0x38620011  xori        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c94) {
            ctx->pc = 0x1A3CD0u;
            return;
        }
    }
    ctx->pc = 0x1A3C9Cu;
    // 0x1a3c9c: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x1a3c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a3ca0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A3CA0u;
    {
        const bool branch_taken_0x1a3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ca0) {
            ctx->pc = 0x1A3CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3CA0u;
            // 0x1a3ca4: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3D1Cu;
            return;
        }
    }
    ctx->pc = 0x1A3CA8u;
    // 0x1a3ca8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1a3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3cb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a3cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3cb4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a3cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a3cb8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1a3cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3cbc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1a3cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a3cc0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1a3cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3cc4: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x1a3cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1a3cc8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A3CC8u;
    {
        const bool branch_taken_0x1a3cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cc8) {
            ctx->pc = 0x1A3D48u;
            return;
        }
    }
    ctx->pc = 0x1A3CD0u;
}

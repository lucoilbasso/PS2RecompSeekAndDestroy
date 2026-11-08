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

// Function: entry_0014429c
// Address: 0x14429c - 0x1442fc
void entry_0014429c_0x14429c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014429c_0x14429c");
#endif

    ctx->pc = 0x14429cu;

    // 0x14429c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x14429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1442a0: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1442a4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1442a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1442a8: 0x24422680  addiu       $v0, $v0, 0x2680
    ctx->pc = 0x1442a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
    // 0x1442ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1442b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1442b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1442b4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1442b8: 0x246600a0  addiu       $a2, $v1, 0xA0
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x1442bc: 0xac900044  sw          $s0, 0x44($a0)
    ctx->pc = 0x1442bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 16));
    // 0x1442c0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1442c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1442c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1442c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1442c8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1442c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1442cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1442ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1442d0: 0x88850003  lwl         $a1, 0x3($a0)
    ctx->pc = 0x1442d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x1442d4: 0x98850000  lwr         $a1, 0x0($a0)
    ctx->pc = 0x1442d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x1442d8: 0xa86500a7  swl         $a1, 0xA7($v1)
    ctx->pc = 0x1442d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 167); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1442dc: 0xb86500a4  swr         $a1, 0xA4($v1)
    ctx->pc = 0x1442dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 164); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1442e0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1442e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1442e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1442e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1442e8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1442e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1442ec: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1442ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1442f0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1442f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1442f4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1442f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1442f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1442f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1442fcu;
}

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

// Function: entry_00120340
// Address: 0x120340 - 0x120398
void entry_00120340_0x120340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120340_0x120340");
#endif

    ctx->pc = 0x120340u;

    // 0x120340: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x120340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x120344: 0x3c0a0025  lui         $t2, 0x25
    ctx->pc = 0x120344u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)37 << 16));
    // 0x120348: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x120348u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12034c: 0xdc490028  ld          $t1, 0x28($v0)
    ctx->pc = 0x12034cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x120350: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x120350u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120354: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x120354u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x120358: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x120358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12035c: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x12035cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x120360: 0xdc470020  ld          $a3, 0x20($v0)
    ctx->pc = 0x120360u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x120364: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x120364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x120368: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x120368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x12036c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x12036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x120370: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x120370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x120374: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x120374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x120378: 0xffa90028  sd          $t1, 0x28($sp)
    ctx->pc = 0x120378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 9));
    // 0x12037c: 0x254548b0  addiu       $a1, $t2, 0x48B0
    ctx->pc = 0x12037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 18608));
    // 0x120380: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x120380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x120384: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x120384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x120388: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x120388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2548B8u));
    // 0x12038c: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x12038cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120390: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x120390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120394: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x120394u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x120398u;
}

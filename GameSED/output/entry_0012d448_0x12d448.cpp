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

// Function: entry_0012d448
// Address: 0x12d448 - 0x12d490
void entry_0012d448_0x12d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d448_0x12d448");
#endif

    ctx->pc = 0x12d448u;

    // 0x12d448: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x12d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x12d44c: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x12d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x12d450: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x12d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x12d454: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x12d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x12d458: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x12d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x12d45c: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x12d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x12d460: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x12d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x12d464: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x12d464u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x12d468: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x12d468u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x12d46c: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x12d46cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x12d470: 0x8ca20164  lw          $v0, 0x164($a1)
    ctx->pc = 0x12d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
    // 0x12d474: 0xafa40144  sw          $a0, 0x144($sp)
    ctx->pc = 0x12d474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
    // 0x12d478: 0xc455017c  lwc1        $f21, 0x17C($v0)
    ctx->pc = 0x12d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d47c: 0xc4560180  lwc1        $f22, 0x180($v0)
    ctx->pc = 0x12d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12d480: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12d484: 0x8c94015c  lw          $s4, 0x15C($a0)
    ctx->pc = 0x12d484u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x12d488: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x12d488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x12d48c: 0x0  nop
    ctx->pc = 0x12d48cu;
    // NOP
    ctx->pc = 0x12d490u;
}

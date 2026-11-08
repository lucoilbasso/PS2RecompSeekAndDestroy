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

// Function: entry_0012678c
// Address: 0x12678c - 0x126808
void entry_0012678c_0x12678c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012678c_0x12678c");
#endif

    ctx->pc = 0x12678cu;

    // 0x12678c: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x12678cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x126790: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x126790u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x126794: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x126794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x126798: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x126798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x12679c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x12679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1267a0: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x1267a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x1267a4: 0xa3a20082  sb          $v0, 0x82($sp)
    ctx->pc = 0x1267a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x1267a8: 0xa3a30083  sb          $v1, 0x83($sp)
    ctx->pc = 0x1267a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x1267ac: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x1267acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x1267b0: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x1267b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x1267b4: 0xa3a20081  sb          $v0, 0x81($sp)
    ctx->pc = 0x1267b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 2));
    // 0x1267b8: 0xc79680fc  lwc1        $f22, -0x7F04($gp)
    ctx->pc = 0x1267b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1267bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1267bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1267c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1267c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1267c4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1267c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1267c8: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1267c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1267cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1267ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267d0: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x1267d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x1267d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1267d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267d8: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x1267d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x1267dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1267dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267e0: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x1267e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x1267e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1267e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267e8: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x1267e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x1267ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1267ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267f0: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x1267f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x1267f4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1267f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267f8: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x1267f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x1267fc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1267fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126800: 0x8ef001b0  lw          $s0, 0x1B0($s7)
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 432)));
    // 0x126804: 0x0  nop
    ctx->pc = 0x126804u;
    // NOP
    ctx->pc = 0x126808u;
}

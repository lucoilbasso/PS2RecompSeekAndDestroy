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

// Function: entry_00146c44
// Address: 0x146c44 - 0x146c90
void entry_00146c44_0x146c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146c44_0x146c44");
#endif

    ctx->pc = 0x146c44u;

    // 0x146c44: 0x26430030  addiu       $v1, $s2, 0x30
    ctx->pc = 0x146c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x146c48: 0xe7ab009c  swc1        $f11, 0x9C($sp)
    ctx->pc = 0x146c48u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x146c4c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x146c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c50: 0xe7a900ac  swc1        $f9, 0xAC($sp)
    ctx->pc = 0x146c50u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x146c54: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x146c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146c58: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x146c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x146c5c: 0xe7a800b8  swc1        $f8, 0xB8($sp)
    ctx->pc = 0x146c5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x146c60: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x146c60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x146c64: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x146c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x146c68: 0xe7aa0084  swc1        $f10, 0x84($sp)
    ctx->pc = 0x146c68u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x146c6c: 0xe7a80088  swc1        $f8, 0x88($sp)
    ctx->pc = 0x146c6cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x146c70: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x146c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x146c74: 0xe7ab0094  swc1        $f11, 0x94($sp)
    ctx->pc = 0x146c74u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x146c78: 0xe7a80098  swc1        $f8, 0x98($sp)
    ctx->pc = 0x146c78u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x146c7c: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x146c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x146c80: 0xe7a900a4  swc1        $f9, 0xA4($sp)
    ctx->pc = 0x146c80u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x146c84: 0xe7a800a8  swc1        $f8, 0xA8($sp)
    ctx->pc = 0x146c84u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x146c88: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x146c88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x146c8c: 0x0  nop
    ctx->pc = 0x146c8cu;
    // NOP
    ctx->pc = 0x146c90u;
}

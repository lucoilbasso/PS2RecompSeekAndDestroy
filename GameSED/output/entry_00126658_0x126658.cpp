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

// Function: entry_00126658
// Address: 0x126658 - 0x12668c
void entry_00126658_0x126658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126658_0x126658");
#endif

    ctx->pc = 0x126658u;

    // 0x126658: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x126658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12665c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12665cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126664: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x126664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x126668: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x126668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12666c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x12666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x126670: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x126670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x126674: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x126674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x126678: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x126678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12667c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x12667cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x126680: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x126680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x126684: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x126684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x126688: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x126688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    ctx->pc = 0x12668cu;
}

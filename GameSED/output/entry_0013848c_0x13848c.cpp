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

// Function: entry_0013848c
// Address: 0x13848c - 0x1384b8
void entry_0013848c_0x13848c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013848c_0x13848c");
#endif

    ctx->pc = 0x13848cu;

    // 0x13848c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138490: 0xaf808a20  sw          $zero, -0x75E0($gp)
    ctx->pc = 0x138490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 0));
    // 0x138494: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x138494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138498: 0xaf808a24  sw          $zero, -0x75DC($gp)
    ctx->pc = 0x138498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937124), GPR_U32(ctx, 0));
    // 0x13849c: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x13849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1384a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1384a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1384a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1384a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384a8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1384a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1384ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1384acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1384b0: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1384b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1384b4: 0x0  nop
    ctx->pc = 0x1384b4u;
    // NOP
    ctx->pc = 0x1384b8u;
}

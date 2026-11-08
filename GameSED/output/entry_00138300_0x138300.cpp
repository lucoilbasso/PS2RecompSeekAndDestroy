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

// Function: entry_00138300
// Address: 0x138300 - 0x138330
void entry_00138300_0x138300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138300_0x138300");
#endif

    ctx->pc = 0x138300u;

    // 0x138300: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x138304: 0xaf808a18  sw          $zero, -0x75E8($gp)
    ctx->pc = 0x138304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 0));
    // 0x138308: 0xaf808a1c  sw          $zero, -0x75E4($gp)
    ctx->pc = 0x138308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x13830c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13830cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x138310: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x138310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138314: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x138314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x138318: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x138318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13831c: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x13831cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x138320: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x138320u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x138324: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x138324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138328: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x138328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x13832c: 0x0  nop
    ctx->pc = 0x13832cu;
    // NOP
    ctx->pc = 0x138330u;
}

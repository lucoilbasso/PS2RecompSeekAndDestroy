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

// Function: entry_001507f8
// Address: 0x1507f8 - 0x150860
void entry_001507f8_0x1507f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001507f8_0x1507f8");
#endif

    ctx->pc = 0x1507f8u;

    // 0x1507f8: 0xae4203b0  sw          $v0, 0x3B0($s2)
    ctx->pc = 0x1507f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 944), GPR_U32(ctx, 2));
    // 0x1507fc: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x1507fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x150800: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x150804: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x150804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x150808: 0x246c9c00  addiu       $t4, $v1, -0x6400
    ctx->pc = 0x150808u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x15080c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x150810: 0x8e4803b0  lw          $t0, 0x3B0($s2)
    ctx->pc = 0x150810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x150814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150818: 0xc787821c  lwc1        $f7, -0x7DE4($gp)
    ctx->pc = 0x150818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15081c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x15081cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
    // 0x150820: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x150824: 0x8e739ba0  lw          $s3, -0x6460($s3)
    ctx->pc = 0x150824u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941600)));
    // 0x150828: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x150828u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
    // 0x15082c: 0xc7868220  lwc1        $f6, -0x7DE0($gp)
    ctx->pc = 0x15082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x150830: 0x4600b606  mov.s       $f24, $f22
    ctx->pc = 0x150830u;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
    // 0x150834: 0xc7858224  lwc1        $f5, -0x7DDC($gp)
    ctx->pc = 0x150834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x150838: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x150838u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x15083c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15083cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x150840: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x150840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x150844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150848: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x150848u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15084c: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x150850: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x150854: 0x4600b0c6  mov.s       $f3, $f22
    ctx->pc = 0x150854u;
    ctx->f[3] = FPU_MOV_S(ctx->f[22]);
    // 0x150858: 0x264602e4  addiu       $a2, $s2, 0x2E4
    ctx->pc = 0x150858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 740));
    // 0x15085c: 0x26450420  addiu       $a1, $s2, 0x420
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
    ctx->pc = 0x150860u;
}

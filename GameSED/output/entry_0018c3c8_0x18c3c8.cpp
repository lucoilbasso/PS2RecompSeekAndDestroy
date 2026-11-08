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

// Function: entry_0018c3c8
// Address: 0x18c3c8 - 0x18c410
void entry_0018c3c8_0x18c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c3c8_0x18c3c8");
#endif

    ctx->pc = 0x18c3c8u;

    // 0x18c3c8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x18c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x18c3cc: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18c3d0: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x18c3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x18c3d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c3d8: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x18c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x18c3dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x18c3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18c3e0: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x18c3e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18c3e4: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x18c3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18c3e8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x18c3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x18c3ec: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x18c3ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18c3f0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x18c3f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18c3f4: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x18c3f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x18c3f8: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x18c3f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18c3fc: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x18c3fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x18c400: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x18c400u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18c404: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x18c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x18c408: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x18c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18c40c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x18c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x18c410u;
}

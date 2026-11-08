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

// Function: entry_00147ae8
// Address: 0x147ae8 - 0x147b18
void entry_00147ae8_0x147ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147ae8_0x147ae8");
#endif

    ctx->pc = 0x147ae8u;

    // 0x147ae8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x147ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x147aec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x147aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x147af0: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x147af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147af4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x147af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x147af8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x147af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147afc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x147afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x147b00: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x147b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x147b04: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x147b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147b08: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x147b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x147b0c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x147b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147b10: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x147b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147b14: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x147b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    ctx->pc = 0x147b18u;
}

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

// Function: entry_0019f378
// Address: 0x19f378 - 0x19f3c8
void entry_0019f378_0x19f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f378_0x19f378");
#endif

    ctx->pc = 0x19f378u;

    // 0x19f378: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x19f378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x19f37c: 0x1642024  and         $a0, $t3, $a0
    ctx->pc = 0x19f37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x19f380: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f384: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x19f384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x19f388: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19f388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x19f38c: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x19f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x19f390: 0x8d2824  and         $a1, $a0, $t5
    ctx->pc = 0x19f390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x19f394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19f398: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x19f398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x19f39c: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x19f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x19f3a0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x19f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x19f3a4: 0x4d3024  and         $a2, $v0, $t5
    ctx->pc = 0x19f3a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x19f3a8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19f3ac: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19f3b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19f3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19f3b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19f3b8: 0xaca9fff0  sw          $t1, -0x10($a1)
    ctx->pc = 0x19f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 9));
    // 0x19f3bc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x19f3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19f3c4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19f3c8u;
}

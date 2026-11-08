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

// Function: entry_001c829c
// Address: 0x1c829c - 0x1c82f8
void entry_001c829c_0x1c829c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c829c_0x1c829c");
#endif

    ctx->pc = 0x1c829cu;

    // 0x1c829c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x1c829cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c82a0: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C82A0u;
    {
        const bool branch_taken_0x1c82a0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1c82a0) {
            ctx->pc = 0x1C82F8u;
            return;
        }
    }
    ctx->pc = 0x1C82A8u;
    // 0x1c82a8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1c82a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c82ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c82acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c82b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c82b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c82b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c82b8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c82bc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1c82bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1c82c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c82c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c82c4: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1c82c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1c82c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c82c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c82cc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c82ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c82d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c82d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c82d4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1c82d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1c82d8: 0x18c027  nor         $t8, $zero, $t8
    ctx->pc = 0x1c82d8u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 24)));
    // 0x1c82dc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1c82dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1c82e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c82e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c82e4: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x1c82e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1c82e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c82e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c82ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c82f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c82f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c82f4: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x1c82f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    ctx->pc = 0x1c82f8u;
}

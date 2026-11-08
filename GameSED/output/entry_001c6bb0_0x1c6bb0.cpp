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

// Function: entry_001c6bb0
// Address: 0x1c6bb0 - 0x1c6be0
void entry_001c6bb0_0x1c6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6bb0_0x1c6bb0");
#endif

    ctx->pc = 0x1c6bb0u;

    // 0x1c6bb0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c6bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c6bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6bb8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c6bb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c6bbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c6bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6bc0: 0x2493fbea  addiu       $s3, $a0, -0x416
    ctx->pc = 0x1c6bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966250));
    // 0x1c6bc4: 0x131d00  sll         $v1, $s3, 20
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x1c6bc8: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c6bcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c6bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c6bd0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c6bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6bd4: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1c6bd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c6bd8: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1c6bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c6bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1c6be0u;
}

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

// Function: entry_001ab0f4
// Address: 0x1ab0f4 - 0x1ab168
void entry_001ab0f4_0x1ab0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab0f4_0x1ab0f4");
#endif

    ctx->pc = 0x1ab0f4u;

    // 0x1ab0f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab0f8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1ab0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab0fc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1ab0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1ab100: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x1ab100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x1ab104: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ab104u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x1ab108: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1ab108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab10c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1ab10cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x1ab110: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x1ab110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x1ab114: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1ab114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1ab118: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ab118u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x1ab11c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ab11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab120: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x1ab120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1ab124: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x1ab124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1ab128: 0x3c031f00  lui         $v1, 0x1F00
    ctx->pc = 0x1ab128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
    // 0x1ab12c: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x1ab12cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1ab130: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1ab130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1ab134: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ab134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ab138: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x1ab138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ab13c: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1ab13cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1ab140: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x1ab140u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x1ab144: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab148: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x1ab148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1ab14c: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x1ab14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x1ab150: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x1ab150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1ab154: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ab154u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u));
    // 0x1ab158: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x1ab158u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1ab15c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x1ab15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ab160: 0x30840c00  andi        $a0, $a0, 0xC00
    ctx->pc = 0x1ab160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3072);
    // 0x1ab164: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1ab164u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    ctx->pc = 0x1ab168u;
}

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

// Function: entry_0017412c
// Address: 0x17412c - 0x17414c
void entry_0017412c_0x17412c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017412c_0x17412c");
#endif

    ctx->pc = 0x17412cu;

    // 0x17412c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x17412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x174130: 0x2403fe00  addiu       $v1, $zero, -0x200
    ctx->pc = 0x174130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x174134: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x174134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x174138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17413c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17413cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x174140: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x174140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174144: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x174144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x174148: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x174148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x17414cu;
}

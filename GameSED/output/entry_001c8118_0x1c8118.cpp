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

// Function: entry_001c8118
// Address: 0x1c8118 - 0x1c8158
void entry_001c8118_0x1c8118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8118_0x1c8118");
#endif

    ctx->pc = 0x1c8118u;

    // 0x1c8118: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c8118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c811c: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1c811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1c8120: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8124: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x1c8124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x1c8128: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1c8128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1c812c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8130: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c8134: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c8134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c8138: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c8138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c813c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8140: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c8140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c8144: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c8144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8148: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x1c8148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x1c814c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c814cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c8150: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C8150u;
    SET_GPR_U32(ctx, 31, 0x1C8158u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C8150u, 0x1C8158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8158u;
}

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

// Function: entry_00141684
// Address: 0x141684 - 0x141694
void entry_00141684_0x141684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141684_0x141684");
#endif

    ctx->pc = 0x141684u;

    // 0x141684: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x141684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x141688: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x141688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x14168c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14168cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141690: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x141690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->pc = 0x141694u;
}

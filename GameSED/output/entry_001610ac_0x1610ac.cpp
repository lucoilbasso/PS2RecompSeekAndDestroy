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

// Function: entry_001610ac
// Address: 0x1610ac - 0x1610c4
void entry_001610ac_0x1610ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001610ac_0x1610ac");
#endif

    ctx->pc = 0x1610acu;

    // 0x1610ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1610acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1610b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1610b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1610b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1610b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610b8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1610b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1610bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1610bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1610c0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1610c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1610c4u;
}

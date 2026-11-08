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

// Function: entry_001178b0
// Address: 0x1178b0 - 0x1178e0
void entry_001178b0_0x1178b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001178b0_0x1178b0");
#endif

    ctx->pc = 0x1178b0u;

    // 0x1178b0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1178b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1178b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1178b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1178b8: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x1178b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x1178bc: 0xa6420010  sh          $v0, 0x10($s2)
    ctx->pc = 0x1178bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1178c0: 0x8c640fe8  lw          $a0, 0xFE8($v1)
    ctx->pc = 0x1178c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1ED528u));
    // 0x1178c4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1178c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1178c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1178cc: 0x26510012  addiu       $s1, $s2, 0x12
    ctx->pc = 0x1178ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
    // 0x1178d0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x1178d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x1178d4: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x1178d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1ED52Cu));
    // 0x1178d8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1178d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1178dc: 0x0  nop
    ctx->pc = 0x1178dcu;
    // NOP
    ctx->pc = 0x1178e0u;
}

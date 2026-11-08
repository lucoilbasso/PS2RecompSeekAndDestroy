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

// Function: entry_0012e3c4
// Address: 0x12e3c4 - 0x12e3e0
void entry_0012e3c4_0x12e3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e3c4_0x12e3c4");
#endif

    ctx->pc = 0x12e3c4u;

    // 0x12e3c4: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12e3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12e3c8: 0x24635f20  addiu       $v1, $v1, 0x5F20
    ctx->pc = 0x12e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24352));
    // 0x12e3cc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x12e3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x12e3d0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x12e3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x12e3d4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x12e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x12e3d8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x12e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x12e3dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12e3e0u;
}

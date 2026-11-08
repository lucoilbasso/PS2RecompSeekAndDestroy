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

// Function: entry_0019857c
// Address: 0x19857c - 0x1985a8
void entry_0019857c_0x19857c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019857c_0x19857c");
#endif

    ctx->pc = 0x19857cu;

    // 0x19857c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x19857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x198580: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x198584: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198588: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x198588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    // 0x19858c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x198590: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x198590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x198594: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x198594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x198598: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x198598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x19859c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1985a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1985a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1985a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1985a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1985a8u;
}
